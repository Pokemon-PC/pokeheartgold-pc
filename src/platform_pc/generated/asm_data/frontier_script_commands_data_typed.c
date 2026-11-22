/* Generated from asm/frontier_script_commands_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(BattleArcadeGameBoard_Exit);
PCREF(BattleArcadeGameBoard_InitOverlay);
PCREF(BattleArcadeGameBoard_Main);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    const void * init;
    const void * exec;
    const void * exit;
    uint32_t ovy_id;
} pcm_OverlayManagerTemplate_0;

extern const pcm_OverlayManagerTemplate_0 gOverlayTemplate_BattleArcadeGameBoard;

const pcm_OverlayManagerTemplate_0 gOverlayTemplate_BattleArcadeGameBoard = {
    .init = (const void *)&pcref_BattleArcadeGameBoard_InitOverlay,
    .exec = (const void *)&pcref_BattleArcadeGameBoard_Main,
    .exit = (const void *)&pcref_BattleArcadeGameBoard_Exit,
    .ovy_id = 84,
};
