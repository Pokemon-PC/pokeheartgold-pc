/* Generated from lib/NitroSDK/asm/mb_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

__attribute__((aligned(8))) const unsigned char MBi_defaultLoadSegList[12] = {
    0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
};

__attribute__((aligned(8))) const unsigned char mbi_seg_header_default[24] = {
    0x00, 0x40, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

__attribute__((aligned(8))) unsigned char _02245980[4] = {
    0xFF, 0x00, 0x00, 0x00,
};

__attribute__((aligned(8))) unsigned char sStr_rom[4] = {
    0x72, 0x6F, 0x6D, 0x00,
};

__attribute__((aligned(8))) unsigned char gMbParentChildRecvMask[4];

__attribute__((aligned(8))) unsigned char ov13_02247484[28];

__attribute__((aligned(8))) unsigned char gMbBeaconState[64];

__attribute__((aligned(8))) unsigned char bsendBuff[23136];

__attribute__((aligned(8))) unsigned char gMbGlobalState[12];

__attribute__((aligned(8))) unsigned char mbc[20];

__attribute__((aligned(8))) unsigned char gMbChildScanParam[32];

__attribute__((aligned(8))) unsigned char gMbTaskWork[4];

__attribute__((aligned(8))) unsigned char ov13_0224CF84[20];
