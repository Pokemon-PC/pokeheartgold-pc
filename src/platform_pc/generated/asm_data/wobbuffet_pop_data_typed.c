/* Generated from asm/wobbuffet_pop_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(WobbuffetPop_HostFinishGame);
PCREF(WobbuffetPop_HostPlayGame);
PCREF(WobbuffetPop_HostStartGame);

extern const const void * gWobbuffetPopHostSteps[6];

const const void * gWobbuffetPopHostSteps[6] = { (const void *)&pcref_WobbuffetPop_HostStartGame, (const void *)&pcref_WobbuffetPop_HostPlayGame, (const void *)&pcref_WobbuffetPop_HostFinishGame, NULL, (const void *)(uintptr_t)0x1881e, (const void *)(uintptr_t)0x5000 };
