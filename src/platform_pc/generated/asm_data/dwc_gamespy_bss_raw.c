/* Generated from lib/NitroDWC/asm/dwc_gamespy_bss.s by tools/pc_port/asm_data_to_c.py - do not edit. */

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

__attribute__((aligned(8))) unsigned char GSIACHostname[64];

__attribute__((aligned(8))) unsigned char __GSIACGamename[64];

__attribute__((aligned(8))) unsigned char gDwcGameName[256];

__attribute__((aligned(8))) unsigned char gDwcSecretKey[256];

__attribute__((aligned(8))) unsigned char gti2ClosingSocket[4];

__attribute__((aligned(8))) unsigned char gti2AddressStringIndex[4];

__attribute__((aligned(8))) unsigned char gti2AddressStrings[44];

__attribute__((aligned(8))) unsigned char nnRecvBuffer[512];

__attribute__((aligned(8))) unsigned char num_local_ips[4];

__attribute__((aligned(8))) unsigned char local_ip_list[20];

__attribute__((aligned(8))) unsigned char qr2_hostname[64];

__attribute__((aligned(8))) unsigned char qr2_query_buffer[256];
