/* Generated from asm/plaza_game_swalot_plop_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(SwalotPlopBody_GetTiltFast);
PCREF(SwalotPlopBody_GetTiltFastest);
PCREF(SwalotPlopBody_GetTiltNormal);
PCREF(SwalotPlop_GetLevelSize);
PCREF(SwalotPlop_GetNoDataSize);
PCREF(SwalotPlop_GetScoreSize);
PCREF(SwalotPlop_GetScoresSize);
PCREF(SwalotPlop_GetShotSize);
PCREF(SwalotPlop_HandleFinalScore);
PCREF(SwalotPlop_HandleFinish);
PCREF(SwalotPlop_HandleLevel);
PCREF(SwalotPlop_HandleScoreReport);
PCREF(SwalotPlop_HandleScores);
PCREF(SwalotPlop_HandleShot);
PCREF(SwalotPlop_HandleStart);
PCREF(SwalotPlop_HandleSync);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    const void * handler;
    const void * getSize;
    const void * getBuffer;
} pcm_SwalotPlopCommand_0;

extern const const void * gSwalotPlopTiltFuncs[3];
extern const pcm_SwalotPlopCommand_0 gSwalotPlopCommands[8];

const const void * gSwalotPlopTiltFuncs[3] = { (const void *)&pcref_SwalotPlopBody_GetTiltNormal, (const void *)&pcref_SwalotPlopBody_GetTiltFast, (const void *)&pcref_SwalotPlopBody_GetTiltFastest };

const pcm_SwalotPlopCommand_0 gSwalotPlopCommands[8] = {
    {
        .handler = (const void *)&pcref_SwalotPlop_HandleStart,
        .getSize = (const void *)&pcref_SwalotPlop_GetNoDataSize,
        .getBuffer = NULL,
    },
    {
        .handler = (const void *)&pcref_SwalotPlop_HandleFinish,
        .getSize = (const void *)&pcref_SwalotPlop_GetNoDataSize,
        .getBuffer = NULL,
    },
    {
        .handler = (const void *)&pcref_SwalotPlop_HandleShot,
        .getSize = (const void *)&pcref_SwalotPlop_GetShotSize,
        .getBuffer = NULL,
    },
    {
        .handler = (const void *)&pcref_SwalotPlop_HandleFinalScore,
        .getSize = (const void *)&pcref_SwalotPlop_GetScoreSize,
        .getBuffer = NULL,
    },
    {
        .handler = (const void *)&pcref_SwalotPlop_HandleScores,
        .getSize = (const void *)&pcref_SwalotPlop_GetScoresSize,
        .getBuffer = NULL,
    },
    {
        .handler = (const void *)&pcref_SwalotPlop_HandleLevel,
        .getSize = (const void *)&pcref_SwalotPlop_GetLevelSize,
        .getBuffer = NULL,
    },
    {
        .handler = (const void *)&pcref_SwalotPlop_HandleScoreReport,
        .getSize = (const void *)&pcref_SwalotPlop_GetScoreSize,
        .getBuffer = NULL,
    },
    {
        .handler = (const void *)&pcref_SwalotPlop_HandleSync,
        .getSize = (const void *)&pcref_SwalotPlop_GetNoDataSize,
        .getBuffer = NULL,
    },
};
