/* Generated from lib/NitroDWC/asm/http_socket_bss.s by tools/pc_port/asm_data_to_c.py - do not edit. */

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
    const void * head;
    const void * tail;
} pcm_OSThreadQueue_1;

typedef struct {
    const void * next;
    const void * prev;
} pcm_OSMutexLink_2;

typedef struct {
    pcm_OSThreadQueue_1 queue;
    const void * thread;
    int32_t count;
    pcm_OSMutexLink_2 link;
} pcm_OSMutex_0;

typedef struct {
    int32_t running;
    int32_t error;
    const void * allocFunc;
    const void * freeFunc;
    const void * currentJob;
    int32_t quit;
    const void * threadStack;
    int32_t nextJobId;
    const void * jobs;
} pcm_HttpSocketWork_3;

typedef struct {
    uint64_t div_numer;
    uint64_t div_denom;
    uint64_t sqrt;
    uint16_t div_mode;
    uint16_t sqrt_mode;
} pcm_CPContext_6;

typedef struct {
    uint32_t cpsr;
    uint32_t r[13];
    uint32_t sp;
    uint32_t lr;
    uint32_t pc_plus4;
    uint32_t sp_svc;
    pcm_CPContext_6 cp_context;
} pcm_OSContext_5;

typedef struct {
    const void * prev;
    const void * next;
} pcm_OSThreadLink_7;

typedef struct {
    const void * head;
    const void * tail;
} pcm_OSMutexQueue_8;

typedef struct {
    pcm_OSContext_5 context;
    int32_t state;
    const void * next;
    uint32_t id;
    uint32_t priority;
    const void * profiler;
    const void * queue;
    pcm_OSThreadLink_7 link;
    const void * mutex;
    pcm_OSMutexQueue_8 mutexQueue;
    uint32_t stackTop;
    uint32_t stackBottom;
    uint32_t stackWarningOffset;
    pcm_OSThreadQueue_1 joinQueue;
    const void * specific[3];
    const void * alarmForSleep;
    const void * destructor;
    const void * userParameter;
    uint32_t systemErrno;
} pcm_OSThread_4;

typedef struct {
    pcm_OSThreadQueue_1 queueSend;
    pcm_OSThreadQueue_1 queueReceive;
    const void * msgArray;
    int32_t msgCount;
    int32_t firstIndex;
    int32_t usedCount;
} pcm_OSMessageQueue_9;

typedef struct {
    int32_t socket;
    const void * ssl;
} pcm_HttpClosedSocket_10;

extern pcm_OSMutex_0 gNdBusyMutex;
extern pcm_OSMutex_0 gNdMutex;
extern pcm_HttpSocketWork_3 gNhttpWork;
extern pcm_OSThread_4 gNhttpCleanupThread;
extern const void * gNhttpMessages[1];
extern pcm_OSMutex_0 gNhttpMutex;
extern pcm_OSMessageQueue_9 gNhttpMessageQueue;
extern pcm_OSThread_4 gNhttpThread;
extern pcm_HttpClosedSocket_10 gNhttpDeferredSockets[8];

pcm_OSMutex_0 gNdBusyMutex;

pcm_OSMutex_0 gNdMutex;

pcm_HttpSocketWork_3 gNhttpWork;

__attribute__((used)) static void pc_alias_ov38_02226214(void) {
    __asm__ volatile(".globl " PCSYM(ov38_02226214) "\n.set " PCSYM(ov38_02226214) ", " PCSYM(gNhttpWork) "+%c0" :: "i"(__builtin_offsetof(pcm_HttpSocketWork_3, error)));
}

__attribute__((used)) static void pc_alias_ov38_02226218(void) {
    __asm__ volatile(".globl " PCSYM(ov38_02226218) "\n.set " PCSYM(ov38_02226218) ", " PCSYM(gNhttpWork) "+%c0" :: "i"(__builtin_offsetof(pcm_HttpSocketWork_3, allocFunc)));
}

__attribute__((used)) static void pc_alias_ov38_0222621C(void) {
    __asm__ volatile(".globl " PCSYM(ov38_0222621C) "\n.set " PCSYM(ov38_0222621C) ", " PCSYM(gNhttpWork) "+%c0" :: "i"(__builtin_offsetof(pcm_HttpSocketWork_3, freeFunc)));
}

__attribute__((used)) static void pc_alias_ov38_02226220(void) {
    __asm__ volatile(".globl " PCSYM(ov38_02226220) "\n.set " PCSYM(ov38_02226220) ", " PCSYM(gNhttpWork) "+%c0" :: "i"(__builtin_offsetof(pcm_HttpSocketWork_3, currentJob)));
}

__attribute__((used)) static void pc_alias_ov38_02226224(void) {
    __asm__ volatile(".globl " PCSYM(ov38_02226224) "\n.set " PCSYM(ov38_02226224) ", " PCSYM(gNhttpWork) "+%c0" :: "i"(__builtin_offsetof(pcm_HttpSocketWork_3, quit)));
}

__attribute__((used)) static void pc_alias_ov38_0222622C(void) {
    __asm__ volatile(".globl " PCSYM(ov38_0222622C) "\n.set " PCSYM(ov38_0222622C) ", " PCSYM(gNhttpWork) "+%c0" :: "i"(__builtin_offsetof(pcm_HttpSocketWork_3, nextJobId)));
}

__attribute__((used)) static void pc_alias_ov38_02226230(void) {
    __asm__ volatile(".globl " PCSYM(ov38_02226230) "\n.set " PCSYM(ov38_02226230) ", " PCSYM(gNhttpWork) "+%c0" :: "i"(__builtin_offsetof(pcm_HttpSocketWork_3, jobs)));
}

pcm_OSThread_4 gNhttpCleanupThread;

const void * gNhttpMessages[1];

pcm_OSMutex_0 gNhttpMutex;

pcm_OSMessageQueue_9 gNhttpMessageQueue;

pcm_OSThread_4 gNhttpThread;

__attribute__((used)) static void pc_alias_gNhttpSslSeedEntropy(void) {
    __asm__ volatile(".globl " PCSYM(gNhttpSslSeedEntropy) "\n.set " PCSYM(gNhttpSslSeedEntropy) ", " PCSYM(gNhttpThread) "+%c0" :: "i"(__builtin_offsetof(pcm_OSThread_4, systemErrno)));
}

pcm_HttpClosedSocket_10 gNhttpDeferredSockets[8];

__attribute__((used)) static void pc_alias_ov38_02226C1C(void) {
    __asm__ volatile(".globl " PCSYM(ov38_02226C1C) "\n.set " PCSYM(ov38_02226C1C) ", " PCSYM(gNhttpDeferredSockets) "+%c0" :: "i"(0 * sizeof(pcm_HttpClosedSocket_10) + __builtin_offsetof(pcm_HttpClosedSocket_10, ssl)));
}
