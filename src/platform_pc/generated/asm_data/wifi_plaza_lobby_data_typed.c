/* Generated from asm/wifi_plaza_lobby_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(WiFiPlazaPlayerObject_HoldWalkFrameThenRestart);
PCREF(WiFiPlazaPlayerObject_PlayStandingSequence);
PCREF(WiFiPlazaPlayerObject_PlayWalkingSequence);
PCREF(WiFiPlazaPlayerObject_ShowStandingSprite);

extern const void * gWiFiPlazaPlayerObjectActions[12];

const void * gWiFiPlazaPlayerObjectActions[12] = { (const void *)&pcref_WiFiPlazaPlayerObject_ShowStandingSprite, (const void *)&pcref_WiFiPlazaPlayerObject_HoldWalkFrameThenRestart, (const void *)&pcref_WiFiPlazaPlayerObject_PlayStandingSequence, (const void *)&pcref_WiFiPlazaPlayerObject_PlayWalkingSequence, (const void *)&pcref_WiFiPlazaPlayerObject_ShowStandingSprite, (const void *)&pcref_WiFiPlazaPlayerObject_PlayStandingSequence, (const void *)&pcref_WiFiPlazaPlayerObject_PlayStandingSequence, (const void *)&pcref_WiFiPlazaPlayerObject_PlayStandingSequence,
  (const void *)&pcref_WiFiPlazaPlayerObject_PlayStandingSequence, (const void *)&pcref_WiFiPlazaPlayerObject_PlayStandingSequence, (const void *)&pcref_WiFiPlazaPlayerObject_PlayStandingSequence, NULL };
