/* Generated from lib/NitroDWC/asm/wifi_setup_address_entry_rodata.s by tools/pc_port/asm_data_to_c.py - do not edit. */

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

__attribute__((aligned(8))) const unsigned char gWifiSetupAddressEntryDigitX[12] = {
    0x31, 0x3D, 0x49, 0x5A, 0x66, 0x72, 0x83, 0x8F, 0x9B, 0xAC, 0xB8, 0xC4,
};

__attribute__((aligned(8))) const unsigned char gWifiSetupErrorScreenFonts[16] = {
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x0D, 0x00, 0x3C, 0x00, 0xE6, 0x00, 0x5E, 0x00,
};

__attribute__((aligned(8))) const unsigned char gWifiSetupErrorCodeX[2] = {
    0x62, 0x00,
};

__attribute__((aligned(8))) const unsigned char gWifiSetupErrorCodeY[26] = {
    0x22, 0x00, 0x62, 0x00, 0x22, 0x00, 0x3D, 0x00, 0x22, 0x00, 0x65, 0x00, 0x22, 0x00, 0x6C, 0x00,
    0x22, 0x00, 0x34, 0x00, 0x22, 0x00, 0x4E, 0x00, 0x22, 0x00,
};

__attribute__((aligned(8))) const unsigned char gWifiSetupSettingsButtonPaletteRows[4] = {
    0x06, 0x08, 0x07, 0x00,
};
