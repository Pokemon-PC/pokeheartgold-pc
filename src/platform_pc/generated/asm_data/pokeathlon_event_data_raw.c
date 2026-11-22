/* Generated from asm/pokeathlon_event_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

__attribute__((aligned(8))) const unsigned char gPokeathlonEventRankPoints[4] = {
    0x64, 0x50, 0x46, 0x3C,
};

__attribute__((aligned(8))) unsigned char gPokeathlonLampJumpSoundPlayers[4] = {
    0x03, 0x04, 0x05, 0x06,
};

__attribute__((aligned(8))) unsigned char gPokeathlonHurdleDashLanePans[4] = {
    0x94, 0x00, 0x6B, 0x00,
};

__attribute__((aligned(8))) unsigned char gPokeathlonHurdleDashLaneSoundPlayers[4] = {
    0x03, 0x04, 0x05, 0x00,
};
