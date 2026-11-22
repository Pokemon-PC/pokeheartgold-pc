/* Generated from asm/overlay_01_sprite_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(ApricornTreeObject_Delete);
PCREF(ApricornTreeObject_Init);
PCREF(ApricornTreeObject_Pause);
PCREF(ApricornTreeObject_Resume);
PCREF(ApricornTreeObject_Update);
PCREF(BillboardDraw_Delete);
PCREF(BillboardDraw_Init);
PCREF(BillboardDraw_Pause);
PCREF(BillboardDraw_Resume);
PCREF(BillboardDraw_UpdateLooping);
PCREF(BillboardDraw_UpdateNpc);
PCREF(BillboardDraw_UpdatePcWoman);
PCREF(BillboardDraw_UpdatePositionOnly);
PCREF(BillboardDraw_UpdateTwoSequences);
PCREF(CameraFocusObject_Delete);
PCREF(CameraFocusObject_Init);
PCREF(CameraFocusObject_Pause);
PCREF(CameraFocusObject_Resume);
PCREF(CameraFocusObject_Update);
PCREF(FollowMonDraw_Delete);
PCREF(FollowMonDraw_Init);
PCREF(FollowMonDraw_Pause);
PCREF(FollowMonDraw_Resume);
PCREF(FollowMonDraw_Update);
PCREF(FollowMonDraw_UpdateLarge);
PCREF(LegendaryBirdObject_Delete);
PCREF(LegendaryBirdObject_Init);
PCREF(LegendaryBirdObject_Pause);
PCREF(LegendaryBirdObject_Resume);
PCREF(LegendaryBirdObject_Update);
PCREF(ModelObjectDraw_Delete);
PCREF(ModelObjectDraw_Init);
PCREF(ModelObjectDraw_Pause);
PCREF(ModelObjectDraw_Resume);
PCREF(ModelObjectDraw_Update);
PCREF(PlayerDraw_Delete);
PCREF(PlayerDraw_Init);
PCREF(PlayerDraw_Pause);
PCREF(PlayerDraw_Resume);
PCREF(PlayerDraw_UpdateApricornShake);
PCREF(PlayerDraw_UpdateCycling);
PCREF(PlayerDraw_UpdateFishing);
PCREF(PlayerDraw_UpdateHeal);
PCREF(PlayerDraw_UpdateLadder);
PCREF(PlayerDraw_UpdatePoketch);
PCREF(PlayerDraw_UpdateSurfing);
PCREF(PlayerDraw_UpdateUseHmOrSaving);
PCREF(PlayerDraw_UpdateWalking);
PCREF(PlayerDraw_UpdateWatering);
PCREF(ov01_02206EA4);
PCREF(ov01_02206EBC);
PCREF(ov01_02206ED4);
PCREF(ov01_02206EF8);
PCREF(ov01_02206F1C);
PCREF(ov01_02206F40);
PCREF(ov01_02206F70);
PCREF(ov01_02206FAC);
PCREF(ov01_02206FE8);
PCREF(ov01_02207024);
PCREF(ov01_02207060);
PCREF(ov01_0220709C);
PCREF(ov01_022070D8);
PCREF(ov01_02207114);
PCREF(ov01_0220715C);
PCREF(ov01_022071C8);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    const void * init;
    const void * update;
    const void * delete;
    const void * pause;
    const void * resume;
} pcm_MapObjectDrawCallbacks_0;

typedef struct {
    const void * init;
    const void * update;
    const void * delete;
    const void * pause;
    const void * resume;
} pcm_MapObjectDrawCallbacks_1;

typedef struct {
    uint8_t unk_00[2];
    uint8_t modelId;
    uint8_t sequenceId;
    const void * ranges;
} pcm_SpriteBillboardInfo_2;

extern const pcm_MapObjectDrawCallbacks_0 gLargeFollowMonDrawCallbacks[1];
extern const pcm_MapObjectDrawCallbacks_0 gNpcDrawCallbacks[1];
extern const pcm_MapObjectDrawCallbacks_0 gLegendaryBirdDrawCallbacks[1];
extern const pcm_MapObjectDrawCallbacks_0 gPcWomanDrawCallbacks[1];
extern const pcm_MapObjectDrawCallbacks_0 gPlayerPoketchDrawCallbacks[1];
extern const pcm_MapObjectDrawCallbacks_0 gPlayerUseHmOrSavingDrawCallbacks[1];
extern const pcm_MapObjectDrawCallbacks_0 gPlayerApricornShakeDrawCallbacks[1];
extern const pcm_MapObjectDrawCallbacks_0 gPlayerLadderDrawCallbacks[1];
extern const pcm_MapObjectDrawCallbacks_0 gUnanimatedObjectDrawCallbacks[1];
extern const pcm_MapObjectDrawCallbacks_0 gLoopingObjectDrawCallbacks[1];
extern const pcm_MapObjectDrawCallbacks_0 gPlayerWateringDrawCallbacks[1];
extern const pcm_MapObjectDrawCallbacks_0 gApricornTreeDrawCallbacks[1];
extern const pcm_MapObjectDrawCallbacks_0 gModelObjectDrawCallbacks[1];
extern const pcm_MapObjectDrawCallbacks_0 gPlayerFishingDrawCallbacks[1];
extern const pcm_MapObjectDrawCallbacks_0 ov01_02206E2C[1];
extern const pcm_MapObjectDrawCallbacks_0 gPlayerWalkingDrawCallbacks[1];
extern const pcm_MapObjectDrawCallbacks_0 gPlayerSurfingDrawCallbacks[1];
extern const pcm_MapObjectDrawCallbacks_0 gPlayerHealDrawCallbacks[1];
extern const pcm_MapObjectDrawCallbacks_0 gPlayerCyclingDrawCallbacks[1];
extern const pcm_MapObjectDrawCallbacks_0 gFollowMonDrawCallbacks[1];
extern const pcm_MapObjectDrawCallbacks_1 gCameraFocusObjectDrawCallbacks;
extern const pcm_SpriteBillboardInfo_2 gSpriteBillboardInfos[24];
extern const void * gMapObjectDrawCallbacks[20];

const pcm_MapObjectDrawCallbacks_0 gLargeFollowMonDrawCallbacks[1] = {
    {
        .init = (const void *)&pcref_FollowMonDraw_Init,
        .update = (const void *)&pcref_FollowMonDraw_UpdateLarge,
        .delete = (const void *)&pcref_FollowMonDraw_Delete,
        .pause = (const void *)&pcref_FollowMonDraw_Pause,
        .resume = (const void *)&pcref_FollowMonDraw_Resume,
    },
};

const pcm_MapObjectDrawCallbacks_0 gNpcDrawCallbacks[1] = {
    {
        .init = (const void *)&pcref_BillboardDraw_Init,
        .update = (const void *)&pcref_BillboardDraw_UpdateNpc,
        .delete = (const void *)&pcref_BillboardDraw_Delete,
        .pause = (const void *)&pcref_BillboardDraw_Pause,
        .resume = (const void *)&pcref_BillboardDraw_Resume,
    },
};

const pcm_MapObjectDrawCallbacks_0 gLegendaryBirdDrawCallbacks[1] = {
    {
        .init = (const void *)&pcref_LegendaryBirdObject_Init,
        .update = (const void *)&pcref_LegendaryBirdObject_Update,
        .delete = (const void *)&pcref_LegendaryBirdObject_Delete,
        .pause = (const void *)&pcref_LegendaryBirdObject_Pause,
        .resume = (const void *)&pcref_LegendaryBirdObject_Resume,
    },
};

const pcm_MapObjectDrawCallbacks_0 gPcWomanDrawCallbacks[1] = {
    {
        .init = (const void *)&pcref_BillboardDraw_Init,
        .update = (const void *)&pcref_BillboardDraw_UpdatePcWoman,
        .delete = (const void *)&pcref_BillboardDraw_Delete,
        .pause = (const void *)&pcref_BillboardDraw_Pause,
        .resume = (const void *)&pcref_BillboardDraw_Resume,
    },
};

const pcm_MapObjectDrawCallbacks_0 gPlayerPoketchDrawCallbacks[1] = {
    {
        .init = (const void *)&pcref_PlayerDraw_Init,
        .update = (const void *)&pcref_PlayerDraw_UpdatePoketch,
        .delete = (const void *)&pcref_PlayerDraw_Delete,
        .pause = (const void *)&pcref_PlayerDraw_Pause,
        .resume = (const void *)&pcref_PlayerDraw_Resume,
    },
};

const pcm_MapObjectDrawCallbacks_0 gPlayerUseHmOrSavingDrawCallbacks[1] = {
    {
        .init = (const void *)&pcref_PlayerDraw_Init,
        .update = (const void *)&pcref_PlayerDraw_UpdateUseHmOrSaving,
        .delete = (const void *)&pcref_PlayerDraw_Delete,
        .pause = (const void *)&pcref_PlayerDraw_Pause,
        .resume = (const void *)&pcref_PlayerDraw_Resume,
    },
};

const pcm_MapObjectDrawCallbacks_0 gPlayerApricornShakeDrawCallbacks[1] = {
    {
        .init = (const void *)&pcref_PlayerDraw_Init,
        .update = (const void *)&pcref_PlayerDraw_UpdateApricornShake,
        .delete = (const void *)&pcref_PlayerDraw_Delete,
        .pause = (const void *)&pcref_PlayerDraw_Pause,
        .resume = (const void *)&pcref_PlayerDraw_Resume,
    },
};

const pcm_MapObjectDrawCallbacks_0 gPlayerLadderDrawCallbacks[1] = {
    {
        .init = (const void *)&pcref_PlayerDraw_Init,
        .update = (const void *)&pcref_PlayerDraw_UpdateLadder,
        .delete = (const void *)&pcref_PlayerDraw_Delete,
        .pause = (const void *)&pcref_PlayerDraw_Pause,
        .resume = (const void *)&pcref_PlayerDraw_Resume,
    },
};

const pcm_MapObjectDrawCallbacks_0 gUnanimatedObjectDrawCallbacks[1] = {
    {
        .init = (const void *)&pcref_BillboardDraw_Init,
        .update = (const void *)&pcref_BillboardDraw_UpdatePositionOnly,
        .delete = (const void *)&pcref_BillboardDraw_Delete,
        .pause = (const void *)&pcref_BillboardDraw_Pause,
        .resume = (const void *)&pcref_BillboardDraw_Resume,
    },
};

const pcm_MapObjectDrawCallbacks_0 gLoopingObjectDrawCallbacks[1] = {
    {
        .init = (const void *)&pcref_BillboardDraw_Init,
        .update = (const void *)&pcref_BillboardDraw_UpdateLooping,
        .delete = (const void *)&pcref_BillboardDraw_Delete,
        .pause = (const void *)&pcref_BillboardDraw_Pause,
        .resume = (const void *)&pcref_BillboardDraw_Resume,
    },
};

const pcm_MapObjectDrawCallbacks_0 gPlayerWateringDrawCallbacks[1] = {
    {
        .init = (const void *)&pcref_PlayerDraw_Init,
        .update = (const void *)&pcref_PlayerDraw_UpdateWatering,
        .delete = (const void *)&pcref_PlayerDraw_Delete,
        .pause = (const void *)&pcref_PlayerDraw_Pause,
        .resume = (const void *)&pcref_PlayerDraw_Resume,
    },
};

const pcm_MapObjectDrawCallbacks_0 gApricornTreeDrawCallbacks[1] = {
    {
        .init = (const void *)&pcref_ApricornTreeObject_Init,
        .update = (const void *)&pcref_ApricornTreeObject_Update,
        .delete = (const void *)&pcref_ApricornTreeObject_Delete,
        .pause = (const void *)&pcref_ApricornTreeObject_Pause,
        .resume = (const void *)&pcref_ApricornTreeObject_Resume,
    },
};

const pcm_MapObjectDrawCallbacks_0 gModelObjectDrawCallbacks[1] = {
    {
        .init = (const void *)&pcref_ModelObjectDraw_Init,
        .update = (const void *)&pcref_ModelObjectDraw_Update,
        .delete = (const void *)&pcref_ModelObjectDraw_Delete,
        .pause = (const void *)&pcref_ModelObjectDraw_Pause,
        .resume = (const void *)&pcref_ModelObjectDraw_Resume,
    },
};

const pcm_MapObjectDrawCallbacks_0 gPlayerFishingDrawCallbacks[1] = {
    {
        .init = (const void *)&pcref_PlayerDraw_Init,
        .update = (const void *)&pcref_PlayerDraw_UpdateFishing,
        .delete = (const void *)&pcref_PlayerDraw_Delete,
        .pause = (const void *)&pcref_PlayerDraw_Pause,
        .resume = (const void *)&pcref_PlayerDraw_Resume,
    },
};

const pcm_MapObjectDrawCallbacks_0 ov01_02206E2C[1] = {
    {
        .init = (const void *)&pcref_BillboardDraw_Init,
        .update = (const void *)&pcref_BillboardDraw_UpdateTwoSequences,
        .delete = (const void *)&pcref_BillboardDraw_Delete,
        .pause = (const void *)&pcref_BillboardDraw_Pause,
        .resume = (const void *)&pcref_BillboardDraw_Resume,
    },
};

const pcm_MapObjectDrawCallbacks_0 gPlayerWalkingDrawCallbacks[1] = {
    {
        .init = (const void *)&pcref_PlayerDraw_Init,
        .update = (const void *)&pcref_PlayerDraw_UpdateWalking,
        .delete = (const void *)&pcref_PlayerDraw_Delete,
        .pause = (const void *)&pcref_PlayerDraw_Pause,
        .resume = (const void *)&pcref_PlayerDraw_Resume,
    },
};

const pcm_MapObjectDrawCallbacks_0 gPlayerSurfingDrawCallbacks[1] = {
    {
        .init = (const void *)&pcref_PlayerDraw_Init,
        .update = (const void *)&pcref_PlayerDraw_UpdateSurfing,
        .delete = (const void *)&pcref_PlayerDraw_Delete,
        .pause = (const void *)&pcref_PlayerDraw_Pause,
        .resume = (const void *)&pcref_PlayerDraw_Resume,
    },
};

const pcm_MapObjectDrawCallbacks_0 gPlayerHealDrawCallbacks[1] = {
    {
        .init = (const void *)&pcref_PlayerDraw_Init,
        .update = (const void *)&pcref_PlayerDraw_UpdateHeal,
        .delete = (const void *)&pcref_PlayerDraw_Delete,
        .pause = (const void *)&pcref_PlayerDraw_Pause,
        .resume = (const void *)&pcref_PlayerDraw_Resume,
    },
};

const pcm_MapObjectDrawCallbacks_0 gPlayerCyclingDrawCallbacks[1] = {
    {
        .init = (const void *)&pcref_PlayerDraw_Init,
        .update = (const void *)&pcref_PlayerDraw_UpdateCycling,
        .delete = (const void *)&pcref_PlayerDraw_Delete,
        .pause = (const void *)&pcref_PlayerDraw_Pause,
        .resume = (const void *)&pcref_PlayerDraw_Resume,
    },
};

const pcm_MapObjectDrawCallbacks_0 gFollowMonDrawCallbacks[1] = {
    {
        .init = (const void *)&pcref_FollowMonDraw_Init,
        .update = (const void *)&pcref_FollowMonDraw_Update,
        .delete = (const void *)&pcref_FollowMonDraw_Delete,
        .pause = (const void *)&pcref_FollowMonDraw_Pause,
        .resume = (const void *)&pcref_FollowMonDraw_Resume,
    },
};

const pcm_MapObjectDrawCallbacks_1 gCameraFocusObjectDrawCallbacks = {
    .init = (const void *)&pcref_CameraFocusObject_Init,
    .update = (const void *)&pcref_CameraFocusObject_Update,
    .delete = (const void *)&pcref_CameraFocusObject_Delete,
    .pause = (const void *)&pcref_CameraFocusObject_Pause,
    .resume = (const void *)&pcref_CameraFocusObject_Resume,
};

const pcm_SpriteBillboardInfo_2 gSpriteBillboardInfos[24] = {
    {
        .unk_00 = { 0, 0 },
        .modelId = 0,
        .sequenceId = 0,
        .ranges = (const void *)&pcref_ov01_022070D8,
    },
    {
        .unk_00 = { 0, 0 },
        .modelId = 1,
        .sequenceId = 0,
        .ranges = (const void *)&pcref_ov01_022070D8,
    },
    {
        .unk_00 = { 0, 0 },
        .modelId = 2,
        .sequenceId = 0,
        .ranges = (const void *)&pcref_ov01_022070D8,
    },
    {
        .unk_00 = { 0, 0 },
        .modelId = 12,
        .sequenceId = 0,
        .ranges = (const void *)&pcref_ov01_022070D8,
    },
    {
        .unk_00 = { 0, 0 },
        .modelId = 15,
        .sequenceId = 0,
        .ranges = (const void *)&pcref_ov01_022070D8,
    },
    {
        .unk_00 = { 0, 0 },
        .modelId = 0,
        .sequenceId = 11,
        .ranges = (const void *)&pcref_ov01_02207114,
    },
    {
        .unk_00 = { 0, 0 },
        .modelId = 0,
        .sequenceId = 3,
        .ranges = (const void *)&pcref_ov01_022071C8,
    },
    {
        .unk_00 = { 0, 0 },
        .modelId = 0,
        .sequenceId = 1,
        .ranges = (const void *)&pcref_ov01_0220715C,
    },
    {
        .unk_00 = { 0, 0 },
        .modelId = 0,
        .sequenceId = 4,
        .ranges = (const void *)&pcref_ov01_02206EBC,
    },
    {
        .unk_00 = { 0, 0 },
        .modelId = 0,
        .sequenceId = 6,
        .ranges = (const void *)&pcref_ov01_0220709C,
    },
    {
        .unk_00 = { 0, 0 },
        .modelId = 0,
        .sequenceId = 5,
        .ranges = (const void *)&pcref_ov01_02206EF8,
    },
    {
        .unk_00 = { 0, 0 },
        .modelId = 6,
        .sequenceId = 10,
        .ranges = (const void *)&pcref_ov01_02206FAC,
    },
    {
        .unk_00 = { 0, 0 },
        .modelId = 11,
        .sequenceId = 23,
        .ranges = (const void *)&pcref_ov01_02207024,
    },
    {
        .unk_00 = { 0, 0 },
        .modelId = 0,
        .sequenceId = 15,
        .ranges = (const void *)&pcref_ov01_02206F1C,
    },
    {
        .unk_00 = { 0, 0 },
        .modelId = 0,
        .sequenceId = 26,
        .ranges = (const void *)&pcref_ov01_02206FE8,
    },
    {
        .unk_00 = { 0, 0 },
        .modelId = 0,
        .sequenceId = 13,
        .ranges = (const void *)&pcref_ov01_02207060,
    },
    {
        .unk_00 = { 0, 0 },
        .modelId = 0,
        .sequenceId = 14,
        .ranges = (const void *)&pcref_ov01_02206EA4,
    },
    {
        .unk_00 = { 0, 0 },
        .modelId = 5,
        .sequenceId = 27,
        .ranges = (const void *)&pcref_ov01_02206ED4,
    },
    {
        .unk_00 = { 0, 0 },
        .modelId = 5,
        .sequenceId = 28,
        .ranges = (const void *)&pcref_ov01_02206ED4,
    },
    {
        .unk_00 = { 0, 0 },
        .modelId = 0,
        .sequenceId = 21,
        .ranges = (const void *)&pcref_ov01_02206F70,
    },
    {
        .unk_00 = { 0, 0 },
        .modelId = 10,
        .sequenceId = 21,
        .ranges = (const void *)&pcref_ov01_02206F70,
    },
    {
        .unk_00 = { 0, 0 },
        .modelId = 13,
        .sequenceId = 24,
        .ranges = (const void *)&pcref_ov01_02206F40,
    },
    {
        .unk_00 = { 0, 0 },
        .modelId = 13,
        .sequenceId = 0,
        .ranges = (const void *)&pcref_ov01_022070D8,
    },
    {
        .unk_00 = { 0, 0 },
        .modelId = 5,
        .sequenceId = 0,
        .ranges = (const void *)&pcref_ov01_022070D8,
    },
};

const void * gMapObjectDrawCallbacks[20] = { (const void *)&gNpcDrawCallbacks, (const void *)&gUnanimatedObjectDrawCallbacks, (const void *)&gLoopingObjectDrawCallbacks, (const void *)&gPlayerWalkingDrawCallbacks, (const void *)&gPlayerCyclingDrawCallbacks, (const void *)&gPlayerUseHmOrSavingDrawCallbacks, (const void *)&gPlayerWateringDrawCallbacks, (const void *)&gPlayerSurfingDrawCallbacks,
  (const void *)&gPlayerFishingDrawCallbacks, (const void *)&gPlayerLadderDrawCallbacks, (const void *)&gPlayerHealDrawCallbacks, (const void *)&gPlayerPoketchDrawCallbacks, (const void *)&gPcWomanDrawCallbacks, (const void *)&gLegendaryBirdDrawCallbacks, (const void *)&ov01_02206E2C, (const void *)&gModelObjectDrawCallbacks,
  (const void *)&gLargeFollowMonDrawCallbacks, (const void *)&gFollowMonDrawCallbacks, (const void *)&gApricornTreeDrawCallbacks, (const void *)&gPlayerApricornShakeDrawCallbacks };
