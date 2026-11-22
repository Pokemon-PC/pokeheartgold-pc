/* Generated from asm/safari_decoration_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(gSafariDecorationObjectGroup0);
PCREF(gSafariDecorationObjectGroup1);
PCREF(gSafariDecorationObjectGroup2);
PCREF(gSafariDecorationObjectGroup3);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    uint8_t count;
    const void * objects;
} pcm_SafariDecorationObjectGroup_0;

extern const pcm_SafariDecorationObjectGroup_0 gSafariDecorationObjectGroups[4];

const pcm_SafariDecorationObjectGroup_0 gSafariDecorationObjectGroups[4] = {
    {
        .count = 6,
        .objects = (const void *)&pcref_gSafariDecorationObjectGroup0,
    },
    {
        .count = 6,
        .objects = (const void *)&pcref_gSafariDecorationObjectGroup1,
    },
    {
        .count = 6,
        .objects = (const void *)&pcref_gSafariDecorationObjectGroup2,
    },
    {
        .count = 6,
        .objects = (const void *)&pcref_gSafariDecorationObjectGroup3,
    },
};
