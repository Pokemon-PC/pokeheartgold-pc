/* Generated from lib/NitroDWC/asm/wifi_setup_ui_system_bss.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    const void * screen;
    const void * banner;
} pcm_WifiSetupBannerState_0;

typedef struct {
    const void * log;
    const void * work;
} pcm_WifiSetupWh_1;

typedef struct {
    uint8_t lcdOff;
    uint8_t touchHoldFrames;
    uint8_t unk_02[2];
    const void * state;
} pcm_WifiSetupInput_2;

typedef struct {
    const void * vblankFunc;
    uint32_t mask;
} pcm_WifiSetupIrqSave_3;

extern pcm_WifiSetupBannerState_0 gWifiSetupBanner;
extern const void * gWifiSetupUsbScan;
extern const void * gWifiSetupDialog;
extern const void * gWifiSetupMbParent;
extern pcm_WifiSetupWh_1 gWifiSetupWh;
extern const void * gWifiSetupShare;
extern const void * gWifiSetupArchive;
extern const void * gWifiSetupOamBlockManager;
extern const void * gWifiSetupOamTemplateFiles[2];
extern const void * gWifiSetupFades;
extern const void * gWifiSetupText;
extern const void * gWifiSetupHeap;
extern pcm_WifiSetupInput_2 gWifiSetupInput;
extern pcm_WifiSetupIrqSave_3 gWifiSetupIrqSave;
extern const void * gWifiSetupOamBuffer;
extern const void * gWifiSetupCharVram;
extern const void * gWifiSetupTaskQueues;

pcm_WifiSetupBannerState_0 gWifiSetupBanner;

__attribute__((used)) static void pc_alias_ov13_0224F5B0(void) {
    __asm__ volatile(".globl " PCSYM(ov13_0224F5B0) "\n.set " PCSYM(ov13_0224F5B0) ", " PCSYM(gWifiSetupBanner) "+%c0" :: "i"(__builtin_offsetof(pcm_WifiSetupBannerState_0, banner)));
}

const void * gWifiSetupUsbScan;

const void * gWifiSetupDialog;

const void * gWifiSetupMbParent;

pcm_WifiSetupWh_1 gWifiSetupWh;

const void * gWifiSetupShare;

const void * gWifiSetupArchive;

const void * gWifiSetupOamBlockManager;

const void * gWifiSetupOamTemplateFiles[2];

const void * gWifiSetupFades;

const void * gWifiSetupText;

const void * gWifiSetupHeap;

pcm_WifiSetupInput_2 gWifiSetupInput;

__attribute__((used)) static void pc_alias_ov13_0224F5EC(void) {
    __asm__ volatile(".globl " PCSYM(ov13_0224F5EC) "\n.set " PCSYM(ov13_0224F5EC) ", " PCSYM(gWifiSetupInput) "+%c0" :: "i"(__builtin_offsetof(pcm_WifiSetupInput_2, state)));
}

pcm_WifiSetupIrqSave_3 gWifiSetupIrqSave;

const void * gWifiSetupOamBuffer;

const void * gWifiSetupCharVram;

const void * gWifiSetupTaskQueues;
