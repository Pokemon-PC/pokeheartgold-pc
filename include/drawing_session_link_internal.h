#ifndef POKEHEARTGOLD_DRAWING_SESSION_LINK_INTERNAL_H
#define POKEHEARTGOLD_DRAWING_SESSION_LINK_INTERNAL_H

#include "global.h"

#include "communication_command.h"
#include "field_comm_cmds.h"

typedef struct FourBytes {
    u8 data[4];
} FourBytes;

#ifdef PLATFORM_PC
u16 Wireless_GetConnectedBitmap(void);   // integer widths of the definition (x64 ABI)
#else
int Wireless_GetConnectedBitmap(void);
#endif
#ifdef PLATFORM_PC
u8 MATH_CountPopulation(u32);   // integer widths of the definition (x64 ABI)
#else
int MATH_CountPopulation(u32);
#endif
void CommState_SetMaxEntries(int);
void GF_AssertFail(void);
void CommState_SetErrorWatch(BOOL, BOOL);

void DrawingSessionLink_RegisterCommands(void *arg);

#endif
