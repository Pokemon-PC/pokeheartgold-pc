/* Generated from lib/asm/nnsys_snd_arc_strm_bss.s by tools/pc_port/asm_data_to_c.py - do not edit. */

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
    uint32_t unk_0;
    const void * threadWork;
    uint32_t unk_8;
} pcm_SndArcStrmUnkWork_0;

typedef struct {
    const void * headObject;
    const void * tailObject;
    uint16_t numObjects;
    uint16_t offset;
} pcm_NNSFndList_1;

typedef struct {
    const void * head;
    const void * tail;
} pcm_OSThreadQueue_3;

typedef struct {
    const void * next;
    const void * prev;
} pcm_OSMutexLink_4;

typedef struct {
    pcm_OSThreadQueue_3 queue;
    const void * thread;
    int32_t count;
    pcm_OSMutexLink_4 link;
} pcm_OSMutex_2;

typedef struct {
    const void * prevObject;
    const void * nextObject;
} pcm_NNSFndLink_7;

typedef struct {
    const void * func;
    const void * arg;
    const void * next;
} pcm_PmSleepCallback_8;

typedef struct {
    pcm_NNSFndLink_7 link;
    pcm_PmSleepCallback_8 preSleep;
    pcm_PmSleepCallback_8 postSleep;
    int32_t format;
    int32_t isActive : 1;
    int32_t isPlaying : 1;
    int32_t unused : 30;
    uint32_t bufSize;
    int32_t numBlocks;
    const void * callback;
    const void * arg;
    int32_t curBlock;
    int32_t volume;
    int32_t alarmNo;
    uint32_t chBitFlag;
    int32_t numChannels;
    uint8_t chNo[16];
} pcm_SndStrm_6;

typedef struct {
    int32_t origin;
    int32_t target;
    int32_t counter;
    int32_t frames;
} pcm_SndFader_9;

typedef struct {
    pcm_SndStrm_6 strm;
    uint8_t unk_5C[140];
    pcm_SndFader_9 fader;
    uint8_t unk_F8[24];
    int32_t isActive : 1;
    int32_t isStarted : 1;
    int32_t isPrepared : 1;
    int32_t isFadeOut : 1;
    int32_t unused : 28;
    int32_t isValid;
    int32_t isReady;
    uint8_t unk_11C[4];
    uint32_t chRefCount;
    uint8_t unk_124[40];
    const void * handle;
    uint32_t unk_150;
    int32_t initVolume;
    int32_t extVolume;
    int32_t volume;
    uint32_t unk_160[2];
    const void * disposeFunc;
    uint32_t unk_16C;
    const void * stopFunc;
} pcm_SndArcStrmPlayer_5;

extern pcm_SndArcStrmUnkWork_0 _021E0950;
extern pcm_NNSFndList_1 gSndArcStrmFreeCommandList;
extern pcm_OSMutex_2 gSndArcStrmMutex;
extern pcm_NNSFndList_1 gSndArcStrmCommandList;
extern pcm_SndArcStrmPlayer_5 gSndArcStrmPlayers[4];

pcm_SndArcStrmUnkWork_0 _021E0950;

pcm_NNSFndList_1 gSndArcStrmFreeCommandList;

pcm_OSMutex_2 gSndArcStrmMutex;

pcm_NNSFndList_1 gSndArcStrmCommandList;

pcm_SndArcStrmPlayer_5 gSndArcStrmPlayers[4];
