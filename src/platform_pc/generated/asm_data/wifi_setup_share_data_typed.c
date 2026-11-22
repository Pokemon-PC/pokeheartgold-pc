/* Generated from lib/NitroDWC/asm/wifi_setup_share_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

extern const void * gWifiSetupWhStateNames[56];
extern const void * gWifiSetupFontPathsKorean[2];
extern const void * gWifiSetupFontPaths[18];

const void * gWifiSetupWhStateNames[56] = { (const void *)(uintptr_t)0x2246e74, (const void *)(uintptr_t)0x2246eac, (const void *)(uintptr_t)0x2246fe8, (const void *)(uintptr_t)0x2246f00, (const void *)(uintptr_t)0x2247028, (const void *)(uintptr_t)0x2247068, (const void *)(uintptr_t)0x2247048, (const void *)(uintptr_t)0x22470d4,
  (const void *)(uintptr_t)0x22470b0, (const void *)(uintptr_t)0x2246f54, (const void *)(uintptr_t)0x2246ee4, (const void *)(uintptr_t)0x2246b54, (const void *)(uintptr_t)0x2246e20, (const void *)(uintptr_t)0x2246d48, (const void *)(uintptr_t)0x2247008, (const void *)(uintptr_t)0x2246e3c,
  (const void *)(uintptr_t)0x2246f38, (const void *)(uintptr_t)0x2246ca0, (const void *)(uintptr_t)0x2246d94, (const void *)(uintptr_t)0x2246e58, (const void *)(uintptr_t)0x2246c28, (const void *)(uintptr_t)0x2246d18, (const void *)(uintptr_t)0x2246ba8, (const void *)(uintptr_t)0x2246cb8,
  (const void *)(uintptr_t)0x2246ce8, (const void *)(uintptr_t)0x2246c10, (const void *)(uintptr_t)0x2246de8, (const void *)(uintptr_t)0x2246ec8, (const void *)(uintptr_t)0x2246e04, (const void *)(uintptr_t)0x2246f1c, (const void *)(uintptr_t)0x2246d30, (const void *)(uintptr_t)0x2246c88,
  (const void *)(uintptr_t)0x2246d60, (const void *)(uintptr_t)0x2246b94, (const void *)(uintptr_t)0x2246b58, (const void *)(uintptr_t)0x2246bf8, (const void *)(uintptr_t)0x2246d78, (const void *)(uintptr_t)0x2246c70, (const void *)(uintptr_t)0x2246c58, (const void *)(uintptr_t)0x2246db0,
  (const void *)(uintptr_t)0x2246be4, (const void *)(uintptr_t)0x2246c40, (const void *)(uintptr_t)0x2246b80, (const void *)(uintptr_t)0x2246f70, (const void *)(uintptr_t)0x2246bd0, (const void *)(uintptr_t)0x2246e90, (const void *)(uintptr_t)0x2246fc8, (const void *)(uintptr_t)0x2246b6c,
  (const void *)(uintptr_t)0x2246cd0, (const void *)(uintptr_t)0x2246bbc, (const void *)(uintptr_t)0x2246f8c, (const void *)(uintptr_t)0x2246dcc, (const void *)(uintptr_t)0x2246d00, (const void *)(uintptr_t)0x224708c, (const void *)(uintptr_t)0x22470f8, (const void *)(uintptr_t)0x2246fa8 };

const void * gWifiSetupFontPathsKorean[2] = { (const void *)(uintptr_t)0x2247450, (const void *)(uintptr_t)0x2247440 };

const void * gWifiSetupFontPaths[18] = { (const void *)(uintptr_t)0x2247460, (const void *)(uintptr_t)0x2247440, (const void *)(uintptr_t)0x2f67736d, (const void *)(uintptr_t)0x735f636c, (const void *)(uintptr_t)0x54464e2e, (const void *)(uintptr_t)0x6c2e52, (const void *)(uintptr_t)0x2f67736d, (const void *)(uintptr_t)0x6d5f636b,
  (const void *)(uintptr_t)0x54464e2e, (const void *)(uintptr_t)0x6c2e52, (const void *)(uintptr_t)0x2f67736d, (const void *)(uintptr_t)0x6d5f636c, (const void *)(uintptr_t)0x54464e2e, (const void *)(uintptr_t)0x6c2e52, NULL, NULL,
  NULL, NULL };
