/* Generated from asm/nintendo_wfc_connect_unused_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

__attribute__((aligned(8))) const unsigned char ov73_021EA67C[8] = {
    0x00, 0x17, 0x0D, 0x07, 0x04, 0x0D, 0x00, 0x00,
};

__attribute__((aligned(8))) const unsigned char gNintendoWfcUnusedArrowPositions[8] = {
    0xE0, 0x00, 0x6F, 0x00, 0xE0, 0x00, 0x81, 0x00,
};
