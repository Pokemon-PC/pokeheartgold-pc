/* Generated from lib/asm/wifi_bss.s by tools/pc_port/asm_data_to_c.py - do not edit. */

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
    int32_t useDhcp;
    uint32_t hostIp;
    uint32_t netmask;
    uint32_t gateway;
    uint32_t dns[2];
    const void * alloc;
    const void * free;
    uint32_t commandPacketCount;
    uint32_t cpsWorkSize;
    const void * cpsWork;
    int32_t threadPriority;
    int32_t mtu;
    int32_t recvBufSize;
} pcm_SoclConfig_0;

typedef struct {
    uint8_t sendFailed;
    uint8_t addressConflict;
    uint16_t mss;
    uint16_t pingSeq;
    uint16_t ipId;
    uint16_t ephemeralPort;
    uint8_t unk_0A[2];
    int32_t status;
    uint32_t staticIp;
    const void * alloc;
    const void * addressCallback;
    uint32_t netmask;
    uint32_t dhcpServer;
    uint32_t yieldSleep;
    uint32_t recvHead;
    uint32_t gateway;
    uint32_t recvTail;
    uint32_t requestedIp;
    uint32_t dhcpRetry;
    const void * scavengerCallback;
    const void * free;
    uint32_t calmDown;
    const void * linkIsOn;
    uint32_t leaseTime;
    uint32_t hostIp;
    const void * recvWaiter;
    const void * recvRing;
    uint32_t recvRingSize;
    uint32_t dns[2];
    uint64_t random;
    uint64_t randomMul;
    uint64_t randomAdd;
} pcm_CpsState_1;

typedef struct {
    int32_t size;
    const void * data;
} pcm_CpsSocketBuffer_3;

typedef struct {
    const void * thread;
    uint32_t waiting;
    uint8_t state;
    uint8_t sslEnabled;
    uint16_t localPort;
    const void * ssl;
    int32_t tick;
    uint32_t localIp;
    uint16_t remotePort;
    uint16_t boundRemotePort;
    uint32_t remoteIp;
    uint32_t boundRemoteIp;
    uint32_t recvNext;
    uint32_t sendNext;
    uint16_t sendWindow;
    uint16_t mss;
    uint32_t sendAcked;
    uint32_t recvSegments;
    const void * udpCallback;
    pcm_CpsSocketBuffer_3 recvBuf;
    int32_t recvLength;
    pcm_CpsSocketBuffer_3 sendBuf;
    pcm_CpsSocketBuffer_3 unk_50;
    pcm_CpsSocketBuffer_3 writeBuf;
    uint32_t writeLength;
} pcm_CpsSocket_2;

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
    const void * head;
    const void * tail;
} pcm_OSThreadQueue_9;

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
    pcm_OSThreadQueue_9 joinQueue;
    const void * specific[3];
    const void * alarmForSleep;
    const void * destructor;
    const void * userParameter;
    uint32_t systemErrno;
} pcm_OSThread_4;

typedef struct {
    uint32_t source;
    uint16_t count;
    uint16_t id;
    uint16_t end;
    uint16_t total;
    uint16_t start[8];
    uint16_t stop[8];
    int32_t tick;
    const void * data;
    const void * buffer;
} pcm_CpsFragment_10;

typedef struct {
    const void * next;
    const void * prev;
} pcm_OSMutexLink_13;

typedef struct {
    pcm_OSThreadQueue_9 queue;
    const void * thread;
    int32_t count;
    pcm_OSMutexLink_13 link;
} pcm_OSMutex_12;

typedef struct {
    uint8_t initialized;
    uint8_t unk_01[3];
    pcm_OSThreadQueue_9 sendQueue;
    pcm_OSMutex_12 mutex;
    uint32_t sendResult;
    const void * recvCallback;
} pcm_WcmCpsif_11;

extern pcm_SoclConfig_0 gSocSoclConfig;
extern pcm_CpsState_1 gCpsState;
extern pcm_CpsSocket_2 gCpsDhcpSocket;
extern pcm_CpsSocket_2 gCpsRstSocket;
extern pcm_OSThread_4 gCpsScavengerThread;
extern pcm_CpsFragment_10 gCpsFragments[8];
extern const void * gWcmWork;
extern pcm_WcmCpsif_11 gWcmCpsif;

pcm_SoclConfig_0 gSocSoclConfig;

pcm_CpsState_1 gCpsState;

__attribute__((used)) static void pc_alias_gCpsAlloc(void) {
    __asm__ volatile(".globl " PCSYM(gCpsAlloc) "\n.set " PCSYM(gCpsAlloc) ", " PCSYM(gCpsState) "+%c0" :: "i"(__builtin_offsetof(pcm_CpsState_1, alloc)));
}

__attribute__((used)) static void pc_alias_gSoclNetmask(void) {
    __asm__ volatile(".globl " PCSYM(gSoclNetmask) "\n.set " PCSYM(gSoclNetmask) ", " PCSYM(gCpsState) "+%c0" :: "i"(__builtin_offsetof(pcm_CpsState_1, netmask)));
}

__attribute__((used)) static void pc_alias_gSoclGateway(void) {
    __asm__ volatile(".globl " PCSYM(gSoclGateway) "\n.set " PCSYM(gSoclGateway) ", " PCSYM(gCpsState) "+%c0" :: "i"(__builtin_offsetof(pcm_CpsState_1, gateway)));
}

__attribute__((used)) static void pc_alias_gCpsFree(void) {
    __asm__ volatile(".globl " PCSYM(gCpsFree) "\n.set " PCSYM(gCpsFree) ", " PCSYM(gCpsState) "+%c0" :: "i"(__builtin_offsetof(pcm_CpsState_1, free)));
}

__attribute__((used)) static void pc_alias_gSoclHostAddress(void) {
    __asm__ volatile(".globl " PCSYM(gSoclHostAddress) "\n.set " PCSYM(gSoclHostAddress) ", " PCSYM(gCpsState) "+%c0" :: "i"(__builtin_offsetof(pcm_CpsState_1, hostIp)));
}

__attribute__((used)) static void pc_alias_gCpsDnsServers(void) {
    __asm__ volatile(".globl " PCSYM(gCpsDnsServers) "\n.set " PCSYM(gCpsDnsServers) ", " PCSYM(gCpsState) "+%c0" :: "i"(__builtin_offsetof(pcm_CpsState_1, dns[0])));
}

__attribute__((used)) static void pc_alias_gCpsRandom(void) {
    __asm__ volatile(".globl " PCSYM(gCpsRandom) "\n.set " PCSYM(gCpsRandom) ", " PCSYM(gCpsState) "+%c0" :: "i"(__builtin_offsetof(pcm_CpsState_1, random)));
}

pcm_CpsSocket_2 gCpsDhcpSocket;

__attribute__((used)) static void pc_alias__021D4720(void) {
    __asm__ volatile(".globl " PCSYM(_021D4720) "\n.set " PCSYM(_021D4720) ", " PCSYM(gCpsDhcpSocket) "+%c0" :: "i"(__builtin_offsetof(pcm_CpsSocket_2, boundRemoteIp)));
}

pcm_CpsSocket_2 gCpsRstSocket;

pcm_OSThread_4 gCpsScavengerThread;

__attribute__((used)) static void pc_alias_gCpsTcpipThread(void) {
    __asm__ volatile(".globl " PCSYM(gCpsTcpipThread) "\n.set " PCSYM(gCpsTcpipThread) ", " PCSYM(gCpsScavengerThread) "+%c0" :: "i"(__builtin_offsetof(pcm_OSThread_4, systemErrno)));
}

pcm_CpsFragment_10 gCpsFragments[8];

const void * gWcmWork;

pcm_WcmCpsif_11 gWcmCpsif;

__attribute__((used)) static void pc_alias_gWcmCpsifSendQueue(void) {
    __asm__ volatile(".globl " PCSYM(gWcmCpsifSendQueue) "\n.set " PCSYM(gWcmCpsifSendQueue) ", " PCSYM(gWcmCpsif) "+%c0" :: "i"(__builtin_offsetof(pcm_WcmCpsif_11, sendQueue)));
}

__attribute__((used)) static void pc_alias_gWcmCpsifMutex(void) {
    __asm__ volatile(".globl " PCSYM(gWcmCpsifMutex) "\n.set " PCSYM(gWcmCpsifMutex) ", " PCSYM(gWcmCpsif) "+%c0" :: "i"(__builtin_offsetof(pcm_WcmCpsif_11, mutex)));
}
