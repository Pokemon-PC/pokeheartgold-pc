/* Generated from lib/asm/nnsys_g3d_snd_bss.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    const void * pBuffer;
    uint32_t isLocked;
    uint32_t useFastDma;
} pcm_G3dGeBufferState_0;

typedef struct {
    const void * func;
    const void * arg;
    const void * next;
} pcm_PmSleepCallback_2;

typedef struct {
    int8_t driverInfoIdx;
    int32_t isFirstUpdate;
    uint32_t driverInfoTag;
    int32_t initialized;
    pcm_PmSleepCallback_2 preSleep;
    pcm_PmSleepCallback_2 postSleep;
} pcm_SndMainState_1;

typedef struct {
    const void * headObject;
    const void * tailObject;
    uint16_t numObjects;
    uint16_t offset;
} pcm_NNSFndList_3;

typedef struct {
    const void * prevObject;
    const void * nextObject;
} pcm_NNSFndLink_5;

typedef struct {
    int32_t origin;
    int32_t target;
    int32_t counter;
    int32_t frames;
} pcm_SndFader_6;

typedef struct {
    const void * handle;
    const void * playerInfo;
    const void * heap;
    pcm_NNSFndLink_5 playerLink;
    pcm_NNSFndLink_5 prioLink;
    pcm_SndFader_6 fader;
    uint8_t status;
    uint8_t isStarted;
    uint8_t isPaused;
    uint8_t isPrepared;
    uint32_t prepareTag;
    uint16_t seqType;
    uint16_t unk_36;
    uint16_t seqNo;
    uint16_t seqArcIdx;
    uint8_t playerNo;
    uint8_t priority;
    int16_t volume;
    uint8_t initVolume;
    uint8_t extVolume;
} pcm_NNSSndSeqPlayer_4;

typedef struct {
    pcm_NNSFndList_3 playerList;
    pcm_NNSFndList_3 heapList;
    uint32_t playableSeqCount;
    uint32_t allocChBitFlag;
    uint8_t volume;
} pcm_SndPlayerInfo_7;

typedef struct {
    const void * buffer;
    int32_t volume;
} pcm_SndStrmChannel_8;

typedef struct {
    const void * head;
    const void * tail;
} pcm_OSThreadQueue_11;

typedef struct {
    pcm_OSThreadQueue_11 queueSend;
    pcm_OSThreadQueue_11 queueReceive;
    const void * msgArray;
    int32_t msgCount;
    int32_t firstIndex;
    int32_t usedCount;
} pcm_OSMessageQueue_10;

typedef struct {
    int32_t isActive;
    int32_t type;
    uint32_t unk_08;
    const void * bufferL;
    const void * bufferR;
    uint32_t bufSize;
    uint32_t unk_18;
    uint32_t pos;
    uint32_t lockedChBitFlag;
    uint32_t chBitFlag;
    uint32_t capBitFlag;
    int32_t alarmNo;
    uint8_t unk_30[12];
    pcm_SndFader_6 fader;
    int32_t isStopping;
    int32_t volume;
    uint8_t unk_54[1376];
} pcm_SndCaptureState_12;

typedef struct {
    uint32_t unk_00;
    uint32_t unk_04;
    pcm_OSMessageQueue_10 msgQueue;
    const void * msgs[8];
    pcm_SndCaptureState_12 state;
} pcm_SndCaptureWork_9;

extern const void * gCurrentRenderState;
extern pcm_G3dGeBufferState_0 gGeBufferState;
extern pcm_SndMainState_1 gSndMainState;
extern pcm_NNSFndList_3 gSndFreeSeqPlayerList;
extern pcm_NNSFndList_3 gSndSeqPlayerPrioList;
extern pcm_NNSSndSeqPlayer_4 gSndSeqPlayers[16];
extern pcm_SndPlayerInfo_7 gSndPlayerInfo[32];
extern pcm_NNSFndList_3 gSndStrmList;
extern const void * gSndStrmCallbackBuffers[16];
extern pcm_SndStrmChannel_8 gSndStrmChannels[16];
extern pcm_SndCaptureWork_9 gSndCaptureWork;
extern const void * gSndCurrentArc;

const void * gCurrentRenderState;

pcm_G3dGeBufferState_0 gGeBufferState;

__attribute__((used)) static void pc_alias_gGeBufferStateIsLocked(void) {
    __asm__ volatile(".globl " PCSYM(gGeBufferStateIsLocked) "\n.set " PCSYM(gGeBufferStateIsLocked) ", " PCSYM(gGeBufferState) "+%c0" :: "i"(__builtin_offsetof(pcm_G3dGeBufferState_0, isLocked)));
}

pcm_SndMainState_1 gSndMainState;

__attribute__((used)) static void pc_alias_gSndMainPreSleepCallback(void) {
    __asm__ volatile(".globl " PCSYM(gSndMainPreSleepCallback) "\n.set " PCSYM(gSndMainPreSleepCallback) ", " PCSYM(gSndMainState) "+%c0" :: "i"(__builtin_offsetof(pcm_SndMainState_1, preSleep)));
}

__attribute__((used)) static void pc_alias_gSndMainPostSleepCallback(void) {
    __asm__ volatile(".globl " PCSYM(gSndMainPostSleepCallback) "\n.set " PCSYM(gSndMainPostSleepCallback) ", " PCSYM(gSndMainState) "+%c0" :: "i"(__builtin_offsetof(pcm_SndMainState_1, postSleep)));
}

pcm_NNSFndList_3 gSndFreeSeqPlayerList;

pcm_NNSFndList_3 gSndSeqPlayerPrioList;

pcm_NNSSndSeqPlayer_4 gSndSeqPlayers[16];

pcm_SndPlayerInfo_7 gSndPlayerInfo[32];

__attribute__((used)) static void pc_alias_gSndPlayerInfoNumPlaying(void) {
    __asm__ volatile(".globl " PCSYM(gSndPlayerInfoNumPlaying) "\n.set " PCSYM(gSndPlayerInfoNumPlaying) ", " PCSYM(gSndPlayerInfo) "+%c0" :: "i"(0 * sizeof(pcm_SndPlayerInfo_7) + __builtin_offsetof(pcm_SndPlayerInfo_7, playerList.numObjects)));
}

__attribute__((used)) static void pc_alias_gSndPlayerInfoPlayableSeqCount(void) {
    __asm__ volatile(".globl " PCSYM(gSndPlayerInfoPlayableSeqCount) "\n.set " PCSYM(gSndPlayerInfoPlayableSeqCount) ", " PCSYM(gSndPlayerInfo) "+%c0" :: "i"(0 * sizeof(pcm_SndPlayerInfo_7) + __builtin_offsetof(pcm_SndPlayerInfo_7, playableSeqCount)));
}

__attribute__((used)) static void pc_alias_gSndPlayerInfoAllocChBitFlag(void) {
    __asm__ volatile(".globl " PCSYM(gSndPlayerInfoAllocChBitFlag) "\n.set " PCSYM(gSndPlayerInfoAllocChBitFlag) ", " PCSYM(gSndPlayerInfo) "+%c0" :: "i"(0 * sizeof(pcm_SndPlayerInfo_7) + __builtin_offsetof(pcm_SndPlayerInfo_7, allocChBitFlag)));
}

__attribute__((used)) static void pc_alias_gSndPlayerInfoVolume(void) {
    __asm__ volatile(".globl " PCSYM(gSndPlayerInfoVolume) "\n.set " PCSYM(gSndPlayerInfoVolume) ", " PCSYM(gSndPlayerInfo) "+%c0" :: "i"(0 * sizeof(pcm_SndPlayerInfo_7) + __builtin_offsetof(pcm_SndPlayerInfo_7, volume)));
}

pcm_NNSFndList_3 gSndStrmList;

const void * gSndStrmCallbackBuffers[16];

pcm_SndStrmChannel_8 gSndStrmChannels[16];

pcm_SndCaptureWork_9 gSndCaptureWork;

__attribute__((used)) static void pc_alias_gSndCaptureMsgQueue(void) {
    __asm__ volatile(".globl " PCSYM(gSndCaptureMsgQueue) "\n.set " PCSYM(gSndCaptureMsgQueue) ", " PCSYM(gSndCaptureWork) "+%c0" :: "i"(__builtin_offsetof(pcm_SndCaptureWork_9, msgQueue)));
}

__attribute__((used)) static void pc_alias_gSndCaptureState(void) {
    __asm__ volatile(".globl " PCSYM(gSndCaptureState) "\n.set " PCSYM(gSndCaptureState) ", " PCSYM(gSndCaptureWork) "+%c0" :: "i"(__builtin_offsetof(pcm_SndCaptureWork_9, state)));
}

const void * gSndCurrentArc;
