/* Generated from asm/bag_app_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(BagApp_ItemAction_Action9);
PCREF(BagApp_ItemAction_ChooseForBerryPatch);
PCREF(BagApp_ItemAction_Confirm);
PCREF(BagApp_ItemAction_Deselect);
PCREF(BagApp_ItemAction_Give);
PCREF(BagApp_ItemAction_Move);
PCREF(BagApp_ItemAction_Register);
PCREF(BagApp_ItemAction_Trash);
PCREF(BagApp_ItemAction_Use);
PCREF(Bag_Exit);
PCREF(Bag_Init);
PCREF(Bag_Main);
PCREF(sTouchHitboxes_ItemMenu);
PCREF(sTouchHitboxes_Main);
PCREF(sTouchHitboxes_MoveItem);
PCREF(sTouchHitboxes_SellQuantity);
PCREF(sTouchHitboxes_TrashQuantity);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    const void * init;
    const void * exec;
    const void * exit;
    uint32_t ovy_id;
} pcm_OverlayManagerTemplate_0;

extern const pcm_OverlayManagerTemplate_0 gOverlayTemplate_Bag;
extern const void * gTouchHitboxTables[5];
extern const void * gItemActionFuncs[16];

const pcm_OverlayManagerTemplate_0 gOverlayTemplate_Bag = {
    .init = (const void *)&pcref_Bag_Init,
    .exec = (const void *)&pcref_Bag_Main,
    .exit = (const void *)&pcref_Bag_Exit,
    .ovy_id = 0xffffffff,
};

const void * gTouchHitboxTables[5] = { (const void *)&pcref_sTouchHitboxes_Main, (const void *)&pcref_sTouchHitboxes_ItemMenu, (const void *)&pcref_sTouchHitboxes_MoveItem, (const void *)&pcref_sTouchHitboxes_TrashQuantity, (const void *)&pcref_sTouchHitboxes_SellQuantity };

const void * gItemActionFuncs[16] = { (const void *)&pcref_BagApp_ItemAction_Use, (const void *)&pcref_BagApp_ItemAction_Use, (const void *)&pcref_BagApp_ItemAction_Use, (const void *)&pcref_BagApp_ItemAction_Use, (const void *)&pcref_BagApp_ItemAction_Use, (const void *)&pcref_BagApp_ItemAction_Trash, (const void *)&pcref_BagApp_ItemAction_Register, (const void *)&pcref_BagApp_ItemAction_Deselect,
  (const void *)&pcref_BagApp_ItemAction_Give, (const void *)&pcref_BagApp_ItemAction_Action9, (const void *)&pcref_BagApp_ItemAction_Confirm, NULL, (const void *)&pcref_BagApp_ItemAction_Move, NULL, (const void *)&pcref_BagApp_ItemAction_ChooseForBerryPatch, (const void *)&pcref_BagApp_ItemAction_Use };
