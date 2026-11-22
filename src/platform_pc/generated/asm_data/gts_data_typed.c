/* Generated from asm/gts_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(GtsConnection_AskConnect);
PCREF(GtsConnection_AskDisconnect);
PCREF(GtsConnection_Disconnect);
PCREF(GtsConnection_DisconnectAfterError);
PCREF(GtsConnection_FadeOut);
PCREF(GtsConnection_HandleConnectPrompt);
PCREF(GtsConnection_HandleDisconnectMenu);
PCREF(GtsConnection_HandleExitPrompt);
PCREF(GtsConnection_InitServer);
PCREF(GtsConnection_PrintDisconnected);
PCREF(GtsConnection_PrintDisconnecting);
PCREF(GtsConnection_PrintServerError);
PCREF(GtsConnection_SendInfo);
PCREF(GtsConnection_SendSetProfile);
PCREF(GtsConnection_ShowConnectionError);
PCREF(GtsConnection_StartAuth);
PCREF(GtsConnection_StartConnect);
PCREF(GtsConnection_WaitAuth);
PCREF(GtsConnection_WaitCloseError);
PCREF(GtsConnection_WaitConnect);
PCREF(GtsConnection_WaitInfo);
PCREF(GtsConnection_WaitSetProfile);
PCREF(GtsConnection_WaitText);
PCREF(GtsConnection_WaitTextAndDelay);
PCREF(GtsConnection_WaitTextAndShowYesNo);
PCREF(GtsSelector_BackToCountryLetters);
PCREF(GtsSelector_BackToSpeciesLetters);
PCREF(GtsSelector_CancelCountryList);
PCREF(GtsSelector_CancelSpeciesList);
PCREF(GtsSelector_CloseCountryGroups);
PCREF(GtsSelector_CloseCountryLetters);
PCREF(GtsSelector_CloseSpeciesGroups);
PCREF(GtsSelector_CloseSpeciesLetters);
PCREF(GtsSelector_FinishCountry);
PCREF(GtsSelector_FinishGender);
PCREF(GtsSelector_FinishLevel);
PCREF(GtsSelector_FinishSpecies);
PCREF(GtsSelector_HandleCountryGroups);
PCREF(GtsSelector_HandleCountryLetters);
PCREF(GtsSelector_HandleCountryList);
PCREF(GtsSelector_HandleGenders);
PCREF(GtsSelector_HandleLevels);
PCREF(GtsSelector_HandleSpeciesGroups);
PCREF(GtsSelector_HandleSpeciesLetters);
PCREF(GtsSelector_HandleSpeciesList);
PCREF(GtsSelector_Idle);
PCREF(GtsSelector_OpenCountryGroups);
PCREF(GtsSelector_OpenCountryLetters);
PCREF(GtsSelector_OpenCountryList);
PCREF(GtsSelector_OpenGenders);
PCREF(GtsSelector_OpenLevels);
PCREF(GtsSelector_OpenSpeciesGroups);
PCREF(GtsSelector_OpenSpeciesLetters);
PCREF(GtsSelector_OpenSpeciesList);
PCREF(GtsSelector_ReopenCountryGroups);
PCREF(GtsSelector_ReopenSpeciesGroups);
PCREF(GtsSelector_WaitHide);
PCREF(GtsSelector_WaitMove);
PCREF(GtsSelector_WaitShow);
PCREF(GtsTransaction_AlreadyTraded);
PCREF(GtsTransaction_DepositDone);
PCREF(GtsTransaction_ExchangeDone);
PCREF(GtsTransaction_ExitToMainMenu);
PCREF(GtsTransaction_FadeOut);
PCREF(GtsTransaction_Idle);
PCREF(GtsTransaction_ReceiveDone);
PCREF(GtsTransaction_ReceiveTradedMon);
PCREF(GtsTransaction_SaveAndExit);
PCREF(GtsTransaction_SaveFirstPart);
PCREF(GtsTransaction_SaveRest);
PCREF(GtsTransaction_SaveWithMessage);
PCREF(GtsTransaction_SendDelete);
PCREF(GtsTransaction_SendExchange);
PCREF(GtsTransaction_SendExchangeFinish);
PCREF(GtsTransaction_SendGet);
PCREF(GtsTransaction_SendPost);
PCREF(GtsTransaction_SendPostFinish);
PCREF(GtsTransaction_SendResult);
PCREF(GtsTransaction_SendReturn);
PCREF(GtsTransaction_SendStatusGet);
PCREF(GtsTransaction_SendUnsavedReturn);
PCREF(GtsTransaction_ServerError);
PCREF(GtsTransaction_ServerErrorExit);
PCREF(GtsTransaction_Start);
PCREF(GtsTransaction_StartSave);
PCREF(GtsTransaction_StartSaveWithMessage);
PCREF(GtsTransaction_TradedDone);
PCREF(GtsTransaction_WaitDelete);
PCREF(GtsTransaction_WaitExchange);
PCREF(GtsTransaction_WaitExchangeFinish);
PCREF(GtsTransaction_WaitGet);
PCREF(GtsTransaction_WaitPost);
PCREF(GtsTransaction_WaitPostFinish);
PCREF(GtsTransaction_WaitResult);
PCREF(GtsTransaction_WaitReturn);
PCREF(GtsTransaction_WaitSaveDelay);
PCREF(GtsTransaction_WaitStatusGet);
PCREF(GtsTransaction_WaitText);
PCREF(GtsTransaction_WaitUnsavedReturn);
PCREF(GtsWanted_AskConfirm);
PCREF(GtsWanted_AskGender);
PCREF(GtsWanted_AskLevel);
PCREF(GtsWanted_FadeOut);
PCREF(GtsWanted_HandleConfirmPrompt);
PCREF(GtsWanted_HandleGenderSelector);
PCREF(GtsWanted_HandleInput);
PCREF(GtsWanted_HandleLevelSelector);
PCREF(GtsWanted_HandleSpeciesSelector);
PCREF(GtsWanted_InvalidState4);
PCREF(GtsWanted_InvalidState5);
PCREF(GtsWanted_OpenGenderSelector);
PCREF(GtsWanted_OpenLevelSelector);
PCREF(GtsWanted_OpenSpeciesSelector);
PCREF(GtsWanted_ShowConfirmPrompt);
PCREF(GtsWanted_Start);
PCREF(GtsWanted_WaitText);
PCREF(TradeSequence_Exit);
PCREF(TradeSequence_Init);
PCREF(TradeSequence_Main);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    const void * init;
    const void * exec;
    const void * exit;
    uint32_t ovy_id;
} pcm_OverlayManagerTemplate_0;

typedef struct {
    const void * heap;
    const void * app;
} pcm_GtsGlobals_1;

extern const pcm_OverlayManagerTemplate_0 gGtsTradeSequenceTemplate;
extern const void * gGtsWantedStates[17];
extern const void * gGtsTransactionStates[40];
extern const void * gGtsSelectorStates[34];
extern const void * gGtsConnectionStates[25];
extern pcm_GtsGlobals_1 gGtsGlobals;

const pcm_OverlayManagerTemplate_0 gGtsTradeSequenceTemplate = {
    .init = (const void *)&pcref_TradeSequence_Init,
    .exec = (const void *)&pcref_TradeSequence_Main,
    .exit = (const void *)&pcref_TradeSequence_Exit,
    .ovy_id = 71,
};

const void * gGtsWantedStates[17] = { (const void *)&pcref_GtsWanted_Start, (const void *)&pcref_GtsWanted_HandleInput, (const void *)&pcref_GtsWanted_FadeOut, (const void *)&pcref_GtsWanted_OpenSpeciesSelector, (const void *)&pcref_GtsWanted_InvalidState4, (const void *)&pcref_GtsWanted_InvalidState5, (const void *)&pcref_GtsWanted_HandleSpeciesSelector, (const void *)&pcref_GtsWanted_AskGender,
  (const void *)&pcref_GtsWanted_OpenGenderSelector, (const void *)&pcref_GtsWanted_HandleGenderSelector, (const void *)&pcref_GtsWanted_AskLevel, (const void *)&pcref_GtsWanted_OpenLevelSelector, (const void *)&pcref_GtsWanted_HandleLevelSelector, (const void *)&pcref_GtsWanted_AskConfirm, (const void *)&pcref_GtsWanted_ShowConfirmPrompt, (const void *)&pcref_GtsWanted_HandleConfirmPrompt,
  (const void *)&pcref_GtsWanted_WaitText };

const void * gGtsTransactionStates[40] = { (const void *)&pcref_GtsTransaction_Start, (const void *)&pcref_GtsTransaction_Idle, (const void *)&pcref_GtsTransaction_SendPost, (const void *)&pcref_GtsTransaction_WaitPost, (const void *)&pcref_GtsTransaction_SendPostFinish, (const void *)&pcref_GtsTransaction_WaitPostFinish, (const void *)&pcref_GtsTransaction_DepositDone, (const void *)&pcref_GtsTransaction_SendGet,
  (const void *)&pcref_GtsTransaction_WaitGet, (const void *)&pcref_GtsTransaction_SendReturn, (const void *)&pcref_GtsTransaction_WaitReturn, (const void *)&pcref_GtsTransaction_ReceiveDone, (const void *)&pcref_GtsTransaction_SendExchange, (const void *)&pcref_GtsTransaction_WaitExchange, (const void *)&pcref_GtsTransaction_SendExchangeFinish, (const void *)&pcref_GtsTransaction_WaitExchangeFinish,
  (const void *)&pcref_GtsTransaction_ExchangeDone, (const void *)&pcref_GtsTransaction_AlreadyTraded, (const void *)&pcref_GtsTransaction_ReceiveTradedMon, (const void *)&pcref_GtsTransaction_SendDelete, (const void *)&pcref_GtsTransaction_WaitDelete, (const void *)&pcref_GtsTransaction_TradedDone, (const void *)&pcref_GtsTransaction_SendUnsavedReturn, (const void *)&pcref_GtsTransaction_WaitUnsavedReturn,
  (const void *)&pcref_GtsTransaction_SendResult, (const void *)&pcref_GtsTransaction_WaitResult, (const void *)&pcref_GtsTransaction_SendStatusGet, (const void *)&pcref_GtsTransaction_WaitStatusGet, (const void *)&pcref_GtsTransaction_ExitToMainMenu, (const void *)&pcref_GtsTransaction_SaveAndExit, (const void *)&pcref_GtsTransaction_StartSave, (const void *)&pcref_GtsTransaction_WaitSaveDelay,
  (const void *)&pcref_GtsTransaction_SaveFirstPart, (const void *)&pcref_GtsTransaction_SaveRest, (const void *)&pcref_GtsTransaction_StartSaveWithMessage, (const void *)&pcref_GtsTransaction_SaveWithMessage, (const void *)&pcref_GtsTransaction_FadeOut, (const void *)&pcref_GtsTransaction_WaitText, (const void *)&pcref_GtsTransaction_ServerErrorExit, (const void *)&pcref_GtsTransaction_ServerError };

const void * gGtsSelectorStates[34] = { (const void *)&pcref_GtsSelector_Idle, (const void *)&pcref_GtsSelector_WaitShow, (const void *)&pcref_GtsSelector_WaitMove, (const void *)&pcref_GtsSelector_WaitHide, (const void *)&pcref_GtsSelector_OpenSpeciesGroups, (const void *)&pcref_GtsSelector_HandleSpeciesGroups, (const void *)&pcref_GtsSelector_CloseSpeciesGroups, (const void *)&pcref_GtsSelector_ReopenSpeciesGroups,
  (const void *)&pcref_GtsSelector_OpenSpeciesLetters, (const void *)&pcref_GtsSelector_HandleSpeciesLetters, (const void *)&pcref_GtsSelector_CloseSpeciesLetters, (const void *)&pcref_GtsSelector_BackToSpeciesLetters, (const void *)&pcref_GtsSelector_OpenSpeciesList, (const void *)&pcref_GtsSelector_HandleSpeciesList, (const void *)&pcref_GtsSelector_CancelSpeciesList, (const void *)&pcref_GtsSelector_FinishSpecies,
  (const void *)&pcref_GtsSelector_OpenCountryGroups, (const void *)&pcref_GtsSelector_HandleCountryGroups, (const void *)&pcref_GtsSelector_CloseCountryGroups, (const void *)&pcref_GtsSelector_ReopenCountryGroups, (const void *)&pcref_GtsSelector_OpenCountryLetters, (const void *)&pcref_GtsSelector_HandleCountryLetters, (const void *)&pcref_GtsSelector_CloseCountryLetters, (const void *)&pcref_GtsSelector_BackToCountryLetters,
  (const void *)&pcref_GtsSelector_OpenCountryList, (const void *)&pcref_GtsSelector_HandleCountryList, (const void *)&pcref_GtsSelector_CancelCountryList, (const void *)&pcref_GtsSelector_FinishCountry, (const void *)&pcref_GtsSelector_OpenGenders, (const void *)&pcref_GtsSelector_HandleGenders, (const void *)&pcref_GtsSelector_FinishGender, (const void *)&pcref_GtsSelector_OpenLevels,
  (const void *)&pcref_GtsSelector_HandleLevels, (const void *)&pcref_GtsSelector_FinishLevel };

const void * gGtsConnectionStates[25] = { (const void *)&pcref_GtsConnection_AskConnect, (const void *)&pcref_GtsConnection_HandleConnectPrompt, (const void *)&pcref_GtsConnection_StartConnect, (const void *)&pcref_GtsConnection_WaitConnect, (const void *)&pcref_GtsConnection_StartAuth, (const void *)&pcref_GtsConnection_WaitAuth, (const void *)&pcref_GtsConnection_InitServer, (const void *)&pcref_GtsConnection_SendInfo,
  (const void *)&pcref_GtsConnection_WaitInfo, (const void *)&pcref_GtsConnection_SendSetProfile, (const void *)&pcref_GtsConnection_WaitSetProfile, (const void *)&pcref_GtsConnection_FadeOut, (const void *)&pcref_GtsConnection_WaitText, (const void *)&pcref_GtsConnection_WaitTextAndShowYesNo, (const void *)&pcref_GtsConnection_HandleExitPrompt, (const void *)&pcref_GtsConnection_AskDisconnect,
  (const void *)&pcref_GtsConnection_HandleDisconnectMenu, (const void *)&pcref_GtsConnection_PrintDisconnecting, (const void *)&pcref_GtsConnection_Disconnect, (const void *)&pcref_GtsConnection_PrintDisconnected, (const void *)&pcref_GtsConnection_WaitTextAndDelay, (const void *)&pcref_GtsConnection_PrintServerError, (const void *)&pcref_GtsConnection_DisconnectAfterError, (const void *)&pcref_GtsConnection_ShowConnectionError,
  (const void *)&pcref_GtsConnection_WaitCloseError };

pcm_GtsGlobals_1 gGtsGlobals;
