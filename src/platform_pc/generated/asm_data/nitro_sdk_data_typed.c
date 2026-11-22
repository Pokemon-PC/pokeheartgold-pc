/* Generated from lib/asm/nitro_sdk_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(DGTi_hash2_arm4_small);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    uint16_t x;
    uint16_t y;
    uint16_t touch;
    uint16_t validity;
} pcm_TPData_1;

typedef struct {
    int32_t x0;
    int32_t xDotSize;
    int32_t xScale;
    int32_t y0;
    int32_t yDotSize;
    int32_t yScale;
} pcm_TpCalibration_2;

typedef struct {
    uint16_t init;
    uint16_t unk_02;
    const void * callback;
    pcm_TPData_1 last;
    uint16_t index;
    uint16_t frequency;
    const void * buffer;
    uint16_t count;
    uint16_t unk_1A;
    pcm_TpCalibration_2 calibration;
    uint16_t calibrated;
    uint16_t state;
    uint16_t error;
    uint16_t busy;
} pcm_TpWork_0;

typedef struct {
    uint16_t init;
    uint16_t unk_02;
    int32_t lock;
    const void * callback;
    const void * callbackArg;
    int32_t result;
    const void * fullCallback;
    const void * fullArg;
    const void * sampleResult;
} pcm_MicWork_3;

typedef struct {
    uint16_t init;
    uint16_t unk_02;
    int32_t sleepReady;
    int32_t unk_08;
    const void * preSleep;
    uint32_t lcdOffVBlankCount;
    int32_t amp;
    const void * postSleep;
    int32_t lock;
    const void * callback;
    const void * callbackArg;
    const void * ledPattern;
} pcm_PmWork_4;

typedef struct {
    const void * head;
    const void * tail;
} pcm_OSThreadQueue_6;

typedef struct {
    const void * next;
    const void * prev;
} pcm_OSMutexLink_7;

typedef struct {
    pcm_OSThreadQueue_6 queue;
    const void * thread;
    int32_t count;
    pcm_OSMutexLink_7 link;
} pcm_OSMutex_5;

typedef struct {
    uint16_t done;
    uint16_t unk_02;
    const void * buffer;
} pcm_PmRegisterRead_8;

typedef struct {
    uint32_t active;
    const void * input;
    const void * output;
    uint32_t unk_0C;
} pcm_CardSpiTransfer_9;

typedef struct {
    pcm_OSThreadQueue_6 queueSend;
    pcm_OSThreadQueue_6 queueReceive;
    const void * msgArray;
    int32_t msgCount;
    int32_t firstIndex;
    int32_t usedCount;
} pcm_OSMessageQueue_11;

typedef struct {
    uint16_t apiid;
    uint16_t errcode;
    uint16_t state;
    uint16_t port;
    const void * recvBuf;
    const void * data;
    uint16_t length;
    uint16_t aid;
    uint8_t macAddress[6];
    uint16_t seqNo;
    const void * arg;
    uint16_t myAid;
    uint16_t connectedAids;
    uint16_t ssid[12];
    uint16_t reason;
    uint16_t unk_3E;
    uint16_t maxSendDataSize;
    uint16_t maxRecvDataSize;
} pcm_WmPortEvent_12;

typedef struct {
    uint16_t initialized;
    uint16_t unk_02;
    const void * sys;
    pcm_OSMessageQueue_11 commandQueue;
    const void * commandMessages[10];
    pcm_WmPortEvent_12 portEvent;
    uint8_t unk_94[12];
} pcm_WmWork_10;

typedef struct {
    int32_t digestSize;
    int32_t blockSize;
    const void * context;
    const void * digest;
    const void * reset;
    const void * setSource;
    const void * getDigest;
} pcm_DgtHmacParams_13;

extern pcm_TpWork_0 gTpWork;
extern pcm_MicWork_3 gMicWork;
extern pcm_PmWork_4 gPmWork;
extern pcm_OSMutex_5 gPmMutex;
extern pcm_PmRegisterRead_8 gPmRegisterReads[5];
extern pcm_CardSpiTransfer_9 gCardSpiTransfer;
extern pcm_WmWork_10 gWmWork;
extern const pcm_DgtHmacParams_13 gDgtHmacHash2Params;
extern const void * gDgtHash2ProcessBlock;

pcm_TpWork_0 gTpWork;

__attribute__((used)) static void pc_alias_gTpCalibration(void) {
    __asm__ volatile(".globl " PCSYM(gTpCalibration) "\n.set " PCSYM(gTpCalibration) ", " PCSYM(gTpWork) "+%c0" :: "i"(__builtin_offsetof(pcm_TpWork_0, calibration)));
}

pcm_MicWork_3 gMicWork;

__attribute__((used)) static void pc_alias_gMicLock(void) {
    __asm__ volatile(".globl " PCSYM(gMicLock) "\n.set " PCSYM(gMicLock) ", " PCSYM(gMicWork) "+%c0" :: "i"(__builtin_offsetof(pcm_MicWork_3, lock)));
}

pcm_PmWork_4 gPmWork;

__attribute__((used)) static void pc_alias_gPmPreSleepCallbacks(void) {
    __asm__ volatile(".globl " PCSYM(gPmPreSleepCallbacks) "\n.set " PCSYM(gPmPreSleepCallbacks) ", " PCSYM(gPmWork) "+%c0" :: "i"(__builtin_offsetof(pcm_PmWork_4, preSleep)));
}

__attribute__((used)) static void pc_alias_gPmPostSleepCallbacks(void) {
    __asm__ volatile(".globl " PCSYM(gPmPostSleepCallbacks) "\n.set " PCSYM(gPmPostSleepCallbacks) ", " PCSYM(gPmWork) "+%c0" :: "i"(__builtin_offsetof(pcm_PmWork_4, postSleep)));
}

__attribute__((used)) static void pc_alias_gPmLock(void) {
    __asm__ volatile(".globl " PCSYM(gPmLock) "\n.set " PCSYM(gPmLock) ", " PCSYM(gPmWork) "+%c0" :: "i"(__builtin_offsetof(pcm_PmWork_4, lock)));
}

pcm_OSMutex_5 gPmMutex;

pcm_PmRegisterRead_8 gPmRegisterReads[5];

__attribute__((used)) static void pc_alias_gPmRegisterBuffers(void) {
    __asm__ volatile(".globl " PCSYM(gPmRegisterBuffers) "\n.set " PCSYM(gPmRegisterBuffers) ", " PCSYM(gPmRegisterReads) "+%c0" :: "i"(0 * sizeof(pcm_PmRegisterRead_8) + __builtin_offsetof(pcm_PmRegisterRead_8, buffer)));
}

pcm_CardSpiTransfer_9 gCardSpiTransfer;

pcm_WmWork_10 gWmWork;

__attribute__((used)) static void pc_alias_gWmCommandQueue(void) {
    __asm__ volatile(".globl " PCSYM(gWmCommandQueue) "\n.set " PCSYM(gWmCommandQueue) ", " PCSYM(gWmWork) "+%c0" :: "i"(__builtin_offsetof(pcm_WmWork_10, commandQueue)));
}

__attribute__((used)) static void pc_alias_gWmCommandMessages(void) {
    __asm__ volatile(".globl " PCSYM(gWmCommandMessages) "\n.set " PCSYM(gWmCommandMessages) ", " PCSYM(gWmWork) "+%c0" :: "i"(__builtin_offsetof(pcm_WmWork_10, commandMessages[0])));
}

__attribute__((used)) static void pc_alias_gWmPortEvent(void) {
    __asm__ volatile(".globl " PCSYM(gWmPortEvent) "\n.set " PCSYM(gWmPortEvent) ", " PCSYM(gWmWork) "+%c0" :: "i"(__builtin_offsetof(pcm_WmWork_10, portEvent)));
}

__attribute__((used)) static void pc_alias_gWmPortEventMacAddress(void) {
    __asm__ volatile(".globl " PCSYM(gWmPortEventMacAddress) "\n.set " PCSYM(gWmPortEventMacAddress) ", " PCSYM(gWmWork) "+%c0" :: "i"(__builtin_offsetof(pcm_WmWork_10, portEvent.macAddress[0])));
}

__attribute__((used)) static void pc_alias_gWmPortEventData(void) {
    __asm__ volatile(".globl " PCSYM(gWmPortEventData) "\n.set " PCSYM(gWmPortEventData) ", " PCSYM(gWmWork) "+%c0" :: "i"(__builtin_offsetof(pcm_WmWork_10, portEvent.ssid[0])));
}

const pcm_DgtHmacParams_13 gDgtHmacHash2Params = {
    .digestSize = 20,
    .blockSize = 64,
    .context = NULL,
    .digest = NULL,
    .reset = NULL,
    .setSource = NULL,
    .getDigest = NULL,
};

const void * gDgtHash2ProcessBlock = (const void *)&pcref_DGTi_hash2_arm4_small;
