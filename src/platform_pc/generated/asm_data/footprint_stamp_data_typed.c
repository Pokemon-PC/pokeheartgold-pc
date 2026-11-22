/* Generated from asm/footprint_stamp_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(FootprintStampCamera_PitchDown);
PCREF(FootprintStampCamera_PitchUp);
PCREF(FootprintStampCamera_Roll);
PCREF(FootprintStampCamera_ShakeX);
PCREF(FootprintStampCamera_ShakeY);
PCREF(FootprintStampCamera_Sway);
PCREF(FootprintStampCamera_TurnLeft);
PCREF(FootprintStampCamera_TurnRight);
PCREF(FootprintStampCamera_ZoomIn);
PCREF(FootprintStampCamera_ZoomOut);
PCREF(FootprintStamp_DrawRise);
PCREF(FootprintStamp_DrawSplit);
PCREF(FootprintStamp_DrawSpreadX);
PCREF(FootprintStamp_DrawSpreadY);
PCREF(FootprintStamp_DrawVanish);
PCREF(FootprintStamp_HandlePlayerJoined);
PCREF(FootprintStamp_HandlePlayerLeft);
PCREF(FootprintStamp_HandleStampReceived);
PCREF(FootprintStamp_HitFall);
PCREF(FootprintStamp_HitGrow);
PCREF(FootprintStamp_HitIdle);
PCREF(FootprintStamp_HitRise);
PCREF(FootprintStamp_HitSplit);
PCREF(FootprintStamp_HitSpreadX);
PCREF(FootprintStamp_HitSpreadY);
PCREF(FootprintStamp_HitStretch);
PCREF(FootprintStamp_HitVanish);
PCREF(FootprintStamp_HitWave);
PCREF(FootprintStamp_HitZigzag);
PCREF(FootprintStamp_UpdateFall);
PCREF(FootprintStamp_UpdateGrow);
PCREF(FootprintStamp_UpdateIdle);
PCREF(FootprintStamp_UpdateRise);
PCREF(FootprintStamp_UpdateSplit);
PCREF(FootprintStamp_UpdateSpreadX);
PCREF(FootprintStamp_UpdateSpreadY);
PCREF(FootprintStamp_UpdateStretch);
PCREF(FootprintStamp_UpdateVanish);
PCREF(FootprintStamp_UpdateWave);
PCREF(FootprintStamp_UpdateZigzag);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    const void * update;
    const void * draw;
    const void * hit;
} pcm_FootprintStampEffectFuncs_0;

typedef struct {
    const void * callback;
    uint32_t size;
} pcm_WiFiPlazaLobbyCommand_1;

extern const const void * gFootprintStampCameraEffectFuncs[11];
extern const pcm_FootprintStampEffectFuncs_0 gFootprintStampEffectFuncs[11];
extern const pcm_WiFiPlazaLobbyCommand_1 gFootprintStampLinkCommands[3];

const const void * gFootprintStampCameraEffectFuncs[11] = { NULL, (const void *)&pcref_FootprintStampCamera_ZoomIn, (const void *)&pcref_FootprintStampCamera_Roll, (const void *)&pcref_FootprintStampCamera_TurnLeft, (const void *)&pcref_FootprintStampCamera_TurnRight, (const void *)&pcref_FootprintStampCamera_PitchUp, (const void *)&pcref_FootprintStampCamera_Sway, (const void *)&pcref_FootprintStampCamera_ZoomOut,
  (const void *)&pcref_FootprintStampCamera_ShakeX, (const void *)&pcref_FootprintStampCamera_ShakeY, (const void *)&pcref_FootprintStampCamera_PitchDown };

const pcm_FootprintStampEffectFuncs_0 gFootprintStampEffectFuncs[11] = {
    {
        .update = (const void *)&pcref_FootprintStamp_UpdateIdle,
        .draw = NULL,
        .hit = (const void *)&pcref_FootprintStamp_HitIdle,
    },
    {
        .update = (const void *)&pcref_FootprintStamp_UpdateVanish,
        .draw = (const void *)&pcref_FootprintStamp_DrawVanish,
        .hit = (const void *)&pcref_FootprintStamp_HitVanish,
    },
    {
        .update = (const void *)&pcref_FootprintStamp_UpdateSplit,
        .draw = (const void *)&pcref_FootprintStamp_DrawSplit,
        .hit = (const void *)&pcref_FootprintStamp_HitSplit,
    },
    {
        .update = (const void *)&pcref_FootprintStamp_UpdateZigzag,
        .draw = NULL,
        .hit = (const void *)&pcref_FootprintStamp_HitZigzag,
    },
    {
        .update = (const void *)&pcref_FootprintStamp_UpdateWave,
        .draw = NULL,
        .hit = (const void *)&pcref_FootprintStamp_HitWave,
    },
    {
        .update = (const void *)&pcref_FootprintStamp_UpdateRise,
        .draw = (const void *)&pcref_FootprintStamp_DrawRise,
        .hit = (const void *)&pcref_FootprintStamp_HitRise,
    },
    {
        .update = (const void *)&pcref_FootprintStamp_UpdateFall,
        .draw = NULL,
        .hit = (const void *)&pcref_FootprintStamp_HitFall,
    },
    {
        .update = (const void *)&pcref_FootprintStamp_UpdateGrow,
        .draw = NULL,
        .hit = (const void *)&pcref_FootprintStamp_HitGrow,
    },
    {
        .update = (const void *)&pcref_FootprintStamp_UpdateSpreadX,
        .draw = (const void *)&pcref_FootprintStamp_DrawSpreadX,
        .hit = (const void *)&pcref_FootprintStamp_HitSpreadX,
    },
    {
        .update = (const void *)&pcref_FootprintStamp_UpdateSpreadY,
        .draw = (const void *)&pcref_FootprintStamp_DrawSpreadY,
        .hit = (const void *)&pcref_FootprintStamp_HitSpreadY,
    },
    {
        .update = (const void *)&pcref_FootprintStamp_UpdateStretch,
        .draw = NULL,
        .hit = (const void *)&pcref_FootprintStamp_HitStretch,
    },
};

const pcm_WiFiPlazaLobbyCommand_1 gFootprintStampLinkCommands[3] = {
    {
        .callback = (const void *)&pcref_FootprintStamp_HandlePlayerJoined,
        .size = 12,
    },
    {
        .callback = (const void *)&pcref_FootprintStamp_HandlePlayerLeft,
        .size = 0,
    },
    {
        .callback = (const void *)&pcref_FootprintStamp_HandleStampReceived,
        .size = 12,
    },
};
