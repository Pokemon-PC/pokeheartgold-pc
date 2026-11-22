/* Generated from asm/trainer_ai_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(AICmd_AddToMoveScore);
PCREF(AICmd_CalcMaxEffectiveness);
PCREF(AICmd_CheckBattlerAbility);
PCREF(AICmd_CheckIfHighestDamageWithPartner);
PCREF(AICmd_CountAlivePartyBattlers);
PCREF(AICmd_DiffStatStages);
PCREF(AICmd_Dummy3E);
PCREF(AICmd_Dummy3F);
PCREF(AICmd_Escape);
PCREF(AICmd_FlagBattlerIsType);
PCREF(AICmd_FlagMoveDamageScore);
PCREF(AICmd_GoTo);
PCREF(AICmd_IfActivatedFlashFire);
PCREF(AICmd_IfAnyPartyMemberMissingHP);
PCREF(AICmd_IfAnyPartyMemberMissingPP);
PCREF(AICmd_IfAttackerHasDamagingMoves);
PCREF(AICmd_IfAttackerHasNoDamagingMoves);
PCREF(AICmd_IfBattlerDealsMoreDamage);
PCREF(AICmd_IfBattlerFainted);
PCREF(AICmd_IfBattlerHasEqualStat);
PCREF(AICmd_IfBattlerHasHigherStat);
PCREF(AICmd_IfBattlerHasLowerStat);
PCREF(AICmd_IfBattlerNotFainted);
PCREF(AICmd_IfBattlerUnderEffect);
PCREF(AICmd_IfCanUseLastResort);
PCREF(AICmd_IfCurrentMoveDoesNotKO);
PCREF(AICmd_IfCurrentMoveEffectEqualTo);
PCREF(AICmd_IfCurrentMoveEffectNotEqualTo);
PCREF(AICmd_IfCurrentMoveKOs);
PCREF(AICmd_IfCurrentMoveMatchesEffect);
PCREF(AICmd_IfFieldConditionActive);
PCREF(AICmd_IfHPPercentEqualTo);
PCREF(AICmd_IfHPPercentGreaterThan);
PCREF(AICmd_IfHPPercentLessThan);
PCREF(AICmd_IfHPPercentNotEqualTo);
PCREF(AICmd_IfHasSuperEffectiveMove);
PCREF(AICmd_IfHeldItemEqualTo);
PCREF(AICmd_IfLevel);
PCREF(AICmd_IfLoadedEqualTo);
PCREF(AICmd_IfLoadedGreaterThan);
PCREF(AICmd_IfLoadedInTable);
PCREF(AICmd_IfLoadedLessThan);
PCREF(AICmd_IfLoadedMask);
PCREF(AICmd_IfLoadedNotEqualTo);
PCREF(AICmd_IfLoadedNotInTable);
PCREF(AICmd_IfLoadedNotMask);
PCREF(AICmd_IfMoveEffect);
PCREF(AICmd_IfMoveEffectKnown);
PCREF(AICmd_IfMoveEffectNotKnown);
PCREF(AICmd_IfMoveEffectivenessEquals);
PCREF(AICmd_IfMoveEqualTo);
PCREF(AICmd_IfMoveKnown);
PCREF(AICmd_IfMoveNotEqualTo);
PCREF(AICmd_IfMoveNotKnown);
PCREF(AICmd_IfNotMoveEffect);
PCREF(AICmd_IfNotSideCondition);
PCREF(AICmd_IfNotStatus);
PCREF(AICmd_IfNotStatus2);
PCREF(AICmd_IfPartyMemberDealsMoreDamage);
PCREF(AICmd_IfPartyMemberNotStatus);
PCREF(AICmd_IfPartyMemberStatus);
PCREF(AICmd_IfRandomEqualTo);
PCREF(AICmd_IfRandomGreaterThan);
PCREF(AICmd_IfRandomLessThan);
PCREF(AICmd_IfRandomNotEqualTo);
PCREF(AICmd_IfSideCondition);
PCREF(AICmd_IfSpeedCompareEqualTo);
PCREF(AICmd_IfSpeedCompareNotEqualTo);
PCREF(AICmd_IfStatStageEqualTo);
PCREF(AICmd_IfStatStageGreaterThan);
PCREF(AICmd_IfStatStageLessThan);
PCREF(AICmd_IfStatStageNotEqualTo);
PCREF(AICmd_IfStatus);
PCREF(AICmd_IfStatus2);
PCREF(AICmd_IfTargetIsNotTaunted);
PCREF(AICmd_IfTargetIsPartner);
PCREF(AICmd_IfTargetIsTaunted);
PCREF(AICmd_IfTempEqualTo);
PCREF(AICmd_IfTempNotEqualTo);
PCREF(AICmd_LoadAbility);
PCREF(AICmd_LoadBattleType);
PCREF(AICmd_LoadBattlerAbility);
PCREF(AICmd_LoadBattlerPreviousMove);
PCREF(AICmd_LoadBattlerSpeedOrderPosition);
PCREF(AICmd_LoadBattlerTurnCount);
PCREF(AICmd_LoadCurrentMove);
PCREF(AICmd_LoadCurrentMoveCategory);
PCREF(AICmd_LoadCurrentMoveEffect);
PCREF(AICmd_LoadCurrentMovePP);
PCREF(AICmd_LoadCurrentWeather);
PCREF(AICmd_LoadDefenderLastUsedMoveCategory);
PCREF(AICmd_LoadEffectOfLoadedMove);
PCREF(AICmd_LoadFlingPower);
PCREF(AICmd_LoadGender);
PCREF(AICmd_LoadHeldItem);
PCREF(AICmd_LoadHeldItemEffect);
PCREF(AICmd_LoadIsFirstTurnInBattle);
PCREF(AICmd_LoadMovePower);
PCREF(AICmd_LoadPowerOfLoadedMove);
PCREF(AICmd_LoadProtectSuccessChain);
PCREF(AICmd_LoadRecycleItem);
PCREF(AICmd_LoadSpikesLayers);
PCREF(AICmd_LoadStockpileCount);
PCREF(AICmd_LoadTurnCount);
PCREF(AICmd_LoadTypeFrom);
PCREF(AICmd_LoadTypeOfLoadedMove);
PCREF(AICmd_PopOrEnd);
PCREF(AICmd_PushAndGoTo);
PCREF(AICmd_SumPositiveStatStages);

extern const const void * sAICommandTable[109];

const const void * sAICommandTable[109] = { (const void *)&pcref_AICmd_IfRandomLessThan, (const void *)&pcref_AICmd_IfRandomGreaterThan, (const void *)&pcref_AICmd_IfRandomEqualTo, (const void *)&pcref_AICmd_IfRandomNotEqualTo, (const void *)&pcref_AICmd_AddToMoveScore, (const void *)&pcref_AICmd_IfHPPercentLessThan, (const void *)&pcref_AICmd_IfHPPercentGreaterThan, (const void *)&pcref_AICmd_IfHPPercentEqualTo,
  (const void *)&pcref_AICmd_IfHPPercentNotEqualTo, (const void *)&pcref_AICmd_IfStatus, (const void *)&pcref_AICmd_IfNotStatus, (const void *)&pcref_AICmd_IfStatus2, (const void *)&pcref_AICmd_IfNotStatus2, (const void *)&pcref_AICmd_IfMoveEffect, (const void *)&pcref_AICmd_IfNotMoveEffect, (const void *)&pcref_AICmd_IfSideCondition,
  (const void *)&pcref_AICmd_IfNotSideCondition, (const void *)&pcref_AICmd_IfLoadedLessThan, (const void *)&pcref_AICmd_IfLoadedGreaterThan, (const void *)&pcref_AICmd_IfLoadedEqualTo, (const void *)&pcref_AICmd_IfLoadedNotEqualTo, (const void *)&pcref_AICmd_IfLoadedMask, (const void *)&pcref_AICmd_IfLoadedNotMask, (const void *)&pcref_AICmd_IfMoveEqualTo,
  (const void *)&pcref_AICmd_IfMoveNotEqualTo, (const void *)&pcref_AICmd_IfLoadedInTable, (const void *)&pcref_AICmd_IfLoadedNotInTable, (const void *)&pcref_AICmd_IfAttackerHasDamagingMoves, (const void *)&pcref_AICmd_IfAttackerHasNoDamagingMoves, (const void *)&pcref_AICmd_LoadTurnCount, (const void *)&pcref_AICmd_LoadTypeFrom, (const void *)&pcref_AICmd_LoadMovePower,
  (const void *)&pcref_AICmd_FlagMoveDamageScore, (const void *)&pcref_AICmd_LoadBattlerPreviousMove, (const void *)&pcref_AICmd_IfTempEqualTo, (const void *)&pcref_AICmd_IfTempNotEqualTo, (const void *)&pcref_AICmd_IfSpeedCompareEqualTo, (const void *)&pcref_AICmd_IfSpeedCompareNotEqualTo, (const void *)&pcref_AICmd_CountAlivePartyBattlers, (const void *)&pcref_AICmd_LoadCurrentMove,
  (const void *)&pcref_AICmd_LoadCurrentMoveEffect, (const void *)&pcref_AICmd_LoadBattlerAbility, (const void *)&pcref_AICmd_CalcMaxEffectiveness, (const void *)&pcref_AICmd_IfMoveEffectivenessEquals, (const void *)&pcref_AICmd_IfPartyMemberStatus, (const void *)&pcref_AICmd_IfPartyMemberNotStatus, (const void *)&pcref_AICmd_LoadCurrentWeather, (const void *)&pcref_AICmd_IfCurrentMoveEffectEqualTo,
  (const void *)&pcref_AICmd_IfCurrentMoveEffectNotEqualTo, (const void *)&pcref_AICmd_IfStatStageLessThan, (const void *)&pcref_AICmd_IfStatStageGreaterThan, (const void *)&pcref_AICmd_IfStatStageEqualTo, (const void *)&pcref_AICmd_IfStatStageNotEqualTo, (const void *)&pcref_AICmd_IfCurrentMoveKOs, (const void *)&pcref_AICmd_IfCurrentMoveDoesNotKO, (const void *)&pcref_AICmd_IfMoveKnown,
  (const void *)&pcref_AICmd_IfMoveNotKnown, (const void *)&pcref_AICmd_IfMoveEffectKnown, (const void *)&pcref_AICmd_IfMoveEffectNotKnown, (const void *)&pcref_AICmd_IfBattlerUnderEffect, (const void *)&pcref_AICmd_IfCurrentMoveMatchesEffect, (const void *)&pcref_AICmd_Escape, (const void *)&pcref_AICmd_Dummy3E, (const void *)&pcref_AICmd_Dummy3F,
  (const void *)&pcref_AICmd_LoadHeldItem, (const void *)&pcref_AICmd_LoadHeldItemEffect, (const void *)&pcref_AICmd_LoadGender, (const void *)&pcref_AICmd_LoadIsFirstTurnInBattle, (const void *)&pcref_AICmd_LoadStockpileCount, (const void *)&pcref_AICmd_LoadBattleType, (const void *)&pcref_AICmd_LoadRecycleItem, (const void *)&pcref_AICmd_LoadTypeOfLoadedMove,
  (const void *)&pcref_AICmd_LoadPowerOfLoadedMove, (const void *)&pcref_AICmd_LoadEffectOfLoadedMove, (const void *)&pcref_AICmd_LoadProtectSuccessChain, (const void *)&pcref_AICmd_PushAndGoTo, (const void *)&pcref_AICmd_GoTo, (const void *)&pcref_AICmd_PopOrEnd, (const void *)&pcref_AICmd_IfLevel, (const void *)&pcref_AICmd_IfTargetIsTaunted,
  (const void *)&pcref_AICmd_IfTargetIsNotTaunted, (const void *)&pcref_AICmd_IfTargetIsPartner, (const void *)&pcref_AICmd_FlagBattlerIsType, (const void *)&pcref_AICmd_CheckBattlerAbility, (const void *)&pcref_AICmd_IfActivatedFlashFire, (const void *)&pcref_AICmd_IfHeldItemEqualTo, (const void *)&pcref_AICmd_IfFieldConditionActive, (const void *)&pcref_AICmd_LoadSpikesLayers,
  (const void *)&pcref_AICmd_IfAnyPartyMemberMissingHP, (const void *)&pcref_AICmd_IfAnyPartyMemberMissingPP, (const void *)&pcref_AICmd_LoadFlingPower, (const void *)&pcref_AICmd_LoadCurrentMovePP, (const void *)&pcref_AICmd_IfCanUseLastResort, (const void *)&pcref_AICmd_LoadCurrentMoveCategory, (const void *)&pcref_AICmd_LoadDefenderLastUsedMoveCategory, (const void *)&pcref_AICmd_LoadBattlerSpeedOrderPosition,
  (const void *)&pcref_AICmd_LoadBattlerTurnCount, (const void *)&pcref_AICmd_IfPartyMemberDealsMoreDamage, (const void *)&pcref_AICmd_IfHasSuperEffectiveMove, (const void *)&pcref_AICmd_IfBattlerDealsMoreDamage, (const void *)&pcref_AICmd_SumPositiveStatStages, (const void *)&pcref_AICmd_DiffStatStages, (const void *)&pcref_AICmd_IfBattlerHasHigherStat, (const void *)&pcref_AICmd_IfBattlerHasLowerStat,
  (const void *)&pcref_AICmd_IfBattlerHasEqualStat, (const void *)&pcref_AICmd_CheckIfHighestDamageWithPartner, (const void *)&pcref_AICmd_IfBattlerFainted, (const void *)&pcref_AICmd_IfBattlerNotFainted, (const void *)&pcref_AICmd_LoadAbility };
