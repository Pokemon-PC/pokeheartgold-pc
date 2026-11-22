/* Generated from asm/nintendo_wfc_connect_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(NintendoWfcYesNo_HandleInput);
PCREF(NintendoWfcYesNo_Start);
PCREF(NintendoWfcYesNo_UnusedState2);
PCREF(NintendoWfcYesNo_WaitClose);
PCREF(NintendoWfc_AskCancelChallenge);
PCREF(NintendoWfc_AskCancelDownload);
PCREF(NintendoWfc_AskChallengeRoom);
PCREF(NintendoWfc_AskConnect);
PCREF(NintendoWfc_AskLeadersRank);
PCREF(NintendoWfc_AskLeadersRoom);
PCREF(NintendoWfc_AskLogOut);
PCREF(NintendoWfc_CloseConnection);
PCREF(NintendoWfc_Disconnect);
PCREF(NintendoWfc_HandleCancelChallengeChoice);
PCREF(NintendoWfc_HandleCancelDownloadChoice);
PCREF(NintendoWfc_HandleChallengeRoomInput);
PCREF(NintendoWfc_HandleConnectChoice);
PCREF(NintendoWfc_HandleLeadersRankInput);
PCREF(NintendoWfc_HandleLeadersRoomInput);
PCREF(NintendoWfc_HandleLogOutChoice);
PCREF(NintendoWfc_InitHttp);
PCREF(NintendoWfc_NumberInput_FadeOut);
PCREF(NintendoWfc_NumberInput_Finish);
PCREF(NintendoWfc_NumberInput_Main);
PCREF(NintendoWfc_NumberInput_Setup);
PCREF(NintendoWfc_NumberInput_StartFadeOut);
PCREF(NintendoWfc_NumberInput_Teardown);
PCREF(NintendoWfc_NumberInput_UnusedState4);
PCREF(NintendoWfc_NumberInput_UnusedState5);
PCREF(NintendoWfc_NumberInput_UnusedState6);
PCREF(NintendoWfc_NumberInput_WaitButtonFlash);
PCREF(NintendoWfc_NumberInput_WaitFadeIn);
PCREF(NintendoWfc_NumberInput_WaitFadeOut);
PCREF(NintendoWfc_OpenYesNoMenu);
PCREF(NintendoWfc_PrintDisconnected);
PCREF(NintendoWfc_PrintDisconnecting);
PCREF(NintendoWfc_PrintLeadersReceived);
PCREF(NintendoWfc_PrintReceivingLeaders);
PCREF(NintendoWfc_PrintReceivingTrainers);
PCREF(NintendoWfc_PrintRecordSent);
PCREF(NintendoWfc_PrintRoomUnavailable);
PCREF(NintendoWfc_PrintSendingRecord);
PCREF(NintendoWfc_PrintTrainersReceived);
PCREF(NintendoWfc_RequestInfo);
PCREF(NintendoWfc_RequestLeadersDownload);
PCREF(NintendoWfc_RequestRoomCount);
PCREF(NintendoWfc_RequestSetProfile);
PCREF(NintendoWfc_RequestTrainersDownload);
PCREF(NintendoWfc_RequestUpload);
PCREF(NintendoWfc_Save);
PCREF(NintendoWfc_SessionExit);
PCREF(NintendoWfc_SessionInit);
PCREF(NintendoWfc_SessionMain);
PCREF(NintendoWfc_ShowDwcError);
PCREF(NintendoWfc_ShowHttpError);
PCREF(NintendoWfc_StartAuth);
PCREF(NintendoWfc_StartChallengeRoomInput);
PCREF(NintendoWfc_StartConnect);
PCREF(NintendoWfc_StartDisconnect);
PCREF(NintendoWfc_StartExit);
PCREF(NintendoWfc_StartLeadersRankInput);
PCREF(NintendoWfc_StartLeadersRoomInput);
PCREF(NintendoWfc_StartSave);
PCREF(NintendoWfc_UnusedState_HandleYesNo);
PCREF(NintendoWfc_UnusedState_Idle);
PCREF(NintendoWfc_WaitAuth);
PCREF(NintendoWfc_WaitConnect);
PCREF(NintendoWfc_WaitErrorDismiss);
PCREF(NintendoWfc_WaitInfo);
PCREF(NintendoWfc_WaitLeadersDownload);
PCREF(NintendoWfc_WaitMessage);
PCREF(NintendoWfc_WaitMessageAndDelay);
PCREF(NintendoWfc_WaitRoomCount);
PCREF(NintendoWfc_WaitSetProfile);
PCREF(NintendoWfc_WaitTrainersDownload);
PCREF(NintendoWfc_WaitUpload);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    const void * init;
    const void * main;
    const void * exit;
} pcm_NintendoWfcScreenFuncs_0;

typedef struct {
    uint8_t unk_0[3];
    uint8_t status;
    uint32_t unk_4;
    const void * buffer;
} pcm_NintendoWfcHttpResponse_1;

typedef struct {
    const void * heap;
    const void * wfc;
    uint8_t unk_8[12];
} pcm_NintendoWfcGlobal_2;

extern pcm_NintendoWfcScreenFuncs_0 gNintendoWfcScreens[1];
extern const void * gNintendoWfcStates[57];
extern const void * gNintendoWfcNumberInputStates[12];
extern const void * gNintendoWfcYesNoStates[4];
extern pcm_NintendoWfcHttpResponse_1 gNintendoWfcHttpResponse;
extern pcm_NintendoWfcGlobal_2 gNintendoWfcGlobal;

pcm_NintendoWfcScreenFuncs_0 gNintendoWfcScreens[1] = {
    {
        .init = (const void *)&pcref_NintendoWfc_SessionInit,
        .main = (const void *)&pcref_NintendoWfc_SessionMain,
        .exit = (const void *)&pcref_NintendoWfc_SessionExit,
    },
};

const void * gNintendoWfcStates[57] = { (const void *)&pcref_NintendoWfc_AskConnect, (const void *)&pcref_NintendoWfc_HandleConnectChoice, (const void *)&pcref_NintendoWfc_StartConnect, (const void *)&pcref_NintendoWfc_WaitConnect, (const void *)&pcref_NintendoWfc_StartAuth, (const void *)&pcref_NintendoWfc_WaitAuth, (const void *)&pcref_NintendoWfc_InitHttp, (const void *)&pcref_NintendoWfc_RequestInfo,
  (const void *)&pcref_NintendoWfc_WaitInfo, (const void *)&pcref_NintendoWfc_RequestSetProfile, (const void *)&pcref_NintendoWfc_WaitSetProfile, (const void *)&pcref_NintendoWfc_RequestRoomCount, (const void *)&pcref_NintendoWfc_WaitRoomCount, (const void *)&pcref_NintendoWfc_AskChallengeRoom, (const void *)&pcref_NintendoWfc_StartChallengeRoomInput, (const void *)&pcref_NintendoWfc_HandleChallengeRoomInput,
  (const void *)&pcref_NintendoWfc_PrintReceivingTrainers, (const void *)&pcref_NintendoWfc_RequestTrainersDownload, (const void *)&pcref_NintendoWfc_WaitTrainersDownload, (const void *)&pcref_NintendoWfc_PrintTrainersReceived, (const void *)&pcref_NintendoWfc_PrintRoomUnavailable, (const void *)&pcref_NintendoWfc_AskCancelChallenge, (const void *)&pcref_NintendoWfc_HandleCancelChallengeChoice, (const void *)&pcref_NintendoWfc_AskCancelDownload,
  (const void *)&pcref_NintendoWfc_HandleCancelDownloadChoice, (const void *)&pcref_NintendoWfc_PrintSendingRecord, (const void *)&pcref_NintendoWfc_RequestUpload, (const void *)&pcref_NintendoWfc_WaitUpload, (const void *)&pcref_NintendoWfc_PrintRecordSent, (const void *)&pcref_NintendoWfc_AskLeadersRank, (const void *)&pcref_NintendoWfc_StartLeadersRankInput, (const void *)&pcref_NintendoWfc_HandleLeadersRankInput,
  (const void *)&pcref_NintendoWfc_AskLeadersRoom, (const void *)&pcref_NintendoWfc_StartLeadersRoomInput, (const void *)&pcref_NintendoWfc_HandleLeadersRoomInput, (const void *)&pcref_NintendoWfc_PrintReceivingLeaders, (const void *)&pcref_NintendoWfc_RequestLeadersDownload, (const void *)&pcref_NintendoWfc_WaitLeadersDownload, (const void *)&pcref_NintendoWfc_PrintLeadersReceived, (const void *)&pcref_NintendoWfc_StartSave,
  (const void *)&pcref_NintendoWfc_Save, (const void *)&pcref_NintendoWfc_PrintDisconnecting, (const void *)&pcref_NintendoWfc_CloseConnection, (const void *)&pcref_NintendoWfc_PrintDisconnected, (const void *)&pcref_NintendoWfc_UnusedState_Idle, (const void *)&pcref_NintendoWfc_StartDisconnect, (const void *)&pcref_NintendoWfc_StartExit, (const void *)&pcref_NintendoWfc_WaitMessage,
  (const void *)&pcref_NintendoWfc_OpenYesNoMenu, (const void *)&pcref_NintendoWfc_WaitMessageAndDelay, (const void *)&pcref_NintendoWfc_UnusedState_HandleYesNo, (const void *)&pcref_NintendoWfc_AskLogOut, (const void *)&pcref_NintendoWfc_HandleLogOutChoice, (const void *)&pcref_NintendoWfc_ShowHttpError, (const void *)&pcref_NintendoWfc_Disconnect, (const void *)&pcref_NintendoWfc_ShowDwcError,
  (const void *)&pcref_NintendoWfc_WaitErrorDismiss };

const void * gNintendoWfcNumberInputStates[12] = { (const void *)&pcref_NintendoWfc_NumberInput_FadeOut, (const void *)&pcref_NintendoWfc_NumberInput_Setup, (const void *)&pcref_NintendoWfc_NumberInput_WaitFadeIn, (const void *)&pcref_NintendoWfc_NumberInput_Main, (const void *)&pcref_NintendoWfc_NumberInput_UnusedState4, (const void *)&pcref_NintendoWfc_NumberInput_UnusedState5, (const void *)&pcref_NintendoWfc_NumberInput_UnusedState6, (const void *)&pcref_NintendoWfc_NumberInput_StartFadeOut,
  (const void *)&pcref_NintendoWfc_NumberInput_Teardown, (const void *)&pcref_NintendoWfc_NumberInput_WaitFadeOut, (const void *)&pcref_NintendoWfc_NumberInput_WaitButtonFlash, (const void *)&pcref_NintendoWfc_NumberInput_Finish };

const void * gNintendoWfcYesNoStates[4] = { (const void *)&pcref_NintendoWfcYesNo_Start, (const void *)&pcref_NintendoWfcYesNo_HandleInput, (const void *)&pcref_NintendoWfcYesNo_UnusedState2, (const void *)&pcref_NintendoWfcYesNo_WaitClose };

pcm_NintendoWfcHttpResponse_1 gNintendoWfcHttpResponse;

__attribute__((used)) static void pc_alias_gNintendoWfcHttpShortResponse(void) {
    __asm__ volatile(".globl " PCSYM(gNintendoWfcHttpShortResponse) "\n.set " PCSYM(gNintendoWfcHttpShortResponse) ", " PCSYM(gNintendoWfcHttpResponse) "+%c0" :: "i"(__builtin_offsetof(pcm_NintendoWfcHttpResponse_1, status)));
}

pcm_NintendoWfcGlobal_2 gNintendoWfcGlobal;
