/* Generated from asm/global_terminal_socket_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

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
    uint32_t dwcProfileId;
    uint8_t gameVersion;
    uint8_t unk_05;
    uint8_t token[306];
} pcm_GlobalTerminalNetLogin_1;

typedef struct {
    pcm_GlobalTerminalNetLogin_1 login;
    int32_t hasToken;
    int32_t state;
    int8_t host[192];
    uint8_t unk_200[64];
    uint16_t port;
    uint16_t unk_242;
    int32_t connectTimeout;
    int32_t sendTimeout;
    int32_t receiveTimeout;
    int32_t error;
    int32_t requestSize;
    const void * request;
    int32_t responseSize;
    const void * response;
    uint32_t address;
    int32_t cancel;
    int32_t socket;
    int32_t threadPriority;
} pcm_GlobalTerminalSocket_0;

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

extern pcm_GlobalTerminalSocket_0 sGlobalTerminalSocket;
extern pcm_OSThread_2 sGlobalTerminalSocketThread;

pcm_GlobalTerminalSocket_0 sGlobalTerminalSocket;

__attribute__((used)) static void pc_alias_ov39_0222AB8A(void) {
    __asm__ volatile(".globl " PCSYM(ov39_0222AB8A) "\n.set " PCSYM(ov39_0222AB8A) ", " PCSYM(sGlobalTerminalSocket) "+%c0" :: "i"(__builtin_offsetof(pcm_GlobalTerminalSocket_0, login.token[0])));
}

__attribute__((used)) static void pc_alias_sGlobalTerminalSocketHost(void) {
    __asm__ volatile(".globl " PCSYM(sGlobalTerminalSocketHost) "\n.set " PCSYM(sGlobalTerminalSocketHost) ", " PCSYM(sGlobalTerminalSocket) "+%c0" :: "i"(__builtin_offsetof(pcm_GlobalTerminalSocket_0, host[0])));
}

__attribute__((used)) static void pc_alias_sGlobalTerminalSocketSettings(void) {
    __asm__ volatile(".globl " PCSYM(sGlobalTerminalSocketSettings) "\n.set " PCSYM(sGlobalTerminalSocketSettings) ", " PCSYM(sGlobalTerminalSocket) "+%c0" :: "i"(__builtin_offsetof(pcm_GlobalTerminalSocket_0, unk_200[0])));
}

pcm_OSThread_2 sGlobalTerminalSocketThread;

__attribute__((used)) static void pc_alias_sGlobalTerminalSocketMutex(void) {
    __asm__ volatile(".globl " PCSYM(sGlobalTerminalSocketMutex) "\n.set " PCSYM(sGlobalTerminalSocketMutex) ", " PCSYM(sGlobalTerminalSocketThread) "+%c0" :: "i"(__builtin_offsetof(pcm_OSThread_2, systemErrno)));
}
