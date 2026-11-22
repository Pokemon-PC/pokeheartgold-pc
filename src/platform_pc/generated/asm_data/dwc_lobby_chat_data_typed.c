/* Generated from lib/NitroDWC/asm/dwc_lobby_chat_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(LobbyEnterChannelRequest_Delete);
PCREF(LobbyEnterChannelRequest_Destroy);
PCREF(LobbyEnumChannelsRequest_Delete);
PCREF(LobbyEnumChannelsRequest_Destroy);
PCREF(LobbyEnumUsersRequest_Delete);
PCREF(LobbyEnumUsersRequest_Destroy);
PCREF(LobbyGetChannelKeysRequest_Delete);
PCREF(LobbyGetChannelKeysRequest_Destroy);
PCREF(LobbyGetChannelModeRequest_Delete);
PCREF(LobbyGetChannelModeRequest_Destroy);
PCREF(LobbyRequest_Delete);
PCREF(LobbyRequest_Destroy);
PCREF(LobbyRequest_GetId);
PCREF(LobbyRequest_GetParam);
PCREF(PPWLobbyPlayer_Delete);
PCREF(PPWLobbyPlayer_Destroy);
PCREF(PPWLobbyPlayers_Delete);
PCREF(PPWLobbyPlayers_Destroy);
PCREF(PPWLobbyWebRequest_Delete);
PCREF(PPWLobbyWebRequest_Destroy);
PCREF(ciATMHandler);
PCREF(ciEndOfNamesHandler);
PCREF(ciErrBadChanMaskHandler);
PCREF(ciErrBadChannelKeyHandler);
PCREF(ciErrBannedFromChanHandler);
PCREF(ciErrChannelIsFullHandler);
PCREF(ciErrErroneusNicknameHandler);
PCREF(ciErrInviteOnlyChanHandler);
PCREF(ciErrLoginFailedHandler);
PCREF(ciErrNickInUseHandler);
PCREF(ciErrNoSuchChannelHandler);
PCREF(ciErrNoSuchNickHandler);
PCREF(ciErrNoUniqueNickHandler);
PCREF(ciErrRegisterNickFailedHandler);
PCREF(ciErrTooManyChannelsHandler);
PCREF(ciErrUniqueNickExpiredHandler);
PCREF(ciErrorHandler);
PCREF(ciInviteHandler);
PCREF(ciJoinHandler);
PCREF(ciKickHandler);
PCREF(ciKillHandler);
PCREF(ciModeHandler);
PCREF(ciNameReplyHandler);
PCREF(ciNickHandler);
PCREF(ciNoticeHandler);
PCREF(ciPartHandler);
PCREF(ciPingHandler);
PCREF(ciPrivmsgHandler);
PCREF(ciQuitHandler);
PCREF(ciRplBanListHandler);
PCREF(ciRplCDKeyHandler);
PCREF(ciRplChannelModeIsHandler);
PCREF(ciRplEndGetCKeyHandler);
PCREF(ciRplEndGetKeyHandler);
PCREF(ciRplEndOfBanListHandler);
PCREF(ciRplEndOfWhoHandler);
PCREF(ciRplEndOfWhoisHandler);
PCREF(ciRplGetCKeyHandler);
PCREF(ciRplGetChanKeyHandler);
PCREF(ciRplGetKeyHandler);
PCREF(ciRplListEndHandler);
PCREF(ciRplListHandler);
PCREF(ciRplListStartHandler);
PCREF(ciRplLoginHandler);
PCREF(ciRplNoTopicHandler);
PCREF(ciRplSecureKeyHandler);
PCREF(ciRplTopicHandler);
PCREF(ciRplUserIPHandler);
PCREF(ciRplWelcomeHandler);
PCREF(ciRplWhoReplyHandler);
PCREF(ciRplWhoisChannelsHandler);
PCREF(ciRplWhoisUserHandler);
PCREF(ciTopicHandler);
PCREF(ciUTMHandler);
PCREF(gLobbyStr_001);
PCREF(gLobbyStr_302);
PCREF(gLobbyStr_311);
PCREF(gLobbyStr_315);
PCREF(gLobbyStr_318);
PCREF(gLobbyStr_319);
PCREF(gLobbyStr_321);
PCREF(gLobbyStr_322);
PCREF(gLobbyStr_323);
PCREF(gLobbyStr_324);
PCREF(gLobbyStr_331);
PCREF(gLobbyStr_332);
PCREF(gLobbyStr_352);
PCREF(gLobbyStr_353);
PCREF(gLobbyStr_366);
PCREF(gLobbyStr_367);
PCREF(gLobbyStr_368);
PCREF(gLobbyStr_401);
PCREF(gLobbyStr_403);
PCREF(gLobbyStr_405);
PCREF(gLobbyStr_432);
PCREF(gLobbyStr_433);
PCREF(gLobbyStr_471);
PCREF(gLobbyStr_473);
PCREF(gLobbyStr_474);
PCREF(gLobbyStr_475);
PCREF(gLobbyStr_476);
PCREF(gLobbyStr_700);
PCREF(gLobbyStr_701);
PCREF(gLobbyStr_702);
PCREF(gLobbyStr_703);
PCREF(gLobbyStr_704);
PCREF(gLobbyStr_705);
PCREF(gLobbyStr_706);
PCREF(gLobbyStr_707);
PCREF(gLobbyStr_708);
PCREF(gLobbyStr_709);
PCREF(gLobbyStr_710);
PCREF(gLobbyStr_711);
PCREF(gLobbyStr_ATM);
PCREF(gLobbyStr_ERROR);
PCREF(gLobbyStr_INVITE);
PCREF(gLobbyStr_JOIN);
PCREF(gLobbyStr_KICK);
PCREF(gLobbyStr_KILL);
PCREF(gLobbyStr_MODE);
PCREF(gLobbyStr_NICK);
PCREF(gLobbyStr_NOTICE);
PCREF(gLobbyStr_PART);
PCREF(gLobbyStr_PING);
PCREF(gLobbyStr_PRIVMSG);
PCREF(gLobbyStr_QUIT);
PCREF(gLobbyStr_TOPIC);
PCREF(gLobbyStr_UTM);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    const void * destroy;
    const void * destroyAndFree;
} pcm_PPWLobbyPlayerVtable_0;

typedef struct {
    const void * data;
    int32_t count;
} pcm_LobbySortTemporaryBuffer_1;

typedef struct {
    const void * destroy;
    const void * destroyAndFree;
    const void * getId;
    const void * getParam;
} pcm_LobbyRequestVtable_2;

typedef struct {
    const void * command;
    const void * handler;
} pcm_ChatServerCommand_3;

typedef struct {
    int32_t state;
    int32_t active;
    int32_t request;
    int32_t keyReady;
    int8_t gameName[32];
    uint8_t secretKey[20];
    uint32_t multiplier;
    uint32_t increment;
    uint32_t modulus;
    uint32_t checksumKey;
    const void * url;
    const void * hash;
    const void * data;
    const void * response;
    int32_t responseLength;
    const void * body;
    int32_t bodyLength;
    const void * callback;
} pcm_StatsUpload_4;

extern pcm_PPWLobbyPlayerVtable_0 gPPWLobbyPlayerVtable;
extern pcm_LobbySortTemporaryBuffer_1 gLobbySortEmptyBuffer;
extern pcm_LobbyRequestVtable_2 gLobbyRequestVtable;
extern pcm_LobbyRequestVtable_2 gLobbyGetChannelModeRequestVtable;
extern pcm_LobbyRequestVtable_2 gLobbyGetChannelKeysRequestVtable;
extern pcm_LobbyRequestVtable_2 gLobbyEnterChannelRequestVtable;
extern pcm_LobbyRequestVtable_2 gLobbyEnumUsersRequestVtable;
extern pcm_LobbyRequestVtable_2 gLobbyEnumChannelsRequestVtable;
extern pcm_ChatServerCommand_3 ciServerMessageHandlers[54];
extern const void * gStatsUploadServer;
extern pcm_StatsUpload_4 gStatsUpload;

const void * gPPWLobbyPlayersVtable[4] = {
    (const void *)&pcref_PPWLobbyPlayers_Destroy,
    (const void *)&pcref_PPWLobbyPlayers_Delete,
    NULL,
    NULL,
};

pcm_PPWLobbyPlayerVtable_0 gPPWLobbyPlayerVtable = {
    .destroy = (const void *)&pcref_PPWLobbyPlayer_Destroy,
    .destroyAndFree = (const void *)&pcref_PPWLobbyPlayer_Delete,
};

const void * gPPWLobbyWebRequestVtable[2] = {
    (const void *)&pcref_PPWLobbyWebRequest_Destroy,
    (const void *)&pcref_PPWLobbyWebRequest_Delete,
};

pcm_LobbySortTemporaryBuffer_1 gLobbySortEmptyBuffer = {
    .data = NULL,
    .count = 0,
};

pcm_LobbyRequestVtable_2 gLobbyRequestVtable = {
    .destroy = (const void *)&pcref_LobbyRequest_Destroy,
    .destroyAndFree = (const void *)&pcref_LobbyRequest_Delete,
    .getId = (const void *)&pcref_LobbyRequest_GetId,
    .getParam = (const void *)&pcref_LobbyRequest_GetParam,
};

pcm_LobbyRequestVtable_2 gLobbyGetChannelModeRequestVtable = {
    .destroy = (const void *)&pcref_LobbyGetChannelModeRequest_Destroy,
    .destroyAndFree = (const void *)&pcref_LobbyGetChannelModeRequest_Delete,
    .getId = (const void *)&pcref_LobbyRequest_GetId,
    .getParam = (const void *)&pcref_LobbyRequest_GetParam,
};

pcm_LobbyRequestVtable_2 gLobbyGetChannelKeysRequestVtable = {
    .destroy = (const void *)&pcref_LobbyGetChannelKeysRequest_Destroy,
    .destroyAndFree = (const void *)&pcref_LobbyGetChannelKeysRequest_Delete,
    .getId = (const void *)&pcref_LobbyRequest_GetId,
    .getParam = (const void *)&pcref_LobbyRequest_GetParam,
};

pcm_LobbyRequestVtable_2 gLobbyEnterChannelRequestVtable = {
    .destroy = (const void *)&pcref_LobbyEnterChannelRequest_Destroy,
    .destroyAndFree = (const void *)&pcref_LobbyEnterChannelRequest_Delete,
    .getId = (const void *)&pcref_LobbyRequest_GetId,
    .getParam = (const void *)&pcref_LobbyRequest_GetParam,
};

pcm_LobbyRequestVtable_2 gLobbyEnumUsersRequestVtable = {
    .destroy = (const void *)&pcref_LobbyEnumUsersRequest_Destroy,
    .destroyAndFree = (const void *)&pcref_LobbyEnumUsersRequest_Delete,
    .getId = (const void *)&pcref_LobbyRequest_GetId,
    .getParam = (const void *)&pcref_LobbyRequest_GetParam,
};

pcm_LobbyRequestVtable_2 gLobbyEnumChannelsRequestVtable = {
    .destroy = (const void *)&pcref_LobbyEnumChannelsRequest_Destroy,
    .destroyAndFree = (const void *)&pcref_LobbyEnumChannelsRequest_Delete,
    .getId = (const void *)&pcref_LobbyRequest_GetId,
    .getParam = (const void *)&pcref_LobbyRequest_GetParam,
};

pcm_ChatServerCommand_3 ciServerMessageHandlers[54] = {
    {
        .command = (const void *)&pcref_gLobbyStr_PRIVMSG,
        .handler = (const void *)&pcref_ciPrivmsgHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_NOTICE,
        .handler = (const void *)&pcref_ciNoticeHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_UTM,
        .handler = (const void *)&pcref_ciUTMHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_ATM,
        .handler = (const void *)&pcref_ciATMHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_PING,
        .handler = (const void *)&pcref_ciPingHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_NICK,
        .handler = (const void *)&pcref_ciNickHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_JOIN,
        .handler = (const void *)&pcref_ciJoinHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_PART,
        .handler = (const void *)&pcref_ciPartHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_KICK,
        .handler = (const void *)&pcref_ciKickHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_QUIT,
        .handler = (const void *)&pcref_ciQuitHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_KILL,
        .handler = (const void *)&pcref_ciKillHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_TOPIC,
        .handler = (const void *)&pcref_ciTopicHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_MODE,
        .handler = (const void *)&pcref_ciModeHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_ERROR,
        .handler = (const void *)&pcref_ciErrorHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_INVITE,
        .handler = (const void *)&pcref_ciInviteHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_353,
        .handler = (const void *)&pcref_ciNameReplyHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_366,
        .handler = (const void *)&pcref_ciEndOfNamesHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_332,
        .handler = (const void *)&pcref_ciRplTopicHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_331,
        .handler = (const void *)&pcref_ciRplNoTopicHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_352,
        .handler = (const void *)&pcref_ciRplWhoReplyHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_302,
        .handler = (const void *)&pcref_ciRplUserIPHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_321,
        .handler = (const void *)&pcref_ciRplListStartHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_322,
        .handler = (const void *)&pcref_ciRplListHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_323,
        .handler = (const void *)&pcref_ciRplListEndHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_324,
        .handler = (const void *)&pcref_ciRplChannelModeIsHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_311,
        .handler = (const void *)&pcref_ciRplWhoisUserHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_319,
        .handler = (const void *)&pcref_ciRplWhoisChannelsHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_318,
        .handler = (const void *)&pcref_ciRplEndOfWhoisHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_367,
        .handler = (const void *)&pcref_ciRplBanListHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_368,
        .handler = (const void *)&pcref_ciRplEndOfBanListHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_001,
        .handler = (const void *)&pcref_ciRplWelcomeHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_315,
        .handler = (const void *)&pcref_ciRplEndOfWhoHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_700,
        .handler = (const void *)&pcref_ciRplGetKeyHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_701,
        .handler = (const void *)&pcref_ciRplEndGetKeyHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_702,
        .handler = (const void *)&pcref_ciRplGetCKeyHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_703,
        .handler = (const void *)&pcref_ciRplEndGetCKeyHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_704,
        .handler = (const void *)&pcref_ciRplGetChanKeyHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_705,
        .handler = (const void *)&pcref_ciRplSecureKeyHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_706,
        .handler = (const void *)&pcref_ciRplCDKeyHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_707,
        .handler = (const void *)&pcref_ciRplLoginHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_433,
        .handler = (const void *)&pcref_ciErrNickInUseHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_403,
        .handler = (const void *)&pcref_ciErrNoSuchChannelHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_405,
        .handler = (const void *)&pcref_ciErrTooManyChannelsHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_471,
        .handler = (const void *)&pcref_ciErrChannelIsFullHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_473,
        .handler = (const void *)&pcref_ciErrInviteOnlyChanHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_474,
        .handler = (const void *)&pcref_ciErrBannedFromChanHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_475,
        .handler = (const void *)&pcref_ciErrBadChannelKeyHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_476,
        .handler = (const void *)&pcref_ciErrBadChanMaskHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_401,
        .handler = (const void *)&pcref_ciErrNoSuchNickHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_432,
        .handler = (const void *)&pcref_ciErrErroneusNicknameHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_708,
        .handler = (const void *)&pcref_ciErrLoginFailedHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_709,
        .handler = (const void *)&pcref_ciErrNoUniqueNickHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_710,
        .handler = (const void *)&pcref_ciErrUniqueNickExpiredHandler,
    },
    {
        .command = (const void *)&pcref_gLobbyStr_711,
        .handler = (const void *)&pcref_ciErrRegisterNickFailedHandler,
    },
};

const void * gStatsUploadServer = NULL;

pcm_StatsUpload_4 gStatsUpload = {
    .state = 2,
    .active = 0,
    .request = 0,
    .keyReady = 0,
    .gameName = { 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0 },
    .secretKey = { 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0 },
    .multiplier = 0,
    .increment = 0,
    .modulus = 0,
    .checksumKey = 0,
    .url = NULL,
    .hash = NULL,
    .data = NULL,
    .response = NULL,
    .responseLength = 0,
    .body = NULL,
    .bodyLength = 0,
    .callback = NULL,
};

__attribute__((used)) static void pc_alias_gStatsUploadGameName(void) {
    __asm__ volatile(".globl " PCSYM(gStatsUploadGameName) "\n.set " PCSYM(gStatsUploadGameName) ", " PCSYM(gStatsUpload) "+%c0" :: "i"(__builtin_offsetof(pcm_StatsUpload_4, gameName[0])));
}

__attribute__((used)) static void pc_alias_gStatsUploadSecretKey(void) {
    __asm__ volatile(".globl " PCSYM(gStatsUploadSecretKey) "\n.set " PCSYM(gStatsUploadSecretKey) ", " PCSYM(gStatsUpload) "+%c0" :: "i"(__builtin_offsetof(pcm_StatsUpload_4, secretKey[0])));
}
