/* Generated from lib/asm/wifi_bss.s by tools/pc_port/asm_data_to_c.py - do not edit. */

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

__attribute__((aligned(8))) unsigned char gSocInetNtoABuffer[16];

__attribute__((aligned(8))) unsigned char gSocHostName[260];

__attribute__((aligned(8))) unsigned char gCpsArpCache[96];

__asm__(".globl " PCSYM(gCpsArpCacheTick) "\n.set " PCSYM(gCpsArpCacheTick) ", " PCSYM(gCpsArpCache) "+10");

__attribute__((aligned(8))) unsigned char gCpsMacAddress[42];

__attribute__((aligned(8))) unsigned char gCpsTcpSendHeader[26];

__attribute__((aligned(8))) unsigned char gCpsDhcpSendBuffer[384];

__asm__(".globl " PCSYM(gCpsDhcpPacket) "\n.set " PCSYM(gCpsDhcpPacket) ", " PCSYM(gCpsDhcpSendBuffer) "+42");

__attribute__((aligned(8))) unsigned char gCpsDhcpRecvBuffer[2452];

__attribute__((aligned(8))) unsigned char gCpsTcpipStack[2048];

__attribute__((aligned(8))) unsigned char gCpsSslRandomState[8];

__attribute__((aligned(8))) unsigned char gCpsSslSessionCache[368];

__attribute__((aligned(8))) unsigned char gCpsSslRandomPool[20];

__asm__(".globl " PCSYM(gCpsSslRandomPoolLast) "\n.set " PCSYM(gCpsSslRandomPoolLast) ", " PCSYM(gCpsSslRandomPool) "+19");

__attribute__((aligned(8))) unsigned char gWcmRssiCount[4];

__attribute__((aligned(8))) unsigned char gWcmRssi[32];
