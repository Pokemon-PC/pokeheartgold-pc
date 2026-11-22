/* Generated from lib/NitroDWC/asm/dwc_lib_bss.s by tools/pc_port/asm_data_to_c.py - do not edit. */

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
    const void * authParam;
    const void * state;
    const void * authCallback;
} pcm_LoginGlobal_0;

typedef struct {
    int32_t busy;
    uint32_t unk_04;
    const void * work;
    int32_t deferred;
} pcm_FriendGlobal_1;

typedef struct {
    const void * timer;
    const void * work;
    const void * filter;
    int32_t deferred;
    int32_t updating;
    int32_t freeBrowser;
    int32_t busy;
    uint8_t scConnectBlock;
    uint8_t scConnectBlocked;
    uint16_t unk_1E;
} pcm_MatchGlobal_2;

typedef struct {
    uint8_t id;
    uint8_t isString;
    uint16_t unk_02;
    const void * buffer;
    const void * value;
} pcm_MatchKeyEntry_3;

typedef struct {
    const void * head;
    int32_t count;
} pcm_HttpList_4;

typedef struct {
    const void * p0;
    const void * p4;
    const void * p8;
    const void * ctx;
    const void * work;
} pcm_Globals_5;

typedef struct {
    const void * a;
    const void * b;
    int32_t state;
} pcm_HState_6;

extern const void * gDwcControl;
extern const void * gDwcGt2Connections[32];
extern pcm_LoginGlobal_0 gDwcLogin;
extern pcm_FriendGlobal_1 gDwcFriends;
extern pcm_MatchGlobal_2 gDwcMatch;
extern pcm_MatchKeyEntry_3 gDwcMatchKeys[0];
extern const void * ov00_0221A950[460];
extern const void * gDwcTransport;
extern pcm_HttpList_4 DWCi_GHTTPRequestList;
extern pcm_Globals_5 DWCi_AC_Globals;
extern const void * DWCi_Beacon_Work;
extern pcm_HState_6 DWCi_Beacon_ApSearch;

const void * gDwcControl;

const void * gDwcGt2Connections[32];

pcm_LoginGlobal_0 gDwcLogin;

pcm_FriendGlobal_1 gDwcFriends;

pcm_MatchGlobal_2 gDwcMatch;

pcm_MatchKeyEntry_3 gDwcMatchKeys[0];

const void * ov00_0221A950[460];

const void * gDwcTransport;

pcm_HttpList_4 DWCi_GHTTPRequestList;

pcm_Globals_5 DWCi_AC_Globals;

const void * DWCi_Beacon_Work;

pcm_HState_6 DWCi_Beacon_ApSearch;
