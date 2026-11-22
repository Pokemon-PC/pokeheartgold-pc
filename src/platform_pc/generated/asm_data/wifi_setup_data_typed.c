/* Generated from asm/wifi_setup_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(WifiSetupLink_Alloc);
PCREF(WifiSetupLink_Free);
PCREF(WifiSetup_SocketAlloc);
PCREF(WifiSetup_SocketFree);
PCREF(gWifiSetupRecordBuffer);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    uint32_t unk_00;
    const void * alloc;
    const void * free;
    int32_t mode;
    uint32_t hostIp;
    uint32_t netmask;
    uint32_t gateway;
    uint32_t dns[2];
    uint32_t unk_24[2];
    int32_t mtu;
    int32_t recvBufSize;
} pcm_SocConfig_1;

typedef struct {
    int32_t socket;
    int32_t lastStatus;
    pcm_SocConfig_1 config;
} pcm_WifiSetupSocketState_0;

typedef struct {
    const void * packetBuffer;
    int32_t debug;
    uint32_t threadStackSize;
    int32_t deadline;
    uint32_t count;
} pcm_WifiSetupConfig_2;

typedef struct {
    int32_t encryptBody;
    const void * connection;
    int32_t randomSeeded;
    const void * connectResult;
    int32_t error;
    const void * data;
    uint32_t randomState;
    uint32_t randomMultiplier;
    uint32_t randomIncrement;
    const void * key;
    int32_t keyLength;
    uint32_t requestedMask;
    uint32_t receivedMask;
    uint32_t address;
    uint32_t netmask;
} pcm_WifiSetupState_3;

typedef struct {
    const void * alloc;
    const void * callback;
    const void * allocation;
    const void * free;
} pcm_WifiSetupRuntime_4;

typedef struct {
    const void * head;
    const void * tail;
} pcm_OSThreadQueue_6;

typedef struct {
    pcm_OSThreadQueue_6 queueSend;
    pcm_OSThreadQueue_6 queueReceive;
    const void * msgArray;
    int32_t msgCount;
    int32_t firstIndex;
    int32_t usedCount;
} pcm_OSMessageQueue_5;

typedef struct {
    const void * wcmWork;
    int32_t searchOption;
    const void * config;
    int32_t connectOption;
    const void * searchBssid;
    const void * searchSsid;
    int32_t state;
    const void * callback;
    const void * connectAp;
    const void * connectKey;
} pcm_WifiSetupWcm_7;

typedef struct {
    uint8_t unk_00;
    uint8_t unk_01[3];
    const void * alloc;
    const void * wcmConfig;
    const void * free;
    uint32_t stop;
    int32_t packetLength;
    uint32_t selection;
    int32_t step;
    int32_t connected;
    int32_t socketStarted;
    const void * connectKey;
    int32_t wcmState;
    const void * threadStack;
    uint32_t recordLength;
    int32_t state;
    const void * wcmWork;
    const void * buffer;
    const void * searchBssid;
    const void * searchSsid;
    const void * connectAp;
    int32_t extendedRequest;
    const void * allocation;
    int32_t connectOption;
    const void * apList;
    int32_t searchOption;
    int32_t active;
    int32_t eventWrite;
    int32_t eventRead;
    int32_t apListCount;
    int32_t resultReady;
    int32_t error;
    const void * statusCallback;
} pcm_WifiSetupWork_8;

typedef struct {
    const void * next;
    const void * prev;
} pcm_OSMutexLink_10;

typedef struct {
    pcm_OSThreadQueue_6 queue;
    const void * thread;
    int32_t count;
    pcm_OSMutexLink_10 link;
} pcm_OSMutex_9;

typedef struct {
    uint64_t div_numer;
    uint64_t div_denom;
    uint64_t sqrt;
    uint16_t div_mode;
    uint16_t sqrt_mode;
} pcm_CPContext_13;

typedef struct {
    uint32_t cpsr;
    uint32_t r[13];
    uint32_t sp;
    uint32_t lr;
    uint32_t pc_plus4;
    uint32_t sp_svc;
    pcm_CPContext_13 cp_context;
} pcm_OSContext_12;

typedef struct {
    const void * prev;
    const void * next;
} pcm_OSThreadLink_14;

typedef struct {
    const void * head;
    const void * tail;
} pcm_OSMutexQueue_15;

typedef struct {
    pcm_OSContext_12 context;
    int32_t state;
    const void * next;
    uint32_t id;
    uint32_t priority;
    const void * profiler;
    const void * queue;
    pcm_OSThreadLink_14 link;
    const void * mutex;
    pcm_OSMutexQueue_15 mutexQueue;
    uint32_t stackTop;
    uint32_t stackBottom;
    uint32_t stackWarningOffset;
    pcm_OSThreadQueue_6 joinQueue;
    const void * specific[3];
    const void * alarmForSleep;
    const void * destructor;
    const void * userParameter;
    uint32_t systemErrno;
} pcm_OSThread_11;

extern pcm_WifiSetupSocketState_0 gWifiSetupSocket;
extern pcm_WifiSetupConfig_2 gWifiSetupConfig;
extern pcm_SocConfig_1 sWifiSetupLinkSocConfig;
extern pcm_WifiSetupState_3 gWifiSetupState;
extern pcm_WifiSetupRuntime_4 gWifiSetupRuntime;
extern const void * gWifiSetupMessages[4];
extern pcm_OSMessageQueue_5 gWifiSetupMessageQueue;
extern pcm_WifiSetupWcm_7 gWifiSetupWcm;
extern pcm_WifiSetupWork_8 gWifiSetupWork;
extern const void * gWifiSetupLinkEventCallback;
extern pcm_OSMutex_9 gWifiSetupLinkMutex;
extern pcm_OSThread_11 gWifiSetupThread;

pcm_WifiSetupSocketState_0 gWifiSetupSocket = {
    .socket = -1,
    .lastStatus = -1,
    .config = {
        .unk_00 = 0x1000000,
        .alloc = (const void *)&pcref_WifiSetup_SocketAlloc,
        .free = (const void *)&pcref_WifiSetup_SocketFree,
        .mode = 0,
        .hostIp = 0,
        .netmask = 0,
        .gateway = 0,
        .dns = { 0, 0 },
        .unk_24 = { 0x1000, 0x1000 },
        .mtu = 0,
        .recvBufSize = 0,
    },
};

__attribute__((used)) static void pc_alias_sWifiSetupSocConfig(void) {
    __asm__ volatile(".globl " PCSYM(sWifiSetupSocConfig) "\n.set " PCSYM(sWifiSetupSocConfig) ", " PCSYM(gWifiSetupSocket) "+%c0" :: "i"(__builtin_offsetof(pcm_WifiSetupSocketState_0, config)));
}

pcm_WifiSetupConfig_2 gWifiSetupConfig = {
    .packetBuffer = (const void *)((const char *)&pcref_gWifiSetupRecordBuffer + 8),
    .debug = 1,
    .threadStackSize = 0x800,
    .deadline = -1,
    .count = 64,
};

pcm_SocConfig_1 sWifiSetupLinkSocConfig = {
    .unk_00 = 0x1000000,
    .alloc = (const void *)&pcref_WifiSetupLink_Alloc,
    .free = (const void *)&pcref_WifiSetupLink_Free,
    .mode = 0,
    .hostIp = 0xb000a8c0,
    .netmask = 0xffffff,
    .gateway = 0xc800a8c0,
    .dns = { 0x2000a8c0, 0 },
    .unk_24 = { 0x1000, 0x1000 },
    .mtu = 0,
    .recvBufSize = 0,
};

pcm_WifiSetupState_3 gWifiSetupState;

__attribute__((used)) static void pc_alias_ov13_0224CF9C(void) {
    __asm__ volatile(".globl " PCSYM(ov13_0224CF9C) "\n.set " PCSYM(ov13_0224CF9C) ", " PCSYM(gWifiSetupState) "+%c0" :: "i"(__builtin_offsetof(pcm_WifiSetupState_3, connection)));
}

__attribute__((used)) static void pc_alias_ov13_0224CFB8(void) {
    __asm__ volatile(".globl " PCSYM(ov13_0224CFB8) "\n.set " PCSYM(ov13_0224CFB8) ", " PCSYM(gWifiSetupState) "+%c0" :: "i"(__builtin_offsetof(pcm_WifiSetupState_3, randomIncrement)));
}

__attribute__((used)) static void pc_alias_ov13_0224CFBC(void) {
    __asm__ volatile(".globl " PCSYM(ov13_0224CFBC) "\n.set " PCSYM(ov13_0224CFBC) ", " PCSYM(gWifiSetupState) "+%c0" :: "i"(__builtin_offsetof(pcm_WifiSetupState_3, key)));
}

pcm_WifiSetupRuntime_4 gWifiSetupRuntime;

__attribute__((used)) static void pc_alias_gWifiSetupFreeHook(void) {
    __asm__ volatile(".globl " PCSYM(gWifiSetupFreeHook) "\n.set " PCSYM(gWifiSetupFreeHook) ", " PCSYM(gWifiSetupRuntime) "+%c0" :: "i"(__builtin_offsetof(pcm_WifiSetupRuntime_4, free)));
}

const void * gWifiSetupMessages[4];

pcm_OSMessageQueue_5 gWifiSetupMessageQueue;

pcm_WifiSetupWcm_7 gWifiSetupWcm;

pcm_WifiSetupWork_8 gWifiSetupWork;

__attribute__((used)) static void pc_alias_gWifiSetupExtendedRequest(void) {
    __asm__ volatile(".globl " PCSYM(gWifiSetupExtendedRequest) "\n.set " PCSYM(gWifiSetupExtendedRequest) ", " PCSYM(gWifiSetupWork) "+%c0" :: "i"(__builtin_offsetof(pcm_WifiSetupWork_8, extendedRequest)));
}

const void * gWifiSetupLinkEventCallback;

pcm_OSMutex_9 gWifiSetupLinkMutex;

pcm_OSThread_11 gWifiSetupThread;

__attribute__((used)) static void pc_alias_gWifiSetupResult(void) {
    __asm__ volatile(".globl " PCSYM(gWifiSetupResult) "\n.set " PCSYM(gWifiSetupResult) ", " PCSYM(gWifiSetupThread) "+%c0" :: "i"(__builtin_offsetof(pcm_OSThread_11, systemErrno)));
}
