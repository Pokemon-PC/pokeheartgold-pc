#ifndef POKEHEARTGOLD_GLOBAL_H
#define POKEHEARTGOLD_GLOBAL_H

#include <MSL.h>
#include <nitro.h>
#include <nitro/code16.h>
#include <nnsys.h>
#include <stddef.h>
#include <string.h>

#include "constants/global.h"

#include "assert.h"
#include "config.h" // MUST COME BEFORE ANY OTHER GAMEFREAK HEADERS
#include "pm_version.h"

#define NELEMS(a) (sizeof(a) / sizeof(*(a)))

// Relative jump offsets read as u32 from script data (field, Frontier and
// battle animation scripts) can be negative. On the DS adding them to a
// 32-bit pointer wraps around; on the 64-bit PC build they must be
// sign-extended first.
#ifdef PLATFORM_PC
#define SCRIPT_REL(x) ((s32)(x))
#else
#define SCRIPT_REL(x) (x)
#endif

typedef struct {
    int x;
    int y;
    int z;
} Vec32;

#ifdef PLATFORM_PC
// Same copy, also valid when the destination elements are const.
#define ARRAY_ASSIGN_EX(dest, src, as_type, count) \
    memcpy((void *)&(dest), (const void *)&(src), sizeof(as_type) * (count))
#else
#define ARRAY_ASSIGN_EX(dest, src, as_type, count)            \
    {                                                         \
        struct tmp {                                          \
            as_type _[count];                                 \
        };                                                    \
        *(struct tmp *)&(dest) = *(const struct tmp *)&(src); \
    }
#endif

#define ARRAY_ASSIGN(dest, src) ARRAY_ASSIGN_EX(dest, src, typeof(*(dest)), NELEMS(dest))

#endif // POKEHEARTGOLD_GLOBAL_H
