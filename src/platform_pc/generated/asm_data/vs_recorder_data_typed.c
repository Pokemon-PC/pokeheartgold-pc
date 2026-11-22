/* Generated from asm/vs_recorder_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(VsRecorder_BoxDataEnter);
PCREF(VsRecorder_BoxDataInit);
PCREF(VsRecorder_BoxDataSendCancelCategory);
PCREF(VsRecorder_BoxDataSendChangeBox);
PCREF(VsRecorder_BoxDataSendExit);
PCREF(VsRecorder_BoxDataSendMain);
PCREF(VsRecorder_BoxDataSendQuit);
PCREF(VsRecorder_BoxDataSendSelectCategory);
PCREF(VsRecorder_BoxDataSendShow);
PCREF(VsRecorder_BoxDataSendShowCategories);
PCREF(VsRecorder_BoxDataSendUpload);
PCREF(VsRecorder_BoxDataViewBoxMain);
PCREF(VsRecorder_BoxDataViewCloseBox);
PCREF(VsRecorder_BoxDataViewDownload);
PCREF(VsRecorder_BoxDataViewExit);
PCREF(VsRecorder_BoxDataViewOpenBox);
PCREF(VsRecorder_BoxDataViewQuit);
PCREF(VsRecorder_BoxDataViewSelectCategory);
PCREF(VsRecorder_BoxDataViewShow);
PCREF(VsRecorder_BoxListBack);
PCREF(VsRecorder_BoxListHideProfile);
PCREF(VsRecorder_BoxListMain);
PCREF(VsRecorder_BoxListShowProfile);
PCREF(VsRecorder_DeleteEnter);
PCREF(VsRecorder_DeleteExit);
PCREF(VsRecorder_DeleteInit);
PCREF(VsRecorder_DeleteMain);
PCREF(VsRecorder_NumberPadFree);
PCREF(VsRecorder_NumberPadInit);
PCREF(VsRecorder_NumberPadInput);
PCREF(VsRecorder_NumberPadSwitchGroup);
PCREF(VsRecorder_NumberSearchClosePad);
PCREF(VsRecorder_NumberSearchConfirmOverwrite);
PCREF(VsRecorder_NumberSearchDetailsMain);
PCREF(VsRecorder_NumberSearchDownloadVideo);
PCREF(VsRecorder_NumberSearchExit);
PCREF(VsRecorder_NumberSearchExitDetails);
PCREF(VsRecorder_NumberSearchOverwriteMain);
PCREF(VsRecorder_NumberSearchOverwriteNo);
PCREF(VsRecorder_NumberSearchPadMain);
PCREF(VsRecorder_NumberSearchPlay);
PCREF(VsRecorder_NumberSearchResume);
PCREF(VsRecorder_NumberSearchReturnToDetails);
PCREF(VsRecorder_NumberSearchSave);
PCREF(VsRecorder_NumberSearchShowDetails);
PCREF(VsRecorder_NumberSearchShowPad);
PCREF(VsRecorder_NumberSearchShowSlots);
PCREF(VsRecorder_NumberSearchSlotsCancel);
PCREF(VsRecorder_NumberSearchSlotsMain);
PCREF(VsRecorder_NumberSearchToggleProfile);
PCREF(VsRecorder_RankingsCloseList);
PCREF(VsRecorder_RankingsDownload);
PCREF(VsRecorder_RankingsEnter);
PCREF(VsRecorder_RankingsExit);
PCREF(VsRecorder_RankingsInit);
PCREF(VsRecorder_RankingsInvalid);
PCREF(VsRecorder_RankingsMain);
PCREF(VsRecorder_RankingsShow);
PCREF(VsRecorder_RankingsSwitch);
PCREF(VsRecorder_SendVideoExit);
PCREF(VsRecorder_SendVideoShowCursor);
PCREF(VsRecorder_SendVideoUpload);
PCREF(VsRecorder_VideoListBackToList);
PCREF(VsRecorder_VideoListConfirmOverwrite);
PCREF(VsRecorder_VideoListDetailsMain);
PCREF(VsRecorder_VideoListDownloadList);
PCREF(VsRecorder_VideoListDownloadVideo);
PCREF(VsRecorder_VideoListEnter);
PCREF(VsRecorder_VideoListExit);
PCREF(VsRecorder_VideoListInit);
PCREF(VsRecorder_VideoListOverwriteMain);
PCREF(VsRecorder_VideoListOverwriteNo);
PCREF(VsRecorder_VideoListPlay);
PCREF(VsRecorder_VideoListResume);
PCREF(VsRecorder_VideoListReturnToDetails);
PCREF(VsRecorder_VideoListSave);
PCREF(VsRecorder_VideoListSelect);
PCREF(VsRecorder_VideoListShowDetails);
PCREF(VsRecorder_VideoListShowList);
PCREF(VsRecorder_VideoListShowSlots);
PCREF(VsRecorder_VideoListSlotsCancel);
PCREF(VsRecorder_VideoListSlotsMain);
PCREF(VsRecorder_VideoListToggleProfile);
PCREF(VsRecorder_VideoSearchBackToResults);
PCREF(VsRecorder_VideoSearchClearSpecies);
PCREF(VsRecorder_VideoSearchConditionsMain);
PCREF(VsRecorder_VideoSearchConfirmOverwrite);
PCREF(VsRecorder_VideoSearchDetailsMain);
PCREF(VsRecorder_VideoSearchDownloadVideo);
PCREF(VsRecorder_VideoSearchEnter);
PCREF(VsRecorder_VideoSearchExit);
PCREF(VsRecorder_VideoSearchInit);
PCREF(VsRecorder_VideoSearchLeaveConditions);
PCREF(VsRecorder_VideoSearchOpenCondition);
PCREF(VsRecorder_VideoSearchOverwriteMain);
PCREF(VsRecorder_VideoSearchOverwriteNo);
PCREF(VsRecorder_VideoSearchPlay);
PCREF(VsRecorder_VideoSearchRequest);
PCREF(VsRecorder_VideoSearchResultsBack);
PCREF(VsRecorder_VideoSearchResultsMain);
PCREF(VsRecorder_VideoSearchResume);
PCREF(VsRecorder_VideoSearchReturnToConditions);
PCREF(VsRecorder_VideoSearchReturnToDetails);
PCREF(VsRecorder_VideoSearchSave);
PCREF(VsRecorder_VideoSearchSelectCategory);
PCREF(VsRecorder_VideoSearchSelectFacility);
PCREF(VsRecorder_VideoSearchSelectLocation);
PCREF(VsRecorder_VideoSearchSelectSpecies);
PCREF(VsRecorder_VideoSearchShowConditions);
PCREF(VsRecorder_VideoSearchShowDetails);
PCREF(VsRecorder_VideoSearchShowResults);
PCREF(VsRecorder_VideoSearchShowSlots);
PCREF(VsRecorder_VideoSearchSlotsCancel);
PCREF(VsRecorder_VideoSearchSlotsMain);
PCREF(VsRecorder_VideoSearchToggleProfile);
PCREF(sVsRecorderSearchFacilityListEntries);
PCREF(sVsRecorderSearchFacilityListEntriesLong);
PCREF(sVsRecorderSearchFacilityListHitboxes);
PCREF(sVsRecorderSearchLocationListEntries);
PCREF(sVsRecorderSearchLocationListHitboxes);
PCREF(sVsRecorderSearchSpeciesListHitboxes);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    const void * entries;
    int32_t count;
    int32_t lineHeight;
    int32_t x;
    int32_t y;
    int32_t width;
    int32_t height;
    int32_t baseTile;
    int32_t bgId;
    int32_t rows;
    const void * hitboxes;
} pcm_VsRecorderListConfig_0;

extern const pcm_VsRecorderListConfig_0 gVsRecorderBoxListConfig;
extern const const void * gVsRecorderBoxDataSendSubStates[11];
extern const const void * gVsRecorderBoxDataViewSubStates[14];
extern const pcm_VsRecorderListConfig_0 gVsRecorderRankingsThisWeekListConfig;
extern const pcm_VsRecorderListConfig_0 gVsRecorderRankingsLastWeekListConfig;
extern const const void * gVsRecorderRankingsSubStates[9];
extern const pcm_VsRecorderListConfig_0 gVsRecorderVideoListConfig;
extern const const void * gVsRecorderVideoListSubStates[21];
extern const pcm_VsRecorderListConfig_0 gVsRecorderSearchLocationListConfig;
extern const pcm_VsRecorderListConfig_0 gVsRecorderSearchFacilityListConfig;
extern const pcm_VsRecorderListConfig_0 gVsRecorderSearchFacilityListConfigLong;
extern const pcm_VsRecorderListConfig_0 gVsRecorderSearchResultListConfig;
extern const pcm_VsRecorderListConfig_0 gVsRecorderSearchSpeciesListConfig;
extern const const void * gVsRecorderSendVideoSubStates[5];
extern const const void * gVsRecorderNumberSearchSubStates[21];
extern const const void * gVsRecorderVideoSearchSubStates[32];
extern const const void * gVsRecorderNumberPadStates[4];
extern const const void * gVsRecorderDeleteSubStates[4];

const pcm_VsRecorderListConfig_0 gVsRecorderBoxListConfig = {
    .entries = NULL,
    .count = 0,
    .lineHeight = 3,
    .x = 3,
    .y = 7,
    .width = 26,
    .height = 15,
    .baseTile = 64,
    .bgId = 2,
    .rows = 5,
    .hitboxes = NULL,
};

const const void * gVsRecorderBoxDataSendSubStates[11] = { (const void *)&pcref_VsRecorder_BoxDataInit, (const void *)&pcref_VsRecorder_BoxDataEnter, (const void *)&pcref_VsRecorder_BoxDataSendShow, (const void *)&pcref_VsRecorder_BoxDataSendMain, (const void *)&pcref_VsRecorder_BoxDataSendChangeBox, (const void *)&pcref_VsRecorder_BoxDataSendShowCategories, (const void *)&pcref_VsRecorder_BoxDataSendSelectCategory, (const void *)&pcref_VsRecorder_BoxDataSendCancelCategory,
  (const void *)&pcref_VsRecorder_BoxDataSendUpload, (const void *)&pcref_VsRecorder_BoxDataSendQuit, (const void *)&pcref_VsRecorder_BoxDataSendExit };

const const void * gVsRecorderBoxDataViewSubStates[14] = { (const void *)&pcref_VsRecorder_BoxDataInit, (const void *)&pcref_VsRecorder_BoxDataEnter, (const void *)&pcref_VsRecorder_BoxDataViewShow, (const void *)&pcref_VsRecorder_BoxDataViewSelectCategory, (const void *)&pcref_VsRecorder_BoxDataViewDownload, (const void *)&pcref_VsRecorder_BoxListMain, (const void *)&pcref_VsRecorder_BoxListBack, (const void *)&pcref_VsRecorder_BoxListShowProfile,
  (const void *)&pcref_VsRecorder_BoxListHideProfile, (const void *)&pcref_VsRecorder_BoxDataViewOpenBox, (const void *)&pcref_VsRecorder_BoxDataViewBoxMain, (const void *)&pcref_VsRecorder_BoxDataViewCloseBox, (const void *)&pcref_VsRecorder_BoxDataViewQuit, (const void *)&pcref_VsRecorder_BoxDataViewExit };

const pcm_VsRecorderListConfig_0 gVsRecorderRankingsThisWeekListConfig = {
    .entries = NULL,
    .count = 12,
    .lineHeight = 1,
    .x = 4,
    .y = 15,
    .width = 24,
    .height = 8,
    .baseTile = 256,
    .bgId = 2,
    .rows = 4,
    .hitboxes = NULL,
};

const pcm_VsRecorderListConfig_0 gVsRecorderRankingsLastWeekListConfig = {
    .entries = NULL,
    .count = 12,
    .lineHeight = 2,
    .x = 4,
    .y = 15,
    .width = 24,
    .height = 8,
    .baseTile = 256,
    .bgId = 2,
    .rows = 2,
    .hitboxes = NULL,
};

const const void * gVsRecorderRankingsSubStates[9] = { (const void *)&pcref_VsRecorder_RankingsInit, (const void *)&pcref_VsRecorder_RankingsEnter, (const void *)&pcref_VsRecorder_RankingsDownload, (const void *)&pcref_VsRecorder_RankingsInvalid, (const void *)&pcref_VsRecorder_RankingsSwitch, (const void *)&pcref_VsRecorder_RankingsShow, (const void *)&pcref_VsRecorder_RankingsMain, (const void *)&pcref_VsRecorder_RankingsCloseList,
  (const void *)&pcref_VsRecorder_RankingsExit };

const pcm_VsRecorderListConfig_0 gVsRecorderVideoListConfig = {
    .entries = NULL,
    .count = 6,
    .lineHeight = 3,
    .x = 2,
    .y = 8,
    .width = 10,
    .height = 15,
    .baseTile = 128,
    .bgId = 2,
    .rows = 5,
    .hitboxes = NULL,
};

const const void * gVsRecorderVideoListSubStates[21] = { (const void *)&pcref_VsRecorder_VideoListInit, (const void *)&pcref_VsRecorder_VideoListEnter, (const void *)&pcref_VsRecorder_VideoListDownloadList, (const void *)&pcref_VsRecorder_VideoListShowList, (const void *)&pcref_VsRecorder_VideoListSelect, (const void *)&pcref_VsRecorder_VideoListExit, (const void *)&pcref_VsRecorder_VideoListShowDetails, (const void *)&pcref_VsRecorder_VideoListDetailsMain,
  (const void *)&pcref_VsRecorder_VideoListToggleProfile, (const void *)&pcref_VsRecorder_VideoListPlay, (const void *)&pcref_VsRecorder_VideoListBackToList, (const void *)&pcref_VsRecorder_VideoListShowSlots, (const void *)&pcref_VsRecorder_VideoListSlotsMain, (const void *)&pcref_VsRecorder_VideoListSlotsCancel, (const void *)&pcref_VsRecorder_VideoListConfirmOverwrite, (const void *)&pcref_VsRecorder_VideoListOverwriteMain,
  (const void *)&pcref_VsRecorder_VideoListOverwriteNo, (const void *)&pcref_VsRecorder_VideoListSave, (const void *)&pcref_VsRecorder_VideoListDownloadVideo, (const void *)&pcref_VsRecorder_VideoListResume, (const void *)&pcref_VsRecorder_VideoListReturnToDetails };

const pcm_VsRecorderListConfig_0 gVsRecorderSearchLocationListConfig = {
    .entries = (const void *)&pcref_sVsRecorderSearchLocationListEntries,
    .count = 1,
    .lineHeight = 2,
    .x = 8,
    .y = 2,
    .width = 16,
    .height = 12,
    .baseTile = 32,
    .bgId = 6,
    .rows = 1,
    .hitboxes = (const void *)&pcref_sVsRecorderSearchLocationListHitboxes,
};

const pcm_VsRecorderListConfig_0 gVsRecorderSearchFacilityListConfig = {
    .entries = (const void *)&pcref_sVsRecorderSearchFacilityListEntries,
    .count = 5,
    .lineHeight = 2,
    .x = 7,
    .y = 3,
    .width = 18,
    .height = 12,
    .baseTile = 32,
    .bgId = 6,
    .rows = 3,
    .hitboxes = (const void *)&pcref_sVsRecorderSearchFacilityListHitboxes,
};

const pcm_VsRecorderListConfig_0 gVsRecorderSearchFacilityListConfigLong = {
    .entries = (const void *)&pcref_sVsRecorderSearchFacilityListEntriesLong,
    .count = 23,
    .lineHeight = 2,
    .x = 7,
    .y = 3,
    .width = 18,
    .height = 12,
    .baseTile = 32,
    .bgId = 6,
    .rows = 3,
    .hitboxes = (const void *)&pcref_sVsRecorderSearchFacilityListHitboxes,
};

const pcm_VsRecorderListConfig_0 gVsRecorderSearchResultListConfig = {
    .entries = (const void *)&pcref_sVsRecorderSearchFacilityListEntriesLong,
    .count = 6,
    .lineHeight = 3,
    .x = 2,
    .y = 8,
    .width = 10,
    .height = 15,
    .baseTile = 128,
    .bgId = 2,
    .rows = 5,
    .hitboxes = NULL,
};

const pcm_VsRecorderListConfig_0 gVsRecorderSearchSpeciesListConfig = {
    .entries = NULL,
    .count = 0,
    .lineHeight = 1,
    .x = 9,
    .y = 3,
    .width = 14,
    .height = 12,
    .baseTile = 32,
    .bgId = 6,
    .rows = 6,
    .hitboxes = (const void *)&pcref_sVsRecorderSearchSpeciesListHitboxes,
};

const const void * gVsRecorderSendVideoSubStates[5] = { (const void *)&pcref_VsRecorder_VideoSearchInit, (const void *)&pcref_VsRecorder_VideoSearchEnter, (const void *)&pcref_VsRecorder_SendVideoShowCursor, (const void *)&pcref_VsRecorder_SendVideoUpload, (const void *)&pcref_VsRecorder_SendVideoExit };

const const void * gVsRecorderNumberSearchSubStates[21] = { (const void *)&pcref_VsRecorder_VideoSearchInit, (const void *)&pcref_VsRecorder_VideoSearchEnter, (const void *)&pcref_VsRecorder_NumberSearchShowPad, (const void *)&pcref_VsRecorder_NumberSearchPadMain, (const void *)&pcref_VsRecorder_NumberSearchClosePad, (const void *)&pcref_VsRecorder_NumberSearchExit, (const void *)&pcref_VsRecorder_NumberSearchDownloadVideo, (const void *)&pcref_VsRecorder_NumberSearchShowDetails,
  (const void *)&pcref_VsRecorder_NumberSearchDetailsMain, (const void *)&pcref_VsRecorder_NumberSearchToggleProfile, (const void *)&pcref_VsRecorder_NumberSearchPlay, (const void *)&pcref_VsRecorder_NumberSearchExitDetails, (const void *)&pcref_VsRecorder_NumberSearchShowSlots, (const void *)&pcref_VsRecorder_NumberSearchSlotsMain, (const void *)&pcref_VsRecorder_NumberSearchSlotsCancel, (const void *)&pcref_VsRecorder_NumberSearchConfirmOverwrite,
  (const void *)&pcref_VsRecorder_NumberSearchOverwriteMain, (const void *)&pcref_VsRecorder_NumberSearchOverwriteNo, (const void *)&pcref_VsRecorder_NumberSearchSave, (const void *)&pcref_VsRecorder_NumberSearchResume, (const void *)&pcref_VsRecorder_NumberSearchReturnToDetails };

const const void * gVsRecorderVideoSearchSubStates[32] = { (const void *)&pcref_VsRecorder_VideoSearchInit, (const void *)&pcref_VsRecorder_VideoSearchEnter, (const void *)&pcref_VsRecorder_VideoSearchShowConditions, (const void *)&pcref_VsRecorder_VideoSearchConditionsMain, (const void *)&pcref_VsRecorder_VideoSearchExit, (const void *)&pcref_VsRecorder_VideoSearchOpenCondition, (const void *)&pcref_VsRecorder_VideoSearchSelectFacility, (const void *)&pcref_VsRecorder_VideoSearchClearSpecies,
  (const void *)&pcref_VsRecorder_VideoSearchSelectCategory, (const void *)&pcref_VsRecorder_VideoSearchSelectSpecies, (const void *)&pcref_VsRecorder_VideoSearchSelectLocation, (const void *)&pcref_VsRecorder_VideoSearchReturnToConditions, (const void *)&pcref_VsRecorder_VideoSearchRequest, (const void *)&pcref_VsRecorder_VideoSearchLeaveConditions, (const void *)&pcref_VsRecorder_VideoSearchShowResults, (const void *)&pcref_VsRecorder_VideoSearchResultsMain,
  (const void *)&pcref_VsRecorder_VideoSearchResultsBack, (const void *)&pcref_VsRecorder_VideoSearchShowDetails, (const void *)&pcref_VsRecorder_VideoSearchDetailsMain, (const void *)&pcref_VsRecorder_VideoSearchToggleProfile, (const void *)&pcref_VsRecorder_VideoSearchPlay, (const void *)&pcref_VsRecorder_VideoSearchBackToResults, (const void *)&pcref_VsRecorder_VideoSearchShowSlots, (const void *)&pcref_VsRecorder_VideoSearchSlotsMain,
  (const void *)&pcref_VsRecorder_VideoSearchSlotsCancel, (const void *)&pcref_VsRecorder_VideoSearchConfirmOverwrite, (const void *)&pcref_VsRecorder_VideoSearchOverwriteMain, (const void *)&pcref_VsRecorder_VideoSearchOverwriteNo, (const void *)&pcref_VsRecorder_VideoSearchSave, (const void *)&pcref_VsRecorder_VideoSearchDownloadVideo, (const void *)&pcref_VsRecorder_VideoSearchResume, (const void *)&pcref_VsRecorder_VideoSearchReturnToDetails };

const const void * gVsRecorderNumberPadStates[4] = { (const void *)&pcref_VsRecorder_NumberPadInit, (const void *)&pcref_VsRecorder_NumberPadInput, (const void *)&pcref_VsRecorder_NumberPadSwitchGroup, (const void *)&pcref_VsRecorder_NumberPadFree };

const const void * gVsRecorderDeleteSubStates[4] = { (const void *)&pcref_VsRecorder_DeleteInit, (const void *)&pcref_VsRecorder_DeleteEnter, (const void *)&pcref_VsRecorder_DeleteMain, (const void *)&pcref_VsRecorder_DeleteExit };
