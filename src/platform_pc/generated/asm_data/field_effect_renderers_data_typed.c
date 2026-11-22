/* Generated from asm/field_effect_renderers_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(ApricornRegrowth_Free);
PCREF(ApricornRegrowth_New);
PCREF(EmoteBubble_Free);
PCREF(EmoteBubble_New);
PCREF(EmoteMark_Free);
PCREF(EmoteMark_New);
PCREF(FieldShadow_Free);
PCREF(FieldShadow_New);
PCREF(FlashDarkness_Free);
PCREF(FlashDarkness_New);
PCREF(FollowMonBall_Free);
PCREF(FollowMonBall_New);
PCREF(Footprints_Free);
PCREF(Footprints_New);
PCREF(GroundDust_Free);
PCREF(GroundDust_New);
PCREF(HiddenObjectCover_Free);
PCREF(HiddenObjectCover_New);
PCREF(MapObjectModelList_Free);
PCREF(MapObjectModelList_New);
PCREF(MudSplash_Free);
PCREF(MudSplash_New);
PCREF(PuddleSplash_Free);
PCREF(PuddleSplash_New);
PCREF(Reflection_Free);
PCREF(Reflection_New);
PCREF(RockClimb_Free);
PCREF(RockClimb_New);
PCREF(ShallowWaterRipple_Free);
PCREF(ShallowWaterRipple_New);
PCREF(ShayminFormChange_Free);
PCREF(ShayminFormChange_New);
PCREF(SurfMount_Free);
PCREF(SurfMount_New);
PCREF(TallGrass_Free);
PCREF(TallGrass_New);
PCREF(TrainerReveal_Free);
PCREF(TrainerReveal_New);
PCREF(UnionChatMarker_Free);
PCREF(UnionChatMarker_New);
PCREF(UnusedBillboard_Free);
PCREF(UnusedBillboard_New);
PCREF(VeryTallGrass_Free);
PCREF(VeryTallGrass_New);
PCREF(WarpArrow_Free);
PCREF(WarpArrow_New);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    uint32_t id;
    const void * init;
    const void * free;
} pcm_FieldEffectRendererTemplate_0;

extern const pcm_FieldEffectRendererTemplate_0 gFieldEffectRenderers[24];

const pcm_FieldEffectRendererTemplate_0 gFieldEffectRenderers[24] = {
    {
        .id = 0,
        .init = (const void *)&pcref_FieldShadow_New,
        .free = (const void *)&pcref_FieldShadow_Free,
    },
    {
        .id = 1,
        .init = (const void *)&pcref_Reflection_New,
        .free = (const void *)&pcref_Reflection_Free,
    },
    {
        .id = 2,
        .init = (const void *)&pcref_Footprints_New,
        .free = (const void *)&pcref_Footprints_Free,
    },
    {
        .id = 3,
        .init = (const void *)&pcref_WarpArrow_New,
        .free = (const void *)&pcref_WarpArrow_Free,
    },
    {
        .id = 4,
        .init = (const void *)&pcref_SurfMount_New,
        .free = (const void *)&pcref_SurfMount_Free,
    },
    {
        .id = 5,
        .init = (const void *)&pcref_RockClimb_New,
        .free = (const void *)&pcref_RockClimb_Free,
    },
    {
        .id = 6,
        .init = (const void *)&pcref_PuddleSplash_New,
        .free = (const void *)&pcref_PuddleSplash_Free,
    },
    {
        .id = 7,
        .init = (const void *)&pcref_MudSplash_New,
        .free = (const void *)&pcref_MudSplash_Free,
    },
    {
        .id = 8,
        .init = (const void *)&pcref_TallGrass_New,
        .free = (const void *)&pcref_TallGrass_Free,
    },
    {
        .id = 9,
        .init = (const void *)&pcref_EmoteMark_New,
        .free = (const void *)&pcref_EmoteMark_Free,
    },
    {
        .id = 10,
        .init = (const void *)&pcref_ShallowWaterRipple_New,
        .free = (const void *)&pcref_ShallowWaterRipple_Free,
    },
    {
        .id = 11,
        .init = (const void *)&pcref_GroundDust_New,
        .free = (const void *)&pcref_GroundDust_Free,
    },
    {
        .id = 12,
        .init = (const void *)&pcref_VeryTallGrass_New,
        .free = (const void *)&pcref_VeryTallGrass_Free,
    },
    {
        .id = 13,
        .init = (const void *)&pcref_UnusedBillboard_New,
        .free = (const void *)&pcref_UnusedBillboard_Free,
    },
    {
        .id = 14,
        .init = (const void *)&pcref_HiddenObjectCover_New,
        .free = (const void *)&pcref_HiddenObjectCover_Free,
    },
    {
        .id = 15,
        .init = (const void *)&pcref_TrainerReveal_New,
        .free = (const void *)&pcref_TrainerReveal_Free,
    },
    {
        .id = 16,
        .init = (const void *)&pcref_ApricornRegrowth_New,
        .free = (const void *)&pcref_ApricornRegrowth_Free,
    },
    {
        .id = 17,
        .init = (const void *)&pcref_FollowMonBall_New,
        .free = (const void *)&pcref_FollowMonBall_Free,
    },
    {
        .id = 18,
        .init = (const void *)&pcref_EmoteBubble_New,
        .free = (const void *)&pcref_EmoteBubble_Free,
    },
    {
        .id = 19,
        .init = (const void *)&pcref_FlashDarkness_New,
        .free = (const void *)&pcref_FlashDarkness_Free,
    },
    {
        .id = 20,
        .init = (const void *)&pcref_MapObjectModelList_New,
        .free = (const void *)&pcref_MapObjectModelList_Free,
    },
    {
        .id = 21,
        .init = (const void *)&pcref_UnionChatMarker_New,
        .free = (const void *)&pcref_UnionChatMarker_Free,
    },
    {
        .id = 22,
        .init = (const void *)&pcref_ShayminFormChange_New,
        .free = (const void *)&pcref_ShayminFormChange_Free,
    },
    {
        .id = 23,
        .init = NULL,
        .free = NULL,
    },
};
