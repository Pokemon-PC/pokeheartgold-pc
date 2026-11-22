/* Generated from lib/NitroDWC/asm/dwc_lib_rodata.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(sStr_final);
PCREF(sStr_queryid);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    int32_t state;
    int32_t mode;
    const void * work;
    uint64_t userId;
} pcm_AuthState_0;

typedef struct {
    const void * url;
    int32_t method;
    int32_t bufferSize;
    const void * alloc;
    const void * free;
    int32_t testServer;
    int32_t timeout;
} pcm_NasHttpParams_2;

typedef struct {
    uint16_t ingamesn[26];
    int8_t gsbrcd[12];
    const void * alloc;
    const void * free;
} pcm_AuthParams_3;

typedef struct {
    const void * work;
    int32_t redirected;
    uint32_t ip;
    int32_t mode;
    int32_t unk_10;
    const void * http;
    pcm_NasHttpParams_2 httpParams;
    pcm_AuthParams_3 authParams;
} pcm_NetCheckState_1;

typedef struct {
    const void * free;
    const void * alloc;
} pcm_NetAllocator_4;

typedef struct {
    int32_t error;
    const void * connection;
} pcm_NetConnectionState_5;

extern const const void * sbSkippedKeys[2];
extern pcm_AuthState_0 gDwcAuthState;
extern pcm_NetCheckState_1 gDwcNetCheckState;
extern const void * gDwcSvcLocWork;
extern pcm_NetAllocator_4 gDwcNetAllocator;
extern pcm_NetConnectionState_5 gDwcNetConnection;
extern const void * gDwcNasLoginWork;
extern const void * gDwcNdWork;

const const void * sbSkippedKeys[2] = { (const void *)&pcref_sStr_queryid, (const void *)&pcref_sStr_final };

pcm_AuthState_0 gDwcAuthState;

__attribute__((used)) static void pc_alias_ov00_0221A69C(void) {
    __asm__ volatile(".globl " PCSYM(ov00_0221A69C) "\n.set " PCSYM(ov00_0221A69C) ", " PCSYM(gDwcAuthState) "+%c0" :: "i"(__builtin_offsetof(pcm_AuthState_0, work)));
}

pcm_NetCheckState_1 gDwcNetCheckState;

__attribute__((used)) static void pc_alias_ov00_0221A6BC(void) {
    __asm__ volatile(".globl " PCSYM(ov00_0221A6BC) "\n.set " PCSYM(ov00_0221A6BC) ", " PCSYM(gDwcNetCheckState) "+%c0" :: "i"(__builtin_offsetof(pcm_NetCheckState_1, redirected)));
}

__attribute__((used)) static void pc_alias_ov00_0221A6D0(void) {
    __asm__ volatile(".globl " PCSYM(ov00_0221A6D0) "\n.set " PCSYM(ov00_0221A6D0) ", " PCSYM(gDwcNetCheckState) "+%c0" :: "i"(__builtin_offsetof(pcm_NetCheckState_1, httpParams)));
}

__attribute__((used)) static void pc_alias_ov00_0221A6EC(void) {
    __asm__ volatile(".globl " PCSYM(ov00_0221A6EC) "\n.set " PCSYM(ov00_0221A6EC) ", " PCSYM(gDwcNetCheckState) "+%c0" :: "i"(__builtin_offsetof(pcm_NetCheckState_1, authParams)));
}

const void * gDwcSvcLocWork;

pcm_NetAllocator_4 gDwcNetAllocator;

pcm_NetConnectionState_5 gDwcNetConnection;

const void * gDwcNasLoginWork;

const void * gDwcNdWork;
