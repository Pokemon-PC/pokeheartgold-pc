/* Generated from lib/NitroDWC/asm/wifi_setup_screens_rodata.s by tools/pc_port/asm_data_to_c.py - do not edit. */

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
    const void * alloc;
    const void * free;
    uint8_t dmaNo;
    uint8_t powerMode;
    uint8_t slot;
    uint8_t skipNetCheck;
} pcm_WifiSetupConnectionTestParams_0;

typedef struct {
    const void * buffer;
    uint16_t bufferSize;
    uint16_t channel;
    uint16_t dwell;
    uint8_t address[6];
    uint16_t type;
    uint16_t length;
    uint8_t ssid[32];
    uint16_t matchLength;
    uint16_t reserved[7];
} pcm_WmScanExParam_1;

extern const pcm_WifiSetupConnectionTestParams_0 gWifiSetupConnectionTestParams;
extern const pcm_WmScanExParam_1 gWifiSetupApScanParam;
extern const pcm_WmScanExParam_1 gWifiSetupUsbScanParam;

const pcm_WifiSetupConnectionTestParams_0 gWifiSetupConnectionTestParams = {
    .alloc = (const void *)(uintptr_t)0x22381a8,
    .free = (const void *)(uintptr_t)0x22381bc,
    .dmaNo = 3,
    .powerMode = 1,
    .slot = 0,
    .skipNetCheck = 0,
};

const pcm_WmScanExParam_1 gWifiSetupApScanParam = {
    .buffer = NULL,
    .bufferSize = 0x400,
    .channel = 0x3fff,
    .dwell = 0,
    .address = { 255, 255, 255, 255, 255, 255 },
    .type = 0,
    .length = 0,
    .ssid = { 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0 },
    .matchLength = 0,
    .reserved = { 0, 0, 0, 0, 0, 0, 0 },
};

const pcm_WmScanExParam_1 gWifiSetupUsbScanParam = {
    .buffer = NULL,
    .bufferSize = 0x400,
    .channel = 0x3fff,
    .dwell = 0,
    .address = { 255, 255, 255, 255, 255, 255 },
    .type = 2,
    .length = 32,
    .ssid = { 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0 },
    .matchLength = 8,
    .reserved = { 0, 0, 0, 0, 0, 0, 0 },
};
