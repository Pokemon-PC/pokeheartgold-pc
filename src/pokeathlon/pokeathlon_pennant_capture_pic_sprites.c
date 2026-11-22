#include "global.h"

#include "pokeathlon/pokeathlon_course_objects.h"
#include "pokeathlon/pokeathlon_course_types_def.h"
#include "pokeathlon/pokeathlon_pennant_capture.h"

#include "sprite.h"

// The definition order fixes the .rodata layout: the display parts and the CPU read the ids through
// gPokeathlonPennantCaptureSpriteIds as an array.
static const PokeathlonPennantCaptureSpriteIds sPicKinds = {
    { 4, 5 }
};
static const PokeathlonPennantCaptureSpriteIds sPicResIds2 = {
    { 0x66, 0x67 }
};
#ifdef PLATFORM_PC
// The display (index 1) and the CPU (index 3) read past this object into the
// neighbouring .rodata, whose layout differs on PC: a real array, every entry
// holding the picture resource ids they look up.
const PokeathlonPennantCaptureSpriteIds gPokeathlonPennantCaptureSpriteIds[4] = {
    { { 0x66, 0x67 } }, { { 0x66, 0x67 } }, { { 0x66, 0x67 } }, { { 0x66, 0x67 } },
};
#else
const PokeathlonPennantCaptureSpriteIds gPokeathlonPennantCaptureSpriteIds = {
    { 0x66, 0x67 }
};
#endif
static const PokeathlonPennantCaptureSpriteIds sPicResIds3 = {
    { 0x66, 0x67 }
};

// The two picture sprites of the top screen.
void PokeathlonPennantCaptureDisplay_CreatePicSprites(PokeathlonCourseSpritePool *pool, PokeathlonPennantCaptureDisplay *display) {
#ifdef PLATFORM_PC
    PokeathlonPennantCaptureSpriteIds resIds = gPokeathlonPennantCaptureSpriteIds[0];
#else
    PokeathlonPennantCaptureSpriteIds resIds = gPokeathlonPennantCaptureSpriteIds;
#endif
    PokeathlonPennantCaptureSpriteIds kinds = sPicKinds;
    VecFx32 position;
    Sprite *sprite;
    int i;
    for (i = 0; i < 2; i++) {
        PokeathlonCourseSpritePool_CreateSprite(pool, 3, NNS_G2D_VRAM_TYPE_2DSUB, (u8)resIds.ids[i], kinds.ids[i]);
    }
    for (i = 0; i < 2; i++) {
        display->picSprites[i] = PokeathlonCourseSpritePool_Take(pool, (u8)resIds.ids[i], (u8)kinds.ids[i]);
        sprite = PokeathlonCourseSpritePoolSprite_GetSprite(display->picSprites[i]);
        position.z = 0;
        position.x = 40 << FX32_SHIFT;
        position.y = ((88 * (1 - i) + 48) << FX32_SHIFT) + (700 << FX32_SHIFT);
        Sprite_SetMatrix(sprite, &position);
        PokeathlonCourseSpritePoolSprite_Show(display->picSprites[i], TRUE, TRUE);
    }
    PokeathlonPennantCaptureDisplay_GetPicVramOffsets(pool, display);
}
