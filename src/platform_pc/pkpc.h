/*
 * pkpc.h - ABI C de la plateforme pkpc (moteur de patch des mods, en Rust).
 *
 * Voir plateforme/docs/rust/02-frontiere-rust-c.md. Utilisation dans un port :
 *   if ((pkpc_abi_version() >> 16) != PKPC_ABI_MAJEURE) -> refuser la bibliothèque ;
 *   pkpc_load_patch(chemin, "heartgold", "fr")  (ou pkpc_init(NULL, mods, jeu, langue)) ;
 *   DS : pkpc_touches_file(chemin) puis pkpc_patch_file(...) / pkpc_free(out_buf) ;
 *   Game Boy : pkpc_patch_memory(0, rom, taille_rom) après le contrôle du CRC ;
 *   tables du code : pkpc_register_table(nom, ptr, taille) puis pkpc_apply_tables().
 * Retour : PKPC_OK (0) ou un code PKPC_E_* négatif ; pkpc_last_error() donne
 * le message en français. Aucune panique ne traverse la frontière.
 */

#ifndef PKPC_H
#define PKPC_H

/* Fichier généré par cbindgen depuis crates/pkpc-ffi/src/lib.rs : ne pas modifier à la main. */

#include <stddef.h>
#include <stdint.h>

// Version majeure de l'ABI : le port refuse une majeure différente de la sienne.
#define PKPC_ABI_MAJEURE 1

// Version mineure de l'ABI : augmente quand on ajoute une fonction.
#define PKPC_ABI_MINEURE 0

// Version de l'ABI de cet en-tête : `(majeure << 16) | mineure`.
#define PKPC_ABI_VERSION ((PKPC_ABI_MAJEURE << 16) | PKPC_ABI_MINEURE)

// Réussi.
#define PKPC_OK 0

// Argument invalide (pointeur nul, chaîne qui n'est pas de l'UTF-8…).
#define PKPC_E_ARGUMENT -1

// Fichier absent (pour `pkpc_load_patch` : pas de mod, cas normal).
#define PKPC_E_ABSENT -2

// `.mpatch` invalide (taille, signature, version, opération inconnue, tronqué).
#define PKPC_E_INVALIDE -3

// `.mpatch` compilé pour un autre jeu ou une autre langue.
#define PKPC_E_AUTRE_JEU -4

// Fichier du jeu illisible (par exemple : pas une NARC) ; le jeu lit l'original.
#define PKPC_E_FORMAT -5

// Écriture hors de la ROM ou de la zone donnée.
#define PKPC_E_HORS_LIMITES -6

// Fonction pas encore disponible (crochets Lua : étape R8).
#define PKPC_E_PAS_ENCORE -7

// Erreur interne (panique rattrapée) : le jeu continue sans le mod.
#define PKPC_E_INTERNE -8

// Erreur d'entrée/sortie (lecture du `.mpatch`).
#define PKPC_E_ES -9

// Fonction de l'hôte appelée par les scripts Lua (étape R8) :
// `int64_t hote(uint32_t fonction, const int64_t *args, uint32_t nargs)`.
typedef int64_t (*PkpcHote)(uint32_t fonction, const int64_t *args, uint32_t nargs);

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

// Libère un bloc rendu par pkpc (`out_buf` de `pkpc_patch_file`). `NULL` : rien.
//
// # Sûreté
// `ptr` est nul ou vient de pkpc et n'a pas déjà été libéré.
void pkpc_free(void *ptr);

// Version de l'ABI offerte par cette bibliothèque : `(majeure << 16) | mineure`.
// Le port compare la majeure à `PKPC_ABI_MAJEURE` de son en-tête.
uint32_t pkpc_abi_version(void);

// Message en français de la dernière erreur (chaîne vide s'il n'y en a pas).
// Valable jusqu'à la prochaine erreur ; ne pas libérer.
const char *pkpc_last_error(void);

// Charge un `.mpatch` précis (options `--mod-patch`, `PHG_MOD_PATCH`,
// `GB_MOD_PATCH`). `game`/`lang` : vérifiés contre l'en-tête (`NULL` = pas de
// vérification). Remplace le patch déjà chargé. `PKPC_E_ABSENT` si le fichier
// n'existe pas (cas normal : pas de mod) ; sinon, en cas d'erreur, le jeu
// continue sans patch.
//
// # Sûreté
// Chaînes nulles ou terminées par zéro.
int pkpc_load_patch(const char *path, const char *game, const char *lang);

// Charge les mods actifs pour ce jeu et cette langue : aujourd'hui le
// `.mpatch` compilé `<mods_dir>/patch_<lang>.mpatch` (Lua : étape R8).
// `rom_dir` est réservé (peut être `NULL`). Pas de fichier = pas de mod :
// `PKPC_OK` et `pkpc_op_count() == 0`.
//
// # Sûreté
// Chaînes nulles ou terminées par zéro.
int pkpc_init(const char *rom_dir, const char *mods_dir, const char *game_id, const char *lang);

// Oublie le patch chargé et son cache (les tables déclarées restent).
void pkpc_unload(void);

// Oublie tout : patch, cache et tables déclarées.
void pkpc_shutdown(void);

// Nombre d'opérations du patch chargé (0 = pas de mod).
int pkpc_op_count(void);

// Jeux DS : `1` si ce chemin NitroFS est modifié par le patch, `0` sinon.
// Permet de ne lire en entier que les fichiers concernés.
//
// # Sûreté
// `path` nul ou terminé par zéro.
int pkpc_touches_file(const char *path);

// Jeux DS (niveaux 1/2) : version modifiée d'un fichier chargé.
//
// `buf`/`len` : les octets d'origine. En sortie, `*out_buf` = nouveau bloc
// (à libérer avec `pkpc_free`) et `*out_len` sa taille, ou `*out_buf = NULL`
// si le fichier n'est pas modifié. Le résultat est construit une fois puis
// gardé en cache (les appels suivants pour ce chemin en rendent une copie).
// En cas d'erreur (`PKPC_E_FORMAT`…), `*out_buf = NULL` : le jeu lit l'original.
//
// # Sûreté
// `path` terminé par zéro ; `buf` lisible sur `len` octets (ou `len == 0`) ;
// `out_buf` et `out_len` pointent des variables inscriptibles.
int pkpc_patch_file(const char *path,
                    const uint8_t *buf,
                    size_t len,
                    uint8_t **out_buf,
                    size_t *out_len);

// Applique les opérations ROM_BYTES à une zone mémoire qui contient la ROM à
// partir de la position `addr` (Game Boy : `addr = 0`, `buf` = l'image de la
// ROM entière, après le contrôle du CRC). Renvoie le nombre d'opérations
// appliquées, ou `PKPC_E_HORS_LIMITES` si l'une dépasse (les précédentes
// restent écrites, comme le C).
//
// # Sûreté
// `buf` inscriptible sur `len` octets (ou `len == 0`).
int pkpc_patch_memory(uint64_t addr, uint8_t *buf, size_t len);

// Déclare une table du code modifiable par son nom stable
// (« boutique.badges »), son adresse et sa taille en octets.
//
// # Sûreté
// `name` terminé par zéro ; `ptr` reste valide (et n'est pas déplacé) tant
// que pkpc peut l'écrire, c'est-à-dire jusqu'à `pkpc_shutdown`.
int pkpc_register_table(const char *name, void *ptr, size_t len);

// Applique les opérations TABLE_BYTES aux tables déclarées. Table inconnue ou
// écriture hors de la table : ignorée et journalisée. Renvoie le nombre
// d'opérations appliquées.
int pkpc_apply_tables(void);

// Crochet Lua (`event_id`, `args` modifiables). Pas encore : renvoie
// `PKPC_E_PAS_ENCORE` (étape R8).
//
// # Sûreté
// Aucune exigence aujourd'hui (`args` n'est pas lu).
int pkpc_hook(uint32_t event_id, int64_t *args, uint32_t nargs);

// Donne la fonction de l'hôte appelée par le Lua. Pas encore : renvoie
// `PKPC_E_PAS_ENCORE` (étape R8).
int pkpc_set_host(PkpcHote host);

#ifdef __cplusplus
}  // extern "C"
#endif  // __cplusplus

#endif  /* PKPC_H */
