/* Generated from lib/NitroDWC/asm/wifi_setup_screens_bss.s by tools/pc_port/asm_data_to_c.py - do not edit. */

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

__attribute__((aligned(8))) unsigned char gWifiSetupEraseConfirmed[4];

__attribute__((aligned(8))) unsigned char gWifiSetupTransferResult[4];

__attribute__((aligned(8))) unsigned char gWifiSetupTransferIntroProceed[4];

__attribute__((aligned(8))) unsigned char gWifiSetupTransferCancelledTimer[4];

__attribute__((aligned(8))) unsigned char gWifiSetupTransferFailed[4];

__attribute__((aligned(8))) unsigned char gWifiSetupTransferConfirm[4];

__attribute__((aligned(8))) unsigned char gWifiSetupTransferWaitResult[4];

__attribute__((aligned(8))) unsigned char gWifiSetupAossDoneTimer[4];

__attribute__((aligned(8))) unsigned char gWifiSetupErrorCode[4];

__attribute__((aligned(8))) unsigned char gWifiSetupAutoConnectDone[4];

__attribute__((aligned(8))) unsigned char gWifiSetupAutoReceiveDone[4];

__attribute__((aligned(8))) unsigned char gWifiSetupAutoDoneTimer[4];

__attribute__((aligned(8))) unsigned char gWifiSetupAutoSearchDone[4];

__attribute__((aligned(8))) unsigned char gWifiSetupApScanScreen[4];

__attribute__((aligned(8))) unsigned char gWifiSetupConnectionTestPassed[4];

__attribute__((aligned(8))) unsigned char gWifiSetupConnectionOkTimer[4];

__attribute__((aligned(8))) unsigned char gWifiSetupUsbConnectorDoneTimer[4];

__attribute__((aligned(8))) unsigned char gWifiSetupUsbConnectorIntroNext[4];

__attribute__((aligned(8))) unsigned char gWifiSetupUsbConnectorExit[4];
