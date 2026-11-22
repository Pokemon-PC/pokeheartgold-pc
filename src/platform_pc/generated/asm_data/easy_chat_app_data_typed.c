/* Generated from asm/easy_chat_app_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(EasyChatAppView_Cmd_CloseCategories);
PCREF(EasyChatAppView_Cmd_CloseWordList);
PCREF(EasyChatAppView_Cmd_CloseYesNo);
PCREF(EasyChatAppView_Cmd_ConfirmFinish);
PCREF(EasyChatAppView_Cmd_ConfirmQuit);
PCREF(EasyChatAppView_Cmd_DrawYesNoCursor);
PCREF(EasyChatAppView_Cmd_FadeIn);
PCREF(EasyChatAppView_Cmd_FocusMenu);
PCREF(EasyChatAppView_Cmd_FocusSentence);
PCREF(EasyChatAppView_Cmd_HideMessage);
PCREF(EasyChatAppView_Cmd_Load);
PCREF(EasyChatAppView_Cmd_MoveMenuCursor);
PCREF(EasyChatAppView_Cmd_Nop);
PCREF(EasyChatAppView_Cmd_OpenCategories);
PCREF(EasyChatAppView_Cmd_OpenWordList);
PCREF(EasyChatAppView_Cmd_PressPageDown);
PCREF(EasyChatAppView_Cmd_PressPageUp);
PCREF(EasyChatAppView_Cmd_RedrawSentence);
PCREF(EasyChatAppView_Cmd_ReleasePageDown);
PCREF(EasyChatAppView_Cmd_ReleasePageUp);
PCREF(EasyChatAppView_Cmd_ScrollWordList);
PCREF(EasyChatAppView_Cmd_SetCategoryCursor);
PCREF(EasyChatAppView_Cmd_SetMenuCursor);
PCREF(EasyChatAppView_Cmd_SetWordListCursor);
PCREF(EasyChatAppView_Cmd_ShowCategoryCursor);
PCREF(EasyChatAppView_Cmd_ShowIncompleteMessage);
PCREF(EasyChatAppView_Cmd_ShowWordListCursor);
PCREF(EasyChatAppView_Cmd_SwitchListMode);
PCREF(EasyChatAppView_Cmd_SwitchMode);
PCREF(EasyChatAppView_Cmd_Unload);
PCREF(EasyChatAppView_Cmd_WordListToCategories);
PCREF(EasyChatAppView_Cmd_WordListToMenu);

extern const const void * gEasyChatViewCommandFuncs[32];

const const void * gEasyChatViewCommandFuncs[32] = { (const void *)&pcref_EasyChatAppView_Cmd_Load, (const void *)&pcref_EasyChatAppView_Cmd_Unload, (const void *)&pcref_EasyChatAppView_Cmd_FadeIn, (const void *)&pcref_EasyChatAppView_Cmd_RedrawSentence, (const void *)&pcref_EasyChatAppView_Cmd_Nop, (const void *)&pcref_EasyChatAppView_Cmd_ShowCategoryCursor, (const void *)&pcref_EasyChatAppView_Cmd_ShowWordListCursor, (const void *)&pcref_EasyChatAppView_Cmd_FocusMenu,
  (const void *)&pcref_EasyChatAppView_Cmd_FocusSentence, (const void *)&pcref_EasyChatAppView_Cmd_OpenCategories, (const void *)&pcref_EasyChatAppView_Cmd_CloseCategories, (const void *)&pcref_EasyChatAppView_Cmd_OpenWordList, (const void *)&pcref_EasyChatAppView_Cmd_WordListToCategories, (const void *)&pcref_EasyChatAppView_Cmd_CloseWordList, (const void *)&pcref_EasyChatAppView_Cmd_WordListToMenu, (const void *)&pcref_EasyChatAppView_Cmd_MoveMenuCursor,
  (const void *)&pcref_EasyChatAppView_Cmd_SetMenuCursor, (const void *)&pcref_EasyChatAppView_Cmd_SetCategoryCursor, (const void *)&pcref_EasyChatAppView_Cmd_SetWordListCursor, (const void *)&pcref_EasyChatAppView_Cmd_ScrollWordList, (const void *)&pcref_EasyChatAppView_Cmd_HideMessage, (const void *)&pcref_EasyChatAppView_Cmd_ConfirmFinish, (const void *)&pcref_EasyChatAppView_Cmd_ConfirmQuit, (const void *)&pcref_EasyChatAppView_Cmd_ShowIncompleteMessage,
  (const void *)&pcref_EasyChatAppView_Cmd_DrawYesNoCursor, (const void *)&pcref_EasyChatAppView_Cmd_CloseYesNo, (const void *)&pcref_EasyChatAppView_Cmd_SwitchMode, (const void *)&pcref_EasyChatAppView_Cmd_SwitchListMode, (const void *)&pcref_EasyChatAppView_Cmd_PressPageUp, (const void *)&pcref_EasyChatAppView_Cmd_PressPageDown, (const void *)&pcref_EasyChatAppView_Cmd_ReleasePageUp, (const void *)&pcref_EasyChatAppView_Cmd_ReleasePageDown };
