/* Generated from lib/NitroDWC/asm/wifi_setup_dwc_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(gWifiSetupKeyboardLabelsLower);
PCREF(gWifiSetupKeyboardLabelsSymbols);
PCREF(gWifiSetupKeyboardLabelsUpper);
PCREF(sStr_1234567890_QWERTYUIOP_ASDFGHJKL_ZXCVBNM);
PCREF(sStr_1234567890_QwertyuiopAsdfghjklZxcvbnm);
PCREF(sStr_CharJb2HlApNscL);
PCREF(sStr_CharJb2HlWiFiNscL);
PCREF(sStr_CharJb3HlList1_NscL);
PCREF(sStr_CharJb3HlList2_NscL);
PCREF(sStr_CharJb3HlList3_NscL);
PCREF(sStr_CharJb4HlDns0_NscL);
PCREF(sStr_CharJb4HlDns1_NscL);
PCREF(sStr_CharJb4HlGatewayNscL);
PCREF(sStr_CharJb4HlIpNscL);
PCREF(sStr_CharJb4HlMaskNscL);
PCREF(sStr_CharJb4HlSet1_NscL);
PCREF(sStr_CharJb4HlSet2_NscL);
PCREF(sStr_CharJb4HlSet3_NscL);
PCREF(sStr_CharJb4HlSsidNscL);
PCREF(sStr_CharJb4HlUsbNscL);
PCREF(sStr_CharJb4HlWepNscL);
PCREF(sStr_CharJb5HlEraseNscL);
PCREF(sStr_CharJb5HlInfoNscL);
PCREF(sStr_CharJb5HlMoveNscL);
PCREF(sStr_CharJb5HlOptionNscL);
PCREF(sStr_DwcMoveChildSrl);
PCREF(sStr_MsgEngBmgL);
PCREF(sStr_MsgFreBmgL);
PCREF(sStr_MsgGerBmgL);
PCREF(sStr_MsgItaBmgL);
PCREF(sStr_MsgJapBmgL);
PCREF(sStr_MsgKorBmgL);
PCREF(sStr_MsgSpaBmgL);
PCREF(sStr_QWERTYUIOP_ASDFGHJKL_ZXCVBNM);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    const void * filePath;
    const void * title;
    const void * description;
    int32_t iconCharPath;
    int32_t iconPalettePath;
    uint32_t ggid;
    uint8_t languageCode;
} pcm_WifiSetupSessionParams_0;

extern const void * gWifiSetupBackgroundScreenPaths[20];
extern const void * gWifiSetupKeyboardPageKeyCodes[3];
extern const void * gWifiSetupKeyboardPageLabels[3];
extern pcm_WifiSetupSessionParams_0 gWifiSetupTransferSessionParams;
extern const void * gWifiSetupMessageBankPaths[7];
extern const void * gWifiSetupBannerScreenPaths[33];

const void * gWifiSetupBackgroundScreenPaths[20] = { (const void *)&pcref_sStr_CharJb2HlWiFiNscL, (const void *)&pcref_sStr_CharJb2HlApNscL, (const void *)&pcref_sStr_CharJb3HlList1_NscL, (const void *)&pcref_sStr_CharJb3HlList2_NscL, (const void *)&pcref_sStr_CharJb3HlList3_NscL, (const void *)&pcref_sStr_CharJb4HlSet1_NscL, (const void *)&pcref_sStr_CharJb4HlSet2_NscL, (const void *)&pcref_sStr_CharJb4HlSet3_NscL,
  (const void *)&pcref_sStr_CharJb4HlUsbNscL, (const void *)&pcref_sStr_CharJb4HlSsidNscL, (const void *)&pcref_sStr_CharJb4HlWepNscL, (const void *)&pcref_sStr_CharJb4HlIpNscL, (const void *)&pcref_sStr_CharJb4HlMaskNscL, (const void *)&pcref_sStr_CharJb4HlGatewayNscL, (const void *)&pcref_sStr_CharJb4HlDns0_NscL, (const void *)&pcref_sStr_CharJb4HlDns1_NscL,
  (const void *)&pcref_sStr_CharJb5HlOptionNscL, (const void *)&pcref_sStr_CharJb5HlInfoNscL, (const void *)&pcref_sStr_CharJb5HlEraseNscL, (const void *)&pcref_sStr_CharJb5HlMoveNscL };

const void * gWifiSetupKeyboardPageKeyCodes[3] = { (const void *)&pcref_sStr_1234567890_QwertyuiopAsdfghjklZxcvbnm, (const void *)&pcref_sStr_QWERTYUIOP_ASDFGHJKL_ZXCVBNM, (const void *)&pcref_sStr_1234567890_QWERTYUIOP_ASDFGHJKL_ZXCVBNM };

const void * gWifiSetupKeyboardPageLabels[3] = { (const void *)&pcref_gWifiSetupKeyboardLabelsLower, (const void *)&pcref_gWifiSetupKeyboardLabelsSymbols, (const void *)&pcref_gWifiSetupKeyboardLabelsUpper };

pcm_WifiSetupSessionParams_0 gWifiSetupTransferSessionParams = {
    .filePath = (const void *)&pcref_sStr_DwcMoveChildSrl,
    .title = NULL,
    .description = NULL,
    .iconCharPath = 0,
    .iconPalettePath = 0,
    .ggid = 0x159,
    .languageCode = 0,
};

const void * gWifiSetupMessageBankPaths[7] = { (const void *)&pcref_sStr_MsgJapBmgL, (const void *)&pcref_sStr_MsgEngBmgL, (const void *)&pcref_sStr_MsgFreBmgL, (const void *)&pcref_sStr_MsgGerBmgL, (const void *)&pcref_sStr_MsgItaBmgL, (const void *)&pcref_sStr_MsgSpaBmgL, (const void *)&pcref_sStr_MsgKorBmgL };

const void * gWifiSetupBannerScreenPaths[33] = { (const void *)(uintptr_t)0x2246804, (const void *)(uintptr_t)0x2246818, (const void *)(uintptr_t)0x224682c, (const void *)(uintptr_t)0x2246840, (const void *)(uintptr_t)0x22467f0, (const void *)(uintptr_t)0x435f424d, (const void *)(uintptr_t)0x5f4d4d4f, (const void *)(uintptr_t)0x41545350,
  (const void *)(uintptr_t)0x455f4554, (const void *)(uintptr_t)0x444e, (const void *)(uintptr_t)0x435f424d, (const void *)(uintptr_t)0x5f4d4d4f, (const void *)(uintptr_t)0x41545350, (const void *)(uintptr_t)0x4e5f4554, (const void *)(uintptr_t)0x454e4f, (const void *)(uintptr_t)0x435f424d,
  (const void *)(uintptr_t)0x5f4d4d4f, (const void *)(uintptr_t)0x41545350, (const void *)(uintptr_t)0x455f4554, (const void *)(uintptr_t)0x524f5252, NULL, (const void *)(uintptr_t)0x435f424d, (const void *)(uintptr_t)0x5f4d4d4f, (const void *)(uintptr_t)0x41545350,
  (const void *)(uintptr_t)0x4b5f4554, (const void *)(uintptr_t)0x454b4349, (const void *)(uintptr_t)0x44, (const void *)(uintptr_t)0x69435744, (const void *)(uintptr_t)0x564f4d5f, (const void *)(uintptr_t)0x50424d5f, (const void *)(uintptr_t)0x4154535f, (const void *)(uintptr_t)0x535f4554,
  (const void *)(uintptr_t)0x504f54 };
