/* Generated from lib/NitroDWC/asm/wifi_setup_app_bss.s by tools/pc_port/asm_data_to_c.py - do not edit. */

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
    uint8_t done;
    uint8_t unk_01[3];
    const void * request;
} pcm_WifiSetupClient_0;

typedef struct {
    uint32_t kind : 4;
    uint32_t options : 28;
} pcm_struct_unnamed_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_include_wifi_setup_wifi_setup_app_h_38_5_3;

typedef union {
    uint32_t raw;
    pcm_struct_unnamed_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_include_wifi_setup_wifi_setup_app_h_38_5_3 _anon1;
} pcm_WifiSetupAppFlags_2;

typedef struct {
    int8_t language;
    uint8_t exit;
    uint8_t unk_02[2];
    const void * heap;
    pcm_WifiSetupAppFlags_2 flags;
    const void * stateFunc;
    int32_t bannerMode;
    int32_t buttonBarMode;
    int32_t screenArg0;
    int32_t screenArg1;
} pcm_WifiSetupApp_1;

extern pcm_WifiSetupClient_0 gWifiSetupClient;
extern pcm_WifiSetupApp_1 gWifiSetupApp;
extern const void * gWifiSetupTextBanks;

pcm_WifiSetupClient_0 gWifiSetupClient;

__attribute__((used)) static void pc_alias_ov13_0224F4C8(void) {
    __asm__ volatile(".globl " PCSYM(ov13_0224F4C8) "\n.set " PCSYM(ov13_0224F4C8) ", " PCSYM(gWifiSetupClient) "+%c0" :: "i"(__builtin_offsetof(pcm_WifiSetupClient_0, request)));
}

pcm_WifiSetupApp_1 gWifiSetupApp;

const void * gWifiSetupTextBanks;
