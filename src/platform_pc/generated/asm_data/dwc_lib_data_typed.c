/* Generated from lib/NitroDWC/asm/dwc_lib_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(gDwcCaBaltimoreCyberTrustRoot);
PCREF(gDwcCaGlobalSignRoot);
PCREF(gDwcCaGlobalSignRootR2);
PCREF(gDwcCaGteCyberTrustGlobalRoot);
PCREF(gDwcCaGteCyberTrustRoot);
PCREF(gDwcCaNintendo);
PCREF(gDwcCaRsaSecureServer);
PCREF(gDwcCaThawtePremiumServer);
PCREF(gDwcCaThawteServer);
PCREF(gDwcCaVeriSignClass3);
PCREF(gDwcCaVeriSignClass3G2);
PCREF(gDwcCaVeriSignClass3G3);
PCREF(sStr_38g6zxjk20gvmv6_J_VY1);
PCREF(sStr_952uybjnpmu903biaBk5m);
PCREF(sStr_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuv);
PCREF(sStr_Apr);
PCREF(sStr_Aug);
PCREF(sStr_Dec);
PCREF(sStr_EgErAgS_M);
PCREF(sStr_Empty_12);
PCREF(sStr_Feb);
PCREF(sStr_Gwi6_Fs0Nf);
PCREF(sStr_HttpConntestNintendowifiNet);
PCREF(sStr_Jan);
PCREF(sStr_Jul);
PCREF(sStr_Jun);
PCREF(sStr_Mar);
PCREF(sStr_May);
PCREF(sStr_Nov);
PCREF(sStr_Oct);
PCREF(sStr_QueryError);
PCREF(sStr_Sep);
PCREF(sStr_X0AmeSpy3D);
PCREF(sStr_deaths_);
PCREF(sStr_fraglimit);
PCREF(sStr_gamemode);
PCREF(sStr_gamename_2);
PCREF(sStr_gametype);
PCREF(sStr_gamevariant);
PCREF(sStr_gamever);
PCREF(sStr_groupid);
PCREF(sStr_hostname);
PCREF(sStr_hostport);
PCREF(sStr_mapname);
PCREF(sStr_maxplayers_2);
PCREF(sStr_numplayers_2);
PCREF(sStr_numteams);
PCREF(sStr_password);
PCREF(sStr_pid_);
PCREF(sStr_ping_);
PCREF(sStr_player_);
PCREF(sStr_roundelapsed);
PCREF(sStr_roundtime);
PCREF(sStr_score_);
PCREF(sStr_score_t);
PCREF(sStr_skill_);
PCREF(sStr_team_);
PCREF(sStr_team_t);
PCREF(sStr_teamfraglimit);
PCREF(sStr_teamplay);
PCREF(sStr_timeelapsed);
PCREF(sStr_timelimit);
PCREF(static_qr2_rec);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    const void * keys[4];
} pcm_KeyTable_0;

typedef struct {
    int32_t socket;
    int32_t port;
    const void * key;
} pcm_PersistSocket_1;

extern const void * gDwcConnTestUrl;
extern const void * gDwcMonthNames[12];
extern const void * gDwcBase64Alphabet;
extern pcm_KeyTable_0 DWCi_AC_SsidKeyTable;
extern pcm_PersistSocket_1 ov00_022198D8;
extern const void * current_rec;
extern const void * qr2_registered_key_list[254];
extern const void * sbQueryErrorPrefix;

const void * gDwcRootCaList[12] = {
    (const void *)&pcref_gDwcCaVeriSignClass3G3,
    (const void *)&pcref_gDwcCaVeriSignClass3G2,
    (const void *)&pcref_gDwcCaVeriSignClass3,
    (const void *)&pcref_gDwcCaRsaSecureServer,
    (const void *)&pcref_gDwcCaGlobalSignRoot,
    (const void *)&pcref_gDwcCaGteCyberTrustGlobalRoot,
    (const void *)&pcref_gDwcCaGteCyberTrustRoot,
    (const void *)&pcref_gDwcCaBaltimoreCyberTrustRoot,
    (const void *)&pcref_gDwcCaThawteServer,
    (const void *)&pcref_gDwcCaThawtePremiumServer,
    (const void *)&pcref_gDwcCaGlobalSignRootR2,
    (const void *)&pcref_gDwcCaNintendo,
};

const void * gDwcConnTestUrl = (const void *)&pcref_sStr_HttpConntestNintendowifiNet;

const void * gDwcMonthNames[12] = { (const void *)&pcref_sStr_Jan, (const void *)&pcref_sStr_Feb, (const void *)&pcref_sStr_Mar, (const void *)&pcref_sStr_Apr, (const void *)&pcref_sStr_May, (const void *)&pcref_sStr_Jun, (const void *)&pcref_sStr_Jul, (const void *)&pcref_sStr_Aug,
  (const void *)&pcref_sStr_Sep, (const void *)&pcref_sStr_Oct, (const void *)&pcref_sStr_Nov, (const void *)&pcref_sStr_Dec };

const void * gDwcBase64Alphabet = (const void *)&pcref_sStr_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuv;

pcm_KeyTable_0 DWCi_AC_SsidKeyTable = {
    .keys = { (const void *)&pcref_sStr_38g6zxjk20gvmv6_J_VY1, (const void *)&pcref_sStr_Gwi6_Fs0Nf, (const void *)&pcref_sStr_952uybjnpmu903biaBk5m, (const void *)&pcref_sStr_EgErAgS_M },
};

pcm_PersistSocket_1 ov00_022198D8 = {
    .socket = -1,
    .port = 20000,
    .key = (const void *)&pcref_sStr_X0AmeSpy3D,
};

const void * current_rec = (const void *)&pcref_static_qr2_rec;

const void * qr2_registered_key_list[254] = { (const void *)&pcref_sStr_Empty_12, (const void *)&pcref_sStr_hostname, (const void *)&pcref_sStr_gamename_2, (const void *)&pcref_sStr_gamever, (const void *)&pcref_sStr_hostport, (const void *)&pcref_sStr_mapname, (const void *)&pcref_sStr_gametype, (const void *)&pcref_sStr_gamevariant,
  (const void *)&pcref_sStr_numplayers_2, (const void *)&pcref_sStr_numteams, (const void *)&pcref_sStr_maxplayers_2, (const void *)&pcref_sStr_gamemode, (const void *)&pcref_sStr_teamplay, (const void *)&pcref_sStr_fraglimit, (const void *)&pcref_sStr_teamfraglimit, (const void *)&pcref_sStr_timeelapsed,
  (const void *)&pcref_sStr_timelimit, (const void *)&pcref_sStr_roundtime, (const void *)&pcref_sStr_roundelapsed, (const void *)&pcref_sStr_password, (const void *)&pcref_sStr_groupid, (const void *)&pcref_sStr_player_, (const void *)&pcref_sStr_score_, (const void *)&pcref_sStr_skill_,
  (const void *)&pcref_sStr_ping_, (const void *)&pcref_sStr_team_, (const void *)&pcref_sStr_deaths_, (const void *)&pcref_sStr_pid_, (const void *)&pcref_sStr_team_t, (const void *)&pcref_sStr_score_t, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL };

const void * sbQueryErrorPrefix = (const void *)&pcref_sStr_QueryError;
