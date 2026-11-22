#ifndef POKEHEARTGOLD_PM_VERSION_H
#define POKEHEARTGOLD_PM_VERSION_H

#include <nitro.h>

extern const u8 gGameVersion;
#ifdef PLATFORM_PC
#define gGameLanguage GAME_LANGUAGE   // chosen at run time (include/config.h)
#else
extern const u8 gGameLanguage;
#endif

#endif // POKEHEARTGOLD_PM_VERSION_H
