/* Generated from asm/battle_anim_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(BallThrow_BallAnimClick);
PCREF(BallThrow_BallAnimDeflect);
PCREF(BallThrow_BallAnimFade);
PCREF(BallThrow_BallAnimFall);
PCREF(BallThrow_BallAnimOpen);
PCREF(BallThrow_BallAnimShake);
PCREF(BallThrow_BallAnimSkip);
PCREF(BallThrow_BallAnimThrow);
PCREF(BallThrow_CaptureStateBounce);
PCREF(BallThrow_CaptureStateBounceDone);
PCREF(BallThrow_CaptureStateClick);
PCREF(BallThrow_CaptureStateClickDone);
PCREF(BallThrow_CaptureStateDeflect);
PCREF(BallThrow_CaptureStateDeflectDone);
PCREF(BallThrow_CaptureStateDrop);
PCREF(BallThrow_CaptureStateEnd);
PCREF(BallThrow_CaptureStateFadeOut);
PCREF(BallThrow_CaptureStateFlash);
PCREF(BallThrow_CaptureStateGoToDrop);
PCREF(BallThrow_CaptureStateGoToEnd);
PCREF(BallThrow_CaptureStateGoToFadeOut);
PCREF(BallThrow_CaptureStateGoToFlash);
PCREF(BallThrow_CaptureStateGoToOpen);
PCREF(BallThrow_CaptureStateGoToShake);
PCREF(BallThrow_CaptureStateGoToSkip);
PCREF(BallThrow_CaptureStateIdle);
PCREF(BallThrow_CaptureStateNone);
PCREF(BallThrow_CaptureStateOpen);
PCREF(BallThrow_CaptureStateOpenDone);
PCREF(BallThrow_CaptureStateRestorePalette);
PCREF(BallThrow_CaptureStateShake);
PCREF(BallThrow_CaptureStateShakeDone);
PCREF(BallThrow_CaptureStateShakeWait);
PCREF(BallThrow_CaptureStateSkip);
PCREF(BallThrow_CaptureStateStartFall);
PCREF(BallThrow_CaptureStateThrow);
PCREF(BallThrow_OpenInPlace);
PCREF(BallThrow_RunCaptureState);
PCREF(BallThrow_RunThrowArc);
PCREF(BallThrow_ThrowArcAndOpen);
PCREF(BallThrow_TrackPosition);
PCREF(BallThrow_Wobble);
PCREF(BattleAnimEmitterCameraCb_LookAtBattlerA);
PCREF(BattleAnimEmitterCameraCb_LookAtBattlerB);
PCREF(BattleAnimEmitterCameraCb_ResetAngle);
PCREF(BattleAnimEmitterCameraCb_SetAngleByMode);
PCREF(BattleAnimEmitterCameraCb_SetAngleFromScript);
PCREF(BattleAnimEmitterCameraCb_SetPresetAngle0);
PCREF(BattleAnimEmitterCameraCb_SetPresetAngle1);
PCREF(BattleAnimEmitterCameraCb_SetPresetAngle3);
PCREF(BattleAnimEmitterCameraCb_SetPresetAngle4);
PCREF(BattleAnimEmitterCb_AttackerToDefender);
PCREF(BattleAnimEmitterCb_ConfigureFromScript);
PCREF(BattleAnimEmitterCb_ConvergeBySide);
PCREF(BattleAnimEmitterCb_ConvergeFromScript);
PCREF(BattleAnimEmitterCb_ConvergeToAttacker);
PCREF(BattleAnimEmitterCb_ConvergeToDefender);
PCREF(BattleAnimEmitterCb_ConvergeUp);
PCREF(BattleAnimEmitterCb_DefenderToAttacker);
PCREF(BattleAnimEmitterCb_Dummy);
PCREF(BattleAnimEmitterCb_MagnetBySide);
PCREF(BattleAnimEmitterCb_MagnetFromScript);
PCREF(BattleAnimEmitterCb_MagnetToAttacker);
PCREF(BattleAnimEmitterCb_MagnetToDefender);
PCREF(BattleAnimEmitterCb_MagnetUp);
PCREF(BattleAnimEmitterCb_None);
PCREF(BattleAnimEmitterCb_SetPositionAtAttacker);
PCREF(BattleAnimEmitterCb_SetPositionAtAttacker2);
PCREF(BattleAnimEmitterCb_SetPositionAtAttackerSide);
PCREF(BattleAnimEmitterCb_SetPositionAtBattler0);
PCREF(BattleAnimEmitterCb_SetPositionAtDefender);
PCREF(BattleAnimEmitterCb_SetPositionAtDefenderSide);
PCREF(BattleAnimEmitterCb_SetPositionAtFirstOpponent);
PCREF(BattleAnimEmitterCb_SetPositionByBattlerTypes);
PCREF(BattleAnimEmitterFlagCb_Nop0);
PCREF(BattleAnimEmitterFlagCb_Nop10);
PCREF(BattleAnimEmitterFlagCb_Nop11);
PCREF(BattleAnimEmitterFlagCb_Nop2);
PCREF(BattleAnimEmitterFlagCb_Nop3);
PCREF(BattleAnimEmitterFlagCb_Nop8);
PCREF(BattleAnimEmitterFlagCb_Nop9);
PCREF(BattleAnimEmitterFlagCb_SetConvergenceForce);
PCREF(BattleAnimEmitterFlagCb_SetConvergencePos);
PCREF(BattleAnimEmitterFlagCb_SetGravity);
PCREF(BattleAnimEmitterFlagCb_SetMagnetForce);
PCREF(BattleAnimEmitterFlagCb_SetMagnetPos);
PCREF(BattleAnimEmitterFlagCb_SetSpinAngle);
PCREF(BattleAnimEmitterFlagCb_SetSpinAxis);
PCREF(BattleAnimFunc_AnimateSprites);
PCREF(BattleAnimFunc_AttackerAfterimages);
PCREF(BattleAnimFunc_AttackerCircleFade);
PCREF(BattleAnimFunc_AttackerDashAfterimages);
PCREF(BattleAnimFunc_AttackerDip);
PCREF(BattleAnimFunc_AttackerGrowFlashRed);
PCREF(BattleAnimFunc_AttackerHop);
PCREF(BattleAnimFunc_AttackerLeapOffscreen);
PCREF(BattleAnimFunc_AttackerLungeKnockback);
PCREF(BattleAnimFunc_AttackerPulseWhite);
PCREF(BattleAnimFunc_AttackerRecoilTilt);
PCREF(BattleAnimFunc_AttackerShakeLunge);
PCREF(BattleAnimFunc_AttackerSilhouette);
PCREF(BattleAnimFunc_AttackerSquashAfterimages);
PCREF(BattleAnimFunc_AttackerSquashStretch);
PCREF(BattleAnimFunc_AttackerStretchSteps);
PCREF(BattleAnimFunc_AttackerStretchUp);
PCREF(BattleAnimFunc_BattleBgWave);
PCREF(BattleAnimFunc_BattlerPaletteFade);
PCREF(BattleAnimFunc_BlendBattlerSprites);
PCREF(BattleAnimFunc_BlendSpritePalette);
PCREF(BattleAnimFunc_BlinkBattler);
PCREF(BattleAnimFunc_ChangeBattlerHeight);
PCREF(BattleAnimFunc_CircleBattler);
PCREF(BattleAnimFunc_DarkSpriteJump);
PCREF(BattleAnimFunc_DefenderKnockback);
PCREF(BattleAnimFunc_DropSpriteStepwise);
PCREF(BattleAnimFunc_EmitterSinMotion);
PCREF(BattleAnimFunc_FadeBgPalette);
PCREF(BattleAnimFunc_FadeInShrinkSprite);
PCREF(BattleAnimFunc_MoveBattlerBy);
PCREF(BattleAnimFunc_MoveBattlerLinear);
PCREF(BattleAnimFunc_MoveBattlerOffscreen);
PCREF(BattleAnimFunc_MoveBattlerSin);
PCREF(BattleAnimFunc_MoveEmitter);
PCREF(BattleAnimFunc_MoveEmitterArc);
PCREF(BattleAnimFunc_MoveEmitterVertical);
PCREF(BattleAnimFunc_None);
PCREF(BattleAnimFunc_ObjWindowBgScrollDown);
PCREF(BattleAnimFunc_ObjWindowBgScrollDownFast);
PCREF(BattleAnimFunc_ObjWindowBgScrollUp);
PCREF(BattleAnimFunc_ObjWindowBgScrollUpAlt);
PCREF(BattleAnimFunc_OneFrameSoundTask);
PCREF(BattleAnimFunc_OneFrameTask);
PCREF(BattleAnimFunc_OneFrameUncountedTask);
PCREF(BattleAnimFunc_PicOrbit);
PCREF(BattleAnimFunc_PulseBattlerSprite);
PCREF(BattleAnimFunc_ResetBattlerPosition);
PCREF(BattleAnimFunc_RevealBattler);
PCREF(BattleAnimFunc_RockOrShakeAttacker);
PCREF(BattleAnimFunc_RotateBattler);
PCREF(BattleAnimFunc_SetBattlerVanished);
PCREF(BattleAnimFunc_SetBgPaletteGrayscale);
PCREF(BattleAnimFunc_ShakeAndScaleBattler);
PCREF(BattleAnimFunc_ShakeAndScaleBattlerXY);
PCREF(BattleAnimFunc_ShakeBattlefieldByPower);
PCREF(BattleAnimFunc_ShakeBattlefieldFlashing);
PCREF(BattleAnimFunc_ShakeBg);
PCREF(BattleAnimFunc_ShakeDefenderBlackFlash);
PCREF(BattleAnimFunc_ShakeDefenderWithOverlay);
PCREF(BattleAnimFunc_ShakeSpritePair);
PCREF(BattleAnimFunc_ShakeTargets);
PCREF(BattleAnimFunc_ShootSpriteFromAttacker);
PCREF(BattleAnimFunc_ShowAttackerObjWindowSprites);
PCREF(BattleAnimFunc_ShowBattleBgInObjWindow);
PCREF(BattleAnimFunc_ShrinkSpriteOnDefender);
PCREF(BattleAnimFunc_SkewSlideAttackerBg);
PCREF(BattleAnimFunc_SlideBattler);
PCREF(BattleAnimFunc_SlideBattler2);
PCREF(BattleAnimFunc_SlideOutAndTransform);
PCREF(BattleAnimFunc_SlidingBg);
PCREF(BattleAnimFunc_SlidingBg2);
PCREF(BattleAnimFunc_SpriteDriftFade);
PCREF(BattleAnimFunc_SpriteMosaic);
PCREF(BattleAnimFunc_SquashSprite);
PCREF(BattleAnimFunc_StretchBattler);
PCREF(BattleAnimFunc_StretchFadeSprite);
PCREF(BattleAnimFunc_StretchShakeDefender);
PCREF(BattleAnimFunc_WaddlePic);
PCREF(BattleAnimFunc_WaveAttackerOnBg);
PCREF(BattleAnimFunc_WaveDefenderOnBg);
PCREF(BattleAnimFunc_WindowSweepFlashWhite);
PCREF(BattleAnimFunc_WipeOutDefender);
PCREF(BattleAnimFunc_WobbleDefenderOnBg);
PCREF(BattleAnimSpriteFunc_BlinkScaleFadeSprites);
PCREF(BattleAnimSpriteFunc_BlinkSpritesCenter);
PCREF(BattleAnimSpriteFunc_BoomerangSprite);
PCREF(BattleAnimSpriteFunc_CrossingSprites);
PCREF(BattleAnimSpriteFunc_FadeSpriteAnim);
PCREF(BattleAnimSpriteFunc_FanSpritesAroundAttacker);
PCREF(BattleAnimSpriteFunc_FlashingSpritesAroundAttacker);
PCREF(BattleAnimSpriteFunc_FloatingSpriteStream);
PCREF(BattleAnimSpriteFunc_GrowRockShrinkSprite);
PCREF(BattleAnimSpriteFunc_MoveSpriteAndAnimate);
PCREF(BattleAnimSpriteFunc_OrbitingSpriteTrail);
PCREF(BattleAnimSpriteFunc_PaletteCycleSprite);
PCREF(BattleAnimSpriteFunc_PopAndScatterSprites);
PCREF(BattleAnimSpriteFunc_PulseSpriteBrightnessFlash);
PCREF(BattleAnimSpriteFunc_RisingShrinkSprites);
PCREF(BattleAnimSpriteFunc_RisingSpriteStretchAttacker);
PCREF(BattleAnimSpriteFunc_ScaleSpritesOverDefender);
PCREF(BattleAnimSpriteFunc_ShrinkAttackerIntoSprite);
PCREF(BattleAnimSpriteFunc_SlidingSpritePairs);
PCREF(BattleAnimSpriteFunc_SpreadSpriteCopies);
PCREF(BattleAnimSpriteFunc_SpriteAboveDefender);
PCREF(BattleAnimSpriteFunc_SpriteArc);
PCREF(BattleAnimSpriteFunc_SpriteOrbit);
PCREF(BattleAnimSpriteFunc_SpritePops);
PCREF(BattleAnimSpriteFunc_SpriteQuad);
PCREF(BattleAnimSpriteFunc_SpriteRowSequence);
PCREF(BattleAnimSpriteFunc_SpriteTrailToDefender);
PCREF(BattleAnimSpriteFunc_SpritesOrbitAttacker);
PCREF(BattleAnimSpriteFunc_SpritesOrbitAttackerBobbing);
PCREF(BattleAnimSpriteFunc_StackedSpritesOnDefender);
PCREF(BattleAnimSpriteFunc_ThrowSpriteArc);
PCREF(BattleAnimSpriteFunc_ZigzagFlash);
PCREF(BattleAnimSpriteFunc_ZigzagSlash);

extern const const void * gBattleAnimEmitterCallbackTable[23];
extern const const void * gBattleAnimEmitterFlagCallbacks[14];
extern const const void * gBattleAnimEmitterCameraCallbacks[9];
extern const const void * gBattleAnimSpriteFuncTable[33];
extern const const void * gBattleAnimFuncTable[84];
extern const const void * gBallThrowModeFuncs[6];
extern const const void * gBallThrowBallAnimFuncs[18];
extern const const void * gBallThrowCaptureStateFuncs[28];

const const void * gBattleAnimEmitterCallbackTable[23] = { (const void *)&pcref_BattleAnimEmitterCb_None, (const void *)&pcref_BattleAnimEmitterCb_SetPositionAtFirstOpponent, (const void *)&pcref_BattleAnimEmitterCb_SetPositionAtBattler0, (const void *)&pcref_BattleAnimEmitterCb_SetPositionAtAttacker, (const void *)&pcref_BattleAnimEmitterCb_SetPositionAtDefender, (const void *)&pcref_BattleAnimEmitterCb_AttackerToDefender, (const void *)&pcref_BattleAnimEmitterCb_DefenderToAttacker, (const void *)&pcref_BattleAnimEmitterCb_ConvergeBySide,
  (const void *)&pcref_BattleAnimEmitterCb_ConvergeUp, (const void *)&pcref_BattleAnimEmitterCb_ConvergeToDefender, (const void *)&pcref_BattleAnimEmitterCb_ConvergeToAttacker, (const void *)&pcref_BattleAnimEmitterCb_ConvergeFromScript, (const void *)&pcref_BattleAnimEmitterCb_MagnetBySide, (const void *)&pcref_BattleAnimEmitterCb_MagnetUp, (const void *)&pcref_BattleAnimEmitterCb_MagnetToDefender, (const void *)&pcref_BattleAnimEmitterCb_MagnetToAttacker,
  (const void *)&pcref_BattleAnimEmitterCb_MagnetFromScript, (const void *)&pcref_BattleAnimEmitterCb_ConfigureFromScript, (const void *)&pcref_BattleAnimEmitterCb_SetPositionByBattlerTypes, (const void *)&pcref_BattleAnimEmitterCb_SetPositionAtAttackerSide, (const void *)&pcref_BattleAnimEmitterCb_SetPositionAtDefenderSide, (const void *)&pcref_BattleAnimEmitterCb_SetPositionAtAttacker2, (const void *)&pcref_BattleAnimEmitterCb_Dummy };

const const void * gBattleAnimEmitterFlagCallbacks[14] = { (const void *)&pcref_BattleAnimEmitterFlagCb_Nop0, (const void *)&pcref_BattleAnimEmitterFlagCb_SetGravity, (const void *)&pcref_BattleAnimEmitterFlagCb_Nop2, (const void *)&pcref_BattleAnimEmitterFlagCb_Nop3, (const void *)&pcref_BattleAnimEmitterFlagCb_SetMagnetPos, (const void *)&pcref_BattleAnimEmitterFlagCb_SetMagnetForce, (const void *)&pcref_BattleAnimEmitterFlagCb_SetSpinAngle, (const void *)&pcref_BattleAnimEmitterFlagCb_SetSpinAxis,
  (const void *)&pcref_BattleAnimEmitterFlagCb_Nop8, (const void *)&pcref_BattleAnimEmitterFlagCb_Nop9, (const void *)&pcref_BattleAnimEmitterFlagCb_Nop10, (const void *)&pcref_BattleAnimEmitterFlagCb_Nop11, (const void *)&pcref_BattleAnimEmitterFlagCb_SetConvergencePos, (const void *)&pcref_BattleAnimEmitterFlagCb_SetConvergenceForce };

const const void * gBattleAnimEmitterCameraCallbacks[9] = { (const void *)&pcref_BattleAnimEmitterCameraCb_ResetAngle, (const void *)&pcref_BattleAnimEmitterCameraCb_SetPresetAngle4, (const void *)&pcref_BattleAnimEmitterCameraCb_SetAngleFromScript, (const void *)&pcref_BattleAnimEmitterCameraCb_SetPresetAngle3, (const void *)&pcref_BattleAnimEmitterCameraCb_SetAngleByMode, (const void *)&pcref_BattleAnimEmitterCameraCb_SetPresetAngle0, (const void *)&pcref_BattleAnimEmitterCameraCb_SetPresetAngle1, (const void *)&pcref_BattleAnimEmitterCameraCb_LookAtBattlerA,
  (const void *)&pcref_BattleAnimEmitterCameraCb_LookAtBattlerB };

const const void * gBattleAnimSpriteFuncTable[33] = { (const void *)&pcref_BattleAnimSpriteFunc_SpreadSpriteCopies, (const void *)&pcref_BattleAnimSpriteFunc_BlinkScaleFadeSprites, (const void *)&pcref_BattleAnimSpriteFunc_OrbitingSpriteTrail, (const void *)&pcref_BattleAnimSpriteFunc_CrossingSprites, (const void *)&pcref_BattleAnimSpriteFunc_GrowRockShrinkSprite, (const void *)&pcref_BattleAnimSpriteFunc_StackedSpritesOnDefender, (const void *)&pcref_BattleAnimSpriteFunc_BoomerangSprite, (const void *)&pcref_BattleAnimSpriteFunc_RisingSpriteStretchAttacker,
  (const void *)&pcref_BattleAnimSpriteFunc_ZigzagSlash, (const void *)&pcref_BattleAnimSpriteFunc_ZigzagFlash, (const void *)&pcref_BattleAnimSpriteFunc_SpritePops, (const void *)&pcref_BattleAnimSpriteFunc_PulseSpriteBrightnessFlash, (const void *)&pcref_BattleAnimSpriteFunc_FanSpritesAroundAttacker, (const void *)&pcref_BattleAnimSpriteFunc_ShrinkAttackerIntoSprite, (const void *)&pcref_BattleAnimSpriteFunc_ScaleSpritesOverDefender, (const void *)&pcref_BattleAnimSpriteFunc_SpritesOrbitAttackerBobbing,
  (const void *)&pcref_BattleAnimSpriteFunc_FloatingSpriteStream, (const void *)&pcref_BattleAnimSpriteFunc_ThrowSpriteArc, (const void *)&pcref_BattleAnimSpriteFunc_FadeSpriteAnim, (const void *)&pcref_BattleAnimSpriteFunc_BlinkSpritesCenter, (const void *)&pcref_BattleAnimSpriteFunc_SlidingSpritePairs, (const void *)&pcref_BattleAnimSpriteFunc_PopAndScatterSprites, (const void *)&pcref_BattleAnimSpriteFunc_SpriteQuad, (const void *)&pcref_BattleAnimSpriteFunc_FlashingSpritesAroundAttacker,
  (const void *)&pcref_BattleAnimSpriteFunc_SpriteTrailToDefender, (const void *)&pcref_BattleAnimSpriteFunc_MoveSpriteAndAnimate, (const void *)&pcref_BattleAnimSpriteFunc_SpriteOrbit, (const void *)&pcref_BattleAnimSpriteFunc_SpriteAboveDefender, (const void *)&pcref_BattleAnimSpriteFunc_SpriteArc, (const void *)&pcref_BattleAnimSpriteFunc_RisingShrinkSprites, (const void *)&pcref_BattleAnimSpriteFunc_SpriteRowSequence, (const void *)&pcref_BattleAnimSpriteFunc_PaletteCycleSprite,
  (const void *)&pcref_BattleAnimSpriteFunc_SpritesOrbitAttacker };

const const void * gBattleAnimFuncTable[84] = { (const void *)&pcref_BattleAnimFunc_None, (const void *)&pcref_BattleAnimFunc_OneFrameTask, (const void *)&pcref_BattleAnimFunc_OneFrameSoundTask, (const void *)&pcref_BattleAnimFunc_OneFrameUncountedTask, (const void *)&pcref_BattleAnimFunc_RotateBattler, (const void *)&pcref_BattleAnimFunc_AttackerGrowFlashRed, (const void *)&pcref_BattleAnimFunc_AttackerSquashStretch, (const void *)&pcref_BattleAnimFunc_AttackerAfterimages,
  (const void *)&pcref_BattleAnimFunc_PicOrbit, (const void *)&pcref_BattleAnimFunc_AttackerRecoilTilt, (const void *)&pcref_BattleAnimFunc_CircleBattler, (const void *)&pcref_BattleAnimFunc_ShakeDefenderWithOverlay, (const void *)&pcref_BattleAnimFunc_SkewSlideAttackerBg, (const void *)&pcref_BattleAnimFunc_AttackerPulseWhite, (const void *)&pcref_BattleAnimFunc_AttackerStretchSteps, (const void *)&pcref_BattleAnimFunc_AttackerLeapOffscreen,
  (const void *)&pcref_BattleAnimFunc_AttackerSilhouette, (const void *)&pcref_BattleAnimFunc_FadeInShrinkSprite, (const void *)&pcref_BattleAnimFunc_ShakeDefenderBlackFlash, (const void *)&pcref_BattleAnimFunc_AttackerHop, (const void *)&pcref_BattleAnimFunc_WaveDefenderOnBg, (const void *)&pcref_BattleAnimFunc_ShowAttackerObjWindowSprites, (const void *)&pcref_BattleAnimFunc_AttackerSquashAfterimages, (const void *)&pcref_BattleAnimFunc_AttackerCircleFade,
  (const void *)&pcref_BattleAnimFunc_ShakeBattlefieldFlashing, (const void *)&pcref_BattleAnimFunc_WaddlePic, (const void *)&pcref_BattleAnimFunc_SpriteDriftFade, (const void *)&pcref_BattleAnimFunc_RockOrShakeAttacker, (const void *)&pcref_BattleAnimFunc_ShakeBattlefieldByPower, (const void *)&pcref_BattleAnimFunc_AttackerDip, (const void *)&pcref_BattleAnimFunc_AttackerLungeKnockback, (const void *)&pcref_BattleAnimFunc_AttackerStretchUp,
  (const void *)&pcref_BattleAnimFunc_DarkSpriteJump, (const void *)&pcref_BattleAnimFunc_FadeBgPalette, (const void *)&pcref_BattleAnimFunc_BattlerPaletteFade, (const void *)&pcref_BattleAnimFunc_PulseBattlerSprite, (const void *)&pcref_BattleAnimFunc_ShakeTargets, (const void *)&pcref_BattleAnimFunc_WobbleDefenderOnBg, (const void *)&pcref_BattleAnimFunc_BlendBattlerSprites, (const void *)&pcref_BattleAnimFunc_ShakeSpritePair,
  (const void *)&pcref_BattleAnimFunc_SetBattlerVanished, (const void *)&pcref_BattleAnimFunc_WindowSweepFlashWhite, (const void *)&pcref_BattleAnimFunc_StretchBattler, (const void *)&pcref_BattleAnimFunc_StretchShakeDefender, (const void *)&pcref_BattleAnimFunc_SlidingBg, (const void *)&pcref_BattleAnimFunc_SlidingBg2, (const void *)&pcref_BattleAnimFunc_ShootSpriteFromAttacker, (const void *)&pcref_BattleAnimFunc_AttackerShakeLunge,
  (const void *)&pcref_BattleAnimFunc_DefenderKnockback, (const void *)&pcref_BattleAnimFunc_StretchFadeSprite, (const void *)&pcref_BattleAnimFunc_BlinkBattler, (const void *)&pcref_BattleAnimFunc_SlideBattler, (const void *)&pcref_BattleAnimFunc_SlideBattler2, (const void *)&pcref_BattleAnimFunc_ShakeAndScaleBattler, (const void *)&pcref_BattleAnimFunc_ShakeAndScaleBattlerXY, (const void *)&pcref_BattleAnimFunc_WaveAttackerOnBg,
  (const void *)&pcref_BattleAnimFunc_ShowBattleBgInObjWindow, (const void *)&pcref_BattleAnimFunc_MoveBattlerBy, (const void *)&pcref_BattleAnimFunc_ShrinkSpriteOnDefender, (const void *)&pcref_BattleAnimFunc_AttackerDashAfterimages, (const void *)&pcref_BattleAnimFunc_MoveBattlerSin, (const void *)&pcref_BattleAnimFunc_MoveBattlerLinear, (const void *)&pcref_BattleAnimFunc_ResetBattlerPosition, (const void *)&pcref_BattleAnimFunc_BlendSpritePalette,
  (const void *)&pcref_BattleAnimFunc_ChangeBattlerHeight, (const void *)&pcref_BattleAnimFunc_MoveEmitter, (const void *)&pcref_BattleAnimFunc_MoveEmitterArc, (const void *)&pcref_BattleAnimFunc_RevealBattler, (const void *)&pcref_BattleAnimFunc_ShakeBg, (const void *)&pcref_BattleAnimFunc_SpriteMosaic, (const void *)&pcref_BattleAnimFunc_SquashSprite, (const void *)&pcref_BattleAnimFunc_SlideOutAndTransform,
  (const void *)&pcref_BattleAnimFunc_EmitterSinMotion, (const void *)&pcref_BattleAnimFunc_MoveEmitterVertical, (const void *)&pcref_BattleAnimFunc_SetBgPaletteGrayscale, (const void *)&pcref_BattleAnimFunc_DropSpriteStepwise, (const void *)&pcref_BattleAnimFunc_BattleBgWave, (const void *)&pcref_BattleAnimFunc_MoveBattlerOffscreen, (const void *)&pcref_BattleAnimFunc_AnimateSprites, (const void *)&pcref_BattleAnimFunc_WipeOutDefender,
  (const void *)&pcref_BattleAnimFunc_ObjWindowBgScrollUp, (const void *)&pcref_BattleAnimFunc_ObjWindowBgScrollDown, (const void *)&pcref_BattleAnimFunc_ObjWindowBgScrollUpAlt, (const void *)&pcref_BattleAnimFunc_ObjWindowBgScrollDownFast };

const const void * gBallThrowModeFuncs[6] = { (const void *)&pcref_BallThrow_RunThrowArc, (const void *)&pcref_BallThrow_ThrowArcAndOpen, (const void *)&pcref_BallThrow_Wobble, (const void *)&pcref_BallThrow_RunCaptureState, (const void *)&pcref_BallThrow_TrackPosition, (const void *)&pcref_BallThrow_OpenInPlace };

const const void * gBallThrowBallAnimFuncs[18] = { (const void *)&pcref_BallThrow_BallAnimThrow, (const void *)&pcref_BallThrow_BallAnimOpen, (const void *)&pcref_BallThrow_BallAnimDeflect, (const void *)&pcref_BallThrow_BallAnimFall, (const void *)&pcref_BallThrow_BallAnimShake, (const void *)&pcref_BallThrow_BallAnimSkip, (const void *)&pcref_BallThrow_BallAnimClick, (const void *)&pcref_BallThrow_BallAnimFade,
  NULL, (const void *)(uintptr_t)0x2, (const void *)(uintptr_t)0x2, (const void *)(uintptr_t)0x2, (const void *)(uintptr_t)0x2, (const void *)(uintptr_t)0x6, (const void *)(uintptr_t)0x1, (const void *)(uintptr_t)0x6,
  NULL, (const void *)(uintptr_t)0x6 };

const const void * gBallThrowCaptureStateFuncs[28] = { (const void *)&pcref_BallThrow_CaptureStateIdle, (const void *)&pcref_BallThrow_CaptureStateThrow, (const void *)&pcref_BallThrow_CaptureStateGoToOpen, (const void *)&pcref_BallThrow_CaptureStateOpen, (const void *)&pcref_BallThrow_CaptureStateOpenDone, (const void *)&pcref_BallThrow_CaptureStateDeflect, (const void *)&pcref_BallThrow_CaptureStateDeflectDone, (const void *)&pcref_BallThrow_CaptureStateStartFall,
  (const void *)&pcref_BallThrow_CaptureStateGoToFlash, (const void *)&pcref_BallThrow_CaptureStateFlash, (const void *)&pcref_BallThrow_CaptureStateGoToDrop, (const void *)&pcref_BallThrow_CaptureStateDrop, (const void *)&pcref_BallThrow_CaptureStateNone, (const void *)&pcref_BallThrow_CaptureStateBounce, (const void *)&pcref_BallThrow_CaptureStateBounceDone, (const void *)&pcref_BallThrow_CaptureStateShakeWait,
  (const void *)&pcref_BallThrow_CaptureStateGoToShake, (const void *)&pcref_BallThrow_CaptureStateShake, (const void *)&pcref_BallThrow_CaptureStateShakeDone, (const void *)&pcref_BallThrow_CaptureStateGoToSkip, (const void *)&pcref_BallThrow_CaptureStateSkip, (const void *)&pcref_BallThrow_CaptureStateClick, (const void *)&pcref_BallThrow_CaptureStateClickDone, (const void *)&pcref_BallThrow_CaptureStateRestorePalette,
  (const void *)&pcref_BallThrow_CaptureStateGoToFadeOut, (const void *)&pcref_BallThrow_CaptureStateFadeOut, (const void *)&pcref_BallThrow_CaptureStateGoToEnd, (const void *)&pcref_BallThrow_CaptureStateEnd };
