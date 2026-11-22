/* Generated from asm/field_emote_mark_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(EmoteMarkEffect_Destroy);
PCREF(EmoteMarkEffect_Draw);
PCREF(MapObjectEmoteMarkEffect_Init);
PCREF(MapObjectEmoteMarkEffect_Update);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    uint32_t stateSize;
    const void * init;
    const void * destroy;
    const void * update;
    const void * draw;
} pcm_FieldEffectBasicTemplate_0;

extern const pcm_FieldEffectBasicTemplate_0 gMapObjectEmoteMarkTemplate;

const pcm_FieldEffectBasicTemplate_0 gMapObjectEmoteMarkTemplate = {
    .stateSize = 68,
    .init = (const void *)&pcref_MapObjectEmoteMarkEffect_Init,
    .destroy = (const void *)&pcref_EmoteMarkEffect_Destroy,
    .update = (const void *)&pcref_MapObjectEmoteMarkEffect_Update,
    .draw = (const void *)&pcref_EmoteMarkEffect_Draw,
};
