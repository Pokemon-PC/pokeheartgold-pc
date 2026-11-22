/* Generated from asm/pokewalker_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(PokewalkerApp_EraseRecords_AfterAnimation);
PCREF(PokewalkerApp_EraseRecords_AnimateReturnedMon);
PCREF(PokewalkerApp_EraseRecords_End);
PCREF(PokewalkerApp_EraseRecords_EndEraseMenu);
PCREF(PokewalkerApp_EraseRecords_EndSave);
PCREF(PokewalkerApp_EraseRecords_Enter);
PCREF(PokewalkerApp_EraseRecords_Exit);
PCREF(PokewalkerApp_EraseRecords_HandleCarryOverStepsMenu);
PCREF(PokewalkerApp_EraseRecords_HandleCautionYesNo);
PCREF(PokewalkerApp_EraseRecords_HandleEraseMenu);
PCREF(PokewalkerApp_EraseRecords_PrepareLink);
PCREF(PokewalkerApp_EraseRecords_PrintArrived);
PCREF(PokewalkerApp_EraseRecords_PrintCanceled);
PCREF(PokewalkerApp_EraseRecords_PrintCarryOverSteps);
PCREF(PokewalkerApp_EraseRecords_PrintCaution);
PCREF(PokewalkerApp_EraseRecords_PrintComeBack);
PCREF(PokewalkerApp_EraseRecords_PrintConnect);
PCREF(PokewalkerApp_EraseRecords_PrintInitialized);
PCREF(PokewalkerApp_EraseRecords_PrintPointAtCard);
PCREF(PokewalkerApp_EraseRecords_PrintSaving);
PCREF(PokewalkerApp_EraseRecords_PrintWillErase);
PCREF(PokewalkerApp_EraseRecords_Save);
PCREF(PokewalkerApp_EraseRecords_ShowCarryOverStepsMenu);
PCREF(PokewalkerApp_EraseRecords_ShowEraseMenu);
PCREF(PokewalkerApp_EraseRecords_ShowReturnedMon);
PCREF(PokewalkerApp_EraseRecords_StartLink);
PCREF(PokewalkerApp_EraseRecords_Update);
PCREF(PokewalkerApp_EraseRecords_UpdateLink);
PCREF(PokewalkerApp_EraseRecords_WaitArrived);
PCREF(PokewalkerApp_EraseRecords_WaitCanceled);
PCREF(PokewalkerApp_EraseRecords_WaitCarryOverSteps);
PCREF(PokewalkerApp_EraseRecords_WaitCaution);
PCREF(PokewalkerApp_EraseRecords_WaitComeBack);
PCREF(PokewalkerApp_EraseRecords_WaitCursor);
PCREF(PokewalkerApp_EraseRecords_WaitInitialized);
PCREF(PokewalkerApp_EraseRecords_WaitMessage);
PCREF(PokewalkerApp_EraseRecords_WaitPointAtCard);
PCREF(PokewalkerApp_EraseRecords_WaitSaving);
PCREF(PokewalkerApp_EventLog_Enter);
PCREF(PokewalkerApp_EventLog_Exit);
PCREF(PokewalkerApp_EventLog_Update);
PCREF(PokewalkerApp_Exit);
PCREF(PokewalkerApp_Init);
PCREF(PokewalkerApp_LinkSave_End);
PCREF(PokewalkerApp_LinkSave_EndSave);
PCREF(PokewalkerApp_LinkSave_EndSave2);
PCREF(PokewalkerApp_LinkSave_Enter);
PCREF(PokewalkerApp_LinkSave_Exit);
PCREF(PokewalkerApp_LinkSave_GoToStrollReport);
PCREF(PokewalkerApp_LinkSave_PrintSaving);
PCREF(PokewalkerApp_LinkSave_PrintSaving2);
PCREF(PokewalkerApp_LinkSave_Save);
PCREF(PokewalkerApp_LinkSave_Save2);
PCREF(PokewalkerApp_LinkSave_SetNextMode);
PCREF(PokewalkerApp_LinkSave_Update);
PCREF(PokewalkerApp_LinkSave_WaitSaving);
PCREF(PokewalkerApp_LinkSave_WaitSaving2);
PCREF(PokewalkerApp_Link_AfterReturnAnimation);
PCREF(PokewalkerApp_Link_AnimateReturn);
PCREF(PokewalkerApp_Link_End);
PCREF(PokewalkerApp_Link_EndCourseMenu);
PCREF(PokewalkerApp_Link_EndSendBack);
PCREF(PokewalkerApp_Link_EndSendBackMenu);
PCREF(PokewalkerApp_Link_Enter);
PCREF(PokewalkerApp_Link_Exit);
PCREF(PokewalkerApp_Link_FadeIn);
PCREF(PokewalkerApp_Link_FadeOut);
PCREF(PokewalkerApp_Link_FadeOutToSelectMon);
PCREF(PokewalkerApp_Link_HandleConfirmCourseYesNo);
PCREF(PokewalkerApp_Link_HandleCourseMenu);
PCREF(PokewalkerApp_Link_HandleSendBackMenu);
PCREF(PokewalkerApp_Link_HandleSendBackYesNo);
PCREF(PokewalkerApp_Link_PrintArrived);
PCREF(PokewalkerApp_Link_PrintCanceled);
PCREF(PokewalkerApp_Link_PrintComeBack);
PCREF(PokewalkerApp_Link_PrintConfirmCourse);
PCREF(PokewalkerApp_Link_PrintError);
PCREF(PokewalkerApp_Link_PrintInstructions);
PCREF(PokewalkerApp_Link_PrintPointAtCard);
PCREF(PokewalkerApp_Link_PrintPointAtCardForGifts);
PCREF(PokewalkerApp_Link_PrintPointAtCardForStroll);
PCREF(PokewalkerApp_Link_PrintReceivedGifts);
PCREF(PokewalkerApp_Link_PrintReleased);
PCREF(PokewalkerApp_Link_PrintReturned);
PCREF(PokewalkerApp_Link_PrintSelectCourse);
PCREF(PokewalkerApp_Link_PrintSendBackCaution);
PCREF(PokewalkerApp_Link_PrintWentToWalker);
PCREF(PokewalkerApp_Link_PrintWillConnect);
PCREF(PokewalkerApp_Link_PrintWillConnectWithMon);
PCREF(PokewalkerApp_Link_PrintWillSendBack);
PCREF(PokewalkerApp_Link_RetryInstructions);
PCREF(PokewalkerApp_Link_RetryPointAtCard);
PCREF(PokewalkerApp_Link_RetryPointAtCardForGifts);
PCREF(PokewalkerApp_Link_RetryPointAtCardForStroll);
PCREF(PokewalkerApp_Link_ShowConfirmCourseYesNo);
PCREF(PokewalkerApp_Link_ShowCourseMenu);
PCREF(PokewalkerApp_Link_ShowSendBackMenu);
PCREF(PokewalkerApp_Link_ShowSendBackYesNo);
PCREF(PokewalkerApp_Link_Start);
PCREF(PokewalkerApp_Link_StartReceive);
PCREF(PokewalkerApp_Link_StartReceiveGifts);
PCREF(PokewalkerApp_Link_StartReturnAnimation);
PCREF(PokewalkerApp_Link_StartSendStroll);
PCREF(PokewalkerApp_Link_StartUpload);
PCREF(PokewalkerApp_Link_Update);
PCREF(PokewalkerApp_Link_UpdateReceive);
PCREF(PokewalkerApp_Link_UpdateReceiveGifts);
PCREF(PokewalkerApp_Link_UpdateSendStroll);
PCREF(PokewalkerApp_Link_UpdateUpload);
PCREF(PokewalkerApp_Link_WaitConfirmCourse);
PCREF(PokewalkerApp_Link_WaitCursor);
PCREF(PokewalkerApp_Link_WaitError);
PCREF(PokewalkerApp_Link_WaitFadeIn);
PCREF(PokewalkerApp_Link_WaitFadeOut);
PCREF(PokewalkerApp_Link_WaitFadeOutToSelectMon);
PCREF(PokewalkerApp_Link_WaitInstructions);
PCREF(PokewalkerApp_Link_WaitMessage);
PCREF(PokewalkerApp_Link_WaitPointAtCard);
PCREF(PokewalkerApp_Link_WaitPointAtCardForGifts);
PCREF(PokewalkerApp_Link_WaitPointAtCardForStroll);
PCREF(PokewalkerApp_Link_WaitReceivedGifts);
PCREF(PokewalkerApp_Link_WaitReleased);
PCREF(PokewalkerApp_Link_WaitReturned);
PCREF(PokewalkerApp_Link_WaitSelectCourse);
PCREF(PokewalkerApp_Link_WaitSendBackCaution);
PCREF(PokewalkerApp_Link_WaitWentToWalker);
PCREF(PokewalkerApp_Link_WaitWillSendBack);
PCREF(PokewalkerApp_Main);
PCREF(PokewalkerApp_MainMenu_End);
PCREF(PokewalkerApp_MainMenu_EndFullMenu);
PCREF(PokewalkerApp_MainMenu_EndReceiveMenu);
PCREF(PokewalkerApp_MainMenu_EndStrollMenu);
PCREF(PokewalkerApp_MainMenu_Enter);
PCREF(PokewalkerApp_MainMenu_Exit);
PCREF(PokewalkerApp_MainMenu_HandleFullMenu);
PCREF(PokewalkerApp_MainMenu_HandleReceiveMenu);
PCREF(PokewalkerApp_MainMenu_HandleStrollMenu);
PCREF(PokewalkerApp_MainMenu_HandleTopMenu);
PCREF(PokewalkerApp_MainMenu_PrintBoxesFull);
PCREF(PokewalkerApp_MainMenu_PrintNoPokemon);
PCREF(PokewalkerApp_MainMenu_PrintReceive);
PCREF(PokewalkerApp_MainMenu_PrintStrollReady);
PCREF(PokewalkerApp_MainMenu_PrintStrollReady2);
PCREF(PokewalkerApp_MainMenu_PrintWelcome);
PCREF(PokewalkerApp_MainMenu_Quit);
PCREF(PokewalkerApp_MainMenu_ShowFullMenu);
PCREF(PokewalkerApp_MainMenu_ShowReceiveMenu);
PCREF(PokewalkerApp_MainMenu_ShowStrollMenu);
PCREF(PokewalkerApp_MainMenu_ShowTopMenu);
PCREF(PokewalkerApp_MainMenu_Start);
PCREF(PokewalkerApp_MainMenu_Update);
PCREF(PokewalkerApp_MainMenu_WaitBoxesFull);
PCREF(PokewalkerApp_MainMenu_WaitCursor);
PCREF(PokewalkerApp_MainMenu_WaitFade);
PCREF(PokewalkerApp_MainMenu_WaitMessage);
PCREF(PokewalkerApp_MainMenu_WaitReceive);
PCREF(PokewalkerApp_MainMenu_WaitStrollReady2);
PCREF(PokewalkerApp_MainMenu_WaitWelcome);
PCREF(PokewalkerApp_QuitMessage_End);
PCREF(PokewalkerApp_QuitMessage_Enter);
PCREF(PokewalkerApp_QuitMessage_Exit);
PCREF(PokewalkerApp_QuitMessage_Print);
PCREF(PokewalkerApp_QuitMessage_Update);
PCREF(PokewalkerApp_QuitMessage_WaitInput);
PCREF(PokewalkerApp_QuitMessage_WaitPrint);
PCREF(PokewalkerApp_SelectMon_Enter);
PCREF(PokewalkerApp_SelectMon_Exit);
PCREF(PokewalkerApp_SelectMon_Update);
PCREF(PokewalkerApp_StartStroll_CheckFirstStroll);
PCREF(PokewalkerApp_StartStroll_End);
PCREF(PokewalkerApp_StartStroll_EndSave);
PCREF(PokewalkerApp_StartStroll_Enter);
PCREF(PokewalkerApp_StartStroll_Exit);
PCREF(PokewalkerApp_StartStroll_PrintRegistered);
PCREF(PokewalkerApp_StartStroll_PrintSaving);
PCREF(PokewalkerApp_StartStroll_Save);
PCREF(PokewalkerApp_StartStroll_Update);
PCREF(PokewalkerApp_StartStroll_WaitRegistered);
PCREF(PokewalkerApp_StartStroll_WaitSaving);
PCREF(PokewalkerApp_StrollReport_CaughtMonsFadeOut);
PCREF(PokewalkerApp_StrollReport_End);
PCREF(PokewalkerApp_StrollReport_Enter);
PCREF(PokewalkerApp_StrollReport_Exit);
PCREF(PokewalkerApp_StrollReport_FadeOut);
PCREF(PokewalkerApp_StrollReport_GiftsDoneFadeOut);
PCREF(PokewalkerApp_StrollReport_GiftsFadeOut);
PCREF(PokewalkerApp_StrollReport_ItemsFadeOut);
PCREF(PokewalkerApp_StrollReport_PrintGiftRouteFound);
PCREF(PokewalkerApp_StrollReport_PrintGiftWatts);
PCREF(PokewalkerApp_StrollReport_PrintItemsPlaced);
PCREF(PokewalkerApp_StrollReport_PrintLevelUp);
PCREF(PokewalkerApp_StrollReport_PrintMilestone);
PCREF(PokewalkerApp_StrollReport_PrintMonArrived);
PCREF(PokewalkerApp_StrollReport_PrintMonsSent);
PCREF(PokewalkerApp_StrollReport_PrintRecords);
PCREF(PokewalkerApp_StrollReport_PrintRouteAvailable);
PCREF(PokewalkerApp_StrollReport_PrintRouteFound);
PCREF(PokewalkerApp_StrollReport_PrintStarfBerry);
PCREF(PokewalkerApp_StrollReport_PrintWatts);
PCREF(PokewalkerApp_StrollReport_RecordsFadeOut);
PCREF(PokewalkerApp_StrollReport_ShowCaughtMons);
PCREF(PokewalkerApp_StrollReport_ShowGifts);
PCREF(PokewalkerApp_StrollReport_ShowItems);
PCREF(PokewalkerApp_StrollReport_ShowRecords);
PCREF(PokewalkerApp_StrollReport_ShowResults);
PCREF(PokewalkerApp_StrollReport_Start);
PCREF(PokewalkerApp_StrollReport_Update);
PCREF(PokewalkerApp_StrollReport_WaitCaughtMonsFade);
PCREF(PokewalkerApp_StrollReport_WaitCaughtMonsFadeOut);
PCREF(PokewalkerApp_StrollReport_WaitFadeOut);
PCREF(PokewalkerApp_StrollReport_WaitGiftsDoneFadeOut);
PCREF(PokewalkerApp_StrollReport_WaitGiftsFade);
PCREF(PokewalkerApp_StrollReport_WaitGiftsFadeOut);
PCREF(PokewalkerApp_StrollReport_WaitItemsFade);
PCREF(PokewalkerApp_StrollReport_WaitItemsFadeOut);
PCREF(PokewalkerApp_StrollReport_WaitMessage);
PCREF(PokewalkerApp_StrollReport_WaitRecordsFade);
PCREF(PokewalkerApp_StrollReport_WaitRecordsFadeOut);
PCREF(PokewalkerApp_StrollReport_WaitResultsFade);
PCREF(PokewalkerApp_WaitKeyToSave_Enter);
PCREF(PokewalkerApp_WaitKeyToSave_Exit);
PCREF(PokewalkerApp_WaitKeyToSave_Update);
PCREF(PokewalkerApp_WaitKey_Enter);
PCREF(PokewalkerApp_WaitKey_Exit);
PCREF(PokewalkerApp_WaitKey_Update);
PCREF(PokewalkerEventLog_Exit);
PCREF(PokewalkerEventLog_Init);
PCREF(PokewalkerEventLog_Main);
PCREF(sPokewalkerRouteImage1);
PCREF(sPokewalkerRouteImage2);
PCREF(sPokewalkerRouteImage3);
PCREF(sPokewalkerRouteImage4);
PCREF(sPokewalkerRouteImage5);
PCREF(sPokewalkerRouteImage6);
PCREF(sPokewalkerRouteImage7);
PCREF(sPokewalkerRouteImage8);
PCREF(sPokewalkerUploadBlock0);
PCREF(sPokewalkerUploadBlock1);
PCREF(sPokewalkerUploadBlock10);
PCREF(sPokewalkerUploadBlock11);
PCREF(sPokewalkerUploadBlock12);
PCREF(sPokewalkerUploadBlock13);
PCREF(sPokewalkerUploadBlock14);
PCREF(sPokewalkerUploadBlock15);
PCREF(sPokewalkerUploadBlock2);
PCREF(sPokewalkerUploadBlock3);
PCREF(sPokewalkerUploadBlock4);
PCREF(sPokewalkerUploadBlock5);
PCREF(sPokewalkerUploadBlock6);
PCREF(sPokewalkerUploadBlock7);
PCREF(sPokewalkerUploadBlock8);
PCREF(sPokewalkerUploadBlock9);
PCREF(sSpindaSpot0Pixels);
PCREF(sSpindaSpot1Pixels);
PCREF(sSpindaSpot2Pixels);
PCREF(sSpindaSpot3Pixels);
PCREF(sTouchButtons_Back);
PCREF(sTouchButtons_CourseList);
PCREF(sTouchButtons_OneChoiceBack);
PCREF(sTouchButtons_ThreeChoicesBack);
PCREF(sTouchButtons_TwoChoices);
PCREF(sTouchButtons_TwoChoicesBack);
PCREF(sWindowBank0Template0);
PCREF(sWindowBank0Template1);
PCREF(sWindowBank0Template2);
PCREF(sWindowBank0Template3);
PCREF(sWindowBank0Template4);
PCREF(sWindowBank0Template5);
PCREF(sWindowBank0Template6);
PCREF(sWindowBank1Template0);
PCREF(sWindowBank1Template1);
PCREF(sWindowBank1Template2);
PCREF(sWindowBank1Template3);
PCREF(sWindowBank1Template4);
PCREF(sWindowBank1Template5);
PCREF(sWindowBank2Template0);
PCREF(sWindowBank2Template1);
PCREF(sWindowBank3Template0);
PCREF(sWindowBank3Template1);
PCREF(sWindowBank3Template2);
PCREF(sWindowBank3Template3);
PCREF(sWindowBank3Template4);
PCREF(sWindowBank3Template5);
PCREF(sWindowBank3Template6);
PCREF(sWindowBank3Template7);
PCREF(sWindowBank4Template0);
PCREF(sWindowBank4Template1);
PCREF(sWindowBank4Template2);
PCREF(sWindowBank4Template3);
PCREF(sWindowBank4Template4);
PCREF(sWindowBank4Template5);
PCREF(sWindowBank4Template6);
PCREF(sWindowBank4Template7);
PCREF(sWindowBank4Template8);
PCREF(sWindowBank5Template0);
PCREF(sWindowBank5Template1);
PCREF(sWindowBank5Template2);
PCREF(sWindowBank5Template3);
PCREF(sWindowBank5Template4);
PCREF(sWindowBank5Template5);
PCREF(sWindowBank5Template6);
PCREF(sWindowBank6Template0);
PCREF(sWindowBank6Template1);
PCREF(sWindowBank6Template10);
PCREF(sWindowBank6Template11);
PCREF(sWindowBank6Template12);
PCREF(sWindowBank6Template13);
PCREF(sWindowBank6Template14);
PCREF(sWindowBank6Template15);
PCREF(sWindowBank6Template2);
PCREF(sWindowBank6Template3);
PCREF(sWindowBank6Template4);
PCREF(sWindowBank6Template5);
PCREF(sWindowBank6Template6);
PCREF(sWindowBank6Template7);
PCREF(sWindowBank6Template8);
PCREF(sWindowBank6Template9);
PCREF(sWindowBank7Template0);
PCREF(sWindowBank7Template1);
PCREF(sWindowBank7Template2);
PCREF(sWindowBank7Template3);
PCREF(sWindowBank7Template4);
PCREF(sWindowBank7Template5);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    const void * init;
    const void * exec;
    const void * exit;
    uint32_t ovy_id;
} pcm_OverlayManagerTemplate_0;

typedef struct {
    const void * enter;
    const void * update;
    const void * exit;
} pcm_PokewalkerAppModeFuncs_1;

typedef struct {
    uint64_t div_numer;
    uint64_t div_denom;
    uint64_t sqrt;
    uint16_t div_mode;
    uint16_t sqrt_mode;
} pcm_CPContext_4;

typedef struct {
    uint32_t cpsr;
    uint32_t r[13];
    uint32_t sp;
    uint32_t lr;
    uint32_t pc_plus4;
    uint32_t sp_svc;
    pcm_CPContext_4 cp_context;
} pcm_OSContext_3;

typedef struct {
    const void * prev;
    const void * next;
} pcm_OSThreadLink_5;

typedef struct {
    const void * head;
    const void * tail;
} pcm_OSMutexQueue_6;

typedef struct {
    const void * head;
    const void * tail;
} pcm_OSThreadQueue_7;

typedef struct {
    pcm_OSContext_3 context;
    int32_t state;
    const void * next;
    uint32_t id;
    uint32_t priority;
    const void * profiler;
    const void * queue;
    pcm_OSThreadLink_5 link;
    const void * mutex;
    pcm_OSMutexQueue_6 mutexQueue;
    uint32_t stackTop;
    uint32_t stackBottom;
    uint32_t stackWarningOffset;
    pcm_OSThreadQueue_7 joinQueue;
    const void * specific[3];
    const void * alarmForSleep;
    const void * destructor;
    const void * userParameter;
    uint32_t systemErrno;
} pcm_OSThread_2;

extern const pcm_OverlayManagerTemplate_0 ov112_App_MainMenu_SelectOption_ConnectToPokewalker;
extern const pcm_OverlayManagerTemplate_0 gEventLogAppTemplate;
extern const const void * gPokewalkerUploadBlocks[16];
extern const void * gSpindaSpotPixels[4];
extern const void * gTouchButtons[5];
extern const void * gPokewalkerRouteImages[9];
extern pcm_PokewalkerAppModeFuncs_1 gPokewalkerAppModes[11];
extern const void * gWindowBank2Templates[2];
extern const void * gWindowBank1Templates[6];
extern const void * gWindowBank7Templates[6];
extern const void * gWindowBank0Templates[7];
extern const void * gWindowBank5Templates[7];
extern const void * gWindowBank3Templates[8];
extern const void * gWindowBank4Templates[9];
extern const void * gWindowBank6Templates[16];
extern const void * gMainMenuStates[27];
extern const void * gQuitMessageStates[4];
extern const void * gEraseRecordsStates[35];
extern const void * gLinkStates[67];
extern const void * gStartStrollStates[8];
extern const void * gLinkSaveStates[11];
extern const void * gStrollReportStates[37];
extern pcm_OSThread_2 sPokewalkerIrThread;

const pcm_OverlayManagerTemplate_0 ov112_App_MainMenu_SelectOption_ConnectToPokewalker = {
    .init = (const void *)&pcref_PokewalkerApp_Init,
    .exec = (const void *)&pcref_PokewalkerApp_Main,
    .exit = (const void *)&pcref_PokewalkerApp_Exit,
    .ovy_id = 0xffffffff,
};

const pcm_OverlayManagerTemplate_0 gEventLogAppTemplate = {
    .init = (const void *)&pcref_PokewalkerEventLog_Init,
    .exec = (const void *)&pcref_PokewalkerEventLog_Main,
    .exit = (const void *)&pcref_PokewalkerEventLog_Exit,
    .ovy_id = 0xffffffff,
};

const const void * gPokewalkerUploadBlocks[16] = { (const void *)&pcref_sPokewalkerUploadBlock0, (const void *)&pcref_sPokewalkerUploadBlock1, (const void *)&pcref_sPokewalkerUploadBlock2, (const void *)&pcref_sPokewalkerUploadBlock3, (const void *)&pcref_sPokewalkerUploadBlock4, (const void *)&pcref_sPokewalkerUploadBlock5, (const void *)&pcref_sPokewalkerUploadBlock6, (const void *)&pcref_sPokewalkerUploadBlock7,
  (const void *)&pcref_sPokewalkerUploadBlock8, (const void *)&pcref_sPokewalkerUploadBlock9, (const void *)&pcref_sPokewalkerUploadBlock10, (const void *)&pcref_sPokewalkerUploadBlock11, (const void *)&pcref_sPokewalkerUploadBlock12, (const void *)&pcref_sPokewalkerUploadBlock13, (const void *)&pcref_sPokewalkerUploadBlock14, (const void *)&pcref_sPokewalkerUploadBlock15 };

const void * gSpindaSpotPixels[4] = { (const void *)&pcref_sSpindaSpot0Pixels, (const void *)&pcref_sSpindaSpot1Pixels, (const void *)&pcref_sSpindaSpot2Pixels, (const void *)&pcref_sSpindaSpot3Pixels };

const void * gTouchButtons[5] = { (const void *)&pcref_sTouchButtons_TwoChoices, (const void *)&pcref_sTouchButtons_OneChoiceBack, (const void *)&pcref_sTouchButtons_TwoChoicesBack, (const void *)&pcref_sTouchButtons_ThreeChoicesBack, (const void *)&pcref_sTouchButtons_CourseList };

const void * gPokewalkerRouteImages[9] = { (const void *)&pcref_sTouchButtons_Back, (const void *)&pcref_sPokewalkerRouteImage1, (const void *)&pcref_sPokewalkerRouteImage2, (const void *)&pcref_sPokewalkerRouteImage3, (const void *)&pcref_sPokewalkerRouteImage4, (const void *)&pcref_sPokewalkerRouteImage5, (const void *)&pcref_sPokewalkerRouteImage6, (const void *)&pcref_sPokewalkerRouteImage7,
  (const void *)&pcref_sPokewalkerRouteImage8 };

pcm_PokewalkerAppModeFuncs_1 gPokewalkerAppModes[11] = {
    {
        .enter = (const void *)&pcref_PokewalkerApp_MainMenu_Enter,
        .update = (const void *)&pcref_PokewalkerApp_MainMenu_Update,
        .exit = (const void *)&pcref_PokewalkerApp_MainMenu_Exit,
    },
    {
        .enter = (const void *)&pcref_PokewalkerApp_QuitMessage_Enter,
        .update = (const void *)&pcref_PokewalkerApp_QuitMessage_Update,
        .exit = (const void *)&pcref_PokewalkerApp_QuitMessage_Exit,
    },
    {
        .enter = (const void *)&pcref_PokewalkerApp_EraseRecords_Enter,
        .update = (const void *)&pcref_PokewalkerApp_EraseRecords_Update,
        .exit = (const void *)&pcref_PokewalkerApp_EraseRecords_Exit,
    },
    {
        .enter = (const void *)&pcref_PokewalkerApp_Link_Enter,
        .update = (const void *)&pcref_PokewalkerApp_Link_Update,
        .exit = (const void *)&pcref_PokewalkerApp_Link_Exit,
    },
    {
        .enter = (const void *)&pcref_PokewalkerApp_WaitKeyToSave_Enter,
        .update = (const void *)&pcref_PokewalkerApp_WaitKeyToSave_Update,
        .exit = (const void *)&pcref_PokewalkerApp_WaitKeyToSave_Exit,
    },
    {
        .enter = (const void *)&pcref_PokewalkerApp_StartStroll_Enter,
        .update = (const void *)&pcref_PokewalkerApp_StartStroll_Update,
        .exit = (const void *)&pcref_PokewalkerApp_StartStroll_Exit,
    },
    {
        .enter = (const void *)&pcref_PokewalkerApp_LinkSave_Enter,
        .update = (const void *)&pcref_PokewalkerApp_LinkSave_Update,
        .exit = (const void *)&pcref_PokewalkerApp_LinkSave_Exit,
    },
    {
        .enter = (const void *)&pcref_PokewalkerApp_SelectMon_Enter,
        .update = (const void *)&pcref_PokewalkerApp_SelectMon_Update,
        .exit = (const void *)&pcref_PokewalkerApp_SelectMon_Exit,
    },
    {
        .enter = (const void *)&pcref_PokewalkerApp_EventLog_Enter,
        .update = (const void *)&pcref_PokewalkerApp_EventLog_Update,
        .exit = (const void *)&pcref_PokewalkerApp_EventLog_Exit,
    },
    {
        .enter = (const void *)&pcref_PokewalkerApp_WaitKey_Enter,
        .update = (const void *)&pcref_PokewalkerApp_WaitKey_Update,
        .exit = (const void *)&pcref_PokewalkerApp_WaitKey_Exit,
    },
    {
        .enter = (const void *)&pcref_PokewalkerApp_StrollReport_Enter,
        .update = (const void *)&pcref_PokewalkerApp_StrollReport_Update,
        .exit = (const void *)&pcref_PokewalkerApp_StrollReport_Exit,
    },
};

const void * gWindowBank2Templates[2] = { (const void *)&pcref_sWindowBank2Template0, (const void *)&pcref_sWindowBank2Template1 };

const void * gWindowBank1Templates[6] = { (const void *)&pcref_sWindowBank1Template0, (const void *)&pcref_sWindowBank1Template1, (const void *)&pcref_sWindowBank1Template2, (const void *)&pcref_sWindowBank1Template3, (const void *)&pcref_sWindowBank1Template4, (const void *)&pcref_sWindowBank1Template5 };

const void * gWindowBank7Templates[6] = { (const void *)&pcref_sWindowBank7Template0, (const void *)&pcref_sWindowBank7Template1, (const void *)&pcref_sWindowBank7Template2, (const void *)&pcref_sWindowBank7Template3, (const void *)&pcref_sWindowBank7Template4, (const void *)&pcref_sWindowBank7Template5 };

const void * gWindowBank0Templates[7] = { (const void *)&pcref_sWindowBank0Template0, (const void *)&pcref_sWindowBank0Template1, (const void *)&pcref_sWindowBank0Template2, (const void *)&pcref_sWindowBank0Template3, (const void *)&pcref_sWindowBank0Template4, (const void *)&pcref_sWindowBank0Template5, (const void *)&pcref_sWindowBank0Template6 };

const void * gWindowBank5Templates[7] = { (const void *)&pcref_sWindowBank5Template0, (const void *)&pcref_sWindowBank5Template1, (const void *)&pcref_sWindowBank5Template2, (const void *)&pcref_sWindowBank5Template3, (const void *)&pcref_sWindowBank5Template4, (const void *)&pcref_sWindowBank5Template5, (const void *)&pcref_sWindowBank5Template6 };

const void * gWindowBank3Templates[8] = { (const void *)&pcref_sWindowBank3Template0, (const void *)&pcref_sWindowBank3Template1, (const void *)&pcref_sWindowBank3Template2, (const void *)&pcref_sWindowBank3Template3, (const void *)&pcref_sWindowBank3Template4, (const void *)&pcref_sWindowBank3Template5, (const void *)&pcref_sWindowBank3Template6, (const void *)&pcref_sWindowBank3Template7 };

const void * gWindowBank4Templates[9] = { (const void *)&pcref_sWindowBank4Template0, (const void *)&pcref_sWindowBank4Template1, (const void *)&pcref_sWindowBank4Template2, (const void *)&pcref_sWindowBank4Template3, (const void *)&pcref_sWindowBank4Template4, (const void *)&pcref_sWindowBank4Template5, (const void *)&pcref_sWindowBank4Template6, (const void *)&pcref_sWindowBank4Template7,
  (const void *)&pcref_sWindowBank4Template8 };

const void * gWindowBank6Templates[16] = { (const void *)&pcref_sWindowBank6Template0, (const void *)&pcref_sWindowBank6Template1, (const void *)&pcref_sWindowBank6Template2, (const void *)&pcref_sWindowBank6Template3, (const void *)&pcref_sWindowBank6Template4, (const void *)&pcref_sWindowBank6Template5, (const void *)&pcref_sWindowBank6Template6, (const void *)&pcref_sWindowBank6Template7,
  (const void *)&pcref_sWindowBank6Template8, (const void *)&pcref_sWindowBank6Template9, (const void *)&pcref_sWindowBank6Template10, (const void *)&pcref_sWindowBank6Template11, (const void *)&pcref_sWindowBank6Template12, (const void *)&pcref_sWindowBank6Template13, (const void *)&pcref_sWindowBank6Template14, (const void *)&pcref_sWindowBank6Template15 };

const void * gMainMenuStates[27] = { (const void *)&pcref_PokewalkerApp_MainMenu_Start, (const void *)&pcref_PokewalkerApp_MainMenu_WaitFade, (const void *)&pcref_PokewalkerApp_MainMenu_ShowTopMenu, (const void *)&pcref_PokewalkerApp_MainMenu_HandleTopMenu, (const void *)&pcref_PokewalkerApp_MainMenu_PrintWelcome, (const void *)&pcref_PokewalkerApp_MainMenu_WaitWelcome, (const void *)&pcref_PokewalkerApp_MainMenu_PrintStrollReady, (const void *)&pcref_PokewalkerApp_MainMenu_ShowStrollMenu,
  (const void *)&pcref_PokewalkerApp_MainMenu_HandleStrollMenu, (const void *)&pcref_PokewalkerApp_MainMenu_EndStrollMenu, (const void *)&pcref_PokewalkerApp_MainMenu_PrintReceive, (const void *)&pcref_PokewalkerApp_MainMenu_WaitReceive, (const void *)&pcref_PokewalkerApp_MainMenu_ShowReceiveMenu, (const void *)&pcref_PokewalkerApp_MainMenu_HandleReceiveMenu, (const void *)&pcref_PokewalkerApp_MainMenu_EndReceiveMenu, (const void *)&pcref_PokewalkerApp_MainMenu_PrintStrollReady2,
  (const void *)&pcref_PokewalkerApp_MainMenu_WaitStrollReady2, (const void *)&pcref_PokewalkerApp_MainMenu_ShowFullMenu, (const void *)&pcref_PokewalkerApp_MainMenu_HandleFullMenu, (const void *)&pcref_PokewalkerApp_MainMenu_EndFullMenu, (const void *)&pcref_PokewalkerApp_MainMenu_PrintBoxesFull, (const void *)&pcref_PokewalkerApp_MainMenu_WaitBoxesFull, (const void *)&pcref_PokewalkerApp_MainMenu_Quit, (const void *)&pcref_PokewalkerApp_MainMenu_PrintNoPokemon,
  (const void *)&pcref_PokewalkerApp_MainMenu_WaitMessage, (const void *)&pcref_PokewalkerApp_MainMenu_WaitCursor, (const void *)&pcref_PokewalkerApp_MainMenu_End };

const void * gQuitMessageStates[4] = { (const void *)&pcref_PokewalkerApp_QuitMessage_Print, (const void *)&pcref_PokewalkerApp_QuitMessage_WaitPrint, (const void *)&pcref_PokewalkerApp_QuitMessage_WaitInput, (const void *)&pcref_PokewalkerApp_QuitMessage_End };

const void * gEraseRecordsStates[35] = { (const void *)&pcref_PokewalkerApp_EraseRecords_PrintCaution, (const void *)&pcref_PokewalkerApp_EraseRecords_WaitCaution, (const void *)&pcref_PokewalkerApp_EraseRecords_HandleCautionYesNo, (const void *)&pcref_PokewalkerApp_EraseRecords_PrintWillErase, (const void *)&pcref_PokewalkerApp_EraseRecords_ShowEraseMenu, (const void *)&pcref_PokewalkerApp_EraseRecords_HandleEraseMenu, (const void *)&pcref_PokewalkerApp_EraseRecords_EndEraseMenu, (const void *)&pcref_PokewalkerApp_EraseRecords_PrintCarryOverSteps,
  (const void *)&pcref_PokewalkerApp_EraseRecords_WaitCarryOverSteps, (const void *)&pcref_PokewalkerApp_EraseRecords_ShowCarryOverStepsMenu, (const void *)&pcref_PokewalkerApp_EraseRecords_HandleCarryOverStepsMenu, (const void *)&pcref_PokewalkerApp_EraseRecords_PrintConnect, (const void *)&pcref_PokewalkerApp_EraseRecords_WaitMessage, (const void *)&pcref_PokewalkerApp_EraseRecords_PrintPointAtCard, (const void *)&pcref_PokewalkerApp_EraseRecords_WaitPointAtCard, (const void *)&pcref_PokewalkerApp_EraseRecords_PrepareLink,
  (const void *)&pcref_PokewalkerApp_EraseRecords_StartLink, (const void *)&pcref_PokewalkerApp_EraseRecords_UpdateLink, (const void *)&pcref_PokewalkerApp_EraseRecords_PrintCanceled, (const void *)&pcref_PokewalkerApp_EraseRecords_WaitCanceled, (const void *)&pcref_PokewalkerApp_EraseRecords_PrintInitialized, (const void *)&pcref_PokewalkerApp_EraseRecords_WaitInitialized, (const void *)&pcref_PokewalkerApp_EraseRecords_PrintComeBack, (const void *)&pcref_PokewalkerApp_EraseRecords_WaitComeBack,
  (const void *)&pcref_PokewalkerApp_EraseRecords_ShowReturnedMon, (const void *)&pcref_PokewalkerApp_EraseRecords_AnimateReturnedMon, (const void *)&pcref_PokewalkerApp_EraseRecords_AfterAnimation, (const void *)&pcref_PokewalkerApp_EraseRecords_PrintArrived, (const void *)&pcref_PokewalkerApp_EraseRecords_WaitArrived, (const void *)&pcref_PokewalkerApp_EraseRecords_PrintSaving, (const void *)&pcref_PokewalkerApp_EraseRecords_WaitSaving, (const void *)&pcref_PokewalkerApp_EraseRecords_Save,
  (const void *)&pcref_PokewalkerApp_EraseRecords_EndSave, (const void *)&pcref_PokewalkerApp_EraseRecords_WaitCursor, (const void *)&pcref_PokewalkerApp_EraseRecords_End };

const void * gLinkStates[67] = { (const void *)&pcref_PokewalkerApp_Link_Start, (const void *)&pcref_PokewalkerApp_Link_PrintPointAtCard, (const void *)&pcref_PokewalkerApp_Link_WaitPointAtCard, (const void *)&pcref_PokewalkerApp_Link_FadeOutToSelectMon, (const void *)&pcref_PokewalkerApp_Link_WaitFadeOutToSelectMon, (const void *)&pcref_PokewalkerApp_Link_FadeIn, (const void *)&pcref_PokewalkerApp_Link_WaitFadeIn, (const void *)&pcref_PokewalkerApp_Link_PrintSelectCourse,
  (const void *)&pcref_PokewalkerApp_Link_WaitSelectCourse, (const void *)&pcref_PokewalkerApp_Link_ShowCourseMenu, (const void *)&pcref_PokewalkerApp_Link_HandleCourseMenu, (const void *)&pcref_PokewalkerApp_Link_EndCourseMenu, (const void *)&pcref_PokewalkerApp_Link_PrintConfirmCourse, (const void *)&pcref_PokewalkerApp_Link_WaitConfirmCourse, (const void *)&pcref_PokewalkerApp_Link_ShowConfirmCourseYesNo, (const void *)&pcref_PokewalkerApp_Link_HandleConfirmCourseYesNo,
  (const void *)&pcref_PokewalkerApp_Link_PrintInstructions, (const void *)&pcref_PokewalkerApp_Link_WaitInstructions, (const void *)&pcref_PokewalkerApp_Link_PrintWillConnectWithMon, (const void *)&pcref_PokewalkerApp_Link_PrintWillConnect, (const void *)&pcref_PokewalkerApp_Link_PrintPointAtCardForStroll, (const void *)&pcref_PokewalkerApp_Link_WaitPointAtCardForStroll, (const void *)&pcref_PokewalkerApp_Link_PrintPointAtCardForGifts, (const void *)&pcref_PokewalkerApp_Link_WaitPointAtCardForGifts,
  (const void *)&pcref_PokewalkerApp_Link_StartUpload, (const void *)&pcref_PokewalkerApp_Link_UpdateUpload, (const void *)&pcref_PokewalkerApp_Link_StartReceive, (const void *)&pcref_PokewalkerApp_Link_UpdateReceive, (const void *)&pcref_PokewalkerApp_Link_StartReceiveGifts, (const void *)&pcref_PokewalkerApp_Link_UpdateReceiveGifts, (const void *)&pcref_PokewalkerApp_Link_StartSendStroll, (const void *)&pcref_PokewalkerApp_Link_UpdateSendStroll,
  (const void *)&pcref_PokewalkerApp_Link_PrintError, (const void *)&pcref_PokewalkerApp_Link_PrintCanceled, (const void *)&pcref_PokewalkerApp_Link_WaitError, (const void *)&pcref_PokewalkerApp_Link_PrintWentToWalker, (const void *)&pcref_PokewalkerApp_Link_WaitWentToWalker, (const void *)&pcref_PokewalkerApp_Link_PrintReturned, (const void *)&pcref_PokewalkerApp_Link_WaitReturned, (const void *)&pcref_PokewalkerApp_Link_PrintReleased,
  (const void *)&pcref_PokewalkerApp_Link_WaitReleased, (const void *)&pcref_PokewalkerApp_Link_PrintReceivedGifts, (const void *)&pcref_PokewalkerApp_Link_WaitReceivedGifts, (const void *)&pcref_PokewalkerApp_Link_PrintSendBackCaution, (const void *)&pcref_PokewalkerApp_Link_WaitSendBackCaution, (const void *)&pcref_PokewalkerApp_Link_ShowSendBackYesNo, (const void *)&pcref_PokewalkerApp_Link_HandleSendBackYesNo, (const void *)&pcref_PokewalkerApp_Link_PrintWillSendBack,
  (const void *)&pcref_PokewalkerApp_Link_WaitWillSendBack, (const void *)&pcref_PokewalkerApp_Link_ShowSendBackMenu, (const void *)&pcref_PokewalkerApp_Link_HandleSendBackMenu, (const void *)&pcref_PokewalkerApp_Link_EndSendBackMenu, (const void *)&pcref_PokewalkerApp_Link_PrintComeBack, (const void *)&pcref_PokewalkerApp_Link_StartReturnAnimation, (const void *)&pcref_PokewalkerApp_Link_AnimateReturn, (const void *)&pcref_PokewalkerApp_Link_AfterReturnAnimation,
  (const void *)&pcref_PokewalkerApp_Link_PrintArrived, (const void *)&pcref_PokewalkerApp_Link_EndSendBack, (const void *)&pcref_PokewalkerApp_Link_RetryInstructions, (const void *)&pcref_PokewalkerApp_Link_RetryPointAtCardForStroll, (const void *)&pcref_PokewalkerApp_Link_RetryPointAtCard, (const void *)&pcref_PokewalkerApp_Link_RetryPointAtCardForGifts, (const void *)&pcref_PokewalkerApp_Link_FadeOut, (const void *)&pcref_PokewalkerApp_Link_WaitFadeOut,
  (const void *)&pcref_PokewalkerApp_Link_WaitMessage, (const void *)&pcref_PokewalkerApp_Link_WaitCursor, (const void *)&pcref_PokewalkerApp_Link_End };

const void * gStartStrollStates[8] = { (const void *)&pcref_PokewalkerApp_StartStroll_PrintSaving, (const void *)&pcref_PokewalkerApp_StartStroll_WaitSaving, (const void *)&pcref_PokewalkerApp_StartStroll_Save, (const void *)&pcref_PokewalkerApp_StartStroll_EndSave, (const void *)&pcref_PokewalkerApp_StartStroll_CheckFirstStroll, (const void *)&pcref_PokewalkerApp_StartStroll_PrintRegistered, (const void *)&pcref_PokewalkerApp_StartStroll_WaitRegistered, (const void *)&pcref_PokewalkerApp_StartStroll_End };

const void * gLinkSaveStates[11] = { (const void *)&pcref_PokewalkerApp_LinkSave_PrintSaving, (const void *)&pcref_PokewalkerApp_LinkSave_WaitSaving, (const void *)&pcref_PokewalkerApp_LinkSave_Save, (const void *)&pcref_PokewalkerApp_LinkSave_EndSave, (const void *)&pcref_PokewalkerApp_LinkSave_SetNextMode, (const void *)&pcref_PokewalkerApp_LinkSave_PrintSaving2, (const void *)&pcref_PokewalkerApp_LinkSave_WaitSaving2, (const void *)&pcref_PokewalkerApp_LinkSave_Save2,
  (const void *)&pcref_PokewalkerApp_LinkSave_EndSave2, (const void *)&pcref_PokewalkerApp_LinkSave_GoToStrollReport, (const void *)&pcref_PokewalkerApp_LinkSave_End };

const void * gStrollReportStates[37] = { (const void *)&pcref_PokewalkerApp_StrollReport_Start, (const void *)&pcref_PokewalkerApp_StrollReport_ShowResults, (const void *)&pcref_PokewalkerApp_StrollReport_WaitResultsFade, (const void *)&pcref_PokewalkerApp_StrollReport_PrintMonArrived, (const void *)&pcref_PokewalkerApp_StrollReport_PrintLevelUp, (const void *)&pcref_PokewalkerApp_StrollReport_PrintWatts, (const void *)&pcref_PokewalkerApp_StrollReport_PrintRouteFound, (const void *)&pcref_PokewalkerApp_StrollReport_PrintRouteAvailable,
  (const void *)&pcref_PokewalkerApp_StrollReport_PrintMilestone, (const void *)&pcref_PokewalkerApp_StrollReport_PrintStarfBerry, (const void *)&pcref_PokewalkerApp_StrollReport_FadeOut, (const void *)&pcref_PokewalkerApp_StrollReport_WaitFadeOut, (const void *)&pcref_PokewalkerApp_StrollReport_ShowCaughtMons, (const void *)&pcref_PokewalkerApp_StrollReport_WaitCaughtMonsFade, (const void *)&pcref_PokewalkerApp_StrollReport_PrintMonsSent, (const void *)&pcref_PokewalkerApp_StrollReport_CaughtMonsFadeOut,
  (const void *)&pcref_PokewalkerApp_StrollReport_WaitCaughtMonsFadeOut, (const void *)&pcref_PokewalkerApp_StrollReport_ShowItems, (const void *)&pcref_PokewalkerApp_StrollReport_WaitItemsFade, (const void *)&pcref_PokewalkerApp_StrollReport_PrintItemsPlaced, (const void *)&pcref_PokewalkerApp_StrollReport_ItemsFadeOut, (const void *)&pcref_PokewalkerApp_StrollReport_WaitItemsFadeOut, (const void *)&pcref_PokewalkerApp_StrollReport_GiftsFadeOut, (const void *)&pcref_PokewalkerApp_StrollReport_WaitGiftsFadeOut,
  (const void *)&pcref_PokewalkerApp_StrollReport_ShowGifts, (const void *)&pcref_PokewalkerApp_StrollReport_WaitGiftsFade, (const void *)&pcref_PokewalkerApp_StrollReport_PrintGiftWatts, (const void *)&pcref_PokewalkerApp_StrollReport_PrintGiftRouteFound, (const void *)&pcref_PokewalkerApp_StrollReport_GiftsDoneFadeOut, (const void *)&pcref_PokewalkerApp_StrollReport_WaitGiftsDoneFadeOut, (const void *)&pcref_PokewalkerApp_StrollReport_RecordsFadeOut, (const void *)&pcref_PokewalkerApp_StrollReport_WaitRecordsFadeOut,
  (const void *)&pcref_PokewalkerApp_StrollReport_ShowRecords, (const void *)&pcref_PokewalkerApp_StrollReport_WaitRecordsFade, (const void *)&pcref_PokewalkerApp_StrollReport_PrintRecords, (const void *)&pcref_PokewalkerApp_StrollReport_WaitMessage, (const void *)&pcref_PokewalkerApp_StrollReport_End };

pcm_OSThread_2 sPokewalkerIrThread;
