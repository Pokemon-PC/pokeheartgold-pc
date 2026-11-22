/* Generated from lib/asm/nnsys_g2d_bss.s by tools/pc_port/asm_data_to_c.py - do not edit. */

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
    uint16_t numMtxCaches;
    uint16_t nextMtxGroupId;
    int32_t translateOnly;
    const void * pRenderer;
    int32_t stackLevel;
} pcm_G2dRendererState_1;

typedef struct {
    uint16_t cacheIndex;
    uint16_t groupId;
    uint16_t state;
    uint16_t padding;
} pcm_G2dMtxCacheRecord_2;

typedef struct {
    int32_t _00;
    int32_t _01;
    int32_t _10;
    int32_t _11;
    int32_t _20;
    int32_t _21;
} pcm_struct_anonymous_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_lib_include_nnsys_g2d_g2d_Vec_data_h_17_5_4;

typedef union {
    pcm_struct_anonymous_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_lib_include_nnsys_g2d_g2d_Vec_data_h_17_5_4 _anon0;
    int32_t m[3][2];
    int32_t a[6];
} pcm_MtxFx32_3;

typedef struct {
    int32_t _00;
    int32_t _01;
    int32_t _10;
    int32_t _11;
} pcm_struct_anonymous_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_lib_include_nitro_fx_fx_h_138_5_7;

typedef union {
    pcm_struct_anonymous_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_lib_include_nitro_fx_fx_h_138_5_7 _anon0;
    int32_t m[2][2];
    int32_t a[4];
} pcm_MtxFx22_6;

typedef struct {
    pcm_MtxFx22_6 m22;
    uint16_t affineIndex[4][2];
} pcm_NNSG2dRndCore2DMtxCache_5;

typedef struct {
    uint16_t cellAnimIndex;
    uint16_t padding;
    const void * pCaches[256];
} pcm_G2dCellAnimMtxCaches_8;

typedef struct {
    pcm_G2dRendererState_1 state;
    int32_t zStack[32];
    pcm_G2dMtxCacheRecord_2 mtxCacheRecords[32];
    pcm_MtxFx32_3 mtxStack[32];
    pcm_MtxFx32_3 affineMtxStack[32];
    pcm_NNSG2dRndCore2DMtxCache_5 mtxCaches[32];
    pcm_G2dCellAnimMtxCaches_8 cellAnimMtxCaches;
    int32_t useCellAnimMtxCaches;
} pcm_G2dRendererWork_0;

typedef struct {
    const void * pTaskRegisterFunc;
    uint32_t numCellState;
    const void * pCellStateArray;
} pcm_CellTransferStateManager_9;

typedef struct {
    const void * pUVCallback;
    int32_t autoZOffset;
    int32_t bAutoZOffset;
} pcm_OamSoftEmuState_10;

extern pcm_G2dRendererWork_0 gRendererWork;
extern pcm_CellTransferStateManager_9 gCellTransferStateManager;
extern pcm_OamSoftEmuState_10 gOamSoftEmuState;
extern const void * gCurrentRndCore;

pcm_G2dRendererWork_0 gRendererWork;

__attribute__((used)) static void pc_alias_gRendererZStack(void) {
    __asm__ volatile(".globl " PCSYM(gRendererZStack) "\n.set " PCSYM(gRendererZStack) ", " PCSYM(gRendererWork) "+%c0" :: "i"(__builtin_offsetof(pcm_G2dRendererWork_0, zStack[0])));
}

__attribute__((used)) static void pc_alias_gRendererMtxCacheRecords(void) {
    __asm__ volatile(".globl " PCSYM(gRendererMtxCacheRecords) "\n.set " PCSYM(gRendererMtxCacheRecords) ", " PCSYM(gRendererWork) "+%c0" :: "i"(__builtin_offsetof(pcm_G2dRendererWork_0, mtxCacheRecords[0])));
}

__attribute__((used)) static void pc_alias__021D956C(void) {
    __asm__ volatile(".globl " PCSYM(_021D956C) "\n.set " PCSYM(_021D956C) ", " PCSYM(gRendererWork) "+%c0" :: "i"(__builtin_offsetof(pcm_G2dRendererWork_0, mtxCacheRecords[0].state)));
}

__attribute__((used)) static void pc_alias_gRendererMtxStack(void) {
    __asm__ volatile(".globl " PCSYM(gRendererMtxStack) "\n.set " PCSYM(gRendererMtxStack) ", " PCSYM(gRendererWork) "+%c0" :: "i"(__builtin_offsetof(pcm_G2dRendererWork_0, mtxStack[0])));
}

__attribute__((used)) static void pc_alias_gRendererMtxStackTransX(void) {
    __asm__ volatile(".globl " PCSYM(gRendererMtxStackTransX) "\n.set " PCSYM(gRendererMtxStackTransX) ", " PCSYM(gRendererWork) "+%c0" :: "i"(__builtin_offsetof(pcm_G2dRendererWork_0, mtxStack[0].a[4])));
}

__attribute__((used)) static void pc_alias_gRendererMtxStackTransY(void) {
    __asm__ volatile(".globl " PCSYM(gRendererMtxStackTransY) "\n.set " PCSYM(gRendererMtxStackTransY) ", " PCSYM(gRendererWork) "+%c0" :: "i"(__builtin_offsetof(pcm_G2dRendererWork_0, mtxStack[0].a[5])));
}

__attribute__((used)) static void pc_alias_gRendererAffineMtxStack(void) {
    __asm__ volatile(".globl " PCSYM(gRendererAffineMtxStack) "\n.set " PCSYM(gRendererAffineMtxStack) ", " PCSYM(gRendererWork) "+%c0" :: "i"(__builtin_offsetof(pcm_G2dRendererWork_0, affineMtxStack[0])));
}

__attribute__((used)) static void pc_alias_gRendererMtxCaches(void) {
    __asm__ volatile(".globl " PCSYM(gRendererMtxCaches) "\n.set " PCSYM(gRendererMtxCaches) ", " PCSYM(gRendererWork) "+%c0" :: "i"(__builtin_offsetof(pcm_G2dRendererWork_0, mtxCaches[0])));
}

__attribute__((used)) static void pc_alias_gRendererWorkB00(void) {
    __asm__ volatile(".globl " PCSYM(gRendererWorkB00) "\n.set " PCSYM(gRendererWorkB00) ", " PCSYM(gRendererWork) "+%c0" :: "i"(__builtin_offsetof(pcm_G2dRendererWork_0, mtxCaches[27].affineIndex[0])));
}

__attribute__((used)) static void pc_alias_gRendererCellAnimMtxCaches(void) {
    __asm__ volatile(".globl " PCSYM(gRendererCellAnimMtxCaches) "\n.set " PCSYM(gRendererCellAnimMtxCaches) ", " PCSYM(gRendererWork) "+%c0" :: "i"(__builtin_offsetof(pcm_G2dRendererWork_0, cellAnimMtxCaches)));
}

__attribute__((used)) static void pc_alias_gRendererCellAnimMtxCacheTable(void) {
    __asm__ volatile(".globl " PCSYM(gRendererCellAnimMtxCacheTable) "\n.set " PCSYM(gRendererCellAnimMtxCacheTable) ", " PCSYM(gRendererWork) "+%c0" :: "i"(__builtin_offsetof(pcm_G2dRendererWork_0, cellAnimMtxCaches.pCaches[0])));
}

pcm_CellTransferStateManager_9 gCellTransferStateManager;

pcm_OamSoftEmuState_10 gOamSoftEmuState;

const void * gCurrentRndCore;
