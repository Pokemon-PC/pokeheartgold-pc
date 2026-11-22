/* Generated from asm/field_move_effects_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(CutEffect_CreateAtFollower);
PCREF(CutEffect_CreateAtPlayer);
PCREF(CutEffect_Delete);
PCREF(CutEffect_Destroy);
PCREF(CutEffect_InitAtFollower);
PCREF(CutEffect_InitAtPlayer);
PCREF(CutEffect_IsFinished);
PCREF(CutEffect_Render);
PCREF(CutEffect_Update);
PCREF(CutInFlyer_Destroy);
PCREF(CutInFlyer_Done);
PCREF(CutInFlyer_Draw);
PCREF(CutInFlyer_FlyAway);
PCREF(CutInFlyer_Hide);
PCREF(CutInFlyer_Idle);
PCREF(CutInFlyer_Init);
PCREF(CutInFlyer_PickUpTrainer);
PCREF(CutInFlyer_SwoopDown);
PCREF(CutInFlyer_TakeOff);
PCREF(CutInFlyer_Update);
PCREF(CutInModelEffect_Destroy);
PCREF(CutInModelEffect_Draw);
PCREF(CutInModelEffect_Init);
PCREF(CutInModelEffect_Update);
PCREF(CutInScrollSprite_Destroy);
PCREF(CutInScrollSprite_Draw);
PCREF(CutInScrollSprite_Init);
PCREF(CutInScrollSprite_Update);
PCREF(FieldDig_DigHole);
PCREF(FieldDig_SinkStart);
PCREF(FieldDig_SpinAndFadeOut);
PCREF(FieldDig_WaitFadeOut);
PCREF(FieldDig_Warp);
PCREF(FieldEffect_DefaultDestroy);
PCREF(FieldEffect_DefaultDraw);
PCREF(FieldEscapeRope_SpinAndFadeOut);
PCREF(FieldEscapeRope_SpinStart);
PCREF(FieldEscapeRope_WaitFadeOut);
PCREF(FieldEscapeRope_Warp);
PCREF(FieldMoveArrival_FadeIn);
PCREF(FieldMoveArrival_Finish);
PCREF(FieldMoveArrival_Spin);
PCREF(FieldMoveArrival_WaitFadeIn);
PCREF(FieldMoveCutIn_StepCloseFlyWindow);
PCREF(FieldMoveCutIn_StepCloseWindow);
PCREF(FieldMoveCutIn_StepCreateFlySprites);
PCREF(FieldMoveCutIn_StepCreateFlyTrainerSprite);
PCREF(FieldMoveCutIn_StepCreateSprites);
PCREF(FieldMoveCutIn_StepEndWindow);
PCREF(FieldMoveCutIn_StepFinish);
PCREF(FieldMoveCutIn_StepFreeBannerGraphics);
PCREF(FieldMoveCutIn_StepFreeMonGraphics);
PCREF(FieldMoveCutIn_StepFreeSpriteGraphics);
PCREF(FieldMoveCutIn_StepInitWindow);
PCREF(FieldMoveCutIn_StepLoadBannerGraphics);
PCREF(FieldMoveCutIn_StepLoadFlyGraphics);
PCREF(FieldMoveCutIn_StepLoadSpriteGraphics);
PCREF(FieldMoveCutIn_StepMonSlideIn);
PCREF(FieldMoveCutIn_StepMonSlideOut);
PCREF(FieldMoveCutIn_StepMonSlowDown);
PCREF(FieldMoveCutIn_StepOpenWindow);
PCREF(FieldMoveCutIn_StepShowOtherObject);
PCREF(FieldMoveCutIn_StepStartFly);
PCREF(FieldMoveCutIn_StepWaitBeforeFlyAway);
PCREF(FieldMoveCutIn_StepWaitBeforeMon);
PCREF(FieldMoveCutIn_StepWaitBeforeMonExit);
PCREF(FieldMoveCutIn_StepWaitBeforePickUp);
PCREF(FieldMoveCutIn_StepWaitFlyAway);
PCREF(FieldMoveCutIn_StepWaitFlyEnd);
PCREF(FieldMoveCutIn_StepWaitFlyGraphics);
PCREF(FieldMoveCutIn_StepWaitModelEffect);
PCREF(FieldMoveCutIn_StepWaitPaletteFade);
PCREF(FieldMoveCutIn_StepWaitTakeOff);
PCREF(FieldMoveCutIn_StepWidenWindow);
PCREF(FieldMove_ShowCutIn);
PCREF(FieldMove_WaitCutIn);
PCREF(FieldTeleport_FollowMonFlash);
PCREF(FieldTeleport_FollowMonSpinStart);
PCREF(FieldTeleport_FollowMonWaitSpin);
PCREF(FieldTeleport_SpinAndFadeOut);
PCREF(FieldTeleport_SpinStart);
PCREF(FieldTeleport_WaitFadeOut);
PCREF(FieldTeleport_Warp);
PCREF(FlyLandingEffect_Climb);
PCREF(FlyLandingEffect_Destroy);
PCREF(FlyLandingEffect_Done);
PCREF(FlyLandingEffect_FlyAway);
PCREF(FlyLandingEffect_HideFlyer);
PCREF(FlyLandingEffect_Idle);
PCREF(FlyLandingEffect_Init);
PCREF(FlyLandingEffect_ShowPlayer);
PCREF(FlyLandingEffect_StartClimb);
PCREF(FlyLandingEffect_StartFlyAway);
PCREF(FlyLandingEffect_SwoopIn);
PCREF(FlyLandingEffect_Update);
PCREF(FlyLanding_CreateSprites);
PCREF(FlyLanding_FreeGraphics);
PCREF(FlyLanding_HidePlayer);
PCREF(FlyLanding_Idle);
PCREF(FlyLanding_LoadGraphics);
PCREF(FlyLanding_WaitLanding);
PCREF(HeadbuttEffect_CreateAtFollower);
PCREF(HeadbuttEffect_CreateAtPlayer);
PCREF(HeadbuttEffect_Delete);
PCREF(HeadbuttEffect_Destroy);
PCREF(HeadbuttEffect_InitAtFollower);
PCREF(HeadbuttEffect_InitAtPlayer);
PCREF(HeadbuttEffect_IsFinished);
PCREF(HeadbuttEffect_Render);
PCREF(HeadbuttEffect_Update);
PCREF(RockClimbDebris_Destroy);
PCREF(RockClimbDebris_Init);
PCREF(RockClimbDebris_Render);
PCREF(RockClimbDebris_Update);
PCREF(RockDebris_Destroy);
PCREF(RockDebris_Init);
PCREF(RockDebris_InitWithFollower);
PCREF(RockDebris_Render);
PCREF(RockDebris_Update);
PCREF(RockSmashEffect_CreateAtFollower);
PCREF(RockSmashEffect_CreateAtPlayer);
PCREF(RockSmashEffect_Delete);
PCREF(RockSmashEffect_Destroy);
PCREF(RockSmashEffect_InitAtFollower);
PCREF(RockSmashEffect_InitAtPlayer);
PCREF(RockSmashEffect_IsFinished);
PCREF(RockSmashEffect_Render);
PCREF(RockSmashEffect_Update);
PCREF(TrainerClipEffect_Init);
PCREF(TrainerClipEffect_Update);
PCREF(TrainerJumpEffect_Init);
PCREF(TrainerJumpEffect_Update);
PCREF(WaterfallEffect_Destroy);
PCREF(WaterfallEffect_Init);
PCREF(WaterfallEffect_Render);
PCREF(WaterfallEffect_Update);
PCREF(WhirlpoolEffect_Destroy);
PCREF(WhirlpoolEffect_Init);
PCREF(WhirlpoolEffect_Render);
PCREF(WhirlpoolEffect_Update);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    uint32_t stateSize;
    const void * init;
    const void * destroy;
    const void * update;
    const void * draw;
} pcm_FieldEffectBasicTemplate_0;

typedef struct {
    int32_t taskPriority;
    uint16_t dataSize;
    const void * initFunc;
    const void * destroyFunc;
    const void * updateFunc;
    const void * renderFunc;
} pcm_Field3dObjectTaskTemplate_1;

extern const const void * sFlyLandingIdleSteps[1];
extern const const void * sCutInFlyerHideSteps[1];
extern const const void * gFlyLandingPhases[4];
extern const const void * sCutInFlyerTakeOffSteps[6];
extern const const void * gCutInFlyerModeSteps[3];
extern const const void * sCutInFlyerPickUpSteps[4];
extern const pcm_FieldEffectBasicTemplate_0 gTrainerClipEffectTemplate;
extern const pcm_FieldEffectBasicTemplate_0 gFlyLandingEffectTemplate;
extern const pcm_FieldEffectBasicTemplate_0 gCutInScrollSpriteEffectTemplate;
extern const pcm_FieldEffectBasicTemplate_0 gCutInFlyerEffectTemplate;
extern const pcm_FieldEffectBasicTemplate_0 gCutInModelEffectTemplate;
extern const pcm_FieldEffectBasicTemplate_0 gTrainerJumpEffectTemplate;
extern const const void * gFlyLandingTaskSteps[6];
extern const const void * sFlyLandingSteps[8];
extern const const void * gFieldMoveCutInFlyWithObjectSteps[12];
extern const const void * gFieldMoveCutInSteps[14];
extern const const void * gFieldMoveCutInFlySteps[23];
extern const const void * gFieldMoveArrivalSteps[4];
extern const const void * gEscapeRopeSteps[4];
extern const const void * gDigWithFollowMonSteps[5];
extern const const void * gTeleportSteps[6];
extern const const void * gTeleportWithFollowMonSteps[6];
extern const const void * gDigSteps[7];
extern const pcm_Field3dObjectTaskTemplate_1 gRockSmashEffectAtPlayerTemplate;
extern const pcm_Field3dObjectTaskTemplate_1 gWhirlpoolEffectTemplate;
extern const pcm_Field3dObjectTaskTemplate_1 gHeadbuttEffectAtFollowerTemplate;
extern const pcm_Field3dObjectTaskTemplate_1 gWaterfallEffectTemplate;
extern const pcm_Field3dObjectTaskTemplate_1 gRockClimbDebrisTemplate;
extern const pcm_Field3dObjectTaskTemplate_1 gCutEffectAtPlayerTemplate;
extern const pcm_Field3dObjectTaskTemplate_1 gRockSmashEffectAtFollowerTemplate;
extern const pcm_Field3dObjectTaskTemplate_1 gHeadbuttEffectAtPlayerTemplate;
extern const pcm_Field3dObjectTaskTemplate_1 gCutEffectAtFollowerTemplate;
extern const pcm_Field3dObjectTaskTemplate_1 gRockDebrisTemplate;
extern const pcm_Field3dObjectTaskTemplate_1 gRockDebrisWithFollowerTemplate;
extern const const void * gScriptFieldMoveEffectDeleteFuncs[6];
extern const const void * gScriptFieldMoveEffectCreateFuncs[6];
extern const const void * gScriptFieldMoveEffectIsFinishedFuncs[6];

const const void * sFlyLandingIdleSteps[1] = {
    (const void *)&pcref_FlyLandingEffect_Idle,
};

const const void * sCutInFlyerHideSteps[1] = {
    (const void *)&pcref_CutInFlyer_Hide,
};

const const void * gFlyLandingPhases[4] = { (const void *)&sFlyLandingIdleSteps, (const void *)&sFlyLandingSteps, (const void *)(uintptr_t)0x1, (const void *)(uintptr_t)0xf };

const const void * sCutInFlyerTakeOffSteps[6] = {
    (const void *)&pcref_CutInFlyer_TakeOff,
    (const void *)&pcref_CutInFlyer_Idle,
    NULL,
    (const void *)(uintptr_t)0x6,
    (const void *)(uintptr_t)0x1,
    (const void *)(uintptr_t)0xe,
};

const const void * gCutInFlyerModeSteps[3] = { (const void *)&sCutInFlyerHideSteps, (const void *)&sCutInFlyerTakeOffSteps, (const void *)&sCutInFlyerPickUpSteps };

const const void * sCutInFlyerPickUpSteps[4] = {
    (const void *)&pcref_CutInFlyer_SwoopDown,
    (const void *)&pcref_CutInFlyer_PickUpTrainer,
    (const void *)&pcref_CutInFlyer_FlyAway,
    (const void *)&pcref_CutInFlyer_Done,
};

const pcm_FieldEffectBasicTemplate_0 gTrainerClipEffectTemplate = {
    .stateSize = 8,
    .init = (const void *)&pcref_TrainerClipEffect_Init,
    .destroy = (const void *)&pcref_FieldEffect_DefaultDestroy,
    .update = (const void *)&pcref_TrainerClipEffect_Update,
    .draw = (const void *)&pcref_FieldEffect_DefaultDraw,
};

const pcm_FieldEffectBasicTemplate_0 gFlyLandingEffectTemplate = {
    .stateSize = 116,
    .init = (const void *)&pcref_FlyLandingEffect_Init,
    .destroy = (const void *)&pcref_FlyLandingEffect_Destroy,
    .update = (const void *)&pcref_FlyLandingEffect_Update,
    .draw = (const void *)&pcref_FieldEffect_DefaultDraw,
};

const pcm_FieldEffectBasicTemplate_0 gCutInScrollSpriteEffectTemplate = {
    .stateSize = 36,
    .init = (const void *)&pcref_CutInScrollSprite_Init,
    .destroy = (const void *)&pcref_CutInScrollSprite_Destroy,
    .update = (const void *)&pcref_CutInScrollSprite_Update,
    .draw = (const void *)&pcref_CutInScrollSprite_Draw,
};

const pcm_FieldEffectBasicTemplate_0 gCutInFlyerEffectTemplate = {
    .stateSize = 104,
    .init = (const void *)&pcref_CutInFlyer_Init,
    .destroy = (const void *)&pcref_CutInFlyer_Destroy,
    .update = (const void *)&pcref_CutInFlyer_Update,
    .draw = (const void *)&pcref_CutInFlyer_Draw,
};

const pcm_FieldEffectBasicTemplate_0 gCutInModelEffectTemplate = {
    .stateSize = 12,
    .init = (const void *)&pcref_CutInModelEffect_Init,
    .destroy = (const void *)&pcref_CutInModelEffect_Destroy,
    .update = (const void *)&pcref_CutInModelEffect_Update,
    .draw = (const void *)&pcref_CutInModelEffect_Draw,
};

const pcm_FieldEffectBasicTemplate_0 gTrainerJumpEffectTemplate = {
    .stateSize = 36,
    .init = (const void *)&pcref_TrainerJumpEffect_Init,
    .destroy = (const void *)&pcref_FieldEffect_DefaultDestroy,
    .update = (const void *)&pcref_TrainerJumpEffect_Update,
    .draw = (const void *)&pcref_FieldEffect_DefaultDraw,
};

const const void * gFlyLandingTaskSteps[6] = { (const void *)&pcref_FlyLanding_HidePlayer, (const void *)&pcref_FlyLanding_LoadGraphics, (const void *)&pcref_FlyLanding_CreateSprites, (const void *)&pcref_FlyLanding_WaitLanding, (const void *)&pcref_FlyLanding_FreeGraphics, (const void *)&pcref_FlyLanding_Idle };

const const void * sFlyLandingSteps[8] = {
    (const void *)&pcref_FlyLandingEffect_SwoopIn,
    (const void *)&pcref_FlyLandingEffect_StartClimb,
    (const void *)&pcref_FlyLandingEffect_Climb,
    (const void *)&pcref_FlyLandingEffect_HideFlyer,
    (const void *)&pcref_FlyLandingEffect_StartFlyAway,
    (const void *)&pcref_FlyLandingEffect_FlyAway,
    (const void *)&pcref_FlyLandingEffect_ShowPlayer,
    (const void *)&pcref_FlyLandingEffect_Done,
};

const const void * gFieldMoveCutInFlyWithObjectSteps[12] = { (const void *)&pcref_FieldMoveCutIn_StepLoadSpriteGraphics, (const void *)&pcref_FieldMoveCutIn_StepCreateFlyTrainerSprite, (const void *)&pcref_FieldMoveCutIn_StepShowOtherObject, (const void *)&pcref_FieldMoveCutIn_StepWaitModelEffect, (const void *)&pcref_FieldMoveCutIn_StepLoadFlyGraphics, (const void *)&pcref_FieldMoveCutIn_StepWaitFlyGraphics, (const void *)&pcref_FieldMoveCutIn_StepWaitBeforePickUp, (const void *)&pcref_FieldMoveCutIn_StepWaitFlyAway,
  (const void *)&pcref_FieldMoveCutIn_StepWaitFlyEnd, (const void *)&pcref_FieldMoveCutIn_StepWaitPaletteFade, (const void *)&pcref_FieldMoveCutIn_StepFreeSpriteGraphics, (const void *)&pcref_FieldMoveCutIn_StepFinish };

const const void * gFieldMoveCutInSteps[14] = { (const void *)&pcref_FieldMoveCutIn_StepLoadBannerGraphics, (const void *)&pcref_FieldMoveCutIn_StepCreateSprites, (const void *)&pcref_FieldMoveCutIn_StepInitWindow, (const void *)&pcref_FieldMoveCutIn_StepWidenWindow, (const void *)&pcref_FieldMoveCutIn_StepOpenWindow, (const void *)&pcref_FieldMoveCutIn_StepWaitBeforeMon, (const void *)&pcref_FieldMoveCutIn_StepMonSlideIn, (const void *)&pcref_FieldMoveCutIn_StepMonSlowDown,
  (const void *)&pcref_FieldMoveCutIn_StepWaitBeforeMonExit, (const void *)&pcref_FieldMoveCutIn_StepMonSlideOut, (const void *)&pcref_FieldMoveCutIn_StepCloseWindow, (const void *)&pcref_FieldMoveCutIn_StepFreeBannerGraphics, (const void *)&pcref_FieldMoveCutIn_StepEndWindow, (const void *)&pcref_FieldMoveCutIn_StepFinish };

const const void * gFieldMoveCutInFlySteps[23] = { (const void *)&pcref_FieldMoveCutIn_StepLoadBannerGraphics, (const void *)&pcref_FieldMoveCutIn_StepCreateFlySprites, (const void *)&pcref_FieldMoveCutIn_StepInitWindow, (const void *)&pcref_FieldMoveCutIn_StepWidenWindow, (const void *)&pcref_FieldMoveCutIn_StepOpenWindow, (const void *)&pcref_FieldMoveCutIn_StepWaitBeforeMon, (const void *)&pcref_FieldMoveCutIn_StepMonSlideIn, (const void *)&pcref_FieldMoveCutIn_StepMonSlowDown,
  (const void *)&pcref_FieldMoveCutIn_StepWaitBeforeMonExit, (const void *)&pcref_FieldMoveCutIn_StepMonSlideOut, (const void *)&pcref_FieldMoveCutIn_StepFreeMonGraphics, (const void *)&pcref_FieldMoveCutIn_StepLoadFlyGraphics, (const void *)&pcref_FieldMoveCutIn_StepWaitFlyGraphics, (const void *)&pcref_FieldMoveCutIn_StepStartFly, (const void *)&pcref_FieldMoveCutIn_StepWaitTakeOff, (const void *)&pcref_FieldMoveCutIn_StepWaitBeforeFlyAway,
  (const void *)&pcref_FieldMoveCutIn_StepWaitFlyAway, (const void *)&pcref_FieldMoveCutIn_StepCloseFlyWindow, (const void *)&pcref_FieldMoveCutIn_StepWaitFlyEnd, (const void *)&pcref_FieldMoveCutIn_StepWaitPaletteFade, (const void *)&pcref_FieldMoveCutIn_StepFreeBannerGraphics, (const void *)&pcref_FieldMoveCutIn_StepEndWindow, (const void *)&pcref_FieldMoveCutIn_StepFinish };

const const void * gFieldMoveArrivalSteps[4] = { (const void *)&pcref_FieldMoveArrival_FadeIn, (const void *)&pcref_FieldMoveArrival_WaitFadeIn, (const void *)&pcref_FieldMoveArrival_Spin, (const void *)&pcref_FieldMoveArrival_Finish };

const const void * gEscapeRopeSteps[4] = { (const void *)&pcref_FieldEscapeRope_SpinStart, (const void *)&pcref_FieldEscapeRope_SpinAndFadeOut, (const void *)&pcref_FieldEscapeRope_WaitFadeOut, (const void *)&pcref_FieldEscapeRope_Warp };

const const void * gDigWithFollowMonSteps[5] = { (const void *)&pcref_FieldDig_SinkStart, (const void *)&pcref_FieldDig_DigHole, (const void *)&pcref_FieldDig_SpinAndFadeOut, (const void *)&pcref_FieldDig_WaitFadeOut, (const void *)&pcref_FieldDig_Warp };

const const void * gTeleportSteps[6] = { (const void *)&pcref_FieldMove_ShowCutIn, (const void *)&pcref_FieldMove_WaitCutIn, (const void *)&pcref_FieldTeleport_SpinStart, (const void *)&pcref_FieldTeleport_SpinAndFadeOut, (const void *)&pcref_FieldTeleport_WaitFadeOut, (const void *)&pcref_FieldTeleport_Warp };

const const void * gTeleportWithFollowMonSteps[6] = { (const void *)&pcref_FieldTeleport_FollowMonFlash, (const void *)&pcref_FieldTeleport_FollowMonSpinStart, (const void *)&pcref_FieldTeleport_FollowMonWaitSpin, (const void *)&pcref_FieldTeleport_SpinAndFadeOut, (const void *)&pcref_FieldTeleport_WaitFadeOut, (const void *)&pcref_FieldTeleport_Warp };

const const void * gDigSteps[7] = { (const void *)&pcref_FieldMove_ShowCutIn, (const void *)&pcref_FieldMove_WaitCutIn, (const void *)&pcref_FieldDig_SinkStart, (const void *)&pcref_FieldDig_DigHole, (const void *)&pcref_FieldDig_SpinAndFadeOut, (const void *)&pcref_FieldDig_WaitFadeOut, (const void *)&pcref_FieldDig_Warp };

const pcm_Field3dObjectTaskTemplate_1 gRockSmashEffectAtPlayerTemplate = {
    .taskPriority = 1024,
    .dataSize = 240,
    .initFunc = (const void *)&pcref_RockSmashEffect_InitAtPlayer,
    .destroyFunc = (const void *)&pcref_RockSmashEffect_Destroy,
    .updateFunc = (const void *)&pcref_RockSmashEffect_Update,
    .renderFunc = (const void *)&pcref_RockSmashEffect_Render,
};

const pcm_Field3dObjectTaskTemplate_1 gWhirlpoolEffectTemplate = {
    .taskPriority = 1024,
    .dataSize = 240,
    .initFunc = (const void *)&pcref_WhirlpoolEffect_Init,
    .destroyFunc = (const void *)&pcref_WhirlpoolEffect_Destroy,
    .updateFunc = (const void *)&pcref_WhirlpoolEffect_Update,
    .renderFunc = (const void *)&pcref_WhirlpoolEffect_Render,
};

const pcm_Field3dObjectTaskTemplate_1 gHeadbuttEffectAtFollowerTemplate = {
    .taskPriority = 1024,
    .dataSize = 0x114,
    .initFunc = (const void *)&pcref_HeadbuttEffect_InitAtFollower,
    .destroyFunc = (const void *)&pcref_HeadbuttEffect_Destroy,
    .updateFunc = (const void *)&pcref_HeadbuttEffect_Update,
    .renderFunc = (const void *)&pcref_HeadbuttEffect_Render,
};

const pcm_Field3dObjectTaskTemplate_1 gWaterfallEffectTemplate = {
    .taskPriority = 1024,
    .dataSize = 0x1cc,
    .initFunc = (const void *)&pcref_WaterfallEffect_Init,
    .destroyFunc = (const void *)&pcref_WaterfallEffect_Destroy,
    .updateFunc = (const void *)&pcref_WaterfallEffect_Update,
    .renderFunc = (const void *)&pcref_WaterfallEffect_Render,
};

const pcm_Field3dObjectTaskTemplate_1 gRockClimbDebrisTemplate = {
    .taskPriority = 1024,
    .dataSize = 0xd10,
    .initFunc = (const void *)&pcref_RockClimbDebris_Init,
    .destroyFunc = (const void *)&pcref_RockClimbDebris_Destroy,
    .updateFunc = (const void *)&pcref_RockClimbDebris_Update,
    .renderFunc = (const void *)&pcref_RockClimbDebris_Render,
};

const pcm_Field3dObjectTaskTemplate_1 gCutEffectAtPlayerTemplate = {
    .taskPriority = 1024,
    .dataSize = 240,
    .initFunc = (const void *)&pcref_CutEffect_InitAtPlayer,
    .destroyFunc = (const void *)&pcref_CutEffect_Destroy,
    .updateFunc = (const void *)&pcref_CutEffect_Update,
    .renderFunc = (const void *)&pcref_CutEffect_Render,
};

const pcm_Field3dObjectTaskTemplate_1 gRockSmashEffectAtFollowerTemplate = {
    .taskPriority = 1024,
    .dataSize = 240,
    .initFunc = (const void *)&pcref_RockSmashEffect_InitAtFollower,
    .destroyFunc = (const void *)&pcref_RockSmashEffect_Destroy,
    .updateFunc = (const void *)&pcref_RockSmashEffect_Update,
    .renderFunc = (const void *)&pcref_RockSmashEffect_Render,
};

const pcm_Field3dObjectTaskTemplate_1 gHeadbuttEffectAtPlayerTemplate = {
    .taskPriority = 1024,
    .dataSize = 0x114,
    .initFunc = (const void *)&pcref_HeadbuttEffect_InitAtPlayer,
    .destroyFunc = (const void *)&pcref_HeadbuttEffect_Destroy,
    .updateFunc = (const void *)&pcref_HeadbuttEffect_Update,
    .renderFunc = (const void *)&pcref_HeadbuttEffect_Render,
};

const pcm_Field3dObjectTaskTemplate_1 gCutEffectAtFollowerTemplate = {
    .taskPriority = 1024,
    .dataSize = 240,
    .initFunc = (const void *)&pcref_CutEffect_InitAtFollower,
    .destroyFunc = (const void *)&pcref_CutEffect_Destroy,
    .updateFunc = (const void *)&pcref_CutEffect_Update,
    .renderFunc = (const void *)&pcref_CutEffect_Render,
};

const pcm_Field3dObjectTaskTemplate_1 gRockDebrisTemplate = {
    .taskPriority = 1024,
    .dataSize = 0xe9c,
    .initFunc = (const void *)&pcref_RockDebris_Init,
    .destroyFunc = (const void *)&pcref_RockDebris_Destroy,
    .updateFunc = (const void *)&pcref_RockDebris_Update,
    .renderFunc = (const void *)&pcref_RockDebris_Render,
};

const pcm_Field3dObjectTaskTemplate_1 gRockDebrisWithFollowerTemplate = {
    .taskPriority = 1024,
    .dataSize = 0xe9c,
    .initFunc = (const void *)&pcref_RockDebris_InitWithFollower,
    .destroyFunc = (const void *)&pcref_RockDebris_Destroy,
    .updateFunc = (const void *)&pcref_RockDebris_Update,
    .renderFunc = (const void *)&pcref_RockDebris_Render,
};

const const void * gScriptFieldMoveEffectDeleteFuncs[6] = { (const void *)&pcref_CutEffect_Delete, (const void *)&pcref_RockSmashEffect_Delete, (const void *)&pcref_RockSmashEffect_Delete, (const void *)&pcref_CutEffect_Delete, (const void *)&pcref_HeadbuttEffect_Delete, (const void *)&pcref_HeadbuttEffect_Delete };

const const void * gScriptFieldMoveEffectCreateFuncs[6] = { (const void *)&pcref_CutEffect_CreateAtPlayer, (const void *)&pcref_RockSmashEffect_CreateAtPlayer, (const void *)&pcref_RockSmashEffect_CreateAtFollower, (const void *)&pcref_CutEffect_CreateAtFollower, (const void *)&pcref_HeadbuttEffect_CreateAtPlayer, (const void *)&pcref_HeadbuttEffect_CreateAtFollower };

const const void * gScriptFieldMoveEffectIsFinishedFuncs[6] = { (const void *)&pcref_CutEffect_IsFinished, (const void *)&pcref_RockSmashEffect_IsFinished, (const void *)&pcref_RockSmashEffect_IsFinished, (const void *)&pcref_CutEffect_IsFinished, (const void *)&pcref_HeadbuttEffect_IsFinished, (const void *)&pcref_HeadbuttEffect_IsFinished };
