/* Generated from lib/asm/vct_bss.s by tools/pc_port/asm_data_to_c.py - do not edit. */

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
    uint32_t count;
    uint32_t mask;
    uint64_t tick;
    const void * free;
    const void * used;
    const void * clock;
    uint32_t seed;
    uint32_t add;
} pcm_Ssp_1;

typedef struct {
    uint32_t state;
    uint8_t aid;
    uint8_t other;
    uint8_t pad[2];
    uint32_t mask;
    uint32_t mode;
    uint32_t pad2;
    const void * next;
} pcm_VctSession_2;

typedef struct {
    pcm_Ssp_1 core;
    pcm_VctSession_2 reject;
    pcm_VctSession_2 server;
} pcm_SspBank_0;

extern const void * gVctDecoderList[2];
extern const void * gVctAudioQueueHead[3];
extern const void * gVctAudioQueueTail[3];
extern pcm_SspBank_0 gVctSsp;

const void * gVctDecoderList[2];

const void * gVctAudioQueueHead[3];

const void * gVctAudioQueueTail[3];

pcm_SspBank_0 gVctSsp;

__attribute__((used)) static void pc_alias_gVctServerSession(void) {
    __asm__ volatile(".globl " PCSYM(gVctServerSession) "\n.set " PCSYM(gVctServerSession) ", " PCSYM(gVctSsp) "+%c0" :: "i"(__builtin_offsetof(pcm_SspBank_0, reject.next)));
}

__attribute__((used)) static void pc_alias_gVctPacketBuffers(void) {
    __asm__ volatile(".globl " PCSYM(gVctPacketBuffers) "\n.set " PCSYM(gVctPacketBuffers) ", " PCSYM(gVctSsp) "+%c0" :: "i"(__builtin_offsetof(pcm_SspBank_0, server.next)));
}
