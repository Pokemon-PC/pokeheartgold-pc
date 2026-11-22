/* Generated from lib/NitroDWC/asm/dwc_lib_bss.s by tools/pc_port/asm_data_to_c.py - do not edit. */

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

__attribute__((aligned(8))) unsigned char gDwcGt2ConnectionInfo[256];

__attribute__((aligned(8))) unsigned char ov00_0221A949[1];

__attribute__((aligned(8))) unsigned char ov00_0221A94A[2];

__attribute__((aligned(8))) unsigned char ov00_0221A94C[4];

__attribute__((aligned(8))) unsigned char gDwcValidAidList[32];
