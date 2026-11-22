/* Generated from asm/pokedex_rodata.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(PokedexApp_WeightAnim_Even);
PCREF(PokedexApp_WeightAnim_Throw1);
PCREF(PokedexApp_WeightAnim_Throw2);
PCREF(PokedexApp_WeightAnim_Throw3);
PCREF(PokedexApp_WeightAnim_Throw4);
PCREF(PokedexApp_WeightAnim_Throw5);
PCREF(PokedexApp_WeightAnim_Throw6);
PCREF(PokedexApp_WeightAnim_Throw7);
PCREF(PokedexApp_WeightAnim_Throw8);
PCREF(PokedexApp_WeightAnim_Tip1);
PCREF(PokedexApp_WeightAnim_Tip2);
PCREF(PokedexApp_WeightAnim_Tip3);
PCREF(PokedexApp_WeightAnim_Tip4);
PCREF(PokedexApp_WeightAnim_Tip5);
PCREF(PokedexApp_WeightAnim_Tip6);
PCREF(PokedexApp_WeightAnim_Tip7);
PCREF(PokedexApp_WeightAnim_TipToStop);

extern const const void * gWeightCheckAnimFuncs[17];

const const void * gWeightCheckAnimFuncs[17] = { (const void *)&pcref_PokedexApp_WeightAnim_Even, (const void *)&pcref_PokedexApp_WeightAnim_Tip1, (const void *)&pcref_PokedexApp_WeightAnim_Tip2, (const void *)&pcref_PokedexApp_WeightAnim_Tip3, (const void *)&pcref_PokedexApp_WeightAnim_Tip4, (const void *)&pcref_PokedexApp_WeightAnim_Tip5, (const void *)&pcref_PokedexApp_WeightAnim_Tip6, (const void *)&pcref_PokedexApp_WeightAnim_Tip7,
  (const void *)&pcref_PokedexApp_WeightAnim_TipToStop, (const void *)&pcref_PokedexApp_WeightAnim_Throw1, (const void *)&pcref_PokedexApp_WeightAnim_Throw2, (const void *)&pcref_PokedexApp_WeightAnim_Throw3, (const void *)&pcref_PokedexApp_WeightAnim_Throw4, (const void *)&pcref_PokedexApp_WeightAnim_Throw5, (const void *)&pcref_PokedexApp_WeightAnim_Throw6, (const void *)&pcref_PokedexApp_WeightAnim_Throw7,
  (const void *)&pcref_PokedexApp_WeightAnim_Throw8 };
