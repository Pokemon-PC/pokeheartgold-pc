/* Generated from asm/nitrocrypto_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(shift);

extern const void * gNitroCryptoShiftVal[7];

const void * gNitroCryptoShiftVal[7] = { (const void *)((const char *)&pcref_shift + 63), (const void *)((const char *)&pcref_shift + 62), (const void *)((const char *)&pcref_shift + 60), (const void *)((const char *)&pcref_shift + 56), (const void *)((const char *)&pcref_shift + 48), (const void *)((const char *)&pcref_shift + 32), (const void *)&pcref_shift };
