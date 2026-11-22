/* Generated from asm/unown_report_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

__attribute__((aligned(8))) const unsigned char sUnownReportUnused[8] = {
    0x00, 0x0F, 0x07, 0x00, 0x00, 0x0F, 0x01, 0x00,
};

__attribute__((aligned(8))) const unsigned char gUnownReportResdatIds[14] = {
    0x06, 0x00, 0x07, 0x00, 0x05, 0x00, 0x04, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x49, 0x00,
};

__attribute__((aligned(8))) const unsigned char gUnownReportHitboxes[18] = {
    0xA0, 0xC0, 0xC0, 0x00, 0x10, 0x25, 0xDC, 0xF4, 0x78, 0x8D, 0xDC, 0xF4, 0xFF, 0x00, 0x00, 0x00,
    0x00, 0x00,
};
