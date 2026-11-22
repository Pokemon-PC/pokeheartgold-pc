/* Generated from asm/pokeathlon_course_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(CommCmd_GetSizeVariable);
PCREF(PokeathlonBlockSmash_Draw);
PCREF(PokeathlonBlockSmash_Exit);
PCREF(PokeathlonBlockSmash_Init);
PCREF(PokeathlonBlockSmash_ShowResults);
PCREF(PokeathlonBox_Exit);
PCREF(PokeathlonBox_Init);
PCREF(PokeathlonBox_Main);
PCREF(PokeathlonCirclePush_CalcResults);
PCREF(PokeathlonCirclePush_Exit);
PCREF(PokeathlonCirclePush_Init);
PCREF(PokeathlonCirclePush_Main);
PCREF(PokeathlonCourseClosing_Exit);
PCREF(PokeathlonCourseClosing_Init);
PCREF(PokeathlonCourseClosing_Main);
PCREF(PokeathlonCourseCmd_AllParticipantsSize);
PCREF(PokeathlonCourseCmd_EventsSize);
PCREF(PokeathlonCourseCmd_GetEventDataBuffer);
PCREF(PokeathlonCourseCmd_GetJuiceRecordBuffer);
PCREF(PokeathlonCourseCmd_GetMonCountersBuffer);
PCREF(PokeathlonCourseCmd_GetRecordBuffer);
PCREF(PokeathlonCourseCmd_GetResultsBuffer);
PCREF(PokeathlonCourseCmd_JuiceRecordSize);
PCREF(PokeathlonCourseCmd_MonCountersSize);
PCREF(PokeathlonCourseCmd_PacketSize);
PCREF(PokeathlonCourseCmd_ParticipantSize);
PCREF(PokeathlonCourseCmd_ProfilesSize);
PCREF(PokeathlonCourseCmd_RecordSize);
PCREF(PokeathlonCourseCmd_RecvAllParticipants);
PCREF(PokeathlonCourseCmd_RecvEventData);
PCREF(PokeathlonCourseCmd_RecvEventResult);
PCREF(PokeathlonCourseCmd_RecvEventResults);
PCREF(PokeathlonCourseCmd_RecvEvents);
PCREF(PokeathlonCourseCmd_RecvJuiceRecord);
PCREF(PokeathlonCourseCmd_RecvMonCounters);
PCREF(PokeathlonCourseCmd_RecvPacket);
PCREF(PokeathlonCourseCmd_RecvParticipant);
PCREF(PokeathlonCourseCmd_RecvProfiles);
PCREF(PokeathlonCourseCmd_RecvRecord);
PCREF(PokeathlonCourseCmd_RecvResults);
PCREF(PokeathlonCourseCmd_ResultsSize);
PCREF(PokeathlonCourseOpening_Exit);
PCREF(PokeathlonCourseOpening_Init);
PCREF(PokeathlonCourseOpening_Main);
PCREF(PokeathlonCourseWait_Exit);
PCREF(PokeathlonCourseWait_Init);
PCREF(PokeathlonCourseWait_Main);
PCREF(PokeathlonCourse_State_CreateJuiceRecords);
PCREF(PokeathlonCourse_State_EndEventIntro);
PCREF(PokeathlonCourse_State_EndOpening);
PCREF(PokeathlonCourse_State_EndResults);
PCREF(PokeathlonCourse_State_EndRound);
PCREF(PokeathlonCourse_State_Exit);
PCREF(PokeathlonCourse_State_ExitEvent);
PCREF(PokeathlonCourse_State_NextRound);
PCREF(PokeathlonCourse_State_ResetDataCopyArea);
PCREF(PokeathlonCourse_State_RunClosing);
PCREF(PokeathlonCourse_State_RunEvent);
PCREF(PokeathlonCourse_State_RunEventIntro);
PCREF(PokeathlonCourse_State_RunEventOverlay);
PCREF(PokeathlonCourse_State_RunOpening);
PCREF(PokeathlonCourse_State_RunResults);
PCREF(PokeathlonCourse_State_RunWait);
PCREF(PokeathlonCourse_State_SendEventData);
PCREF(PokeathlonCourse_State_SendEventResult);
PCREF(PokeathlonCourse_State_SendEventResults);
PCREF(PokeathlonCourse_State_SendEvents);
PCREF(PokeathlonCourse_State_SendJuiceRecord);
PCREF(PokeathlonCourse_State_SendMonCounters);
PCREF(PokeathlonCourse_State_SendParticipant);
PCREF(PokeathlonCourse_State_SendParticipants);
PCREF(PokeathlonCourse_State_SendProfiles);
PCREF(PokeathlonCourse_State_SendRecord);
PCREF(PokeathlonCourse_State_SendResults);
PCREF(PokeathlonCourse_State_StartClosing);
PCREF(PokeathlonCourse_State_StartEventIntro);
PCREF(PokeathlonCourse_State_StartOpening);
PCREF(PokeathlonCourse_State_StartResults);
PCREF(PokeathlonCourse_State_StartRound);
PCREF(PokeathlonCourse_State_StoreJuiceRecords);
PCREF(PokeathlonCourse_State_WaitClosingStart);
PCREF(PokeathlonCourse_State_WaitEventIntroStart);
PCREF(PokeathlonCourse_State_WaitForCommand);
PCREF(PokeathlonCourse_State_WaitOpeningStart);
PCREF(PokeathlonCourse_State_WaitResultsStart);
PCREF(PokeathlonCourse_State_WaitRoundStart);
PCREF(PokeathlonDiscCatch_Draw);
PCREF(PokeathlonDiscCatch_Exit);
PCREF(PokeathlonDiscCatch_Init);
PCREF(PokeathlonDiscCatch_ShowResults);
PCREF(PokeathlonEventIntro_Exit);
PCREF(PokeathlonEventIntro_Init);
PCREF(PokeathlonEventIntro_Main);
PCREF(PokeathlonGoalRoll_Draw);
PCREF(PokeathlonGoalRoll_Exit);
PCREF(PokeathlonGoalRoll_Init);
PCREF(PokeathlonGoalRoll_ShowResults);
PCREF(PokeathlonHurdleDash_Draw);
PCREF(PokeathlonHurdleDash_Exit);
PCREF(PokeathlonHurdleDash_Init);
PCREF(PokeathlonHurdleDash_ShowResults);
PCREF(PokeathlonLampJump_Draw);
PCREF(PokeathlonLampJump_Exit);
PCREF(PokeathlonLampJump_Init);
PCREF(PokeathlonLampJump_ShowResults);
PCREF(PokeathlonPennantCapture_Draw);
PCREF(PokeathlonPennantCapture_Exit);
PCREF(PokeathlonPennantCapture_Init);
PCREF(PokeathlonPennantCapture_ShowResults);
PCREF(PokeathlonRelayRun_Draw);
PCREF(PokeathlonRelayRun_Exit);
PCREF(PokeathlonRelayRun_Init);
PCREF(PokeathlonRelayRun_ShowResults);
PCREF(PokeathlonResults_Draw);
PCREF(PokeathlonResults_Exit);
PCREF(PokeathlonResults_Init);
PCREF(PokeathlonRingDrop_Draw);
PCREF(PokeathlonRingDrop_Exit);
PCREF(PokeathlonRingDrop_Init);
PCREF(PokeathlonRingDrop_ShowResults);
PCREF(PokeathlonSnowThrow_Draw);
PCREF(PokeathlonSnowThrow_Exit);
PCREF(PokeathlonSnowThrow_Init);
PCREF(PokeathlonSnowThrow_ShowResults);
PCREF(gPokeathlonBlockSmashStates);
PCREF(gPokeathlonCirclePushStates);
PCREF(gPokeathlonDiscCatchStates);
PCREF(gPokeathlonGoalRollStates);
PCREF(gPokeathlonHurdleDashStates);
PCREF(gPokeathlonLampJumpStates);
PCREF(gPokeathlonPennantCaptureStates);
PCREF(gPokeathlonRelayRunStates);
PCREF(gPokeathlonRingDropStates);
PCREF(gPokeathlonSnowThrowStates);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    const void * init;
    const void * exec;
    const void * exit;
    uint32_t ovy_id;
} pcm_OverlayManagerTemplate_0;

typedef struct {
    const void * init;
    const void * draw;
    const void * onResults;
    const void * exit;
    int32_t sendsOwnResult;
} pcm_PokeathlonCourseEvent_1;

typedef struct {
    const void * func;
    const void * getSize;
    const void * getBuffer;
} pcm_PokeathlonCourseCmd_2;

extern const pcm_OverlayManagerTemplate_0 subOverlayTemplate;
extern const pcm_PokeathlonCourseEvent_1 gPokeathlonCirclePushEvent[1];
extern const pcm_PokeathlonCourseEvent_1 gPokeathlonCourseEvent_Opening;
extern const pcm_PokeathlonCourseEvent_1 gPokeathlonGoalRollEvent[1];
extern const pcm_PokeathlonCourseEvent_1 gPokeathlonBlockSmashEvent[1];
extern const pcm_PokeathlonCourseEvent_1 gPokeathlonCourseEvent_Closing;
extern const pcm_PokeathlonCourseEvent_1 gPokeathlonSnowThrowEvent[1];
extern const pcm_PokeathlonCourseEvent_1 gPokeathlonCourseEvent_ResultsAnnouncement;
extern const pcm_PokeathlonCourseEvent_1 gPokeathlonRingDropEvent[1];
extern const pcm_PokeathlonCourseEvent_1 gPokeathlonDiscCatchEvent[1];
extern const pcm_PokeathlonCourseEvent_1 gPokeathlonCourseEvent_Wait;
extern const pcm_PokeathlonCourseEvent_1 gPokeathlonPennantCaptureEvent[1];
extern const pcm_PokeathlonCourseEvent_1 gPokeathlonCourseEvent_EventIntro;
extern const pcm_PokeathlonCourseEvent_1 gPokeathlonRelayRunEvent[1];
extern const pcm_PokeathlonCourseEvent_1 gPokeathlonHurdleDashEvent[1];
extern const pcm_PokeathlonCourseEvent_1 gPokeathlonLampJumpEvent[1];
extern const const void * sPokeathlonStateInfoFuncTable[39];
extern const pcm_PokeathlonCourseCmd_2 gPokeathlonCourseCmds[12];
extern const void * gPokeathlonCourseEventSteps[10];
extern const void * gPokeathlonCourseEvents[10];

const pcm_OverlayManagerTemplate_0 subOverlayTemplate = {
    .init = (const void *)&pcref_PokeathlonBox_Init,
    .exec = (const void *)&pcref_PokeathlonBox_Main,
    .exit = (const void *)&pcref_PokeathlonBox_Exit,
    .ovy_id = 97,
};

const pcm_PokeathlonCourseEvent_1 gPokeathlonCirclePushEvent[1] = {
    {
        .init = (const void *)&pcref_PokeathlonCirclePush_Init,
        .draw = (const void *)&pcref_PokeathlonCirclePush_Main,
        .onResults = (const void *)&pcref_PokeathlonCirclePush_CalcResults,
        .exit = (const void *)&pcref_PokeathlonCirclePush_Exit,
        .sendsOwnResult = 0,
    },
};

const pcm_PokeathlonCourseEvent_1 gPokeathlonCourseEvent_Opening = {
    .init = (const void *)&pcref_PokeathlonCourseOpening_Init,
    .draw = (const void *)&pcref_PokeathlonCourseOpening_Main,
    .onResults = NULL,
    .exit = (const void *)&pcref_PokeathlonCourseOpening_Exit,
    .sendsOwnResult = 0,
};

const pcm_PokeathlonCourseEvent_1 gPokeathlonGoalRollEvent[1] = {
    {
        .init = (const void *)&pcref_PokeathlonGoalRoll_Init,
        .draw = (const void *)&pcref_PokeathlonGoalRoll_Draw,
        .onResults = (const void *)&pcref_PokeathlonGoalRoll_ShowResults,
        .exit = (const void *)&pcref_PokeathlonGoalRoll_Exit,
        .sendsOwnResult = 0,
    },
};

const pcm_PokeathlonCourseEvent_1 gPokeathlonBlockSmashEvent[1] = {
    {
        .init = (const void *)&pcref_PokeathlonBlockSmash_Init,
        .draw = (const void *)&pcref_PokeathlonBlockSmash_Draw,
        .onResults = (const void *)&pcref_PokeathlonBlockSmash_ShowResults,
        .exit = (const void *)&pcref_PokeathlonBlockSmash_Exit,
        .sendsOwnResult = 1,
    },
};

const pcm_PokeathlonCourseEvent_1 gPokeathlonCourseEvent_Closing = {
    .init = (const void *)&pcref_PokeathlonCourseClosing_Init,
    .draw = (const void *)&pcref_PokeathlonCourseClosing_Main,
    .onResults = NULL,
    .exit = (const void *)&pcref_PokeathlonCourseClosing_Exit,
    .sendsOwnResult = 0,
};

const pcm_PokeathlonCourseEvent_1 gPokeathlonSnowThrowEvent[1] = {
    {
        .init = (const void *)&pcref_PokeathlonSnowThrow_Init,
        .draw = (const void *)&pcref_PokeathlonSnowThrow_Draw,
        .onResults = (const void *)&pcref_PokeathlonSnowThrow_ShowResults,
        .exit = (const void *)&pcref_PokeathlonSnowThrow_Exit,
        .sendsOwnResult = 0,
    },
};

const pcm_PokeathlonCourseEvent_1 gPokeathlonCourseEvent_ResultsAnnouncement = {
    .init = (const void *)&pcref_PokeathlonResults_Init,
    .draw = (const void *)&pcref_PokeathlonResults_Draw,
    .onResults = NULL,
    .exit = (const void *)&pcref_PokeathlonResults_Exit,
    .sendsOwnResult = 0,
};

const pcm_PokeathlonCourseEvent_1 gPokeathlonRingDropEvent[1] = {
    {
        .init = (const void *)&pcref_PokeathlonRingDrop_Init,
        .draw = (const void *)&pcref_PokeathlonRingDrop_Draw,
        .onResults = (const void *)&pcref_PokeathlonRingDrop_ShowResults,
        .exit = (const void *)&pcref_PokeathlonRingDrop_Exit,
        .sendsOwnResult = 0,
    },
};

const pcm_PokeathlonCourseEvent_1 gPokeathlonDiscCatchEvent[1] = {
    {
        .init = (const void *)&pcref_PokeathlonDiscCatch_Init,
        .draw = (const void *)&pcref_PokeathlonDiscCatch_Draw,
        .onResults = (const void *)&pcref_PokeathlonDiscCatch_ShowResults,
        .exit = (const void *)&pcref_PokeathlonDiscCatch_Exit,
        .sendsOwnResult = 0,
    },
};

const pcm_PokeathlonCourseEvent_1 gPokeathlonCourseEvent_Wait = {
    .init = (const void *)&pcref_PokeathlonCourseWait_Init,
    .draw = (const void *)&pcref_PokeathlonCourseWait_Main,
    .onResults = NULL,
    .exit = (const void *)&pcref_PokeathlonCourseWait_Exit,
    .sendsOwnResult = 0,
};

const pcm_PokeathlonCourseEvent_1 gPokeathlonPennantCaptureEvent[1] = {
    {
        .init = (const void *)&pcref_PokeathlonPennantCapture_Init,
        .draw = (const void *)&pcref_PokeathlonPennantCapture_Draw,
        .onResults = (const void *)&pcref_PokeathlonPennantCapture_ShowResults,
        .exit = (const void *)&pcref_PokeathlonPennantCapture_Exit,
        .sendsOwnResult = 0,
    },
};

const pcm_PokeathlonCourseEvent_1 gPokeathlonCourseEvent_EventIntro = {
    .init = (const void *)&pcref_PokeathlonEventIntro_Init,
    .draw = (const void *)&pcref_PokeathlonEventIntro_Main,
    .onResults = NULL,
    .exit = (const void *)&pcref_PokeathlonEventIntro_Exit,
    .sendsOwnResult = 0,
};

const pcm_PokeathlonCourseEvent_1 gPokeathlonRelayRunEvent[1] = {
    {
        .init = (const void *)&pcref_PokeathlonRelayRun_Init,
        .draw = (const void *)&pcref_PokeathlonRelayRun_Draw,
        .onResults = (const void *)&pcref_PokeathlonRelayRun_ShowResults,
        .exit = (const void *)&pcref_PokeathlonRelayRun_Exit,
        .sendsOwnResult = 0,
    },
};

const pcm_PokeathlonCourseEvent_1 gPokeathlonHurdleDashEvent[1] = {
    {
        .init = (const void *)&pcref_PokeathlonHurdleDash_Init,
        .draw = (const void *)&pcref_PokeathlonHurdleDash_Draw,
        .onResults = (const void *)&pcref_PokeathlonHurdleDash_ShowResults,
        .exit = (const void *)&pcref_PokeathlonHurdleDash_Exit,
        .sendsOwnResult = 1,
    },
};

const pcm_PokeathlonCourseEvent_1 gPokeathlonLampJumpEvent[1] = {
    {
        .init = (const void *)&pcref_PokeathlonLampJump_Init,
        .draw = (const void *)&pcref_PokeathlonLampJump_Draw,
        .onResults = (const void *)&pcref_PokeathlonLampJump_ShowResults,
        .exit = (const void *)&pcref_PokeathlonLampJump_Exit,
        .sendsOwnResult = 1,
    },
};

const const void * sPokeathlonStateInfoFuncTable[39] = { (const void *)&pcref_PokeathlonCourse_State_SendEvents, (const void *)&pcref_PokeathlonCourse_State_RunEventOverlay, (const void *)&pcref_PokeathlonCourse_State_RunWait, (const void *)&pcref_PokeathlonCourse_State_SendParticipant, (const void *)&pcref_PokeathlonCourse_State_SendParticipants, (const void *)&pcref_PokeathlonCourse_State_SendProfiles, (const void *)&pcref_PokeathlonCourse_State_SendRecord, (const void *)&pcref_PokeathlonCourse_State_StartOpening,
  (const void *)&pcref_PokeathlonCourse_State_WaitOpeningStart, (const void *)&pcref_PokeathlonCourse_State_RunOpening, (const void *)&pcref_PokeathlonCourse_State_EndOpening, (const void *)&pcref_PokeathlonCourse_State_StartEventIntro, (const void *)&pcref_PokeathlonCourse_State_WaitEventIntroStart, (const void *)&pcref_PokeathlonCourse_State_RunEventIntro, (const void *)&pcref_PokeathlonCourse_State_EndEventIntro, (const void *)&pcref_PokeathlonCourse_State_StartRound,
  (const void *)&pcref_PokeathlonCourse_State_WaitRoundStart, (const void *)&pcref_PokeathlonCourse_State_SendEventData, (const void *)&pcref_PokeathlonCourse_State_RunEvent, (const void *)&pcref_PokeathlonCourse_State_ResetDataCopyArea, (const void *)&pcref_PokeathlonCourse_State_SendEventResult, (const void *)&pcref_PokeathlonCourse_State_SendEventResults, (const void *)&pcref_PokeathlonCourse_State_EndRound, (const void *)&pcref_PokeathlonCourse_State_ExitEvent,
  (const void *)&pcref_PokeathlonCourse_State_NextRound, (const void *)&pcref_PokeathlonCourse_State_StartResults, (const void *)&pcref_PokeathlonCourse_State_WaitResultsStart, (const void *)&pcref_PokeathlonCourse_State_RunResults, (const void *)&pcref_PokeathlonCourse_State_EndResults, (const void *)&pcref_PokeathlonCourse_State_SendMonCounters, (const void *)&pcref_PokeathlonCourse_State_SendResults, (const void *)&pcref_PokeathlonCourse_State_StartClosing,
  (const void *)&pcref_PokeathlonCourse_State_WaitClosingStart, (const void *)&pcref_PokeathlonCourse_State_RunClosing, (const void *)&pcref_PokeathlonCourse_State_CreateJuiceRecords, (const void *)&pcref_PokeathlonCourse_State_SendJuiceRecord, (const void *)&pcref_PokeathlonCourse_State_StoreJuiceRecords, (const void *)&pcref_PokeathlonCourse_State_Exit, (const void *)&pcref_PokeathlonCourse_State_WaitForCommand };

const pcm_PokeathlonCourseCmd_2 gPokeathlonCourseCmds[12] = {
    {
        .func = (const void *)&pcref_PokeathlonCourseCmd_RecvEvents,
        .getSize = (const void *)&pcref_PokeathlonCourseCmd_EventsSize,
        .getBuffer = NULL,
    },
    {
        .func = (const void *)&pcref_PokeathlonCourseCmd_RecvParticipant,
        .getSize = (const void *)&pcref_PokeathlonCourseCmd_ParticipantSize,
        .getBuffer = NULL,
    },
    {
        .func = (const void *)&pcref_PokeathlonCourseCmd_RecvAllParticipants,
        .getSize = (const void *)&pcref_PokeathlonCourseCmd_AllParticipantsSize,
        .getBuffer = NULL,
    },
    {
        .func = (const void *)&pcref_PokeathlonCourseCmd_RecvProfiles,
        .getSize = (const void *)&pcref_PokeathlonCourseCmd_ProfilesSize,
        .getBuffer = NULL,
    },
    {
        .func = (const void *)&pcref_PokeathlonCourseCmd_RecvRecord,
        .getSize = (const void *)&pcref_PokeathlonCourseCmd_RecordSize,
        .getBuffer = (const void *)&pcref_PokeathlonCourseCmd_GetRecordBuffer,
    },
    {
        .func = (const void *)&pcref_PokeathlonCourseCmd_RecvPacket,
        .getSize = (const void *)&pcref_PokeathlonCourseCmd_PacketSize,
        .getBuffer = NULL,
    },
    {
        .func = (const void *)&pcref_PokeathlonCourseCmd_RecvEventData,
        .getSize = (const void *)&pcref_CommCmd_GetSizeVariable,
        .getBuffer = (const void *)&pcref_PokeathlonCourseCmd_GetEventDataBuffer,
    },
    {
        .func = (const void *)&pcref_PokeathlonCourseCmd_RecvEventResult,
        .getSize = (const void *)&pcref_PokeathlonCourseCmd_PacketSize,
        .getBuffer = NULL,
    },
    {
        .func = (const void *)&pcref_PokeathlonCourseCmd_RecvEventResults,
        .getSize = (const void *)&pcref_PokeathlonCourseCmd_PacketSize,
        .getBuffer = NULL,
    },
    {
        .func = (const void *)&pcref_PokeathlonCourseCmd_RecvMonCounters,
        .getSize = (const void *)&pcref_PokeathlonCourseCmd_MonCountersSize,
        .getBuffer = (const void *)&pcref_PokeathlonCourseCmd_GetMonCountersBuffer,
    },
    {
        .func = (const void *)&pcref_PokeathlonCourseCmd_RecvResults,
        .getSize = (const void *)&pcref_PokeathlonCourseCmd_ResultsSize,
        .getBuffer = (const void *)&pcref_PokeathlonCourseCmd_GetResultsBuffer,
    },
    {
        .func = (const void *)&pcref_PokeathlonCourseCmd_RecvJuiceRecord,
        .getSize = (const void *)&pcref_PokeathlonCourseCmd_JuiceRecordSize,
        .getBuffer = (const void *)&pcref_PokeathlonCourseCmd_GetJuiceRecordBuffer,
    },
};

const void * gPokeathlonCourseEventSteps[10] = { (const void *)&pcref_gPokeathlonHurdleDashStates, (const void *)&pcref_gPokeathlonPennantCaptureStates, (const void *)&pcref_gPokeathlonCirclePushStates, (const void *)&pcref_gPokeathlonBlockSmashStates, (const void *)&pcref_gPokeathlonDiscCatchStates, (const void *)&pcref_gPokeathlonLampJumpStates, (const void *)&pcref_gPokeathlonRelayRunStates, (const void *)&pcref_gPokeathlonRingDropStates,
  (const void *)&pcref_gPokeathlonSnowThrowStates, (const void *)&pcref_gPokeathlonGoalRollStates };

const void * gPokeathlonCourseEvents[10] = { (const void *)&gPokeathlonHurdleDashEvent, (const void *)&gPokeathlonPennantCaptureEvent, (const void *)&gPokeathlonCirclePushEvent, (const void *)&gPokeathlonBlockSmashEvent, (const void *)&gPokeathlonDiscCatchEvent, (const void *)&gPokeathlonLampJumpEvent, (const void *)&gPokeathlonRelayRunEvent, (const void *)&gPokeathlonRingDropEvent,
  (const void *)&gPokeathlonSnowThrowEvent, (const void *)&gPokeathlonGoalRollEvent };
