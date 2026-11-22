/* Generated from lib/NitroDWC/asm/http_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(gNdCaNintendo);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    int32_t count;
    const void * list;
    int32_t nextUniqueID;
    int32_t capacity;
} pcm_GHIConnList_0;

typedef struct {
    const void * shutdownCallback;
    int32_t hasApInfo;
    const void * token;
    const void * allocFunc;
    const void * url;
    int32_t active;
    int32_t callback;
    int32_t error;
    const void * freeFunc;
    int32_t requestId;
    const void * strings[3];
} pcm_Ov38Work_1;

extern const void * ghiProxyAddress;
extern pcm_GHIConnList_0 ghiConnectionList;
extern pcm_Ov38Work_1 gNdWork;

const void * gNdCaList[1] = {
    (const void *)&pcref_gNdCaNintendo,
};

const void * ghiProxyAddress;

pcm_GHIConnList_0 ghiConnectionList;

pcm_Ov38Work_1 gNdWork;

__attribute__((used)) static void pc_alias_ov38_02226054(void) {
    __asm__ volatile(".globl " PCSYM(ov38_02226054) "\n.set " PCSYM(ov38_02226054) ", " PCSYM(gNdWork) "+%c0" :: "i"(__builtin_offsetof(pcm_Ov38Work_1, hasApInfo)));
}

__attribute__((used)) static void pc_alias_ov38_02226058(void) {
    __asm__ volatile(".globl " PCSYM(ov38_02226058) "\n.set " PCSYM(ov38_02226058) ", " PCSYM(gNdWork) "+%c0" :: "i"(__builtin_offsetof(pcm_Ov38Work_1, token)));
}

__attribute__((used)) static void pc_alias_ov38_0222605C(void) {
    __asm__ volatile(".globl " PCSYM(ov38_0222605C) "\n.set " PCSYM(ov38_0222605C) ", " PCSYM(gNdWork) "+%c0" :: "i"(__builtin_offsetof(pcm_Ov38Work_1, allocFunc)));
}

__attribute__((used)) static void pc_alias_ov38_02226060(void) {
    __asm__ volatile(".globl " PCSYM(ov38_02226060) "\n.set " PCSYM(ov38_02226060) ", " PCSYM(gNdWork) "+%c0" :: "i"(__builtin_offsetof(pcm_Ov38Work_1, url)));
}

__attribute__((used)) static void pc_alias_ov38_02226068(void) {
    __asm__ volatile(".globl " PCSYM(ov38_02226068) "\n.set " PCSYM(ov38_02226068) ", " PCSYM(gNdWork) "+%c0" :: "i"(__builtin_offsetof(pcm_Ov38Work_1, callback)));
}

__attribute__((used)) static void pc_alias_ov38_0222606C(void) {
    __asm__ volatile(".globl " PCSYM(ov38_0222606C) "\n.set " PCSYM(ov38_0222606C) ", " PCSYM(gNdWork) "+%c0" :: "i"(__builtin_offsetof(pcm_Ov38Work_1, error)));
}

__attribute__((used)) static void pc_alias_ov38_02226070(void) {
    __asm__ volatile(".globl " PCSYM(ov38_02226070) "\n.set " PCSYM(ov38_02226070) ", " PCSYM(gNdWork) "+%c0" :: "i"(__builtin_offsetof(pcm_Ov38Work_1, freeFunc)));
}

__attribute__((used)) static void pc_alias_ov38_02226074(void) {
    __asm__ volatile(".globl " PCSYM(ov38_02226074) "\n.set " PCSYM(ov38_02226074) ", " PCSYM(gNdWork) "+%c0" :: "i"(__builtin_offsetof(pcm_Ov38Work_1, requestId)));
}

__attribute__((used)) static void pc_alias_ov38_02226078(void) {
    __asm__ volatile(".globl " PCSYM(ov38_02226078) "\n.set " PCSYM(ov38_02226078) ", " PCSYM(gNdWork) "+%c0" :: "i"(__builtin_offsetof(pcm_Ov38Work_1, strings[0])));
}
