#ifndef POKEHEARTGOLD_COMM_PLAYER_MANAGER_H
#define POKEHEARTGOLD_COMM_PLAYER_MANAGER_H

#include "script.h"

void CommPlayerManager_RemoveAllAvatars(void);
void CommPlayerManager_FieldUpdate(FieldSystem *fieldSystem, int value);
int CommPlayerManager_IsLocalPlayerConnected(void);
#ifdef PLATFORM_PC
void CommPlayerManager_SetLocalFacing(int val);   // integer widths of the definition (x64 ABI)
#else
void CommPlayerManager_SetLocalFacing(u16 val);
#endif
void CommPlayerManager_ReceivePosition(void);
u32 CommPlayerManager_GetPositionSize(void);
void CommPlayerManager_ReceiveHostPosition(void);
void CommPlayerManager_ReceiveRemovePlayer(void);
void CommPlayerManager_ReceiveMoveEnabled(void);
void CommPlayerManager_RecvLockOnSpot(void);
void CommPlayerManager_ForcePosition();

#endif // POKEHEARTGOLD_COMM_PLAYER_MANAGER_H
