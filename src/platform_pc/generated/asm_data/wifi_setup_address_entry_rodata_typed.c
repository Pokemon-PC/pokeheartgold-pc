/* Generated from lib/NitroDWC/asm/wifi_setup_address_entry_rodata.s by tools/pc_port/asm_data_to_c.py - do not edit. */

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
    const void * funcs[5];
} pcm_WifiSetupAddressFuncs_0;

extern const pcm_WifiSetupAddressFuncs_0 gWifiSetupAddressEntryFuncs;

const pcm_WifiSetupAddressFuncs_0 gWifiSetupAddressEntryFuncs = {
    .funcs = { (const void *)(uintptr_t)0x223a1f4, (const void *)(uintptr_t)0x223a210, (const void *)(uintptr_t)0x223a22c, (const void *)(uintptr_t)0x223a24c, (const void *)(uintptr_t)0x223a26c },
};
