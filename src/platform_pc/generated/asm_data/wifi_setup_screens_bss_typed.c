/* Generated from lib/NitroDWC/asm/wifi_setup_screens_bss.s by tools/pc_port/asm_data_to_c.py - do not edit. */

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
    uint8_t selected;
    const void * graphics;
} pcm_WifiSetupTopMenu_0;

typedef struct {
    uint8_t selected;
    uint8_t confirmed;
    const void * graphics;
    const void * oam;
} pcm_WifiSetupMenu3_1;

typedef struct {
    uint8_t done;
    uint16_t counter;
    const void * task;
} pcm_WifiSetupWaitScreen_2;

typedef struct {
    uint8_t selected;
    uint8_t unk_01;
    uint16_t position;
    const void * work;
} pcm_WifiSetupListScreen_3;

typedef struct {
    uint8_t cursorItem;
    uint8_t fromMenu;
    uint8_t cursorRow;
    uint8_t unk_03;
    uint16_t scroll;
    uint16_t unk_06;
    const void * work;
} pcm_WifiSetupSettings_4;

typedef struct {
    uint8_t selected;
    const void * work;
} pcm_WifiSetupConnectionList_5;

typedef struct {
    int8_t lastOption;
    int8_t selected;
    uint8_t confirmed;
    const void * graphics;
} pcm_WifiSetupMethodMenu_6;

extern const void * gWifiSetupClientStatus;
extern const void * gWifiSetupTextBank;
extern pcm_WifiSetupTopMenu_0 gWifiSetupTopMenu;
extern pcm_WifiSetupMenu3_1 gWifiSetupOptions;
extern pcm_WifiSetupWaitScreen_2 gWifiSetupAoss;
extern pcm_WifiSetupListScreen_3 gWifiSetupListScreen;
extern const void * gWifiSetupTextEntry;
extern const void * gWifiSetupAddressEntry;
extern pcm_WifiSetupSettings_4 gWifiSetupSettings;
extern pcm_WifiSetupConnectionList_5 gWifiSetupConnectionList;
extern pcm_WifiSetupMethodMenu_6 gWifiSetupMethodMenu;

const void * gWifiSetupClientStatus;

const void * gWifiSetupTextBank;

pcm_WifiSetupTopMenu_0 gWifiSetupTopMenu;

pcm_WifiSetupMenu3_1 gWifiSetupOptions;

pcm_WifiSetupWaitScreen_2 gWifiSetupAoss;

pcm_WifiSetupListScreen_3 gWifiSetupListScreen;

__attribute__((used)) static void pc_alias_ov13_0224F53C(void) {
    __asm__ volatile(".globl " PCSYM(ov13_0224F53C) "\n.set " PCSYM(ov13_0224F53C) ", " PCSYM(gWifiSetupListScreen) "+%c0" :: "i"(__builtin_offsetof(pcm_WifiSetupListScreen_3, work)));
}

const void * gWifiSetupTextEntry;

const void * gWifiSetupAddressEntry;

pcm_WifiSetupSettings_4 gWifiSetupSettings;

__attribute__((used)) static void pc_alias_ov13_0224F554(void) {
    __asm__ volatile(".globl " PCSYM(ov13_0224F554) "\n.set " PCSYM(ov13_0224F554) ", " PCSYM(gWifiSetupSettings) "+%c0" :: "i"(__builtin_offsetof(pcm_WifiSetupSettings_4, work)));
}

pcm_WifiSetupConnectionList_5 gWifiSetupConnectionList;

__attribute__((used)) static void pc_alias_ov13_0224F570(void) {
    __asm__ volatile(".globl " PCSYM(ov13_0224F570) "\n.set " PCSYM(ov13_0224F570) ", " PCSYM(gWifiSetupConnectionList) "+%c0" :: "i"(__builtin_offsetof(pcm_WifiSetupConnectionList_5, work)));
}

pcm_WifiSetupMethodMenu_6 gWifiSetupMethodMenu;
