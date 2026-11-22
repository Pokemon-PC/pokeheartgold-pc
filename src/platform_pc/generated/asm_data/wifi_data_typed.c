/* Generated from lib/asm/wifi_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(_021106AC);
PCREF(gCpsOidCommonName);
PCREF(gCpsOidMd5WithRsa);
PCREF(gCpsOidRsaEncryption);
PCREF(gCpsOidSha1WithRsa);
PCREF(gCpsOidX500Rsa);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    uint32_t staticIp;
    const void * alloc;
    const void * free;
    const void * addressCallback;
    const void * linkIsOn;
    uint64_t randomSeed;
    const void * work;
    uint32_t workSize;
    int32_t mss;
    uint32_t dhcpRequestIp;
    uint32_t yieldSleep;
} pcm_CpsConfig_1;

typedef struct {
    uint32_t yieldSleep;
    uint32_t lastIp;
    uint32_t addressState;
    const void * ctrlSocket;
    pcm_CpsConfig_1 cpsConfig;
} pcm_SoclState_0;

extern pcm_SoclState_0 gSoclState;
extern const void * gSoclSockets;
extern const void * gSoclTrash;
extern const void * gSoclConfig;
extern const void * gCpsCertOids[6];

pcm_SoclState_0 gSoclState;

__attribute__((used)) static void pc_alias_gSoclLastIp(void) {
    __asm__ volatile(".globl " PCSYM(gSoclLastIp) "\n.set " PCSYM(gSoclLastIp) ", " PCSYM(gSoclState) "+%c0" :: "i"(__builtin_offsetof(pcm_SoclState_0, lastIp)));
}

__attribute__((used)) static void pc_alias_gSoclAddressState(void) {
    __asm__ volatile(".globl " PCSYM(gSoclAddressState) "\n.set " PCSYM(gSoclAddressState) ", " PCSYM(gSoclState) "+%c0" :: "i"(__builtin_offsetof(pcm_SoclState_0, addressState)));
}

__attribute__((used)) static void pc_alias_gSoclCtrlSocket(void) {
    __asm__ volatile(".globl " PCSYM(gSoclCtrlSocket) "\n.set " PCSYM(gSoclCtrlSocket) ", " PCSYM(gSoclState) "+%c0" :: "i"(__builtin_offsetof(pcm_SoclState_0, ctrlSocket)));
}

__attribute__((used)) static void pc_alias_gSoclCpsConfig(void) {
    __asm__ volatile(".globl " PCSYM(gSoclCpsConfig) "\n.set " PCSYM(gSoclCpsConfig) ", " PCSYM(gSoclState) "+%c0" :: "i"(__builtin_offsetof(pcm_SoclState_0, cpsConfig)));
}

__attribute__((used)) static void pc_alias_gSoclCommandPackets(void) {
    __asm__ volatile(".globl " PCSYM(gSoclCommandPackets) "\n.set " PCSYM(gSoclCommandPackets) ", " PCSYM(gSoclState) "+%c0" :: "i"(__builtin_offsetof(pcm_SoclState_0, cpsConfig.yieldSleep)));
}

const void * gSoclSockets;

const void * gSoclTrash;

const void * gSoclConfig = NULL;

const void * gCpsCertOids[6] = { (const void *)&pcref__021106AC, (const void *)&pcref_gCpsOidRsaEncryption, (const void *)&pcref_gCpsOidX500Rsa, (const void *)&pcref_gCpsOidMd5WithRsa, (const void *)&pcref_gCpsOidSha1WithRsa, (const void *)&pcref_gCpsOidCommonName };
