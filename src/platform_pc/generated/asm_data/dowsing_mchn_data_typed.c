/* Generated from asm/dowsing_mchn_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(DowsingMchn_StepAngleLevel0);
PCREF(DowsingMchn_StepAngleLevel1);
PCREF(DowsingMchn_StepAngleLevel2);
PCREF(DowsingMchn_StepAngleLevel3);
PCREF(DowsingMchn_StepAngleLevel4);

extern const const void * gDowsingMchnStepAngleFuncs[5];

const const void * gDowsingMchnStepAngleFuncs[5] = { (const void *)&pcref_DowsingMchn_StepAngleLevel0, (const void *)&pcref_DowsingMchn_StepAngleLevel1, (const void *)&pcref_DowsingMchn_StepAngleLevel2, (const void *)&pcref_DowsingMchn_StepAngleLevel3, (const void *)&pcref_DowsingMchn_StepAngleLevel4 };
