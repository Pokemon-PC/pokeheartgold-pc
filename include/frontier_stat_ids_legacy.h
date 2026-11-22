#ifndef POKEHEARTGOLD_FRONTIER_STAT_IDS_LEGACY_H
#define POKEHEARTGOLD_FRONTIER_STAT_IDS_LEGACY_H

#include "global.h"

u32 BattleFactory_GetWinStreakStat(u8, u8);
u32 BattleFactory_GetTradeCountStat(u8, u8);
u32 BattleHall_GetWinStreakStat(u8);
u32 BattleHall_GetSpeciesStat(u8);
u32 BattleHall_GetSpeciesRecordsType(u8 type);
u32 BattleCastle_GetRankStat(u8, u8);
u32 BattleCastle_GetWinStreakStat(u8);
#ifdef PLATFORM_PC
u32 BattleCastle_GetPointsStat(u32);   // integer widths of the definition (x64 ABI)
#else
u32 BattleCastle_GetPointsStat(u8);
#endif

#endif // POKEHEARTGOLD_FRONTIER_STAT_IDS_LEGACY_H
