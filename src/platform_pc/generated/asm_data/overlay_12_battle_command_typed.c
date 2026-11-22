/* Generated from asm/overlay_12_battle_command.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(BtlCmd_222);
PCREF(BtlCmd_223);
PCREF(BtlCmd_AddPayDayMoney);
PCREF(BtlCmd_ApplyTypeEffectiveness);
PCREF(BtlCmd_BackgroundSlideIn);
PCREF(BtlCmd_BeatUp);
PCREF(BtlCmd_BoostRandomStatBy2);
PCREF(BtlCmd_BufferLocalMessage);
PCREF(BtlCmd_BufferMessage);
PCREF(BtlCmd_CalcCrit);
PCREF(BtlCmd_CalcDamage);
PCREF(BtlCmd_CalcDamageRaw);
PCREF(BtlCmd_CalcExpGain);
PCREF(BtlCmd_CalcFlailPower);
PCREF(BtlCmd_CalcFuryCutterPower);
PCREF(BtlCmd_CalcGyroBallPower);
PCREF(BtlCmd_CalcHPFalloffPower);
PCREF(BtlCmd_CalcHiddenPowerParams);
PCREF(BtlCmd_CalcMagnitudePower);
PCREF(BtlCmd_CalcNaturalGiftParams);
PCREF(BtlCmd_CalcPaybackPower);
PCREF(BtlCmd_CalcPunishmentPower);
PCREF(BtlCmd_CalcRevengeDamageMul);
PCREF(BtlCmd_CalcRolloutPower);
PCREF(BtlCmd_CalcTrumpCardPower);
PCREF(BtlCmd_CalcWeatherBallParams);
PCREF(BtlCmd_CalcWeightBasedPower);
PCREF(BtlCmd_CalcWringOutPower);
PCREF(BtlCmd_Call);
PCREF(BtlCmd_CallFromVar);
PCREF(BtlCmd_ChangeForm);
PCREF(BtlCmd_ChangeStatStage);
PCREF(BtlCmd_CheckAbility);
PCREF(BtlCmd_CheckChatterActivation);
PCREF(BtlCmd_CheckCurMoveIsType);
PCREF(BtlCmd_CheckEffectActivation);
PCREF(BtlCmd_CheckHoldOnWith1HP);
PCREF(BtlCmd_CheckIgnorableAbility);
PCREF(BtlCmd_CheckIgnoreWeather);
PCREF(BtlCmd_CheckItemHoldEffect);
PCREF(BtlCmd_CheckItemHoldEffectOnHit);
PCREF(BtlCmd_CheckItemHoldEffectOnUTurn);
PCREF(BtlCmd_CheckMoveHit);
PCREF(BtlCmd_CheckSafariGameDone);
PCREF(BtlCmd_CheckSideCondition);
PCREF(BtlCmd_CheckSpikes);
PCREF(BtlCmd_CheckStealthRock);
PCREF(BtlCmd_CheckSubstitute);
PCREF(BtlCmd_CheckToxicSpikes);
PCREF(BtlCmd_CheckWhiteout);
PCREF(BtlCmd_ChoosePokemonMenu);
PCREF(BtlCmd_ClearVolatileStatus);
PCREF(BtlCmd_CompareMonDataToValue);
PCREF(BtlCmd_CompareMonDataToVar);
PCREF(BtlCmd_CompareVarToValue);
PCREF(BtlCmd_CompareVarToVar);
PCREF(BtlCmd_CopyStatStages);
PCREF(BtlCmd_Counter);
PCREF(BtlCmd_DeletePokemon);
PCREF(BtlCmd_DivideVarByValue);
PCREF(BtlCmd_DivideVarByVar);
PCREF(BtlCmd_EndOfTurnWeatherEffect);
PCREF(BtlCmd_EndScript);
PCREF(BtlCmd_FadeOutBattle);
PCREF(BtlCmd_FlickerMon);
PCREF(BtlCmd_FollowMe);
PCREF(BtlCmd_FreePartyGaugeGraphics);
PCREF(BtlCmd_GenerateEndOfBattleItem);
PCREF(BtlCmd_GetCurrentMoveData);
PCREF(BtlCmd_GetItemEffectParam);
PCREF(BtlCmd_GetItemHoldEffect);
PCREF(BtlCmd_GetTerrainMove);
PCREF(BtlCmd_GetTerrainSecondaryEffect);
PCREF(BtlCmd_GetTurnOrderBySpeed);
PCREF(BtlCmd_GoToEffectScript);
PCREF(BtlCmd_GoToIfAnySwitches);
PCREF(BtlCmd_GoToIfValidMon);
PCREF(BtlCmd_GoToMoveScript);
PCREF(BtlCmd_GoToSubscript);
PCREF(BtlCmd_Goto);
PCREF(BtlCmd_HealthbarSlideIn);
PCREF(BtlCmd_HealthbarSlideInDelay);
PCREF(BtlCmd_HealthbarSlideOut);
PCREF(BtlCmd_HideBattleStartPartyGauge);
PCREF(BtlCmd_HidePartyGauge);
PCREF(BtlCmd_IfMovedThisTurn);
PCREF(BtlCmd_IfSameSide);
PCREF(BtlCmd_IfTurnFlag);
PCREF(BtlCmd_IncrementGameStat);
PCREF(BtlCmd_LoadArchivedMonData);
PCREF(BtlCmd_LoadPartyGaugeGraphics);
PCREF(BtlCmd_LockMoveChoice);
PCREF(BtlCmd_MagicCoat);
PCREF(BtlCmd_Metronome);
PCREF(BtlCmd_MirrorCoat);
PCREF(BtlCmd_OAMToSprite);
PCREF(BtlCmd_PayPrizeMoney);
PCREF(BtlCmd_PlayBGM);
PCREF(BtlCmd_PlayBattleAnimation);
PCREF(BtlCmd_PlayBattleAnimationFromVar);
PCREF(BtlCmd_PlayBattleAnimationOnMons);
PCREF(BtlCmd_PlayEncounterAnimation);
PCREF(BtlCmd_PlayFaintAnimation);
PCREF(BtlCmd_PlayMoveAnimation);
PCREF(BtlCmd_PlayMoveAnimationOnMons);
PCREF(BtlCmd_PlayMoveHitSound);
PCREF(BtlCmd_PlaySound);
PCREF(BtlCmd_PokemonSendOut);
PCREF(BtlCmd_PokemonSlideIn);
PCREF(BtlCmd_Present);
PCREF(BtlCmd_PrintAttackMessage);
PCREF(BtlCmd_PrintBattleResultMessage);
PCREF(BtlCmd_PrintBufferedMessage);
PCREF(BtlCmd_PrintBufferedTrainerMessage);
PCREF(BtlCmd_PrintEncounterMessage);
PCREF(BtlCmd_PrintEscapeMessage);
PCREF(BtlCmd_PrintFirstSendOutMessage);
PCREF(BtlCmd_PrintForfeitMessage);
PCREF(BtlCmd_PrintGlobalMessage);
PCREF(BtlCmd_PrintMessage);
PCREF(BtlCmd_PrintRecallMessage);
PCREF(BtlCmd_PrintSendOutMessage);
PCREF(BtlCmd_PrintTrainerMessage);
PCREF(BtlCmd_Random);
PCREF(BtlCmd_RapidSpin);
PCREF(BtlCmd_RecallPokemon);
PCREF(BtlCmd_RefreshMonData);
PCREF(BtlCmd_RefreshSprite);
PCREF(BtlCmd_RemoveItem);
PCREF(BtlCmd_ResetAllStatChanges);
PCREF(BtlCmd_RestoreSprite);
PCREF(BtlCmd_SetBattleBackground);
PCREF(BtlCmd_SetHealthbarStatus);
PCREF(BtlCmd_SetLinkBattleResult);
PCREF(BtlCmd_SetMirrorMove);
PCREF(BtlCmd_SetMosaic);
PCREF(BtlCmd_SetMultiHit);
PCREF(BtlCmd_SetPokemonEncounter);
PCREF(BtlCmd_SetRandomTarget);
PCREF(BtlCmd_SetTrainerEncounter);
PCREF(BtlCmd_SetTurnFlag);
PCREF(BtlCmd_ShowBattleStartPartyGauge);
PCREF(BtlCmd_ShowParty);
PCREF(BtlCmd_ShowPartyGauge);
PCREF(BtlCmd_SpriteToOAM);
PCREF(BtlCmd_StartCatchMonTask);
PCREF(BtlCmd_StartGetExpTask);
PCREF(BtlCmd_SwitchAndUpdateMon);
PCREF(BtlCmd_ThrowPokeball);
PCREF(BtlCmd_ToggleVanish);
PCREF(BtlCmd_TrainerSlideIn);
PCREF(BtlCmd_TrainerSlideOut);
PCREF(BtlCmd_Transform);
PCREF(BtlCmd_TrickRoom);
PCREF(BtlCmd_TriggerAbilityOnHit);
PCREF(BtlCmd_TryAssist);
PCREF(BtlCmd_TryAttract);
PCREF(BtlCmd_TryBreakScreens);
PCREF(BtlCmd_TryCamouflage);
PCREF(BtlCmd_TryConversion);
PCREF(BtlCmd_TryConversion2);
PCREF(BtlCmd_TryCopycat);
PCREF(BtlCmd_TryDisable);
PCREF(BtlCmd_TryEncore);
PCREF(BtlCmd_TryEscape);
PCREF(BtlCmd_TryFaintMon);
PCREF(BtlCmd_TryFeint);
PCREF(BtlCmd_TryFling);
PCREF(BtlCmd_TryFutureSight);
PCREF(BtlCmd_TryGrudge);
PCREF(BtlCmd_TryHelpingHand);
PCREF(BtlCmd_TryImprison);
PCREF(BtlCmd_TryKnockOff);
PCREF(BtlCmd_TryLastResort);
PCREF(BtlCmd_TryLightScreen);
PCREF(BtlCmd_TryMeFirst);
PCREF(BtlCmd_TryMetalBurst);
PCREF(BtlCmd_TryMimic);
PCREF(BtlCmd_TryMist);
PCREF(BtlCmd_TryOHKOMove);
PCREF(BtlCmd_TryPartyStatusRefresh);
PCREF(BtlCmd_TryPerishSong);
PCREF(BtlCmd_TryPluck);
PCREF(BtlCmd_TryProtection);
PCREF(BtlCmd_TryPursuit);
PCREF(BtlCmd_TryPyschoShift);
PCREF(BtlCmd_TryRecycle);
PCREF(BtlCmd_TryReflect);
PCREF(BtlCmd_TryReplaceFaintedMon);
PCREF(BtlCmd_TryRestoreStatusOnSwitch);
PCREF(BtlCmd_TrySafeguard);
PCREF(BtlCmd_TrySetMagicCoat);
PCREF(BtlCmd_TrySketch);
PCREF(BtlCmd_TrySleepTalk);
PCREF(BtlCmd_TrySnatch);
PCREF(BtlCmd_TrySpikes);
PCREF(BtlCmd_TrySpite);
PCREF(BtlCmd_TryStealItem);
PCREF(BtlCmd_TrySubstitute);
PCREF(BtlCmd_TrySuckerPunch);
PCREF(BtlCmd_TrySwapItems);
PCREF(BtlCmd_TryTeleport);
PCREF(BtlCmd_TryToxicSpikes);
PCREF(BtlCmd_TryWhirlwind);
PCREF(BtlCmd_TryWish);
PCREF(BtlCmd_TryYawn);
PCREF(BtlCmd_UnlockMoveChoice);
PCREF(BtlCmd_UpdateHealthbar);
PCREF(BtlCmd_UpdateHealthbarValue);
PCREF(BtlCmd_UpdateMonData);
PCREF(BtlCmd_UpdateMonDataFromVar);
PCREF(BtlCmd_UpdateVar);
PCREF(BtlCmd_UpdateVar2);
PCREF(BtlCmd_UseBagItem);
PCREF(BtlCmd_Wait);
PCREF(BtlCmd_WaitButtonABTime);
PCREF(BtlCmd_WaitCatchMonTask);
PCREF(BtlCmd_WaitGetExpTask);
PCREF(BtlCmd_WaitGetExpTaskLoop);
PCREF(BtlCmd_WaitMonSelection);
PCREF(BtlCmd_WaitPokemonMenuResult);
PCREF(BtlCmd_WaitTime);
PCREF(BtlCmd_WaitYesNoResult);
PCREF(BtlCmd_WeatherHPRecovery);
PCREF(BtlCmd_YesNoMenu);

extern const const void * sBattleScriptCommandTable[225];

const const void * sBattleScriptCommandTable[225] = { (const void *)&pcref_BtlCmd_PlayEncounterAnimation, (const void *)&pcref_BtlCmd_SetPokemonEncounter, (const void *)&pcref_BtlCmd_PokemonSlideIn, (const void *)&pcref_BtlCmd_PokemonSendOut, (const void *)&pcref_BtlCmd_RecallPokemon, (const void *)&pcref_BtlCmd_DeletePokemon, (const void *)&pcref_BtlCmd_SetTrainerEncounter, (const void *)&pcref_BtlCmd_ThrowPokeball,
  (const void *)&pcref_BtlCmd_TrainerSlideOut, (const void *)&pcref_BtlCmd_TrainerSlideIn, (const void *)&pcref_BtlCmd_BackgroundSlideIn, (const void *)&pcref_BtlCmd_HealthbarSlideIn, (const void *)&pcref_BtlCmd_HealthbarSlideInDelay, (const void *)&pcref_BtlCmd_HealthbarSlideOut, (const void *)&pcref_BtlCmd_Wait, (const void *)&pcref_BtlCmd_CalcDamage,
  (const void *)&pcref_BtlCmd_CalcDamageRaw, (const void *)&pcref_BtlCmd_PrintAttackMessage, (const void *)&pcref_BtlCmd_PrintMessage, (const void *)&pcref_BtlCmd_PrintGlobalMessage, (const void *)&pcref_BtlCmd_PrintBufferedMessage, (const void *)&pcref_BtlCmd_BufferMessage, (const void *)&pcref_BtlCmd_BufferLocalMessage, (const void *)&pcref_BtlCmd_PlayMoveAnimation,
  (const void *)&pcref_BtlCmd_PlayMoveAnimationOnMons, (const void *)&pcref_BtlCmd_FlickerMon, (const void *)&pcref_BtlCmd_UpdateHealthbarValue, (const void *)&pcref_BtlCmd_UpdateHealthbar, (const void *)&pcref_BtlCmd_TryFaintMon, (const void *)&pcref_BtlCmd_PlayFaintAnimation, (const void *)&pcref_BtlCmd_WaitButtonABTime, (const void *)&pcref_BtlCmd_PlaySound,
  (const void *)&pcref_BtlCmd_CompareVarToValue, (const void *)&pcref_BtlCmd_CompareMonDataToValue, (const void *)&pcref_BtlCmd_FadeOutBattle, (const void *)&pcref_BtlCmd_GoToSubscript, (const void *)&pcref_BtlCmd_GoToEffectScript, (const void *)&pcref_BtlCmd_GoToMoveScript, (const void *)&pcref_BtlCmd_CalcCrit, (const void *)&pcref_BtlCmd_CalcExpGain,
  (const void *)&pcref_BtlCmd_StartGetExpTask, (const void *)&pcref_BtlCmd_WaitGetExpTask, (const void *)&pcref_BtlCmd_WaitGetExpTaskLoop, (const void *)&pcref_BtlCmd_ShowParty, (const void *)&pcref_BtlCmd_WaitMonSelection, (const void *)&pcref_BtlCmd_SwitchAndUpdateMon, (const void *)&pcref_BtlCmd_GoToIfAnySwitches, (const void *)&pcref_BtlCmd_StartCatchMonTask,
  (const void *)&pcref_BtlCmd_WaitCatchMonTask, (const void *)&pcref_BtlCmd_SetMultiHit, (const void *)&pcref_BtlCmd_UpdateVar, (const void *)&pcref_BtlCmd_ChangeStatStage, (const void *)&pcref_BtlCmd_UpdateMonData, (const void *)&pcref_BtlCmd_ClearVolatileStatus, (const void *)&pcref_BtlCmd_ToggleVanish, (const void *)&pcref_BtlCmd_CheckAbility,
  (const void *)&pcref_BtlCmd_Random, (const void *)&pcref_BtlCmd_UpdateVar2, (const void *)&pcref_BtlCmd_UpdateMonDataFromVar, (const void *)&pcref_BtlCmd_Goto, (const void *)&pcref_BtlCmd_Call, (const void *)&pcref_BtlCmd_CallFromVar, (const void *)&pcref_BtlCmd_SetMirrorMove, (const void *)&pcref_BtlCmd_ResetAllStatChanges,
  (const void *)&pcref_BtlCmd_LockMoveChoice, (const void *)&pcref_BtlCmd_UnlockMoveChoice, (const void *)&pcref_BtlCmd_SetHealthbarStatus, (const void *)&pcref_BtlCmd_PrintTrainerMessage, (const void *)&pcref_BtlCmd_PayPrizeMoney, (const void *)&pcref_BtlCmd_PlayBattleAnimation, (const void *)&pcref_BtlCmd_PlayBattleAnimationOnMons, (const void *)&pcref_BtlCmd_PlayBattleAnimationFromVar,
  (const void *)&pcref_BtlCmd_PrintRecallMessage, (const void *)&pcref_BtlCmd_PrintSendOutMessage, (const void *)&pcref_BtlCmd_PrintEncounterMessage, (const void *)&pcref_BtlCmd_PrintFirstSendOutMessage, (const void *)&pcref_BtlCmd_PrintBufferedTrainerMessage, (const void *)&pcref_BtlCmd_TryConversion, (const void *)&pcref_BtlCmd_CompareVarToVar, (const void *)&pcref_BtlCmd_CompareMonDataToVar,
  (const void *)&pcref_BtlCmd_AddPayDayMoney, (const void *)&pcref_BtlCmd_TryLightScreen, (const void *)&pcref_BtlCmd_TryReflect, (const void *)&pcref_BtlCmd_TryMist, (const void *)&pcref_BtlCmd_TryOHKOMove, (const void *)&pcref_BtlCmd_DivideVarByValue, (const void *)&pcref_BtlCmd_DivideVarByVar, (const void *)&pcref_BtlCmd_TryMimic,
  (const void *)&pcref_BtlCmd_Metronome, (const void *)&pcref_BtlCmd_TryDisable, (const void *)&pcref_BtlCmd_Counter, (const void *)&pcref_BtlCmd_MirrorCoat, (const void *)&pcref_BtlCmd_TryEncore, (const void *)&pcref_BtlCmd_TryConversion2, (const void *)&pcref_BtlCmd_TrySketch, (const void *)&pcref_BtlCmd_TrySleepTalk,
  (const void *)&pcref_BtlCmd_CalcFlailPower, (const void *)&pcref_BtlCmd_TrySpite, (const void *)&pcref_BtlCmd_TryPartyStatusRefresh, (const void *)&pcref_BtlCmd_TryStealItem, (const void *)&pcref_BtlCmd_TryProtection, (const void *)&pcref_BtlCmd_TrySubstitute, (const void *)&pcref_BtlCmd_TryWhirlwind, (const void *)&pcref_BtlCmd_Transform,
  (const void *)&pcref_BtlCmd_TrySpikes, (const void *)&pcref_BtlCmd_CheckSpikes, (const void *)&pcref_BtlCmd_TryPerishSong, (const void *)&pcref_BtlCmd_GetTurnOrderBySpeed, (const void *)&pcref_BtlCmd_GoToIfValidMon, (const void *)&pcref_BtlCmd_EndOfTurnWeatherEffect, (const void *)&pcref_BtlCmd_CalcRolloutPower, (const void *)&pcref_BtlCmd_CalcFuryCutterPower,
  (const void *)&pcref_BtlCmd_TryAttract, (const void *)&pcref_BtlCmd_TrySafeguard, (const void *)&pcref_BtlCmd_Present, (const void *)&pcref_BtlCmd_CalcMagnitudePower, (const void *)&pcref_BtlCmd_TryReplaceFaintedMon, (const void *)&pcref_BtlCmd_RapidSpin, (const void *)&pcref_BtlCmd_WeatherHPRecovery, (const void *)&pcref_BtlCmd_CalcHiddenPowerParams,
  (const void *)&pcref_BtlCmd_CopyStatStages, (const void *)&pcref_BtlCmd_TryFutureSight, (const void *)&pcref_BtlCmd_CheckMoveHit, (const void *)&pcref_BtlCmd_TryTeleport, (const void *)&pcref_BtlCmd_BeatUp, (const void *)&pcref_BtlCmd_FollowMe, (const void *)&pcref_BtlCmd_TryHelpingHand, (const void *)&pcref_BtlCmd_TrySwapItems,
  (const void *)&pcref_BtlCmd_TryWish, (const void *)&pcref_BtlCmd_TryAssist, (const void *)&pcref_BtlCmd_TrySetMagicCoat, (const void *)&pcref_BtlCmd_MagicCoat, (const void *)&pcref_BtlCmd_CalcRevengeDamageMul, (const void *)&pcref_BtlCmd_TryBreakScreens, (const void *)&pcref_BtlCmd_TryYawn, (const void *)&pcref_BtlCmd_TryKnockOff,
  (const void *)&pcref_BtlCmd_CalcHPFalloffPower, (const void *)&pcref_BtlCmd_TryImprison, (const void *)&pcref_BtlCmd_TryGrudge, (const void *)&pcref_BtlCmd_TrySnatch, (const void *)&pcref_BtlCmd_CalcWeightBasedPower, (const void *)&pcref_BtlCmd_CalcWeatherBallParams, (const void *)&pcref_BtlCmd_TryPursuit, (const void *)&pcref_BtlCmd_ApplyTypeEffectiveness,
  (const void *)&pcref_BtlCmd_IfTurnFlag, (const void *)&pcref_BtlCmd_SetTurnFlag, (const void *)&pcref_BtlCmd_CalcGyroBallPower, (const void *)&pcref_BtlCmd_TryMetalBurst, (const void *)&pcref_BtlCmd_CalcPaybackPower, (const void *)&pcref_BtlCmd_CalcTrumpCardPower, (const void *)&pcref_BtlCmd_CalcWringOutPower, (const void *)&pcref_BtlCmd_TryMeFirst,
  (const void *)&pcref_BtlCmd_TryCopycat, (const void *)&pcref_BtlCmd_CalcPunishmentPower, (const void *)&pcref_BtlCmd_TrySuckerPunch, (const void *)&pcref_BtlCmd_CheckSideCondition, (const void *)&pcref_BtlCmd_TryFeint, (const void *)&pcref_BtlCmd_TryPyschoShift, (const void *)&pcref_BtlCmd_TryLastResort, (const void *)&pcref_BtlCmd_TryToxicSpikes,
  (const void *)&pcref_BtlCmd_CheckToxicSpikes, (const void *)&pcref_BtlCmd_CheckIgnorableAbility, (const void *)&pcref_BtlCmd_IfSameSide, (const void *)&pcref_BtlCmd_GenerateEndOfBattleItem, (const void *)&pcref_BtlCmd_TrickRoom, (const void *)&pcref_BtlCmd_IfMovedThisTurn, (const void *)&pcref_BtlCmd_CheckItemHoldEffect, (const void *)&pcref_BtlCmd_GetItemHoldEffect,
  (const void *)&pcref_BtlCmd_GetItemEffectParam, (const void *)&pcref_BtlCmd_TryCamouflage, (const void *)&pcref_BtlCmd_GetTerrainMove, (const void *)&pcref_BtlCmd_GetTerrainSecondaryEffect, (const void *)&pcref_BtlCmd_CalcNaturalGiftParams, (const void *)&pcref_BtlCmd_TryPluck, (const void *)&pcref_BtlCmd_TryFling, (const void *)&pcref_BtlCmd_YesNoMenu,
  (const void *)&pcref_BtlCmd_WaitYesNoResult, (const void *)&pcref_BtlCmd_ChoosePokemonMenu, (const void *)&pcref_BtlCmd_WaitPokemonMenuResult, (const void *)&pcref_BtlCmd_SetLinkBattleResult, (const void *)&pcref_BtlCmd_CheckStealthRock, (const void *)&pcref_BtlCmd_CheckEffectActivation, (const void *)&pcref_BtlCmd_CheckChatterActivation, (const void *)&pcref_BtlCmd_GetCurrentMoveData,
  (const void *)&pcref_BtlCmd_SetMosaic, (const void *)&pcref_BtlCmd_ChangeForm, (const void *)&pcref_BtlCmd_SetBattleBackground, (const void *)&pcref_BtlCmd_UseBagItem, (const void *)&pcref_BtlCmd_TryEscape, (const void *)&pcref_BtlCmd_ShowBattleStartPartyGauge, (const void *)&pcref_BtlCmd_HideBattleStartPartyGauge, (const void *)&pcref_BtlCmd_ShowPartyGauge,
  (const void *)&pcref_BtlCmd_HidePartyGauge, (const void *)&pcref_BtlCmd_LoadPartyGaugeGraphics, (const void *)&pcref_BtlCmd_FreePartyGaugeGraphics, (const void *)&pcref_BtlCmd_IncrementGameStat, (const void *)&pcref_BtlCmd_RestoreSprite, (const void *)&pcref_BtlCmd_TriggerAbilityOnHit, (const void *)&pcref_BtlCmd_SpriteToOAM, (const void *)&pcref_BtlCmd_OAMToSprite,
  (const void *)&pcref_BtlCmd_CheckWhiteout, (const void *)&pcref_BtlCmd_BoostRandomStatBy2, (const void *)&pcref_BtlCmd_RemoveItem, (const void *)&pcref_BtlCmd_TryRecycle, (const void *)&pcref_BtlCmd_CheckItemHoldEffectOnHit, (const void *)&pcref_BtlCmd_PrintBattleResultMessage, (const void *)&pcref_BtlCmd_PrintEscapeMessage, (const void *)&pcref_BtlCmd_PrintForfeitMessage,
  (const void *)&pcref_BtlCmd_CheckHoldOnWith1HP, (const void *)&pcref_BtlCmd_TryRestoreStatusOnSwitch, (const void *)&pcref_BtlCmd_CheckSubstitute, (const void *)&pcref_BtlCmd_CheckIgnoreWeather, (const void *)&pcref_BtlCmd_SetRandomTarget, (const void *)&pcref_BtlCmd_CheckItemHoldEffectOnUTurn, (const void *)&pcref_BtlCmd_RefreshSprite, (const void *)&pcref_BtlCmd_PlayMoveHitSound,
  (const void *)&pcref_BtlCmd_PlayBGM, (const void *)&pcref_BtlCmd_CheckSafariGameDone, (const void *)&pcref_BtlCmd_WaitTime, (const void *)&pcref_BtlCmd_CheckCurMoveIsType, (const void *)&pcref_BtlCmd_LoadArchivedMonData, (const void *)&pcref_BtlCmd_RefreshMonData, (const void *)&pcref_BtlCmd_222, (const void *)&pcref_BtlCmd_223,
  (const void *)&pcref_BtlCmd_EndScript };
