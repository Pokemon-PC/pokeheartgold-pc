/* Generated from asm/pokeathlon_goal_roll_cpu_rodata.s by tools/pc_port/asm_data_to_c.py - do not edit. */

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

__attribute__((aligned(8))) const unsigned char gPokeathlonGoalRollCpuGuardPoints[2] = {
    0xD0, 0x00,
};

__attribute__((aligned(8))) const unsigned char gPokeathlonGoalRollCpuGuardPointsY[2] = {
    0x40, 0x00,
};

__attribute__((aligned(8))) const unsigned char gPokeathlonGoalRollCpuGuardPoints1[4] = {
    0xB8, 0x00, 0x30, 0x00,
};

__attribute__((aligned(8))) const unsigned char gPokeathlonGoalRollCpuGuardPoints2[28] = {
    0xE0, 0x00, 0x58, 0x00, 0x30, 0x00, 0x90, 0x00, 0x48, 0x00, 0xA0, 0x00, 0x20, 0x00, 0x78, 0x00,
    0xD0, 0x00, 0x90, 0x00, 0xB8, 0x00, 0xA0, 0x00, 0xE0, 0x00, 0x78, 0x00,
};
