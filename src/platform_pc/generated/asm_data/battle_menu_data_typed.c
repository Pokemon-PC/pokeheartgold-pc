/* Generated from asm/battle_menu_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(gBattleBagButton0Windows);
PCREF(gBattleBagButton10Windows);
PCREF(gBattleBagButton11Windows);
PCREF(gBattleBagButton15Windows);
PCREF(gBattleBagButton17Windows);
PCREF(gBattleBagButton18Windows);
PCREF(gBattleBagButton19Windows);
PCREF(gBattleBagButton1Windows);
PCREF(gBattleBagButton20Windows);
PCREF(gBattleBagButton21Windows);
PCREF(gBattleBagButton22Windows);
PCREF(gBattleBagButton2Windows);
PCREF(gBattleBagButton3Windows);
PCREF(gBattleBagButton4Windows);
PCREF(gBattleBagButton6Windows);
PCREF(gBattleBagButton7Windows);
PCREF(gBattleBagButton8Windows);
PCREF(gBattleBagButton9Windows);
PCREF(gBattleBagPage0CursorBoxes);
PCREF(gBattleBagPage1CursorBoxes);
PCREF(gBattleBagPage2CursorBoxes);
PCREF(gBattlePartyButton0Windows);
PCREF(gBattlePartyButton10Windows);
PCREF(gBattlePartyButton11Windows);
PCREF(gBattlePartyButton14Windows);
PCREF(gBattlePartyButton15Windows);
PCREF(gBattlePartyButton16Windows);
PCREF(gBattlePartyButton17Windows);
PCREF(gBattlePartyButton19Windows);
PCREF(gBattlePartyButton1Windows);
PCREF(gBattlePartyButton20Windows);
PCREF(gBattlePartyButton21Windows);
PCREF(gBattlePartyButton22Windows);
PCREF(gBattlePartyButton23Windows);
PCREF(gBattlePartyButton24Windows);
PCREF(gBattlePartyButton25Windows);
PCREF(gBattlePartyButton26Windows);
PCREF(gBattlePartyButton27Windows);
PCREF(gBattlePartyButton28Windows);
PCREF(gBattlePartyButton29Windows);
PCREF(gBattlePartyButton2Windows);
PCREF(gBattlePartyButton3Windows);
PCREF(gBattlePartyButton4Windows);
PCREF(gBattlePartyButton5Windows);
PCREF(gBattlePartyButton7Windows);
PCREF(gBattlePartyButton8Windows);
PCREF(gBattlePartyButton9Windows);
PCREF(gBattlePartyPage0CursorBoxes);
PCREF(gBattlePartyPage1CursorBoxes);
PCREF(gBattlePartyPage2CursorBoxes);
PCREF(gBattlePartyPage3CursorBoxes);
PCREF(gBattlePartyPage4CursorBoxes);
PCREF(gBattlePartyPage5CursorBoxes);
PCREF(gBattlePartyPage6CursorBoxes);
PCREF(gBattlePartyPage7CursorBoxes);

extern const const void * gBattlePartyPageCursorBoxes[10];
extern const const void * gBattlePartyButtonWindowLists[34];
extern const const void * gBattleBagPageCursorBoxes[3];
extern const const void * gBattleBagButtonWindowLists[23];

const const void * gBattlePartyPageCursorBoxes[10] = { (const void *)&pcref_gBattlePartyPage0CursorBoxes, (const void *)&pcref_gBattlePartyPage1CursorBoxes, (const void *)&pcref_gBattlePartyPage2CursorBoxes, (const void *)&pcref_gBattlePartyPage3CursorBoxes, (const void *)&pcref_gBattlePartyPage4CursorBoxes, (const void *)&pcref_gBattlePartyPage5CursorBoxes, (const void *)&pcref_gBattlePartyPage6CursorBoxes, (const void *)&pcref_gBattlePartyPage7CursorBoxes,
  (const void *)&pcref_gBattlePartyPage6CursorBoxes, (const void *)&pcref_gBattlePartyPage7CursorBoxes };

const const void * gBattlePartyButtonWindowLists[34] = { (const void *)&pcref_gBattlePartyButton0Windows, (const void *)&pcref_gBattlePartyButton1Windows, (const void *)&pcref_gBattlePartyButton2Windows, (const void *)&pcref_gBattlePartyButton3Windows, (const void *)&pcref_gBattlePartyButton4Windows, (const void *)&pcref_gBattlePartyButton5Windows, NULL, (const void *)&pcref_gBattlePartyButton7Windows,
  (const void *)&pcref_gBattlePartyButton8Windows, (const void *)&pcref_gBattlePartyButton9Windows, (const void *)&pcref_gBattlePartyButton10Windows, (const void *)&pcref_gBattlePartyButton11Windows, NULL, NULL, (const void *)&pcref_gBattlePartyButton14Windows, (const void *)&pcref_gBattlePartyButton15Windows,
  (const void *)&pcref_gBattlePartyButton16Windows, (const void *)&pcref_gBattlePartyButton17Windows, NULL, (const void *)&pcref_gBattlePartyButton19Windows, (const void *)&pcref_gBattlePartyButton20Windows, (const void *)&pcref_gBattlePartyButton21Windows, (const void *)&pcref_gBattlePartyButton22Windows, (const void *)&pcref_gBattlePartyButton23Windows,
  (const void *)&pcref_gBattlePartyButton24Windows, (const void *)&pcref_gBattlePartyButton25Windows, (const void *)&pcref_gBattlePartyButton26Windows, (const void *)&pcref_gBattlePartyButton27Windows, (const void *)&pcref_gBattlePartyButton28Windows, (const void *)&pcref_gBattlePartyButton29Windows, NULL, NULL,
  NULL, NULL };

const const void * gBattleBagPageCursorBoxes[3] = { (const void *)&pcref_gBattleBagPage0CursorBoxes, (const void *)&pcref_gBattleBagPage1CursorBoxes, (const void *)&pcref_gBattleBagPage2CursorBoxes };

const const void * gBattleBagButtonWindowLists[23] = { (const void *)&pcref_gBattleBagButton0Windows, (const void *)&pcref_gBattleBagButton1Windows, (const void *)&pcref_gBattleBagButton2Windows, (const void *)&pcref_gBattleBagButton3Windows, (const void *)&pcref_gBattleBagButton4Windows, NULL, (const void *)&pcref_gBattleBagButton6Windows, (const void *)&pcref_gBattleBagButton7Windows,
  (const void *)&pcref_gBattleBagButton8Windows, (const void *)&pcref_gBattleBagButton9Windows, (const void *)&pcref_gBattleBagButton10Windows, (const void *)&pcref_gBattleBagButton11Windows, NULL, NULL, NULL, (const void *)&pcref_gBattleBagButton15Windows,
  NULL, (const void *)&pcref_gBattleBagButton17Windows, (const void *)&pcref_gBattleBagButton18Windows, (const void *)&pcref_gBattleBagButton19Windows, (const void *)&pcref_gBattleBagButton20Windows, (const void *)&pcref_gBattleBagButton21Windows, (const void *)&pcref_gBattleBagButton22Windows };
