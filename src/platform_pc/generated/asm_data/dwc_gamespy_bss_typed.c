/* Generated from lib/NitroDWC/asm/dwc_gamespy_bss.s by tools/pc_port/asm_data_to_c.py - do not edit. */

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
    int32_t unk0;
    int32_t lastError;
    const void * hName;
    const void * hAliases;
    int16_t hAddrType;
    int16_t hLength;
    const void * hAddrList;
    uint32_t addr;
    uint8_t pad1C[16];
    const void * addrList[2];
} pcm_Ov00SocketState_0;

typedef struct {
    int32_t intValue;
    const void * defaultSet;
    double doubleValue;
} pcm_BucketGlobals_1;

typedef struct {
    int32_t recvLen;
    const void * requests;
    int32_t unk08;
    const void * recvBuf;
    int32_t state;
    uint8_t unk14[16];
    int32_t valueIndex;
    const void * currentGame;
    int32_t recvCap;
    int8_t values[2][256];
} pcm_PersistWork_2;

typedef struct {
    const void * server2Name;
    const void * server1Name;
    uint32_t server2Ip;
    uint32_t server1Ip;
    const void * negotiators;
} pcm_NatGlobals_3;

typedef struct {
    const void * tokenNext;
    const void * nullServer;
    const void * refStrings;
} pcm_SBServerGlobals_4;

typedef struct {
    const void * sortList;
    const void * masterHost;
} pcm_SBListGlobals_5;

extern pcm_Ov00SocketState_0 ov00_0221B1AC;
extern pcm_BucketGlobals_1 ov00_0221B1F0;
extern pcm_PersistWork_2 gPersistWork;
extern pcm_NatGlobals_3 nnNegotiatorList[1];
extern pcm_SBServerGlobals_4 sbServerGlobals;
extern pcm_SBListGlobals_5 sbListGlobals;

pcm_Ov00SocketState_0 ov00_0221B1AC;

__attribute__((used)) static void pc_alias_ov00_0221B1B4(void) {
    __asm__ volatile(".globl " PCSYM(ov00_0221B1B4) "\n.set " PCSYM(ov00_0221B1B4) ", " PCSYM(ov00_0221B1AC) "+%c0" :: "i"(__builtin_offsetof(pcm_Ov00SocketState_0, hName)));
}

__attribute__((used)) static void pc_alias_ov00_0221B1C4(void) {
    __asm__ volatile(".globl " PCSYM(ov00_0221B1C4) "\n.set " PCSYM(ov00_0221B1C4) ", " PCSYM(ov00_0221B1AC) "+%c0" :: "i"(__builtin_offsetof(pcm_Ov00SocketState_0, addr)));
}

__attribute__((used)) static void pc_alias_ov00_0221B1D8(void) {
    __asm__ volatile(".globl " PCSYM(ov00_0221B1D8) "\n.set " PCSYM(ov00_0221B1D8) ", " PCSYM(ov00_0221B1AC) "+%c0" :: "i"(__builtin_offsetof(pcm_Ov00SocketState_0, addrList[0])));
}

pcm_BucketGlobals_1 ov00_0221B1F0;

__attribute__((used)) static void pc_alias_ov00_0221B1F8(void) {
    __asm__ volatile(".globl " PCSYM(ov00_0221B1F8) "\n.set " PCSYM(ov00_0221B1F8) ", " PCSYM(ov00_0221B1F0) "+%c0" :: "i"(__builtin_offsetof(pcm_BucketGlobals_1, doubleValue)));
}

pcm_PersistWork_2 gPersistWork;

__attribute__((used)) static void pc_alias_ov00_0221B230(void) {
    __asm__ volatile(".globl " PCSYM(ov00_0221B230) "\n.set " PCSYM(ov00_0221B230) ", " PCSYM(gPersistWork) "+%c0" :: "i"(__builtin_offsetof(pcm_PersistWork_2, values[0])));
}

pcm_NatGlobals_3 nnNegotiatorList[1];

pcm_SBServerGlobals_4 sbServerGlobals;

__attribute__((used)) static void pc_alias_sbNoServer(void) {
    __asm__ volatile(".globl " PCSYM(sbNoServer) "\n.set " PCSYM(sbNoServer) ", " PCSYM(sbServerGlobals) "+%c0" :: "i"(__builtin_offsetof(pcm_SBServerGlobals_4, nullServer)));
}

pcm_SBListGlobals_5 sbListGlobals;
