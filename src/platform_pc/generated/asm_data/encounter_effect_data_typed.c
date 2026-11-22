/* Generated from asm/encounter_effect_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(EncounterEffect_Champion);
PCREF(EncounterEffect_Double);
PCREF(EncounterEffect_EliteFourBruno);
PCREF(EncounterEffect_EliteFourKaren);
PCREF(EncounterEffect_EliteFourKoga);
PCREF(EncounterEffect_EliteFourWill);
PCREF(EncounterEffect_ExecutiveArcher);
PCREF(EncounterEffect_ExecutiveAriana);
PCREF(EncounterEffect_ExecutivePetrel);
PCREF(EncounterEffect_ExecutiveProton);
PCREF(EncounterEffect_FrontierOrLinkSingle);
PCREF(EncounterEffect_HoOh);
PCREF(EncounterEffect_KimonoGirl);
PCREF(EncounterEffect_LeaderBlaine);
PCREF(EncounterEffect_LeaderBlue);
PCREF(EncounterEffect_LeaderBrock);
PCREF(EncounterEffect_LeaderBugsy);
PCREF(EncounterEffect_LeaderChuck);
PCREF(EncounterEffect_LeaderClair);
PCREF(EncounterEffect_LeaderErika);
PCREF(EncounterEffect_LeaderFalkner);
PCREF(EncounterEffect_LeaderJanine);
PCREF(EncounterEffect_LeaderJasmine);
PCREF(EncounterEffect_LeaderLtSurge);
PCREF(EncounterEffect_LeaderMisty);
PCREF(EncounterEffect_LeaderMorty);
PCREF(EncounterEffect_LeaderPryce);
PCREF(EncounterEffect_LeaderSabrina);
PCREF(EncounterEffect_LeaderWhitney);
PCREF(EncounterEffect_Legendary);
PCREF(EncounterEffect_Lugia);
PCREF(EncounterEffect_PkmnTrainerRed);
PCREF(EncounterEffect_Rival);
PCREF(EncounterEffect_RocketBoss);
PCREF(EncounterEffect_TeamRocket);
PCREF(EncounterEffect_TrainerBallDrop);
PCREF(EncounterEffect_TrainerBallFall);
PCREF(EncounterEffect_TrainerFadeSpin);
PCREF(EncounterEffect_TrainerRisingBall);
PCREF(EncounterEffect_TrainerSpinApart);
PCREF(EncounterEffect_TrainerSpinZoom);
PCREF(EncounterEffect_WildDiagonalsBlack);
PCREF(EncounterEffect_WildDiagonalsWhite);
PCREF(EncounterEffect_WildRowsBlack);
PCREF(EncounterEffect_WildRowsWhite);
PCREF(EncounterEffect_WildWaveBlack);
PCREF(EncounterEffect_WildWaveWhite);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    const void * particles;
    int32_t effect;
    uint32_t frameCount;
} pcm_EncounterEffectState_0;

extern const const void * gEncounterEffectFuncs[47];
extern pcm_EncounterEffectState_0 gEncounterEffectState;

const const void * gEncounterEffectFuncs[47] = { (const void *)&pcref_EncounterEffect_WildRowsWhite, (const void *)&pcref_EncounterEffect_WildRowsBlack, (const void *)&pcref_EncounterEffect_WildWaveWhite, (const void *)&pcref_EncounterEffect_WildWaveBlack, (const void *)&pcref_EncounterEffect_WildDiagonalsWhite, (const void *)&pcref_EncounterEffect_WildDiagonalsBlack, (const void *)&pcref_EncounterEffect_TrainerSpinApart, (const void *)&pcref_EncounterEffect_TrainerSpinZoom,
  (const void *)&pcref_EncounterEffect_TrainerBallDrop, (const void *)&pcref_EncounterEffect_TrainerFadeSpin, (const void *)&pcref_EncounterEffect_TrainerBallFall, (const void *)&pcref_EncounterEffect_TrainerRisingBall, (const void *)&pcref_EncounterEffect_LeaderFalkner, (const void *)&pcref_EncounterEffect_LeaderBugsy, (const void *)&pcref_EncounterEffect_LeaderWhitney, (const void *)&pcref_EncounterEffect_LeaderMorty,
  (const void *)&pcref_EncounterEffect_LeaderJasmine, (const void *)&pcref_EncounterEffect_LeaderChuck, (const void *)&pcref_EncounterEffect_LeaderPryce, (const void *)&pcref_EncounterEffect_LeaderClair, (const void *)&pcref_EncounterEffect_LeaderBrock, (const void *)&pcref_EncounterEffect_LeaderMisty, (const void *)&pcref_EncounterEffect_LeaderLtSurge, (const void *)&pcref_EncounterEffect_LeaderErika,
  (const void *)&pcref_EncounterEffect_LeaderJanine, (const void *)&pcref_EncounterEffect_LeaderSabrina, (const void *)&pcref_EncounterEffect_LeaderBlaine, (const void *)&pcref_EncounterEffect_LeaderBlue, (const void *)&pcref_EncounterEffect_Rival, (const void *)&pcref_EncounterEffect_EliteFourWill, (const void *)&pcref_EncounterEffect_EliteFourKoga, (const void *)&pcref_EncounterEffect_EliteFourBruno,
  (const void *)&pcref_EncounterEffect_EliteFourKaren, (const void *)&pcref_EncounterEffect_Champion, (const void *)&pcref_EncounterEffect_Legendary, (const void *)&pcref_EncounterEffect_HoOh, (const void *)&pcref_EncounterEffect_Lugia, (const void *)&pcref_EncounterEffect_FrontierOrLinkSingle, (const void *)&pcref_EncounterEffect_Double, (const void *)&pcref_EncounterEffect_TeamRocket,
  (const void *)&pcref_EncounterEffect_ExecutivePetrel, (const void *)&pcref_EncounterEffect_ExecutiveProton, (const void *)&pcref_EncounterEffect_ExecutiveArcher, (const void *)&pcref_EncounterEffect_ExecutiveAriana, (const void *)&pcref_EncounterEffect_RocketBoss, (const void *)&pcref_EncounterEffect_KimonoGirl, (const void *)&pcref_EncounterEffect_PkmnTrainerRed };

pcm_EncounterEffectState_0 gEncounterEffectState;
