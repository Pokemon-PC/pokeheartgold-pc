/* Generated from asm/pokeathlon_event_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(PokeathlonBlockSmash_Finish);
PCREF(PokeathlonBlockSmash_Intro);
PCREF(PokeathlonBlockSmash_Play);
PCREF(PokeathlonDiscCatch_Finish);
PCREF(PokeathlonDiscCatch_Intro);
PCREF(PokeathlonDiscCatch_Play);
PCREF(PokeathlonEvent_BlockSmashPoints);
PCREF(PokeathlonEvent_CalcPointsFromRanks);
PCREF(PokeathlonEvent_CalcPointsFromScores);
PCREF(PokeathlonEvent_CirclePushPoints);
PCREF(PokeathlonEvent_DiscCatchPoints);
PCREF(PokeathlonEvent_HurdleDashPoints);
PCREF(PokeathlonEvent_LampJumpPoints);
PCREF(PokeathlonEvent_PennantCapturePoints);
PCREF(PokeathlonEvent_RelayRunPoints);
PCREF(PokeathlonEvent_RingDropPoints);
PCREF(PokeathlonEvent_SnowThrowPoints);
PCREF(PokeathlonHurdleDash_CalcScores);
PCREF(PokeathlonHurdleDash_Play);
PCREF(PokeathlonHurdleDash_Start);
PCREF(PokeathlonLampJump_CalcScores);
PCREF(PokeathlonLampJump_Play);
PCREF(PokeathlonPennantCapture_State_End);
PCREF(PokeathlonPennantCapture_State_Play);
PCREF(PokeathlonPennantCapture_State_Setup);
PCREF(PokeathlonRelayRun_Play);
PCREF(PokeathlonRelayRun_SaveScores);
PCREF(PokeathlonRelayRun_Start);
PCREF(PokeathlonResults_Run);
PCREF(PokeathlonSnowThrow_Play);
PCREF(PokeathlonSnowThrow_SaveScores);
PCREF(gPokeathlonBlockSmashSpotHitboxes_Kind0);
PCREF(gPokeathlonBlockSmashSpotHitboxes_Kind1);
PCREF(gPokeathlonBlockSmashSpotHitboxes_Kind2);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    int32_t touching;
    int32_t unk04;
    const void * other;
    int32_t unk0C;
} pcm_PokeathlonCirclePushContact_0;

extern const const void * gPokeathlonEventPointsCalcFuncs[10];
extern const const void * gPokeathlonEventScorePointsFuncs[10];
extern const void * gPokeathlonLampJumpStates[2];
extern const void * gPokeathlonResultsAnnouncementSteps[1];
extern const void * gPokeathlonHurdleDashStates[3];
extern const void * gPokeathlonRelayRunStates[3];
extern const void * gPokeathlonSnowThrowStates[2];
extern const void * gPokeathlonPennantCaptureStates[3];
extern const void * gPokeathlonBlockSmashStates[3];
extern const void * gPokeathlonBlockSmashSpotHitboxes[3];
extern const void * gPokeathlonDiscCatchStates[3];
extern pcm_PokeathlonCirclePushContact_0 gPokeathlonCirclePushContacts[12][12];

const const void * gPokeathlonEventPointsCalcFuncs[10] = { (const void *)&pcref_PokeathlonEvent_CalcPointsFromScores, (const void *)&pcref_PokeathlonEvent_CalcPointsFromScores, (const void *)&pcref_PokeathlonEvent_CalcPointsFromScores, (const void *)&pcref_PokeathlonEvent_CalcPointsFromScores, (const void *)&pcref_PokeathlonEvent_CalcPointsFromScores, (const void *)&pcref_PokeathlonEvent_CalcPointsFromScores, (const void *)&pcref_PokeathlonEvent_CalcPointsFromScores, (const void *)&pcref_PokeathlonEvent_CalcPointsFromScores,
  (const void *)&pcref_PokeathlonEvent_CalcPointsFromScores, (const void *)&pcref_PokeathlonEvent_CalcPointsFromRanks };

const const void * gPokeathlonEventScorePointsFuncs[10] = { (const void *)&pcref_PokeathlonEvent_HurdleDashPoints, (const void *)&pcref_PokeathlonEvent_PennantCapturePoints, (const void *)&pcref_PokeathlonEvent_CirclePushPoints, (const void *)&pcref_PokeathlonEvent_BlockSmashPoints, (const void *)&pcref_PokeathlonEvent_DiscCatchPoints, (const void *)&pcref_PokeathlonEvent_LampJumpPoints, (const void *)&pcref_PokeathlonEvent_RelayRunPoints, (const void *)&pcref_PokeathlonEvent_RingDropPoints,
  (const void *)&pcref_PokeathlonEvent_SnowThrowPoints, NULL };

const void * gPokeathlonLampJumpStates[2] = {
    (const void *)&pcref_PokeathlonLampJump_Play,
    (const void *)&pcref_PokeathlonLampJump_CalcScores,
};

const void * gPokeathlonResultsAnnouncementSteps[1] = { (const void *)&pcref_PokeathlonResults_Run };

const void * gPokeathlonHurdleDashStates[3] = {
    (const void *)&pcref_PokeathlonHurdleDash_Start,
    (const void *)&pcref_PokeathlonHurdleDash_Play,
    (const void *)&pcref_PokeathlonHurdleDash_CalcScores,
};

const void * gPokeathlonRelayRunStates[3] = {
    (const void *)&pcref_PokeathlonRelayRun_Start,
    (const void *)&pcref_PokeathlonRelayRun_Play,
    (const void *)&pcref_PokeathlonRelayRun_SaveScores,
};

const void * gPokeathlonSnowThrowStates[2] = {
    (const void *)&pcref_PokeathlonSnowThrow_Play,
    (const void *)&pcref_PokeathlonSnowThrow_SaveScores,
};

const void * gPokeathlonPennantCaptureStates[3] = {
    (const void *)&pcref_PokeathlonPennantCapture_State_Setup,
    (const void *)&pcref_PokeathlonPennantCapture_State_Play,
    (const void *)&pcref_PokeathlonPennantCapture_State_End,
};

const void * gPokeathlonBlockSmashStates[3] = {
    (const void *)&pcref_PokeathlonBlockSmash_Intro,
    (const void *)&pcref_PokeathlonBlockSmash_Play,
    (const void *)&pcref_PokeathlonBlockSmash_Finish,
};

const void * gPokeathlonBlockSmashSpotHitboxes[3] = { (const void *)&pcref_gPokeathlonBlockSmashSpotHitboxes_Kind0, (const void *)&pcref_gPokeathlonBlockSmashSpotHitboxes_Kind1, (const void *)&pcref_gPokeathlonBlockSmashSpotHitboxes_Kind2 };

const void * gPokeathlonDiscCatchStates[3] = {
    (const void *)&pcref_PokeathlonDiscCatch_Intro,
    (const void *)&pcref_PokeathlonDiscCatch_Play,
    (const void *)&pcref_PokeathlonDiscCatch_Finish,
};

pcm_PokeathlonCirclePushContact_0 gPokeathlonCirclePushContacts[12][12];
