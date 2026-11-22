/* Generated from lib/NitroDWC/asm/http_socket_bss.s by tools/pc_port/asm_data_to_c.py - do not edit. */

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

__attribute__((aligned(8))) unsigned char ov38_02226104[52];

__attribute__((aligned(8))) unsigned char gNdRhGameCode[12];

__attribute__((aligned(8))) unsigned char gNdUserId[24];

__attribute__((aligned(8))) unsigned char gNdFileListNumBuffer[128];

__attribute__((aligned(8))) unsigned char gNdBusy[4];

__attribute__((aligned(8))) unsigned char gNhttpDeferredCloseIndices[8];

__attribute__((aligned(8))) unsigned char gNhttpLineBuffer[9];

__attribute__((aligned(8))) unsigned char ov38_02226C61[1023];
