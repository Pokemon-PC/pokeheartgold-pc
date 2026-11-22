/* Generated from asm/map_object_movement_commands_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(MovementScriptMachineSub_Done);
PCREF(MovementScriptMachineSub_Init);
PCREF(MovementScriptMachineSub_LoopCheck);
PCREF(MovementScriptMachineSub_SetMovementCommand);
PCREF(MovementScriptMachineSub_WaitMovementCommand);
PCREF(MovementScriptMachineSub_WaitReady);
PCREF(gJumpHeightTable0);
PCREF(gJumpHeightTable1);
PCREF(gJumpHeightTable2);

extern const void * gJumpHeightTables[3];
extern const const void * gMovementScriptMachineStateFuncs[6];

const void * gJumpHeightTables[3] = { (const void *)&pcref_gJumpHeightTable0, (const void *)&pcref_gJumpHeightTable1, (const void *)&pcref_gJumpHeightTable2 };

const const void * gMovementScriptMachineStateFuncs[6] = { (const void *)&pcref_MovementScriptMachineSub_Init, (const void *)&pcref_MovementScriptMachineSub_WaitReady, (const void *)&pcref_MovementScriptMachineSub_SetMovementCommand, (const void *)&pcref_MovementScriptMachineSub_WaitMovementCommand, (const void *)&pcref_MovementScriptMachineSub_LoopCheck, (const void *)&pcref_MovementScriptMachineSub_Done };
