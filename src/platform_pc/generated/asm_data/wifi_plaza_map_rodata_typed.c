/* Generated from asm/wifi_plaza_map_rodata.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(WiFiPlazaEventEffect_StartHideProps);
PCREF(WiFiPlazaEventEffect_StartPhase2);
PCREF(WiFiPlazaEventEffect_StartPhase3);
PCREF(WiFiPlazaEventEffect_StartPhase4);
PCREF(WiFiPlazaEventEffect_StartPhase5);
PCREF(WiFiPlazaEventEffect_UpdateNone);
PCREF(WiFiPlazaEventEffect_UpdatePhase2);
PCREF(WiFiPlazaEventEffect_UpdatePhase3);
PCREF(WiFiPlazaEventEffect_UpdatePhase4);
PCREF(WiFiPlazaEventEffect_UpdatePhase5);
PCREF(WiFiPlazaEventWobble_InitLarge);
PCREF(WiFiPlazaEventWobble_InitSmall);
PCREF(WiFiPlazaEventWobble_Step);
PCREF(WiFiPlazaInstrumentBurst_StartBell);
PCREF(WiFiPlazaInstrumentBurst_StartCymbal);
PCREF(WiFiPlazaInstrumentBurst_StartDrum);
PCREF(WiFiPlazaInstrumentBurst_UpdateBell);
PCREF(WiFiPlazaInstrumentBurst_UpdateCymbal);
PCREF(WiFiPlazaInstrumentBurst_UpdateDrum);
PCREF(WiFiPlazaInstrument_InitBalloon01);
PCREF(WiFiPlazaInstrument_InitBalloon02);
PCREF(WiFiPlazaInstrument_InitBalloon03);
PCREF(WiFiPlazaInstrument_InitBell01);
PCREF(WiFiPlazaInstrument_InitBell02);
PCREF(WiFiPlazaInstrument_InitBell03);
PCREF(WiFiPlazaInstrument_InitCymbal01);
PCREF(WiFiPlazaInstrument_InitCymbal02);
PCREF(WiFiPlazaInstrument_InitCymbal03);
PCREF(WiFiPlazaInstrument_InitDrum01);
PCREF(WiFiPlazaInstrument_InitDrum02);
PCREF(WiFiPlazaInstrument_InitDrum03);
PCREF(WiFiPlazaInstrument_InitPop01);
PCREF(WiFiPlazaInstrument_InitPop02);
PCREF(WiFiPlazaInstrument_InitPop03);
PCREF(WiFiPlazaInstrument_InitRipple01);
PCREF(WiFiPlazaInstrument_InitRipple02);
PCREF(WiFiPlazaInstrument_InitRipple03);
PCREF(WiFiPlazaInstrument_InitSignal);
PCREF(WiFiPlazaInstrument_InitSparkle01);
PCREF(WiFiPlazaInstrument_InitSparkle02);
PCREF(WiFiPlazaInstrument_InitSparkle03);
PCREF(WiFiPlazaInstrument_InitWhirl01);
PCREF(WiFiPlazaInstrument_InitWhirl02);
PCREF(WiFiPlazaInstrument_InitWhirl03);
PCREF(WiFiPlazaInstrument_UpdateBalloon);
PCREF(WiFiPlazaInstrument_UpdateBellDrum);
PCREF(WiFiPlazaInstrument_UpdateCymbal);
PCREF(WiFiPlazaInstrument_UpdatePop);
PCREF(WiFiPlazaInstrument_UpdateRipple);
PCREF(WiFiPlazaInstrument_UpdateSignal01);
PCREF(WiFiPlazaInstrument_UpdateSignal02);
PCREF(WiFiPlazaInstrument_UpdateSignal03);
PCREF(WiFiPlazaInstrument_UpdateSparkle);
PCREF(WiFiPlazaInstrument_UpdateWhirl);

extern const const void * gWiFiPlazaInstrumentBurstUpdateFuncs[6];
extern const const void * gWiFiPlazaInstrumentBurstStartFuncs[3];
extern const const void * gWiFiPlazaInstrumentUpdateFuncs[27];
extern const const void * gWiFiPlazaInstrumentInitFuncs[27];
extern const const void * gWiFiPlazaEventEffectPhaseUpdates[6];
extern const const void * gWiFiPlazaEventEffectPhaseStarts[6];
extern const const void * gWiFiPlazaEventWobbleSteps[2];
extern const const void * gWiFiPlazaEventWobbleInits[2];

const const void * gWiFiPlazaInstrumentBurstUpdateFuncs[6] = { (const void *)&pcref_WiFiPlazaInstrumentBurst_UpdateBell, (const void *)&pcref_WiFiPlazaInstrumentBurst_UpdateDrum, (const void *)&pcref_WiFiPlazaInstrumentBurst_UpdateCymbal, (const void *)(uintptr_t)0x380002, (const void *)(uintptr_t)0x38000e, (const void *)(uintptr_t)0x3c0008 };

const const void * gWiFiPlazaInstrumentBurstStartFuncs[3] = { (const void *)&pcref_WiFiPlazaInstrumentBurst_StartBell, (const void *)&pcref_WiFiPlazaInstrumentBurst_StartDrum, (const void *)&pcref_WiFiPlazaInstrumentBurst_StartCymbal };

const const void * gWiFiPlazaInstrumentUpdateFuncs[27] = { (const void *)&pcref_WiFiPlazaInstrument_UpdateBellDrum, (const void *)&pcref_WiFiPlazaInstrument_UpdateBellDrum, (const void *)&pcref_WiFiPlazaInstrument_UpdateBellDrum, (const void *)&pcref_WiFiPlazaInstrument_UpdateBellDrum, (const void *)&pcref_WiFiPlazaInstrument_UpdateBellDrum, (const void *)&pcref_WiFiPlazaInstrument_UpdateBellDrum, (const void *)&pcref_WiFiPlazaInstrument_UpdateCymbal, (const void *)&pcref_WiFiPlazaInstrument_UpdateCymbal,
  (const void *)&pcref_WiFiPlazaInstrument_UpdateCymbal, (const void *)&pcref_WiFiPlazaInstrument_UpdateRipple, (const void *)&pcref_WiFiPlazaInstrument_UpdateRipple, (const void *)&pcref_WiFiPlazaInstrument_UpdateRipple, (const void *)&pcref_WiFiPlazaInstrument_UpdateSignal01, (const void *)&pcref_WiFiPlazaInstrument_UpdateSignal02, (const void *)&pcref_WiFiPlazaInstrument_UpdateSignal03, (const void *)&pcref_WiFiPlazaInstrument_UpdateWhirl,
  (const void *)&pcref_WiFiPlazaInstrument_UpdateWhirl, (const void *)&pcref_WiFiPlazaInstrument_UpdateWhirl, (const void *)&pcref_WiFiPlazaInstrument_UpdatePop, (const void *)&pcref_WiFiPlazaInstrument_UpdatePop, (const void *)&pcref_WiFiPlazaInstrument_UpdatePop, (const void *)&pcref_WiFiPlazaInstrument_UpdateSparkle, (const void *)&pcref_WiFiPlazaInstrument_UpdateSparkle, (const void *)&pcref_WiFiPlazaInstrument_UpdateSparkle,
  (const void *)&pcref_WiFiPlazaInstrument_UpdateBalloon, (const void *)&pcref_WiFiPlazaInstrument_UpdateBalloon, (const void *)&pcref_WiFiPlazaInstrument_UpdateBalloon };

const const void * gWiFiPlazaInstrumentInitFuncs[27] = { (const void *)&pcref_WiFiPlazaInstrument_InitBell01, (const void *)&pcref_WiFiPlazaInstrument_InitBell02, (const void *)&pcref_WiFiPlazaInstrument_InitBell03, (const void *)&pcref_WiFiPlazaInstrument_InitDrum01, (const void *)&pcref_WiFiPlazaInstrument_InitDrum02, (const void *)&pcref_WiFiPlazaInstrument_InitDrum03, (const void *)&pcref_WiFiPlazaInstrument_InitCymbal01, (const void *)&pcref_WiFiPlazaInstrument_InitCymbal02,
  (const void *)&pcref_WiFiPlazaInstrument_InitCymbal03, (const void *)&pcref_WiFiPlazaInstrument_InitRipple01, (const void *)&pcref_WiFiPlazaInstrument_InitRipple02, (const void *)&pcref_WiFiPlazaInstrument_InitRipple03, (const void *)&pcref_WiFiPlazaInstrument_InitSignal, (const void *)&pcref_WiFiPlazaInstrument_InitSignal, (const void *)&pcref_WiFiPlazaInstrument_InitSignal, (const void *)&pcref_WiFiPlazaInstrument_InitWhirl01,
  (const void *)&pcref_WiFiPlazaInstrument_InitWhirl02, (const void *)&pcref_WiFiPlazaInstrument_InitWhirl03, (const void *)&pcref_WiFiPlazaInstrument_InitPop01, (const void *)&pcref_WiFiPlazaInstrument_InitPop02, (const void *)&pcref_WiFiPlazaInstrument_InitPop03, (const void *)&pcref_WiFiPlazaInstrument_InitSparkle01, (const void *)&pcref_WiFiPlazaInstrument_InitSparkle02, (const void *)&pcref_WiFiPlazaInstrument_InitSparkle03,
  (const void *)&pcref_WiFiPlazaInstrument_InitBalloon01, (const void *)&pcref_WiFiPlazaInstrument_InitBalloon02, (const void *)&pcref_WiFiPlazaInstrument_InitBalloon03 };

const const void * gWiFiPlazaEventEffectPhaseUpdates[6] = { (const void *)&pcref_WiFiPlazaEventEffect_UpdateNone, (const void *)&pcref_WiFiPlazaEventEffect_UpdateNone, (const void *)&pcref_WiFiPlazaEventEffect_UpdatePhase2, (const void *)&pcref_WiFiPlazaEventEffect_UpdatePhase3, (const void *)&pcref_WiFiPlazaEventEffect_UpdatePhase4, (const void *)&pcref_WiFiPlazaEventEffect_UpdatePhase5 };

const const void * gWiFiPlazaEventEffectPhaseStarts[6] = { (const void *)&pcref_WiFiPlazaEventEffect_StartHideProps, (const void *)&pcref_WiFiPlazaEventEffect_StartHideProps, (const void *)&pcref_WiFiPlazaEventEffect_StartPhase2, (const void *)&pcref_WiFiPlazaEventEffect_StartPhase3, (const void *)&pcref_WiFiPlazaEventEffect_StartPhase4, (const void *)&pcref_WiFiPlazaEventEffect_StartPhase5 };

const const void * gWiFiPlazaEventWobbleSteps[2] = { (const void *)&pcref_WiFiPlazaEventWobble_Step, (const void *)&pcref_WiFiPlazaEventWobble_Step };

const const void * gWiFiPlazaEventWobbleInits[2] = { (const void *)&pcref_WiFiPlazaEventWobble_InitSmall, (const void *)&pcref_WiFiPlazaEventWobble_InitLarge };
