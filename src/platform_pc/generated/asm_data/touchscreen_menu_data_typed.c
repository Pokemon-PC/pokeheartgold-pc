/* Generated from asm/touchscreen_menu_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(TouchscreenChoiceMenu_State_CancelYesNo);
PCREF(TouchscreenChoiceMenu_State_Done);
PCREF(TouchscreenChoiceMenu_State_Idle);
PCREF(TouchscreenChoiceMenu_State_Init);
PCREF(TouchscreenChoiceMenu_State_ListEnd);
PCREF(TouchscreenChoiceMenu_State_ListInput);
PCREF(TouchscreenChoiceMenu_State_ListWriteResult);
PCREF(TouchscreenChoiceMenu_State_ShowList);
PCREF(TouchscreenChoiceMenu_State_ShowYesNo);
PCREF(TouchscreenChoiceMenu_State_WaitReturn);
PCREF(TouchscreenChoiceMenu_State_YesNoEnd);
PCREF(TouchscreenChoiceMenu_State_YesNoInput);
PCREF(sTouchscreenChoiceMenu2ItemHitboxes);
PCREF(sTouchscreenChoiceMenu2ItemNeighbors);
PCREF(sTouchscreenChoiceMenu2ItemWindowTemplates);
PCREF(sTouchscreenChoiceMenu3ItemHitboxes);
PCREF(sTouchscreenChoiceMenu3ItemNeighbors);
PCREF(sTouchscreenChoiceMenu3ItemWindowTemplates);
PCREF(sTouchscreenChoiceMenu4ItemHitboxes);
PCREF(sTouchscreenChoiceMenu4ItemNeighbors);
PCREF(sTouchscreenChoiceMenu4ItemWindowTemplates);
PCREF(sTouchscreenChoiceMenu5ItemHitboxes);
PCREF(sTouchscreenChoiceMenu5ItemNeighbors);
PCREF(sTouchscreenChoiceMenu5ItemWindowTemplates);
PCREF(sTouchscreenChoiceMenu6ItemHitboxes);
PCREF(sTouchscreenChoiceMenu6ItemNeighbors);
PCREF(sTouchscreenChoiceMenu6ItemWindowTemplates);
PCREF(sTouchscreenChoiceMenu7ItemHitboxes);
PCREF(sTouchscreenChoiceMenu7ItemNeighbors);
PCREF(sTouchscreenChoiceMenu7ItemWindowTemplates);
PCREF(sTouchscreenChoiceMenu8ItemHitboxes);
PCREF(sTouchscreenChoiceMenu8ItemNeighbors);
PCREF(sTouchscreenChoiceMenu8ItemWindowTemplates);

extern const void * gTouchscreenChoiceMenuListNeighbors[7];
extern const void * gTouchscreenChoiceMenuListHitboxes[7];
extern const void * gTouchscreenChoiceMenuListWindowTemplates[7];
extern const void * gTouchscreenChoiceMenuStateFuncs[12];

const void * gTouchscreenChoiceMenuListNeighbors[7] = { (const void *)&pcref_sTouchscreenChoiceMenu2ItemNeighbors, (const void *)&pcref_sTouchscreenChoiceMenu3ItemNeighbors, (const void *)&pcref_sTouchscreenChoiceMenu4ItemNeighbors, (const void *)&pcref_sTouchscreenChoiceMenu5ItemNeighbors, (const void *)&pcref_sTouchscreenChoiceMenu6ItemNeighbors, (const void *)&pcref_sTouchscreenChoiceMenu7ItemNeighbors, (const void *)&pcref_sTouchscreenChoiceMenu8ItemNeighbors };

const void * gTouchscreenChoiceMenuListHitboxes[7] = { (const void *)&pcref_sTouchscreenChoiceMenu2ItemHitboxes, (const void *)&pcref_sTouchscreenChoiceMenu3ItemHitboxes, (const void *)&pcref_sTouchscreenChoiceMenu4ItemHitboxes, (const void *)&pcref_sTouchscreenChoiceMenu5ItemHitboxes, (const void *)&pcref_sTouchscreenChoiceMenu6ItemHitboxes, (const void *)&pcref_sTouchscreenChoiceMenu7ItemHitboxes, (const void *)&pcref_sTouchscreenChoiceMenu8ItemHitboxes };

const void * gTouchscreenChoiceMenuListWindowTemplates[7] = { (const void *)&pcref_sTouchscreenChoiceMenu2ItemWindowTemplates, (const void *)&pcref_sTouchscreenChoiceMenu3ItemWindowTemplates, (const void *)&pcref_sTouchscreenChoiceMenu4ItemWindowTemplates, (const void *)&pcref_sTouchscreenChoiceMenu5ItemWindowTemplates, (const void *)&pcref_sTouchscreenChoiceMenu6ItemWindowTemplates, (const void *)&pcref_sTouchscreenChoiceMenu7ItemWindowTemplates, (const void *)&pcref_sTouchscreenChoiceMenu8ItemWindowTemplates };

const void * gTouchscreenChoiceMenuStateFuncs[12] = { (const void *)&pcref_TouchscreenChoiceMenu_State_Init, (const void *)&pcref_TouchscreenChoiceMenu_State_Idle, (const void *)&pcref_TouchscreenChoiceMenu_State_WaitReturn, (const void *)&pcref_TouchscreenChoiceMenu_State_ShowYesNo, (const void *)&pcref_TouchscreenChoiceMenu_State_YesNoInput, (const void *)&pcref_TouchscreenChoiceMenu_State_YesNoEnd, (const void *)&pcref_TouchscreenChoiceMenu_State_Done, (const void *)&pcref_TouchscreenChoiceMenu_State_ShowList,
  (const void *)&pcref_TouchscreenChoiceMenu_State_ListInput, (const void *)&pcref_TouchscreenChoiceMenu_State_ListEnd, (const void *)&pcref_TouchscreenChoiceMenu_State_ListWriteResult, (const void *)&pcref_TouchscreenChoiceMenu_State_CancelYesNo };
