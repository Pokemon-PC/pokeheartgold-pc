/* Generated from asm/wifi_setup_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

__attribute__((aligned(8))) unsigned char sWifiSetupSecurityRecordTypes[4] = {
    0x09, 0x08, 0x00, 0x00,
};

__attribute__((aligned(8))) unsigned char sStr_ESSID_AOSS[12] = {
    0x45, 0x53, 0x53, 0x49, 0x44, 0x2D, 0x41, 0x4F, 0x53, 0x53, 0x00, 0x00,
};

__attribute__((aligned(8))) unsigned char sStr_MELCO[8] = {
    0x4D, 0x45, 0x4C, 0x43, 0x4F, 0x00, 0x00, 0x00,
};

__attribute__((aligned(8))) unsigned char sWifiSetupRateMasks[48] = {
    0x01, 0x00, 0x02, 0x00, 0x02, 0x00, 0x04, 0x00, 0x04, 0x00, 0x0B, 0x00, 0x08, 0x00, 0x0C, 0x00,
    0x10, 0x00, 0x12, 0x00, 0x20, 0x00, 0x16, 0x00, 0x40, 0x00, 0x18, 0x00, 0x80, 0x00, 0x24, 0x00,
    0x00, 0x01, 0x30, 0x00, 0x00, 0x02, 0x48, 0x00, 0x00, 0x04, 0x60, 0x00, 0x00, 0x08, 0x6C, 0x00,
};

__attribute__((aligned(8))) unsigned char sWifiSetupSetupApSsid[8] = {
    0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x00, 0x00,
};

__attribute__((aligned(8))) unsigned char sStr_NINTENDO_DS_2[12] = {
    0x4E, 0x49, 0x4E, 0x54, 0x45, 0x4E, 0x44, 0x4F, 0x2D, 0x44, 0x53, 0x00,
};

__attribute__((aligned(8))) unsigned char sWifiSetupMd5Padding[64] = {
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

__attribute__((aligned(8))) unsigned char sStr_WARP[8] = {
    0x57, 0x41, 0x52, 0x50, 0x00, 0x00, 0x00, 0x00,
};

__attribute__((aligned(8))) unsigned char gWifiSetupJoinReply[640];

__attribute__((aligned(8))) unsigned char gWifiSetupCrc32Table[1024];

__attribute__((aligned(8))) unsigned char gWifiSetupSecurityRecords[1696];

__asm__(".globl " PCSYM(gWifiSetupWep64Record) "\n.set " PCSYM(gWifiSetupWep64Record) ", " PCSYM(gWifiSetupSecurityRecords) "+8");

__asm__(".globl " PCSYM(gWifiSetupWep128Record) "\n.set " PCSYM(gWifiSetupWep128Record) ", " PCSYM(gWifiSetupSecurityRecords) "+312");

__asm__(".globl " PCSYM(ov13_0224D8C0) "\n.set " PCSYM(ov13_0224D8C0) ", " PCSYM(gWifiSetupSecurityRecords) "+616");

__asm__(".globl " PCSYM(ov13_0224D930) "\n.set " PCSYM(ov13_0224D930) ", " PCSYM(gWifiSetupSecurityRecords) "+728");

__attribute__((aligned(8))) unsigned char gWifiSetupPeerAddress[8];

__attribute__((aligned(8))) unsigned char gWifiSetupCipherSeed[2];

__attribute__((aligned(8))) unsigned char gWifiSetupCipherKey[126];

__attribute__((aligned(8))) unsigned char gWifiSetupConnectApInfo[192];

__attribute__((aligned(8))) unsigned char gWifiSetupConnectSetting[96];

__attribute__((aligned(8))) unsigned char gWifiSetupWcmSearchBssid[8];

__attribute__((aligned(8))) unsigned char gWifiSetupWcmSearchSsid[32];

__attribute__((aligned(8))) unsigned char gWifiSetupLinkEventQueue[16];

__attribute__((aligned(8))) unsigned char ov13_0224E0B0[20];

__attribute__((aligned(8))) unsigned char gWifiSetupResultWepKeys[128];

__attribute__((aligned(8))) unsigned char gWifiSetupResultWpaKey[64];

__attribute__((aligned(8))) unsigned char gWifiSetupReply[236];

__attribute__((aligned(8))) unsigned char gWifiSetupClientSettings[64];

__asm__(".globl " PCSYM(gWifiSetupRecvSsid) "\n.set " PCSYM(gWifiSetupRecvSsid) ", " PCSYM(gWifiSetupClientSettings) "+20");

__attribute__((aligned(8))) unsigned char gWifiSetupRecvSecurity[56];

__attribute__((aligned(8))) unsigned char gWifiSetupRecvWepKeys[152];

__attribute__((aligned(8))) unsigned char gWifiSetupRecvWpaKey[88];

__attribute__((aligned(8))) unsigned char gWifiSetupOwnMacAddress[8];

__attribute__((aligned(8))) unsigned char gWifiSetupApBssid[8];

__attribute__((aligned(8))) unsigned char gWifiSetupLinkSearchBssid[8];

__attribute__((aligned(8))) unsigned char gWifiSetupSessionKey[16];

__attribute__((aligned(8))) unsigned char gWifiSetupSettingsKey[8];

__attribute__((aligned(8))) unsigned char gWifiSetupTimestampDigest[24];

__attribute__((aligned(8))) unsigned char gWifiSetupLinkSearchSsid[32];

__attribute__((aligned(8))) unsigned char gWifiSetupApSsid[36];

__attribute__((aligned(8))) unsigned char gWifiSetupRecordBuffer[2048];

__attribute__((aligned(8))) unsigned char gWifiSetupPacketBuffer[2048];
