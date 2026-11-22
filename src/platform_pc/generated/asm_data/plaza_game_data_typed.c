/* Generated from asm/plaza_game_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(PlazaGame_GetCommandSizeNone);
PCREF(PlazaGame_GetCommandSizeU32);
PCREF(PlazaGame_HandleContinueCommand);
PCREF(PlazaGame_HandleQuitCommand);
PCREF(PlazaGame_HandleSelectionCommand);
PCREF(PlazaGame_HandleVoteNoCommand);
PCREF(PlazaGame_HandleVoteYesCommand);

const void *const gPlazaGameCommands[15] = {
    (const void *)&pcref_PlazaGame_HandleVoteYesCommand,
    (const void *)&pcref_PlazaGame_GetCommandSizeNone,
    NULL,
    (const void *)&pcref_PlazaGame_HandleVoteNoCommand,
    (const void *)&pcref_PlazaGame_GetCommandSizeNone,
    NULL,
    (const void *)&pcref_PlazaGame_HandleContinueCommand,
    (const void *)&pcref_PlazaGame_GetCommandSizeNone,
    NULL,
    (const void *)&pcref_PlazaGame_HandleQuitCommand,
    (const void *)&pcref_PlazaGame_GetCommandSizeNone,
    NULL,
    (const void *)&pcref_PlazaGame_HandleSelectionCommand,
    (const void *)&pcref_PlazaGame_GetCommandSizeU32,
    NULL,
};
