/* Generated from lib/NitroSDK/asm/wvr_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

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
    uint16_t lockId;
    uint16_t vramBank;
    const void * arg;
    const void * callback;
} pcm_WvrState_0;

extern pcm_WvrState_0 wvrLockId;

pcm_WvrState_0 wvrLockId;

__attribute__((used)) static void pc_alias_wvrVRam(void) {
    __asm__ volatile(".globl " PCSYM(wvrVRam) "\n.set " PCSYM(wvrVRam) ", " PCSYM(wvrLockId) "+%c0" :: "i"(__builtin_offsetof(pcm_WvrState_0, vramBank)));
}

__attribute__((used)) static void pc_alias_wvrArg(void) {
    __asm__ volatile(".globl " PCSYM(wvrArg) "\n.set " PCSYM(wvrArg) ", " PCSYM(wvrLockId) "+%c0" :: "i"(__builtin_offsetof(pcm_WvrState_0, arg)));
}

__attribute__((used)) static void pc_alias_wvrCallback(void) {
    __asm__ volatile(".globl " PCSYM(wvrCallback) "\n.set " PCSYM(wvrCallback) ", " PCSYM(wvrLockId) "+%c0" :: "i"(__builtin_offsetof(pcm_WvrState_0, callback)));
}
