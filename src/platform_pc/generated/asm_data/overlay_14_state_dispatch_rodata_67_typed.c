/* Generated from asm/overlay_14_state_dispatch_rodata_67.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(PCBox_BoxMenuGridOnButton);
PCREF(PCBox_BoxMenuGridOnKeyMove);
PCREF(PCBox_BoxMenuGridOnTouch);
PCREF(PCBox_CancelExit);
PCREF(PCBox_ConfirmExit);
PCREF(PCBox_ConfirmRelease);
PCREF(PCBox_DepositBoxGridOnButton);
PCREF(PCBox_DepositBoxGridOnKeyMove);
PCREF(PCBox_DepositBoxGridOnTouch);
PCREF(PCBox_DepositGridOnButton);
PCREF(PCBox_EndBagApp);
PCREF(PCBox_EndNamingScreenApp);
PCREF(PCBox_EndSummaryApp);
PCREF(PCBox_GridOnButton);
PCREF(PCBox_GridOnKeyMove);
PCREF(PCBox_GridOnSwitchToTouchMode);
PCREF(PCBox_GridOnTouch);
PCREF(PCBox_ItemModeGridOnButton);
PCREF(PCBox_ItemModeGridOnKeyMove);
PCREF(PCBox_ItemModeGridOnTouch);
PCREF(PCBox_ItemModePartyGridOnButton);
PCREF(PCBox_ItemModePartyGridOnKeyMove);
PCREF(PCBox_MoveModeGridOnButton);
PCREF(PCBox_MoveModeGridOnKeyMove);
PCREF(PCBox_MoveModeGridOnTouch);
PCREF(PCBox_MoveModePartyGridOnButton);
PCREF(PCBox_MoveModePartyGridOnKeyMove);
PCREF(PCBox_PutAwayHeldItem);
PCREF(PCBox_StartBagApp);
PCREF(PCBox_StartNamingScreenApp);
PCREF(PCBox_StartSummaryApp);
PCREF(PCBox_State_ApplyItemTrayDrop);
PCREF(PCBox_State_ApplyItemTrayHoldingDrop);
PCREF(PCBox_State_ApplyMonMove);
PCREF(PCBox_State_ApplyWallpaper);
PCREF(PCBox_State_AskContinue);
PCREF(PCBox_State_AskExit);
PCREF(PCBox_State_AskPutAwayItem);
PCREF(PCBox_State_BoxMenuClosed);
PCREF(PCBox_State_BoxMenuInput);
PCREF(PCBox_State_BoxMenuSwitchBox);
PCREF(PCBox_State_BoxTrayHoldingInput);
PCREF(PCBox_State_BoxTrayInput);
PCREF(PCBox_State_CancelDepositBoxSelect);
PCREF(PCBox_State_CancelPutAwayItem);
PCREF(PCBox_State_CancelRelease);
PCREF(PCBox_State_CheckDepositBox);
PCREF(PCBox_State_ChooseBagGive);
PCREF(PCBox_State_ChooseDeposit);
PCREF(PCBox_State_ChooseItem);
PCREF(PCBox_State_ChooseMarking);
PCREF(PCBox_State_ChooseMarkingDone);
PCREF(PCBox_State_ChooseMoveFromBox);
PCREF(PCBox_State_ChooseParty);
PCREF(PCBox_State_ChoosePartyPanelExit);
PCREF(PCBox_State_ChooseRelease);
PCREF(PCBox_State_ChooseRename);
PCREF(PCBox_State_ChooseSummary);
PCREF(PCBox_State_ChooseTrayBox);
PCREF(PCBox_State_ChooseTrayExit);
PCREF(PCBox_State_ChooseTrayTab);
PCREF(PCBox_State_ChooseWallpaper);
PCREF(PCBox_State_ChooseWallpaperMenuExit);
PCREF(PCBox_State_ChooseWithdraw);
PCREF(PCBox_State_CloseBoxMenu);
PCREF(PCBox_State_CloseBoxMenuTray);
PCREF(PCBox_State_CloseDepositActionMenu);
PCREF(PCBox_State_CloseItemMessage);
PCREF(PCBox_State_CloseItemModeActionMenu);
PCREF(PCBox_State_CloseItemModePartyActionMenu);
PCREF(PCBox_State_CloseMoveModeActionMenu);
PCREF(PCBox_State_CloseMoveModePartyActionMenu);
PCREF(PCBox_State_CloseWallpaperMenu);
PCREF(PCBox_State_CloseWithdrawActionMenu);
PCREF(PCBox_State_ConfirmDepositBox);
PCREF(PCBox_State_Delay);
PCREF(PCBox_State_DepositBoxInput);
PCREF(PCBox_State_DepositBoxSelectClosed);
PCREF(PCBox_State_DepositInput);
PCREF(PCBox_State_DropSwappedItem);
PCREF(PCBox_State_DropSwappedPartyItem);
PCREF(PCBox_State_EndBoxTrayDrag);
PCREF(PCBox_State_EndCursorSlideToBoxMenu);
PCREF(PCBox_State_EndCursorSlideToBoxTray);
PCREF(PCBox_State_EndCursorSlideToBoxTrayHolding);
PCREF(PCBox_State_EndCursorSlideToDeposit);
PCREF(PCBox_State_EndCursorSlideToDepositBox);
PCREF(PCBox_State_EndCursorSlideToDepositPrompt);
PCREF(PCBox_State_EndCursorSlideToItemMode);
PCREF(PCBox_State_EndCursorSlideToItemModeParty);
PCREF(PCBox_State_EndCursorSlideToItemModeTray);
PCREF(PCBox_State_EndCursorSlideToItemTrayHolding);
PCREF(PCBox_State_EndCursorSlideToMarkingMenu);
PCREF(PCBox_State_EndCursorSlideToMoveMode);
PCREF(PCBox_State_EndCursorSlideToMoveModeParty);
PCREF(PCBox_State_EndCursorSlideToWallpaperMenu);
PCREF(PCBox_State_EndCursorSlideToWithdraw);
PCREF(PCBox_State_EndCursorSlideToWithdrawPrompt);
PCREF(PCBox_State_EndDepositDrag);
PCREF(PCBox_State_EndDepositMove);
PCREF(PCBox_State_EndItemCommand);
PCREF(PCBox_State_EndItemModeBoxDrag);
PCREF(PCBox_State_EndItemModePartyDrag);
PCREF(PCBox_State_EndItemTrayDrag);
PCREF(PCBox_State_EndMoveModePartyDrag);
PCREF(PCBox_State_EndPartyReleaseShift);
PCREF(PCBox_State_EndTrayHoldingDrop);
PCREF(PCBox_State_EndWithdrawDrag);
PCREF(PCBox_State_EndWithdrawMove);
PCREF(PCBox_State_Exit);
PCREF(PCBox_State_FinishCloseMarkingMenu);
PCREF(PCBox_State_FinishItemSwap);
PCREF(PCBox_State_FinishItemTrayDrop);
PCREF(PCBox_State_FinishPartyItemSwap);
PCREF(PCBox_State_GiveItemFromBag);
PCREF(PCBox_State_HandleYesNo);
PCREF(PCBox_State_HideButtonsForBoxMenu);
PCREF(PCBox_State_HideDepositBoxSelect);
PCREF(PCBox_State_HideDepositExitButton);
PCREF(PCBox_State_Init);
PCREF(PCBox_State_ItemModeBoxTrayInput);
PCREF(PCBox_State_ItemModeChooseParty);
PCREF(PCBox_State_ItemModeChooseTrayBox);
PCREF(PCBox_State_ItemModeChooseTrayTab);
PCREF(PCBox_State_ItemModeInput);
PCREF(PCBox_State_ItemModePartyChooseTray);
PCREF(PCBox_State_ItemModePartyInput);
PCREF(PCBox_State_ItemModePrintEggCantHoldItem);
PCREF(PCBox_State_ItemModePrintItemHeld);
PCREF(PCBox_State_ItemTrayHoldingInput);
PCREF(PCBox_State_MarkingChosen);
PCREF(PCBox_State_MarkingMenuInput);
PCREF(PCBox_State_MoveModeInput);
PCREF(PCBox_State_MoveModePartyInput);
PCREF(PCBox_State_OpenBoxMenu);
PCREF(PCBox_State_OpenBoxMenuTray);
PCREF(PCBox_State_OpenMarkingMenu);
PCREF(PCBox_State_OpenPartyPanel);
PCREF(PCBox_State_OpenTrayBesideParty);
PCREF(PCBox_State_OpenTrayFromBox);
PCREF(PCBox_State_OpenWallpaperMenu);
PCREF(PCBox_State_PartyChooseTray);
PCREF(PCBox_State_PartyPanelClosed);
PCREF(PCBox_State_PrintByeBye);
PCREF(PCBox_State_PrintEggCantHoldItem);
PCREF(PCBox_State_PrintItemHeld);
PCREF(PCBox_State_PrintMailCantBeTaken);
PCREF(PCBox_State_PrintReleased);
PCREF(PCBox_State_PrintWorried);
PCREF(PCBox_State_ReleaseCameBack);
PCREF(PCBox_State_ReleaseMoveCheck);
PCREF(PCBox_State_RemoveReleasedMon);
PCREF(PCBox_State_ResetDepositInput);
PCREF(PCBox_State_ResumeBoxInput);
PCREF(PCBox_State_ResumeBoxTrayInput);
PCREF(PCBox_State_ResumeDepositInput);
PCREF(PCBox_State_ResumeItemModePartyAfterMail);
PCREF(PCBox_State_ResumeItemModePartyInput);
PCREF(PCBox_State_ResumeItemModeTrayInput);
PCREF(PCBox_State_ResumeMoveModePartyInput);
PCREF(PCBox_State_ResumeWithdrawInput);
PCREF(PCBox_State_ReturnFromDepositError);
PCREF(PCBox_State_ReturnFromNamingScreen);
PCREF(PCBox_State_ReturnFromSummary);
PCREF(PCBox_State_ReturnToActionMenu);
PCREF(PCBox_State_ReturnToBoxFromTray);
PCREF(PCBox_State_ReturnToBoxMenu);
PCREF(PCBox_State_ReturnToWithdrawInput);
PCREF(PCBox_State_RunSubApp);
PCREF(PCBox_State_SetupBoxMenuInput);
PCREF(PCBox_State_SetupBoxTrayInput);
PCREF(PCBox_State_SetupDepositBoxInput);
PCREF(PCBox_State_SetupMarkingMenuInput);
PCREF(PCBox_State_SetupPartyInputAfterTray);
PCREF(PCBox_State_SetupPartyPanelInput);
PCREF(PCBox_State_SetupWallpaperMenuInput);
PCREF(PCBox_State_ShiftPartyForDeposit);
PCREF(PCBox_State_ShowBoxMenuExitButton);
PCREF(PCBox_State_ShowDepositBoxSelect);
PCREF(PCBox_State_ShowDepositReturnButton);
PCREF(PCBox_State_ShowDepositTitle);
PCREF(PCBox_State_ShowWallpaperMenuTitle);
PCREF(PCBox_State_SlideInTrayPartyPanel);
PCREF(PCBox_State_SlideInWithdrawParty);
PCREF(PCBox_State_SlideOutBoxMenu);
PCREF(PCBox_State_SlideOutPartyPanel);
PCREF(PCBox_State_SlideOutTray);
PCREF(PCBox_State_SlideOutWallpaperList);
PCREF(PCBox_State_Start);
PCREF(PCBox_State_StartDepositMove);
PCREF(PCBox_State_StartSubApp);
PCREF(PCBox_State_StartWithdrawMove);
PCREF(PCBox_State_SwapHeldItems);
PCREF(PCBox_State_SwapPartyHeldItems);
PCREF(PCBox_State_SwitchBox);
PCREF(PCBox_State_SwitchBoxForWallpaper);
PCREF(PCBox_State_TrayClosed);
PCREF(PCBox_State_TryDeposit);
PCREF(PCBox_State_TryRelease);
PCREF(PCBox_State_WaitButton);
PCREF(PCBox_State_WaitFade);
PCREF(PCBox_State_WaitPaletteBuffers);
PCREF(PCBox_State_WaitPaletteFlash);
PCREF(PCBox_State_WaitPutAwayItem);
PCREF(PCBox_State_WaitUpdateFunc);
PCREF(PCBox_State_WallpaperFadeIn);
PCREF(PCBox_State_WallpaperFadeOut);
PCREF(PCBox_State_WallpaperMenuInput);
PCREF(PCBox_State_WithdrawInput);
PCREF(PCBox_State_WithdrawPartyClosed);
PCREF(PCBox_TakeHeldItemToBag);
PCREF(PCBox_TrayGridOnButton);
PCREF(PCBox_TrayGridOnKeyMove);
PCREF(PCBox_TrayGridOnTouch);
PCREF(PCBox_WallpaperGridOnButton);
PCREF(PCBox_WallpaperGridOnKeyMove);
PCREF(PCBox_WallpaperGridOnTouch);
PCREF(PCBox_WithdrawGridOnButton);
PCREF(PCBox_WithdrawGridOnTouch);
PCREF(sPCBoxBoxMenuGridDpadBoxes);
PCREF(sPCBoxBoxMenuGridHitboxes);
PCREF(sPCBoxDepositBoxGridDpadBoxes);
PCREF(sPCBoxDepositBoxGridHitboxes);
PCREF(sPCBoxDepositGridDpadBoxes);
PCREF(sPCBoxDepositGridHitboxes);
PCREF(sPCBoxItemModeGridDpadBoxes);
PCREF(sPCBoxItemModeGridHitboxes);
PCREF(sPCBoxItemModePartyGridDpadBoxes);
PCREF(sPCBoxItemModePartyGridHitboxes);
PCREF(sPCBoxMarkingGridDpadBoxes);
PCREF(sPCBoxMarkingGridHitboxes);
PCREF(sPCBoxMoveModeGridDpadBoxes);
PCREF(sPCBoxMoveModeGridHitboxes);
PCREF(sPCBoxMoveModePartyGridDpadBoxes);
PCREF(sPCBoxMoveModePartyGridHitboxes);
PCREF(sPCBoxTrayGridDpadBoxes);
PCREF(sPCBoxTrayGridHitboxes);
PCREF(sPCBoxWallpaperGridDpadBoxes);
PCREF(sPCBoxWallpaperGridHitboxes);
PCREF(sPCBoxWithdrawGridDpadBoxes);
PCREF(sPCBoxWithdrawGridHitboxes);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    const void * start;
    const void * end;
    int32_t nextState;
} pcm_PCBoxSubApp_0;

typedef struct {
    const void * onButton;
    const void * onSwitchToTouchMode;
    const void * onKeyMove;
    const void * onTouch;
} pcm_GridCallbacks_1;

typedef struct {
    const void * hitboxes;
    const void * dpadBoxes;
    const void * callbacks;
} pcm_PCBoxGridLayout_2;

extern const pcm_PCBoxSubApp_0 gPCBoxSubApps[3];
extern const const void * gPCBoxYesNoHandlers[5][2];
extern const const void * gPCBoxStateTable[179];
extern const pcm_GridCallbacks_1 sPCBoxWallpaperGridCallbacks[1];
extern const pcm_GridCallbacks_1 sPCBoxWithdrawGridCallbacks[1];
extern const pcm_GridCallbacks_1 sPCBoxDepositGridCallbacks[1];
extern const pcm_GridCallbacks_1 sPCBoxDepositBoxGridCallbacks[1];
extern const pcm_GridCallbacks_1 sPCBoxBoxMenuGridCallbacks[1];
extern const pcm_GridCallbacks_1 sPCBoxMoveModePartyGridCallbacks[1];
extern const pcm_GridCallbacks_1 sPCBoxTrayGridCallbacks[1];
extern const pcm_GridCallbacks_1 sPCBoxMoveModeGridCallbacks[1];
extern const pcm_GridCallbacks_1 sPCBoxMarkingGridCallbacks[1];
extern const pcm_GridCallbacks_1 sPCBoxItemModePartyGridCallbacks[1];
extern const pcm_GridCallbacks_1 sPCBoxItemModeGridCallbacks[1];
extern const pcm_PCBoxGridLayout_2 gPCBoxGridLayouts[11];

const pcm_PCBoxSubApp_0 gPCBoxSubApps[3] = {
    {
        .start = (const void *)&pcref_PCBox_StartSummaryApp,
        .end = (const void *)&pcref_PCBox_EndSummaryApp,
        .nextState = 15,
    },
    {
        .start = (const void *)&pcref_PCBox_StartBagApp,
        .end = (const void *)&pcref_PCBox_EndBagApp,
        .nextState = 17,
    },
    {
        .start = (const void *)&pcref_PCBox_StartNamingScreenApp,
        .end = (const void *)&pcref_PCBox_EndNamingScreenApp,
        .nextState = 16,
    },
};

const const void * gPCBoxYesNoHandlers[5][2] = {
    { (const void *)&pcref_PCBox_TakeHeldItemToBag, (const void *)&pcref_PCBox_State_ReturnToActionMenu },
    { (const void *)&pcref_PCBox_ConfirmRelease, (const void *)&pcref_PCBox_State_CancelRelease },
    { (const void *)&pcref_PCBox_PutAwayHeldItem, (const void *)&pcref_PCBox_State_CancelPutAwayItem },
    { (const void *)&pcref_PCBox_ConfirmExit, (const void *)&pcref_PCBox_CancelExit },
    { (const void *)&pcref_PCBox_CancelExit, (const void *)&pcref_PCBox_ConfirmExit },
};

const const void * gPCBoxStateTable[179] = { (const void *)&pcref_PCBox_State_Init, (const void *)&pcref_PCBox_State_Exit, (const void *)&pcref_PCBox_State_WaitFade, (const void *)&pcref_PCBox_State_WaitPaletteBuffers, (const void *)&pcref_PCBox_State_Delay, (const void *)&pcref_PCBox_State_WaitUpdateFunc, (const void *)&pcref_PCBox_State_WaitButton, (const void *)&pcref_PCBox_State_HandleYesNo,
  (const void *)&pcref_PCBox_State_WaitPaletteFlash, (const void *)&pcref_PCBox_State_StartSubApp, (const void *)&pcref_PCBox_State_RunSubApp, (const void *)&pcref_PCBox_State_Start, (const void *)&pcref_PCBox_State_MoveModeInput, (const void *)&pcref_PCBox_State_ApplyMonMove, (const void *)&pcref_PCBox_State_ReturnToActionMenu, (const void *)&pcref_PCBox_State_ReturnFromSummary,
  (const void *)&pcref_PCBox_State_ReturnFromNamingScreen, (const void *)&pcref_PCBox_State_GiveItemFromBag, (const void *)&pcref_PCBox_State_PrintItemHeld, (const void *)&pcref_PCBox_State_MarkingChosen, (const void *)&pcref_PCBox_State_OpenMarkingMenu, (const void *)&pcref_PCBox_State_SetupMarkingMenuInput, (const void *)&pcref_PCBox_State_MarkingMenuInput, (const void *)&pcref_PCBox_State_FinishCloseMarkingMenu,
  (const void *)&pcref_PCBox_State_EndCursorSlideToMarkingMenu, (const void *)&pcref_PCBox_State_TryRelease, (const void *)&pcref_PCBox_State_ReleaseMoveCheck, (const void *)&pcref_PCBox_State_PrintReleased, (const void *)&pcref_PCBox_State_PrintByeBye, (const void *)&pcref_PCBox_State_RemoveReleasedMon, (const void *)&pcref_PCBox_State_ReleaseCameBack, (const void *)&pcref_PCBox_State_PrintWorried,
  (const void *)&pcref_PCBox_State_CancelRelease, (const void *)&pcref_PCBox_State_EndPartyReleaseShift, (const void *)&pcref_PCBox_State_OpenPartyPanel, (const void *)&pcref_PCBox_State_SetupPartyPanelInput, (const void *)&pcref_PCBox_State_MoveModePartyInput, (const void *)&pcref_PCBox_State_SlideOutPartyPanel, (const void *)&pcref_PCBox_State_PartyPanelClosed, (const void *)&pcref_PCBox_State_EndMoveModePartyDrag,
  (const void *)&pcref_PCBox_State_SetupBoxTrayInput, (const void *)&pcref_PCBox_State_BoxTrayInput, (const void *)&pcref_PCBox_State_EndBoxTrayDrag, (const void *)&pcref_PCBox_State_EndTrayHoldingDrop, (const void *)&pcref_PCBox_State_ResumeBoxTrayInput, (const void *)&pcref_PCBox_State_OpenTrayBesideParty, (const void *)&pcref_PCBox_State_SetupPartyInputAfterTray, (const void *)&pcref_PCBox_State_OpenTrayFromBox,
  (const void *)&pcref_PCBox_State_SlideInTrayPartyPanel, (const void *)&pcref_PCBox_State_SlideOutTray, (const void *)&pcref_PCBox_State_TrayClosed, (const void *)&pcref_PCBox_State_ReturnToBoxFromTray, (const void *)&pcref_PCBox_State_HideButtonsForBoxMenu, (const void *)&pcref_PCBox_State_OpenBoxMenuTray, (const void *)&pcref_PCBox_State_ShowBoxMenuExitButton, (const void *)&pcref_PCBox_State_OpenBoxMenu,
  (const void *)&pcref_PCBox_State_SetupBoxMenuInput, (const void *)&pcref_PCBox_State_CloseBoxMenu, (const void *)&pcref_PCBox_State_SlideOutBoxMenu, (const void *)&pcref_PCBox_State_CloseBoxMenuTray, (const void *)&pcref_PCBox_State_BoxMenuClosed, (const void *)&pcref_PCBox_State_BoxMenuInput, (const void *)&pcref_PCBox_State_EndCursorSlideToBoxMenu, (const void *)&pcref_PCBox_State_OpenWallpaperMenu,
  (const void *)&pcref_PCBox_State_ShowWallpaperMenuTitle, (const void *)&pcref_PCBox_State_SetupWallpaperMenuInput, (const void *)&pcref_PCBox_State_WallpaperMenuInput, (const void *)&pcref_PCBox_State_CloseWallpaperMenu, (const void *)&pcref_PCBox_State_SlideOutWallpaperList, (const void *)&pcref_PCBox_State_ReturnToBoxMenu, (const void *)&pcref_PCBox_State_ApplyWallpaper, (const void *)&pcref_PCBox_State_WallpaperFadeOut,
  (const void *)&pcref_PCBox_State_WallpaperFadeIn, (const void *)&pcref_PCBox_State_EndCursorSlideToWallpaperMenu, (const void *)&pcref_PCBox_State_EndCursorSlideToMoveMode, (const void *)&pcref_PCBox_State_EndCursorSlideToBoxTray, (const void *)&pcref_PCBox_State_EndCursorSlideToMoveModeParty, (const void *)&pcref_PCBox_State_ResumeBoxInput, (const void *)&pcref_PCBox_State_ResumeMoveModePartyInput, (const void *)&pcref_PCBox_State_PrintEggCantHoldItem,
  (const void *)&pcref_PCBox_State_PrintMailCantBeTaken, (const void *)&pcref_PCBox_State_WithdrawInput, (const void *)&pcref_PCBox_State_ReturnToWithdrawInput, (const void *)&pcref_PCBox_State_SlideInWithdrawParty, (const void *)&pcref_PCBox_State_StartWithdrawMove, (const void *)&pcref_PCBox_State_EndWithdrawMove, (const void *)&pcref_PCBox_State_WithdrawPartyClosed, (const void *)&pcref_PCBox_State_EndWithdrawDrag,
  (const void *)&pcref_PCBox_State_EndCursorSlideToWithdraw, (const void *)&pcref_PCBox_State_EndCursorSlideToWithdrawPrompt, (const void *)&pcref_PCBox_State_ResumeWithdrawInput, (const void *)&pcref_PCBox_State_DepositInput, (const void *)&pcref_PCBox_State_TryDeposit, (const void *)&pcref_PCBox_State_ReturnFromDepositError, (const void *)&pcref_PCBox_State_ShowDepositBoxSelect, (const void *)&pcref_PCBox_State_ShowDepositTitle,
  (const void *)&pcref_PCBox_State_SetupDepositBoxInput, (const void *)&pcref_PCBox_State_DepositBoxInput, (const void *)&pcref_PCBox_State_CancelDepositBoxSelect, (const void *)&pcref_PCBox_State_HideDepositExitButton, (const void *)&pcref_PCBox_State_HideDepositBoxSelect, (const void *)&pcref_PCBox_State_DepositBoxSelectClosed, (const void *)&pcref_PCBox_State_ConfirmDepositBox, (const void *)&pcref_PCBox_State_CheckDepositBox,
  (const void *)&pcref_PCBox_State_ShiftPartyForDeposit, (const void *)&pcref_PCBox_State_SwitchBox, (const void *)&pcref_PCBox_State_StartDepositMove, (const void *)&pcref_PCBox_State_EndDepositMove, (const void *)&pcref_PCBox_State_ShowDepositReturnButton, (const void *)&pcref_PCBox_State_ResetDepositInput, (const void *)&pcref_PCBox_State_EndDepositDrag, (const void *)&pcref_PCBox_State_EndCursorSlideToDeposit,
  (const void *)&pcref_PCBox_State_EndCursorSlideToDepositPrompt, (const void *)&pcref_PCBox_State_EndCursorSlideToDepositBox, (const void *)&pcref_PCBox_State_ResumeDepositInput, (const void *)&pcref_PCBox_State_BoxTrayHoldingInput, (const void *)&pcref_PCBox_State_EndCursorSlideToBoxTrayHolding, (const void *)&pcref_PCBox_State_ItemModeInput, (const void *)&pcref_PCBox_State_EndCursorSlideToItemMode, (const void *)&pcref_PCBox_State_CloseItemMessage,
  (const void *)&pcref_PCBox_State_AskPutAwayItem, (const void *)&pcref_PCBox_State_WaitPutAwayItem, (const void *)&pcref_PCBox_State_CancelPutAwayItem, (const void *)&pcref_PCBox_State_EndItemCommand, (const void *)&pcref_PCBox_State_ItemModePrintEggCantHoldItem, (const void *)&pcref_PCBox_State_ItemModePrintItemHeld, (const void *)&pcref_PCBox_State_EndItemModeBoxDrag, (const void *)&pcref_PCBox_State_SwapHeldItems,
  (const void *)&pcref_PCBox_State_DropSwappedItem, (const void *)&pcref_PCBox_State_FinishItemSwap, (const void *)&pcref_PCBox_State_ItemModeBoxTrayInput, (const void *)&pcref_PCBox_State_EndCursorSlideToItemModeTray, (const void *)&pcref_PCBox_State_EndItemTrayDrag, (const void *)&pcref_PCBox_State_ApplyItemTrayDrop, (const void *)&pcref_PCBox_State_FinishItemTrayDrop, (const void *)&pcref_PCBox_State_ResumeItemModeTrayInput,
  (const void *)&pcref_PCBox_State_ItemTrayHoldingInput, (const void *)&pcref_PCBox_State_EndCursorSlideToItemTrayHolding, (const void *)&pcref_PCBox_State_ApplyItemTrayHoldingDrop, (const void *)&pcref_PCBox_State_ItemModePartyInput, (const void *)&pcref_PCBox_State_EndCursorSlideToItemModeParty, (const void *)&pcref_PCBox_State_EndItemModePartyDrag, (const void *)&pcref_PCBox_State_SwapPartyHeldItems, (const void *)&pcref_PCBox_State_ResumeItemModePartyInput,
  (const void *)&pcref_PCBox_State_DropSwappedPartyItem, (const void *)&pcref_PCBox_State_FinishPartyItemSwap, (const void *)&pcref_PCBox_State_ResumeItemModePartyAfterMail, (const void *)&pcref_PCBox_State_AskExit, (const void *)&pcref_PCBox_State_AskContinue, (const void *)&pcref_PCBox_State_ChooseParty, (const void *)&pcref_PCBox_State_ChooseTrayTab, (const void *)&pcref_PCBox_State_ChooseSummary,
  (const void *)&pcref_PCBox_State_ChooseItem, (const void *)&pcref_PCBox_State_ChooseMarking, (const void *)&pcref_PCBox_State_ChooseMarkingDone, (const void *)&pcref_PCBox_State_ChooseRelease, (const void *)&pcref_PCBox_State_CloseMoveModeActionMenu, (const void *)&pcref_PCBox_State_PartyChooseTray, (const void *)&pcref_PCBox_State_CloseMoveModePartyActionMenu, (const void *)&pcref_PCBox_State_ChoosePartyPanelExit,
  (const void *)&pcref_PCBox_State_ChooseTrayBox, (const void *)&pcref_PCBox_State_ChooseTrayExit, (const void *)&pcref_PCBox_State_BoxMenuSwitchBox, (const void *)&pcref_PCBox_State_ChooseWallpaper, (const void *)&pcref_PCBox_State_ChooseRename, (const void *)&pcref_PCBox_State_SwitchBoxForWallpaper, (const void *)&pcref_PCBox_State_ChooseWallpaperMenuExit, (const void *)&pcref_PCBox_State_ChooseWithdraw,
  (const void *)&pcref_PCBox_State_CloseWithdrawActionMenu, (const void *)&pcref_PCBox_State_ChooseDeposit, (const void *)&pcref_PCBox_State_CloseDepositActionMenu, (const void *)&pcref_PCBox_State_ItemModeChooseParty, (const void *)&pcref_PCBox_State_ItemModeChooseTrayTab, (const void *)&pcref_PCBox_State_ChooseBagGive, (const void *)&pcref_PCBox_State_CloseItemModeActionMenu, (const void *)&pcref_PCBox_State_ItemModeChooseTrayBox,
  (const void *)&pcref_PCBox_State_ItemModePartyChooseTray, (const void *)&pcref_PCBox_State_CloseItemModePartyActionMenu, (const void *)&pcref_PCBox_State_ChooseMoveFromBox };

const pcm_GridCallbacks_1 sPCBoxWallpaperGridCallbacks[1] = {
    {
        .onButton = (const void *)&pcref_PCBox_WallpaperGridOnButton,
        .onSwitchToTouchMode = (const void *)&pcref_PCBox_GridOnSwitchToTouchMode,
        .onKeyMove = (const void *)&pcref_PCBox_WallpaperGridOnKeyMove,
        .onTouch = (const void *)&pcref_PCBox_WallpaperGridOnTouch,
    },
};

const pcm_GridCallbacks_1 sPCBoxWithdrawGridCallbacks[1] = {
    {
        .onButton = (const void *)&pcref_PCBox_WithdrawGridOnButton,
        .onSwitchToTouchMode = (const void *)&pcref_PCBox_GridOnSwitchToTouchMode,
        .onKeyMove = (const void *)&pcref_PCBox_GridOnKeyMove,
        .onTouch = (const void *)&pcref_PCBox_WithdrawGridOnTouch,
    },
};

const pcm_GridCallbacks_1 sPCBoxDepositGridCallbacks[1] = {
    {
        .onButton = (const void *)&pcref_PCBox_DepositGridOnButton,
        .onSwitchToTouchMode = (const void *)&pcref_PCBox_GridOnSwitchToTouchMode,
        .onKeyMove = (const void *)&pcref_PCBox_GridOnKeyMove,
        .onTouch = (const void *)&pcref_PCBox_GridOnTouch,
    },
};

const pcm_GridCallbacks_1 sPCBoxDepositBoxGridCallbacks[1] = {
    {
        .onButton = (const void *)&pcref_PCBox_DepositBoxGridOnButton,
        .onSwitchToTouchMode = (const void *)&pcref_PCBox_GridOnSwitchToTouchMode,
        .onKeyMove = (const void *)&pcref_PCBox_DepositBoxGridOnKeyMove,
        .onTouch = (const void *)&pcref_PCBox_DepositBoxGridOnTouch,
    },
};

const pcm_GridCallbacks_1 sPCBoxBoxMenuGridCallbacks[1] = {
    {
        .onButton = (const void *)&pcref_PCBox_BoxMenuGridOnButton,
        .onSwitchToTouchMode = (const void *)&pcref_PCBox_GridOnSwitchToTouchMode,
        .onKeyMove = (const void *)&pcref_PCBox_BoxMenuGridOnKeyMove,
        .onTouch = (const void *)&pcref_PCBox_BoxMenuGridOnTouch,
    },
};

const pcm_GridCallbacks_1 sPCBoxMoveModePartyGridCallbacks[1] = {
    {
        .onButton = (const void *)&pcref_PCBox_MoveModePartyGridOnButton,
        .onSwitchToTouchMode = (const void *)&pcref_PCBox_GridOnSwitchToTouchMode,
        .onKeyMove = (const void *)&pcref_PCBox_MoveModePartyGridOnKeyMove,
        .onTouch = (const void *)&pcref_PCBox_GridOnTouch,
    },
};

const pcm_GridCallbacks_1 sPCBoxTrayGridCallbacks[1] = {
    {
        .onButton = (const void *)&pcref_PCBox_TrayGridOnButton,
        .onSwitchToTouchMode = (const void *)&pcref_PCBox_GridOnSwitchToTouchMode,
        .onKeyMove = (const void *)&pcref_PCBox_TrayGridOnKeyMove,
        .onTouch = (const void *)&pcref_PCBox_TrayGridOnTouch,
    },
};

const pcm_GridCallbacks_1 sPCBoxMoveModeGridCallbacks[1] = {
    {
        .onButton = (const void *)&pcref_PCBox_MoveModeGridOnButton,
        .onSwitchToTouchMode = (const void *)&pcref_PCBox_GridOnSwitchToTouchMode,
        .onKeyMove = (const void *)&pcref_PCBox_MoveModeGridOnKeyMove,
        .onTouch = (const void *)&pcref_PCBox_MoveModeGridOnTouch,
    },
};

const pcm_GridCallbacks_1 sPCBoxMarkingGridCallbacks[1] = {
    {
        .onButton = (const void *)&pcref_PCBox_GridOnButton,
        .onSwitchToTouchMode = (const void *)&pcref_PCBox_GridOnSwitchToTouchMode,
        .onKeyMove = (const void *)&pcref_PCBox_GridOnKeyMove,
        .onTouch = (const void *)&pcref_PCBox_GridOnTouch,
    },
};

const pcm_GridCallbacks_1 sPCBoxItemModePartyGridCallbacks[1] = {
    {
        .onButton = (const void *)&pcref_PCBox_ItemModePartyGridOnButton,
        .onSwitchToTouchMode = (const void *)&pcref_PCBox_GridOnSwitchToTouchMode,
        .onKeyMove = (const void *)&pcref_PCBox_ItemModePartyGridOnKeyMove,
        .onTouch = (const void *)&pcref_PCBox_GridOnTouch,
    },
};

const pcm_GridCallbacks_1 sPCBoxItemModeGridCallbacks[1] = {
    {
        .onButton = (const void *)&pcref_PCBox_ItemModeGridOnButton,
        .onSwitchToTouchMode = (const void *)&pcref_PCBox_GridOnSwitchToTouchMode,
        .onKeyMove = (const void *)&pcref_PCBox_ItemModeGridOnKeyMove,
        .onTouch = (const void *)&pcref_PCBox_ItemModeGridOnTouch,
    },
};

const pcm_PCBoxGridLayout_2 gPCBoxGridLayouts[11] = {
    {
        .hitboxes = (const void *)&pcref_sPCBoxDepositGridHitboxes,
        .dpadBoxes = (const void *)&pcref_sPCBoxDepositGridDpadBoxes,
        .callbacks = (const void *)&sPCBoxDepositGridCallbacks,
    },
    {
        .hitboxes = (const void *)&pcref_sPCBoxDepositBoxGridHitboxes,
        .dpadBoxes = (const void *)&pcref_sPCBoxDepositBoxGridDpadBoxes,
        .callbacks = (const void *)&sPCBoxDepositBoxGridCallbacks,
    },
    {
        .hitboxes = (const void *)&pcref_sPCBoxWithdrawGridHitboxes,
        .dpadBoxes = (const void *)&pcref_sPCBoxWithdrawGridDpadBoxes,
        .callbacks = (const void *)&sPCBoxWithdrawGridCallbacks,
    },
    {
        .hitboxes = (const void *)&pcref_sPCBoxMoveModeGridHitboxes,
        .dpadBoxes = (const void *)&pcref_sPCBoxMoveModeGridDpadBoxes,
        .callbacks = (const void *)&sPCBoxMoveModeGridCallbacks,
    },
    {
        .hitboxes = (const void *)&pcref_sPCBoxTrayGridHitboxes,
        .dpadBoxes = (const void *)&pcref_sPCBoxTrayGridDpadBoxes,
        .callbacks = (const void *)&sPCBoxTrayGridCallbacks,
    },
    {
        .hitboxes = (const void *)&pcref_sPCBoxMoveModePartyGridHitboxes,
        .dpadBoxes = (const void *)&pcref_sPCBoxMoveModePartyGridDpadBoxes,
        .callbacks = (const void *)&sPCBoxMoveModePartyGridCallbacks,
    },
    {
        .hitboxes = (const void *)&pcref_sPCBoxItemModeGridHitboxes,
        .dpadBoxes = (const void *)&pcref_sPCBoxItemModeGridDpadBoxes,
        .callbacks = (const void *)&sPCBoxItemModeGridCallbacks,
    },
    {
        .hitboxes = (const void *)&pcref_sPCBoxItemModePartyGridHitboxes,
        .dpadBoxes = (const void *)&pcref_sPCBoxItemModePartyGridDpadBoxes,
        .callbacks = (const void *)&sPCBoxItemModePartyGridCallbacks,
    },
    {
        .hitboxes = (const void *)&pcref_sPCBoxMarkingGridHitboxes,
        .dpadBoxes = (const void *)&pcref_sPCBoxMarkingGridDpadBoxes,
        .callbacks = (const void *)&sPCBoxMarkingGridCallbacks,
    },
    {
        .hitboxes = (const void *)&pcref_sPCBoxBoxMenuGridHitboxes,
        .dpadBoxes = (const void *)&pcref_sPCBoxBoxMenuGridDpadBoxes,
        .callbacks = (const void *)&sPCBoxBoxMenuGridCallbacks,
    },
    {
        .hitboxes = (const void *)&pcref_sPCBoxWallpaperGridHitboxes,
        .dpadBoxes = (const void *)&pcref_sPCBoxWallpaperGridDpadBoxes,
        .callbacks = (const void *)&sPCBoxWallpaperGridCallbacks,
    },
};
