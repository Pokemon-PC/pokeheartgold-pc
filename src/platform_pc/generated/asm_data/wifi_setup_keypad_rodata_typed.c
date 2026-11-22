/* Generated from lib/NitroDWC/asm/wifi_setup_keypad_rodata.s by tools/pc_port/asm_data_to_c.py - do not edit. */

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
    uint8_t values[2];
} pcm_WifiSetupBytePair_1;

typedef struct {
    pcm_WifiSetupBytePair_1 messages;
    uint16_t unk_02;
    uint32_t unk_04;
    uint32_t confirmMessages[2];
    const void * storeFuncs[2];
} pcm_WifiSetupTextEntryParams_0;

extern const pcm_WifiSetupTextEntryParams_0 gWifiSetupTextEntryParams;

const pcm_WifiSetupTextEntryParams_0 gWifiSetupTextEntryParams = {
    .messages = {
        .values = { 62, 61 },
    },
    .unk_02 = 14,
    .unk_04 = 16,
    .confirmMessages = { 71, 72 },
    .storeFuncs = { (const void *)(uintptr_t)0x223a02c, (const void *)(uintptr_t)0x223a05c },
};
