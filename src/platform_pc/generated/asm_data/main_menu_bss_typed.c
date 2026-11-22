/* Generated from asm/main_menu_bss.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    uint8_t unk_00[32];
    uint32_t trainerInfoSize;
    uint32_t gameStateSize;
    uint8_t unk_28[8];
    uint32_t unk_30;
    uint8_t unk_34[96];
} pcm_PmAgbSaveSizes_2;

typedef struct {
    uint8_t unk_00[80];
    uint32_t unk_50;
    uint8_t unk_54[20];
    pcm_PmAgbSaveSizes_2 saveSizes;
} pcm_PmAgbRomHeader_1;

typedef struct {
    uint32_t slot;
    uint32_t sectorsWritten;
    const void * buffer;
    uint32_t firstSector;
    uint32_t counter;
    uint32_t writeStatus;
    pcm_PmAgbRomHeader_1 header;
} pcm_PmAgbSave_0;

extern const void * gMigrateFromAgbIcons;
extern pcm_PmAgbSave_0 gPmAgbSave;

const void * gMigrateFromAgbIcons;

pcm_PmAgbSave_0 gPmAgbSave;

__attribute__((used)) static void pc_alias_gPmAgbSaveCounter(void) {
    __asm__ volatile(".globl " PCSYM(gPmAgbSaveCounter) "\n.set " PCSYM(gPmAgbSaveCounter) ", " PCSYM(gPmAgbSave) "+%c0" :: "i"(__builtin_offsetof(pcm_PmAgbSave_0, counter)));
}

__attribute__((used)) static void pc_alias_gPmAgbRomHeader(void) {
    __asm__ volatile(".globl " PCSYM(gPmAgbRomHeader) "\n.set " PCSYM(gPmAgbRomHeader) ", " PCSYM(gPmAgbSave) "+%c0" :: "i"(__builtin_offsetof(pcm_PmAgbSave_0, header)));
}
