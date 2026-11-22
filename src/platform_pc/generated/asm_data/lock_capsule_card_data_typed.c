/* Generated from asm/lock_capsule_card_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(LockCapsuleCard_BufferReceiveDate);
PCREF(LockCapsuleCard_PrintCardText);
PCREF(LockCapsuleCard_PrintCardTitle);
PCREF(LockCapsuleCard_PrintMessageOnly);
PCREF(LockCapsuleCard_PrintNothing);
PCREF(LockCapsuleCard_PrintStatus);
PCREF(LockCapsuleCard_ShowCardMenu);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    int32_t page;
    uint32_t x;
    uint32_t y;
    uint32_t width;
    uint32_t height;
    uint32_t fontId;
    uint32_t color;
    uint32_t fillColor;
    uint32_t msgId;
    const void * func;
    uint32_t textX;
    uint32_t textY;
} pcm_WonderCardTextBox_0;

extern pcm_WonderCardTextBox_0 gLockCapsuleCardTextBoxes[11];

pcm_WonderCardTextBox_0 gLockCapsuleCardTextBoxes[11] = {
    {
        .page = 0,
        .x = 2,
        .y = 2,
        .width = 12,
        .height = 2,
        .fontId = 1,
        .color = 0x10200,
        .fillColor = 0xffffffff,
        .msgId = 37,
        .func = (const void *)&pcref_LockCapsuleCard_PrintMessageOnly,
        .textX = 0,
        .textY = 0,
    },
    {
        .page = 0,
        .x = 6,
        .y = 17,
        .width = 11,
        .height = 2,
        .fontId = 1,
        .color = 0xf0200,
        .fillColor = 0xffffffff,
        .msgId = 41,
        .func = (const void *)&pcref_LockCapsuleCard_PrintMessageOnly,
        .textX = 0,
        .textY = 0,
    },
    {
        .page = 0,
        .x = 2,
        .y = 9,
        .width = 28,
        .height = 4,
        .fontId = 1,
        .color = 0x10200,
        .fillColor = 0xffffffff,
        .msgId = 0,
        .func = (const void *)&pcref_LockCapsuleCard_PrintStatus,
        .textX = 0,
        .textY = 0,
    },
    {
        .page = 0,
        .x = 2,
        .y = 6,
        .width = 28,
        .height = 2,
        .fontId = 1,
        .color = 0xf0200,
        .fillColor = 0xffffffff,
        .msgId = 0,
        .func = (const void *)&pcref_LockCapsuleCard_PrintCardTitle,
        .textX = 0,
        .textY = 0,
    },
    {
        .page = 0,
        .x = 18,
        .y = 17,
        .width = 11,
        .height = 2,
        .fontId = 1,
        .color = 0x10200,
        .fillColor = 0xffffffff,
        .msgId = 50,
        .func = (const void *)&pcref_LockCapsuleCard_BufferReceiveDate,
        .textX = 0,
        .textY = 0,
    },
    {
        .page = 1,
        .x = 2,
        .y = 3,
        .width = 28,
        .height = 10,
        .fontId = 1,
        .color = 0x10200,
        .fillColor = 0xffffffff,
        .msgId = 0,
        .func = (const void *)&pcref_LockCapsuleCard_PrintCardText,
        .textX = 0,
        .textY = 0,
    },
    {
        .page = 1,
        .x = 2,
        .y = 14,
        .width = 28,
        .height = 4,
        .fontId = 1,
        .color = 0x10200,
        .fillColor = 0xffffffff,
        .msgId = 42,
        .func = (const void *)&pcref_LockCapsuleCard_PrintNothing,
        .textX = 0,
        .textY = 0,
    },
    {
        .page = 2,
        .x = 2,
        .y = 19,
        .width = 27,
        .height = 4,
        .fontId = 1,
        .color = 0x10200,
        .fillColor = 15,
        .msgId = 37,
        .func = (const void *)&pcref_LockCapsuleCard_PrintMessageOnly,
        .textX = 0,
        .textY = 0,
    },
    {
        .page = 2,
        .x = 18,
        .y = 9,
        .width = 12,
        .height = 4,
        .fontId = 1,
        .color = 0x10200,
        .fillColor = 5,
        .msgId = 0,
        .func = (const void *)&pcref_LockCapsuleCard_ShowCardMenu,
        .textX = 0,
        .textY = 0,
    },
    {
        .page = 2,
        .x = 24,
        .y = 13,
        .width = 6,
        .height = 4,
        .fontId = 1,
        .color = 0x10200,
        .fillColor = 5,
        .msgId = 0,
        .func = NULL,
        .textX = 0,
        .textY = 0,
    },
    {
        .page = 2,
        .x = 24,
        .y = 13,
        .width = 6,
        .height = 4,
        .fontId = 1,
        .color = 0x10200,
        .fillColor = 5,
        .msgId = 0,
        .func = NULL,
        .textX = 0,
        .textY = 0,
    },
};
