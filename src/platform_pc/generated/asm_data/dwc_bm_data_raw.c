/* Generated from lib/NitroDWC/asm/dwc_bm_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

__attribute__((aligned(8))) unsigned char gDwcBmNvramState[12];

__attribute__((aligned(8))) unsigned char Wifi[44];

__attribute__((aligned(8))) unsigned char Work[32];

__attribute__((aligned(8))) const unsigned char DWCi_SETTING_NONE[4] = {
    0x00, 0x00, 0x00, 0x00,
};

__attribute__((aligned(8))) const unsigned char DWCi_util_wifiid_exctable[8] = {
    0x01, 0x02, 0x00, 0x04, 0x03, 0x05, 0x06, 0x07,
};

__attribute__((aligned(8))) const unsigned char DWCi_util_wifiid_ttable[16] = {
    0x05, 0x09, 0x01, 0x0E, 0x0C, 0x02, 0x0A, 0x00, 0x0B, 0x0D, 0x03, 0x04, 0x08, 0x06, 0x0F, 0x07,
};
