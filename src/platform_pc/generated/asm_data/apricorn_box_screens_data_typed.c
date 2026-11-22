/* Generated from asm/apricorn_box_screens_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(gApricornBoxListMenu0Messages);
PCREF(gApricornBoxListMenu1Messages);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    uint16_t count;
    uint8_t x;
    uint8_t y;
    const void * messages;
} pcm_ApricornBoxListDesc_0;

extern const pcm_ApricornBoxListDesc_0 gApricornBoxListMenus[2];

const pcm_ApricornBoxListDesc_0 gApricornBoxListMenus[2] = {
    {
        .count = 3,
        .x = 22,
        .y = 14,
        .messages = (const void *)&pcref_gApricornBoxListMenu0Messages,
    },
    {
        .count = 2,
        .x = 17,
        .y = 12,
        .messages = (const void *)&pcref_gApricornBoxListMenu1Messages,
    },
};
