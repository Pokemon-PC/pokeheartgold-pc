/* Generated from asm/map_object_behavior_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(TypeBehavior_LookSidewaysCheck);
PCREF(TypeBehavior_LookSidewaysInit);
PCREF(TypeBehavior_LookSidewaysUpdate);
PCREF(TypeBehavior_NoOpCheck);
PCREF(TypeBehavior_NoOpInit);
PCREF(TypeBehavior_NoOpUpdate);
PCREF(TypeBehavior_SpinCheck);
PCREF(TypeBehavior_SpinInit);
PCREF(TypeBehavior_SpinUpdate);

extern const const void * gMapObjectTypeBehaviorInits[12];
extern const const void * gMapObjectTypeBehaviorChecks[12];
extern const const void * gMapObjectTypeBehaviorUpdates[12];

const const void * gMapObjectTypeBehaviorInits[12] = { (const void *)&pcref_TypeBehavior_NoOpInit, (const void *)&pcref_TypeBehavior_NoOpInit, (const void *)&pcref_TypeBehavior_NoOpInit, (const void *)&pcref_TypeBehavior_NoOpInit, (const void *)&pcref_TypeBehavior_LookSidewaysInit, (const void *)&pcref_TypeBehavior_SpinInit, (const void *)&pcref_TypeBehavior_SpinInit, (const void *)&pcref_TypeBehavior_NoOpInit,
  (const void *)&pcref_TypeBehavior_NoOpInit, (const void *)&pcref_TypeBehavior_NoOpInit, (const void *)&pcref_TypeBehavior_NoOpInit, (const void *)&pcref_TypeBehavior_NoOpInit };

const const void * gMapObjectTypeBehaviorChecks[12] = { (const void *)&pcref_TypeBehavior_NoOpCheck, (const void *)&pcref_TypeBehavior_NoOpCheck, (const void *)&pcref_TypeBehavior_NoOpCheck, (const void *)&pcref_TypeBehavior_NoOpCheck, (const void *)&pcref_TypeBehavior_LookSidewaysCheck, (const void *)&pcref_TypeBehavior_SpinCheck, (const void *)&pcref_TypeBehavior_SpinCheck, (const void *)&pcref_TypeBehavior_NoOpCheck,
  (const void *)&pcref_TypeBehavior_NoOpCheck, (const void *)&pcref_TypeBehavior_NoOpCheck, (const void *)&pcref_TypeBehavior_NoOpCheck, (const void *)&pcref_TypeBehavior_NoOpCheck };

const const void * gMapObjectTypeBehaviorUpdates[12] = { (const void *)&pcref_TypeBehavior_NoOpUpdate, (const void *)&pcref_TypeBehavior_NoOpUpdate, (const void *)&pcref_TypeBehavior_NoOpUpdate, (const void *)&pcref_TypeBehavior_NoOpUpdate, (const void *)&pcref_TypeBehavior_LookSidewaysUpdate, (const void *)&pcref_TypeBehavior_SpinUpdate, (const void *)&pcref_TypeBehavior_SpinUpdate, (const void *)&pcref_TypeBehavior_NoOpUpdate,
  (const void *)&pcref_TypeBehavior_NoOpUpdate, (const void *)&pcref_TypeBehavior_NoOpUpdate, (const void *)&pcref_TypeBehavior_NoOpUpdate, (const void *)&pcref_TypeBehavior_NoOpUpdate };
