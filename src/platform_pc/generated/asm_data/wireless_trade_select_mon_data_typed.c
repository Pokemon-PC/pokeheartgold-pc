/* Generated from asm/wireless_trade_select_mon_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    const void * items;
    const void * moveCursorFunc;
    const void * itemPrintFunc;
    const void * window;
    uint16_t totalItems;
    uint16_t maxShowed;
    uint8_t header_X;
    uint8_t item_X;
    uint8_t cursor_X;
    uint8_t upText_Y : 4;
    uint8_t cursorPal : 4;
    uint8_t fillValue : 4;
    uint8_t cursorShadowPal : 4;
    uint16_t lettersSpacing : 3;
    uint16_t itemVerticalPadding : 4;
    uint16_t scrollMultiple : 2;
    uint16_t fontId : 6;
    uint16_t cursorKind : 1;
    const void * data;
} pcm_ListMenuTemplate_0;

extern const pcm_ListMenuTemplate_0 sWirelessTradeSelectMonRosterListTemplate;

const pcm_ListMenuTemplate_0 sWirelessTradeSelectMonRosterListTemplate = {
    .items = NULL,
    .moveCursorFunc = NULL,
    .itemPrintFunc = NULL,
    .window = NULL,
    .totalItems = 32,
    .maxShowed = 32,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 0,
    .cursorPal = 1,
    .fillValue = 15,
    .cursorShadowPal = 2,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = 0,
    .fontId = 32,
    .cursorKind = 0,
    .data = NULL,
};
