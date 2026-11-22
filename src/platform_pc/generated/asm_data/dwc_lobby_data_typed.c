/* Generated from lib/NitroDWC/asm/dwc_lobby_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(gLobbyStr_C);
PCREF(gLobbyStr_D);
PCREF(gLobbyStr_D1);
PCREF(gLobbyStr_D2);
PCREF(gLobbyStr_D3);
PCREF(gLobbyStr_D4);
PCREF(gLobbyStr_D5);
PCREF(gLobbyStr_D6);
PCREF(gLobbyStr_D7);
PCREF(gLobbyStr_D8);
PCREF(gLobbyStr_D9);
PCREF(gLobbyStr_F1);
PCREF(gLobbyStr_F2);
PCREF(gLobbyStr_Invalid);
PCREF(gLobbyStr_M);
PCREF(gLobbyStr_N);
PCREF(gLobbyStr_R);
PCREF(gLobbyStr_T);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    const void * manager;
    const void * buf;
} pcm_struct_unnamed_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_include_lobby_chat_internal_h_86_8_0;

extern const void * gPPWLobbyWork;
extern const void * gLobbyChatManager;
extern const void * gLobbyMemOutOfMemoryHandler;
extern pcm_struct_unnamed_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_include_lobby_chat_internal_h_86_8_0 gLobbyMemReserve;

const void *const gPPWLobbyChannelNamePrefixes[6] = {
    (const void *)&pcref_gLobbyStr_M,
    (const void *)&pcref_gLobbyStr_F1,
    (const void *)&pcref_gLobbyStr_F2,
    (const void *)&pcref_gLobbyStr_C,
    (const void *)&pcref_gLobbyStr_N,
    (const void *)&pcref_gLobbyStr_Invalid,
};

const void *const gLobbyChatPrefixNames[12] = {
    (const void *)&pcref_gLobbyStr_R,
    (const void *)&pcref_gLobbyStr_D,
    (const void *)&pcref_gLobbyStr_D1,
    (const void *)&pcref_gLobbyStr_D2,
    (const void *)&pcref_gLobbyStr_D3,
    (const void *)&pcref_gLobbyStr_D4,
    (const void *)&pcref_gLobbyStr_D5,
    (const void *)&pcref_gLobbyStr_D6,
    (const void *)&pcref_gLobbyStr_D7,
    (const void *)&pcref_gLobbyStr_D8,
    (const void *)&pcref_gLobbyStr_D9,
    (const void *)&pcref_gLobbyStr_T,
};

const void * gPPWLobbyWork;

const void * gLobbyChatManager;

const void * gLobbyMemOutOfMemoryHandler;

pcm_struct_unnamed_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_include_lobby_chat_internal_h_86_8_0 gLobbyMemReserve;
