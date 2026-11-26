/*
 * pokemod_patch.c - voir pokemod_patch.h.
 *
 * C99 portable, aucune dépendance au jeu : chaque port copie ce fichier.
 */
#include "pokemod_patch.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if defined(_WIN32)
#include <windows.h>
#else
#include <sys/mman.h>
#include <unistd.h>
#endif

#define PM_LOG(...) (fprintf(stderr, "[pokemod] " __VA_ARGS__), fputc('\n', stderr))

typedef struct PmOp {
    uint8_t        kind;
    char          *name;     /* chemin NitroFS ou nom de table ("" pour la ROM) */
    uint32_t       a, b;     /* membre/banque, position/entrée selon le type    */
    uint32_t       len;      /* octets (ou caractères pour MSG_TEXT)            */
    const uint8_t *data;
} PmOp;

typedef struct PmCache {
    char    *name;
    uint8_t *data;
    uint32_t len;
} PmCache;

typedef struct PmTable {
    char    *name;
    void    *ptr;
    uint32_t size;
} PmTable;

static uint8_t *s_blob;
static PmOp    *s_ops;
static int      s_nops;
static PmCache *s_cache;
static int      s_ncache;
static PmTable *s_tables;
static int      s_ntables;

static uint32_t rd32(const uint8_t *p) { return p[0] | (p[1] << 8) | (p[2] << 16) | ((uint32_t)p[3] << 24); }
static uint16_t rd16(const uint8_t *p) { return (uint16_t)(p[0] | (p[1] << 8)); }
static void wr32(uint8_t *p, uint32_t v) { p[0] = (uint8_t)v; p[1] = (uint8_t)(v >> 8); p[2] = (uint8_t)(v >> 16); p[3] = (uint8_t)(v >> 24); }
static void wr16(uint8_t *p, uint16_t v) { p[0] = (uint8_t)v; p[1] = (uint8_t)(v >> 8); }

static char *dup_n(const char *s, size_t n) {
    char *r = (char *)malloc(n + 1);
    if (r != NULL) {
        memcpy(r, s, n);
        r[n] = '\0';
    }
    return r;
}

/* Chemins comparés sans le '/' de tête ni la casse des séparateurs. */
static bool same_path(const char *x, const char *y) {
    while (*x == '/') x++;
    while (*y == '/') y++;
    for (; *x && *y; x++, y++) {
        char cx = *x == '\\' ? '/' : *x, cy = *y == '\\' ? '/' : *y;
        if (cx != cy) return false;
    }
    return *x == *y;
}

void pm_patch_unload(void) {
    for (int i = 0; i < s_nops; i++) free(s_ops[i].name);
    for (int i = 0; i < s_ncache; i++) { free(s_cache[i].name); free(s_cache[i].data); }
    free(s_ops); free(s_cache); free(s_blob);
    s_ops = NULL; s_cache = NULL; s_blob = NULL;
    s_nops = s_ncache = 0;
}

int pm_patch_op_count(void) { return s_nops; }

bool pm_patch_load(const char *path, const char *game, const char *lang) {
    pm_patch_unload();
    FILE *f = fopen(path, "rb");
    if (f == NULL) return false;
    fseek(f, 0, SEEK_END);
    long n = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (n < 32 || n > 0x7FFFFFFF) { fclose(f); PM_LOG("%s : taille invalide", path); return false; }
    s_blob = (uint8_t *)malloc((size_t)n);
    if (s_blob == NULL || fread(s_blob, 1, (size_t)n, f) != (size_t)n) { fclose(f); pm_patch_unload(); return false; }
    fclose(f);
    const uint8_t *p = s_blob, *end = s_blob + n;
    if (memcmp(p, "PMP1", 4) != 0 || rd16(p + 4) != 1) { PM_LOG("%s : pas un .mpatch version 1", path); pm_patch_unload(); return false; }
    uint32_t count = rd32(p + 8);
    char hgame[13] = {0}, hlang[5] = {0};
    memcpy(hgame, p + 12, 12);
    memcpy(hlang, p + 24, 4);
    if (game != NULL && strcmp(hgame, game) != 0) { PM_LOG("%s : compilé pour le jeu « %s », pas « %s » : ignoré", path, hgame, game); pm_patch_unload(); return false; }
    if (lang != NULL && hlang[0] != '\0' && strcmp(hlang, lang) != 0) { PM_LOG("%s : compilé pour la langue « %s », pas « %s » : ignoré", path, hlang, lang); pm_patch_unload(); return false; }
    s_ops = (PmOp *)calloc(count ? count : 1, sizeof *s_ops);
    if (s_ops == NULL) { pm_patch_unload(); return false; }
    p += 32;
    for (uint32_t i = 0; i < count; i++) {
        if (end - p < 4) goto bad;
        PmOp *op = &s_ops[s_nops];
        op->kind = p[0];
        uint16_t nl = rd16(p + 2);
        p += 4;
        if (end - p < nl) goto bad;
        op->name = dup_n((const char *)p, nl);
        s_nops++;
        p += nl;
        uint32_t fixed = (op->kind == PM_OP_NARC_BYTES || op->kind == PM_OP_MSG_TEXT) ? 12 : 8;
        if (end - p < (long)fixed) goto bad;
        switch (op->kind) {
        case PM_OP_FILE_BYTES: case PM_OP_ROM_BYTES: case PM_OP_TABLE_BYTES:
            op->b = rd32(p); op->len = rd32(p + 4); p += 8; break;
        case PM_OP_NARC_MEMBER:
            op->a = rd32(p); op->len = rd32(p + 4); p += 8; break;
        case PM_OP_NARC_BYTES: case PM_OP_MSG_TEXT:
            op->a = rd32(p); op->b = rd32(p + 4); op->len = rd32(p + 8); p += 12; break;
        default:
            PM_LOG("opération %d inconnue (mpatch plus récent que le jeu ?)", op->kind);
            goto bad;
        }
        uint64_t bytes = op->kind == PM_OP_MSG_TEXT ? (uint64_t)op->len * 2 : op->len;
        if ((uint64_t)(end - p) < bytes) goto bad;
        op->data = p;
        p += bytes;
    }
    PM_LOG("%s : %d opérations (jeu %s, langue %s)", path, s_nops, hgame, hlang[0] ? hlang : "toutes");
    return true;
bad:
    PM_LOG("%s : fichier tronqué ou invalide, patchs ignorés", path);
    pm_patch_unload();
    return false;
}

bool pm_patch_touches_file(const char *nitro_path) {
    for (int i = 0; i < s_nops; i++) {
        uint8_t k = s_ops[i].kind;
        if ((k == PM_OP_FILE_BYTES || k == PM_OP_NARC_BYTES || k == PM_OP_NARC_MEMBER || k == PM_OP_MSG_TEXT)
            && same_path(s_ops[i].name, nitro_path)) {
            return true;
        }
    }
    return false;
}

/* ---------------------------------------------------------------- NARC */

typedef struct Narc {
    uint32_t  count;
    uint8_t **mem;      /* copie de chaque membre */
    uint32_t *len;
    const uint8_t *head; uint32_t head_len;   /* en-tête NARC (16 octets) */
    const uint8_t *fnt;  uint32_t fnt_len;    /* bloc BTNF tel quel        */
} Narc;

static void narc_free(Narc *n) {
    if (n->mem) for (uint32_t i = 0; i < n->count; i++) free(n->mem[i]);
    free(n->mem); free(n->len);
    memset(n, 0, sizeof *n);
}

static bool narc_parse(Narc *n, const uint8_t *d, uint32_t len) {
    memset(n, 0, sizeof *n);
    if (len < 16 || memcmp(d, "NARC", 4) != 0) return false;
    const uint8_t *fat = NULL, *img = NULL;
    uint32_t pos = 16;
    while (pos + 8 <= len) {
        uint32_t sz = rd32(d + pos + 4);
        if (sz < 8 || pos + sz > len) return false;
        if (!memcmp(d + pos, "BTAF", 4)) fat = d + pos;
        else if (!memcmp(d + pos, "BTNF", 4)) { n->fnt = d + pos; n->fnt_len = sz; }
        else if (!memcmp(d + pos, "GMIF", 4)) img = d + pos + 8;
        pos += sz;
    }
    if (fat == NULL || img == NULL || n->fnt == NULL) return false;
    n->head = d; n->head_len = 16;
    n->count = rd16(fat + 8);
    n->mem = (uint8_t **)calloc(n->count ? n->count : 1, sizeof *n->mem);
    n->len = (uint32_t *)calloc(n->count ? n->count : 1, sizeof *n->len);
    if (!n->mem || !n->len) { narc_free(n); return false; }
    for (uint32_t i = 0; i < n->count; i++) {
        uint32_t s = rd32(fat + 12 + 8 * i), e = rd32(fat + 16 + 8 * i);
        if (e < s || img + e > d + len) { narc_free(n); return false; }
        n->len[i] = e - s;
        n->mem[i] = (uint8_t *)malloc(n->len[i] ? n->len[i] : 1);
        if (!n->mem[i]) { narc_free(n); return false; }
        memcpy(n->mem[i], img + s, n->len[i]);
    }
    return true;
}

static uint8_t *narc_build(const Narc *n, uint32_t *out_len) {
    uint32_t gmif = 0;
    for (uint32_t i = 0; i < n->count; i++) gmif += (n->len[i] + 3) & ~3u;
    uint32_t btaf = 12 + 8 * n->count;
    uint32_t total = 16 + btaf + n->fnt_len + 8 + gmif;
    uint8_t *o = (uint8_t *)malloc(total);
    if (o == NULL) return NULL;
    memcpy(o, n->head, 16);
    wr32(o + 8, total);
    uint8_t *f = o + 16;
    memcpy(f, "BTAF", 4); wr32(f + 4, btaf); wr16(f + 8, (uint16_t)n->count); wr16(f + 10, 0);
    memcpy(o + 16 + btaf, n->fnt, n->fnt_len);
    uint8_t *g = o + 16 + btaf + n->fnt_len;
    memcpy(g, "GMIF", 4); wr32(g + 4, 8 + gmif);
    uint32_t at = 0;
    for (uint32_t i = 0; i < n->count; i++) {
        wr32(f + 12 + 8 * i, at);
        wr32(f + 16 + 8 * i, at + n->len[i]);
        memcpy(g + 8 + at, n->mem[i], n->len[i]);
        at += n->len[i];
        while (at & 3) g[8 + at++] = 0xFF;
    }
    *out_len = total;
    return o;
}

/* ------------------------------------------------- textes (4e génération) */

/* Banque de textes : u16 nombre, u16 clé, puis {u32 position, u32 longueur}
 * chiffrés par entrée, puis les textes (u16) chiffrés. On déchiffre tout,
 * remplace les entrées voulues et rechiffre avec la même clé. */
static bool msg_apply(uint8_t **bank, uint32_t *bank_len, const PmOp *ops, int nops, uint32_t member, const char *path) {
    const uint8_t *b = *bank;
    if (*bank_len < 4) return false;
    uint32_t count = rd16(b), key = rd16(b + 2);
    if (4 + 8 * count > *bank_len) return false;
    uint16_t **txt = (uint16_t **)calloc(count ? count : 1, sizeof *txt);
    uint32_t *tl = (uint32_t *)calloc(count ? count : 1, sizeof *tl);
    if (!txt || !tl) { free(txt); free(tl); return false; }
    bool ok = true;
    for (uint32_t i = 0; i < count && ok; i++) {
        uint32_t seed = (key * 765 * (i + 1)) & 0xFFFF;
        seed |= seed << 16;
        uint32_t off = rd32(b + 4 + 8 * i) ^ seed, l = rd32(b + 8 + 8 * i) ^ seed;
        if (off + 2ull * l > *bank_len) { ok = false; break; }
        txt[i] = (uint16_t *)malloc(2 * (l ? l : 1));
        tl[i] = l;
        uint16_t k = (uint16_t)((i + 1) * 596947);
        for (uint32_t j = 0; j < l; j++) { txt[i][j] = rd16(b + off + 2 * j) ^ k; k += 18749; }
    }
    for (int o = 0; o < nops && ok; o++) {
        const PmOp *op = &ops[o];
        if (op->kind != PM_OP_MSG_TEXT || op->a != member || !same_path(op->name, path)) continue;
        if (op->b >= count) { PM_LOG("%s banque %u : entrée %u absente (%u entrées)", path, member, op->b, count); continue; }
        free(txt[op->b]);
        txt[op->b] = (uint16_t *)malloc(2 * (op->len ? op->len : 1));
        tl[op->b] = op->len;
        for (uint32_t j = 0; j < op->len; j++) txt[op->b][j] = rd16(op->data + 2 * j);
    }
    if (ok) {
        uint32_t total = 4 + 8 * count;
        for (uint32_t i = 0; i < count; i++) total += 2 * tl[i];
        uint8_t *nb = (uint8_t *)malloc(total);
        if (nb == NULL) ok = false;
        else {
            wr16(nb, (uint16_t)count); wr16(nb + 2, (uint16_t)key);
            uint32_t at = 4 + 8 * count;
            for (uint32_t i = 0; i < count; i++) {
                uint32_t seed = (key * 765 * (i + 1)) & 0xFFFF;
                seed |= seed << 16;
                wr32(nb + 4 + 8 * i, at ^ seed);
                wr32(nb + 8 + 8 * i, tl[i] ^ seed);
                uint16_t k = (uint16_t)((i + 1) * 596947);
                for (uint32_t j = 0; j < tl[i]; j++) { wr16(nb + at + 2 * j, txt[i][j] ^ k); k += 18749; }
                at += 2 * tl[i];
            }
            free(*bank);
            *bank = nb;
            *bank_len = total;
        }
    }
    for (uint32_t i = 0; i < count; i++) free(txt[i]);
    free(txt); free(tl);
    return ok;
}

const uint8_t *pm_patch_build_file(const char *nitro_path, const uint8_t *orig, uint32_t orig_len, uint32_t *out_len) {
    for (int i = 0; i < s_ncache; i++) {
        if (same_path(s_cache[i].name, nitro_path)) { *out_len = s_cache[i].len; return s_cache[i].data; }
    }
    bool narc_ops = false;
    for (int i = 0; i < s_nops; i++) {
        if (same_path(s_ops[i].name, nitro_path) && s_ops[i].kind != PM_OP_FILE_BYTES) narc_ops = true;
    }
    uint8_t *data = NULL;
    uint32_t len = 0;
    int applied = 0;
    if (narc_ops) {
        Narc n;
        if (!narc_parse(&n, orig, orig_len)) { PM_LOG("%s : pas une NARC valide, patchs ignorés", nitro_path); return NULL; }
        bool *msg_done = (bool *)calloc(n.count ? n.count : 1, sizeof(bool));
        for (int i = 0; i < s_nops; i++) {
            const PmOp *op = &s_ops[i];
            if (!same_path(op->name, nitro_path)) continue;
            if (op->a >= n.count && op->kind != PM_OP_FILE_BYTES) { PM_LOG("%s : membre %u absent (%u membres)", nitro_path, op->a, n.count); continue; }
            if (op->kind == PM_OP_NARC_MEMBER) {
                uint8_t *m = (uint8_t *)malloc(op->len ? op->len : 1);
                if (!m) continue;
                memcpy(m, op->data, op->len);
                free(n.mem[op->a]); n.mem[op->a] = m; n.len[op->a] = op->len;
                applied++;
            } else if (op->kind == PM_OP_NARC_BYTES) {
                if ((uint64_t)op->b + op->len > n.len[op->a]) { PM_LOG("%s membre %u : écriture hors du membre (%u+%u > %u), ignorée", nitro_path, op->a, op->b, op->len, n.len[op->a]); continue; }
                memcpy(n.mem[op->a] + op->b, op->data, op->len);
                applied++;
            } else if (op->kind == PM_OP_MSG_TEXT) {
                if (msg_done && !msg_done[op->a]) {   /* une passe par banque, toutes ses entrées */
                    msg_done[op->a] = true;
                    if (!msg_apply(&n.mem[op->a], &n.len[op->a], s_ops, s_nops, op->a, nitro_path)) PM_LOG("%s banque %u : banque de textes illisible", nitro_path, op->a);
                }
                applied++;
            }
        }
        free(msg_done);
        data = narc_build(&n, &len);
        narc_free(&n);
    } else {
        data = (uint8_t *)malloc(orig_len ? orig_len : 1);
        if (data) { memcpy(data, orig, orig_len); len = orig_len; }
    }
    if (data == NULL) return NULL;
    for (int i = 0; i < s_nops; i++) {   /* FILE_BYTES : après la reconstruction */
        const PmOp *op = &s_ops[i];
        if (op->kind != PM_OP_FILE_BYTES || !same_path(op->name, nitro_path)) continue;
        if ((uint64_t)op->b + op->len > len) { PM_LOG("%s : écriture hors du fichier, ignorée", nitro_path); continue; }
        memcpy(data + op->b, op->data, op->len);
        applied++;
    }
    PmCache *nc = (PmCache *)realloc(s_cache, (s_ncache + 1) * sizeof *s_cache);
    if (nc == NULL) { free(data); return NULL; }
    s_cache = nc;
    s_cache[s_ncache].name = dup_n(nitro_path, strlen(nitro_path));
    s_cache[s_ncache].data = data;
    s_cache[s_ncache].len = len;
    s_ncache++;
    PM_LOG("%s : %d modification(s) appliquée(s) en mémoire", nitro_path, applied);
    *out_len = len;
    return data;
}

/* ------------------------------------------------------------ Game Boy */

int pm_patch_apply_rom(uint8_t *rom, uint32_t rom_len) {
    int n = 0;
    for (int i = 0; i < s_nops; i++) {
        const PmOp *op = &s_ops[i];
        if (op->kind != PM_OP_ROM_BYTES) continue;
        if ((uint64_t)op->b + op->len > rom_len) { PM_LOG("ROM : écriture hors de la ROM (0x%X), patchs arrêtés", op->b); return -1; }
        memcpy(rom + op->b, op->data, op->len);
        n++;
    }
    if (n) PM_LOG("ROM : %d modification(s) appliquée(s) en mémoire", n);
    return n;
}

/* ------------------------------------------------------ tables du code */

void pm_patch_register_table(const char *name, void *ptr, uint32_t size) {
    PmTable *t = (PmTable *)realloc(s_tables, (s_ntables + 1) * sizeof *s_tables);
    if (t == NULL) return;
    s_tables = t;
    s_tables[s_ntables].name = dup_n(name, strlen(name));
    s_tables[s_ntables].ptr = ptr;
    s_tables[s_ntables].size = size;
    s_ntables++;
}

/* Les tables « const » sont en mémoire en lecture seule : on autorise
 * l'écriture sur leurs pages le temps du patch. */
static void make_writable(void *ptr, uint32_t size) {
#if defined(_WIN32)
    DWORD old;
    VirtualProtect(ptr, size, PAGE_READWRITE, &old);
#else
    long pg = sysconf(_SC_PAGESIZE);
    uintptr_t a = (uintptr_t)ptr & ~(uintptr_t)(pg - 1);
    mprotect((void *)a, ((uintptr_t)ptr + size) - a, PROT_READ | PROT_WRITE);
#endif
}

int pm_patch_apply_tables(void) {
    int n = 0;
    for (int i = 0; i < s_nops; i++) {
        const PmOp *op = &s_ops[i];
        if (op->kind != PM_OP_TABLE_BYTES) continue;
        int t;
        for (t = 0; t < s_ntables; t++) if (strcmp(s_tables[t].name, op->name) == 0) break;
        if (t == s_ntables) { PM_LOG("table « %s » inconnue de ce jeu, ignorée", op->name); continue; }
        if ((uint64_t)op->b + op->len > s_tables[t].size) { PM_LOG("table « %s » : écriture hors de la table, ignorée", op->name); continue; }
        make_writable((uint8_t *)s_tables[t].ptr + op->b, op->len);
        memcpy((uint8_t *)s_tables[t].ptr + op->b, op->data, op->len);
        n++;
    }
    if (n) PM_LOG("tables du code : %d modification(s)", n);
    return n;
}
