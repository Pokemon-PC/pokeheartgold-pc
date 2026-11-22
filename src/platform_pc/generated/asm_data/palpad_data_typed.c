/* Generated from asm/palpad_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(PalPadDetails_PrintBattleArcadePage);
PCREF(PalPadDetails_PrintBattleCastlePage);
PCREF(PalPadDetails_PrintBattleFactoryPage);
PCREF(PalPadDetails_PrintBattleHallPage);
PCREF(PalPadDetails_PrintBattleTowerPage);
PCREF(PalPadDetails_PrintReturnPage);
PCREF(PalPadDetails_PrintUnionRoomPage);
PCREF(PalPadDetails_PrintWiFiPlazaPage);
PCREF(PalPadRoster_DeselectTab);
PCREF(PalPadRoster_DrawTabsOnScroll);
PCREF(sPalPadDetailsPage0WindowSpecs);
PCREF(sPalPadDetailsPage1WindowSpecs);
PCREF(sPalPadDetailsPage2WindowSpecs);
PCREF(sPalPadDetailsPage3WindowSpecs);
PCREF(sPalPadDetailsPage4WindowSpecs);
PCREF(sPalPadDetailsPage5WindowSpecs);
PCREF(sPalPadDetailsPage6WindowSpecs);
PCREF(sPalPadDetailsPage7WindowSpecs);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    int32_t x;
    int32_t y;
    int32_t z;
} pcm_VecFx32_1;

typedef struct {
    const void * spriteList;
    const void * header;
    pcm_VecFx32_1 position;
    pcm_VecFx32_1 scale;
    uint16_t rotation;
    uint32_t drawPriority;
    int32_t whichScreen;
    int32_t heapID;
} pcm_SpriteTemplate_0;

typedef struct {
    const void * spriteList;
    const void * header;
    pcm_VecFx32_1 position;
    pcm_VecFx32_1 scale;
    uint16_t rotation;
    uint32_t drawPriority;
    int32_t whichScreen;
    int32_t heapID;
} pcm_SpriteTemplate_2;

extern const pcm_SpriteTemplate_0 gPalPadDeleteEffectSpriteTemplate;
extern const void * gPalPadDetailsPagePrinters[3];
extern const void * gPalPadRosterScrollCallbacks[4];
extern const void * gPalPadDetailsPageWindowSpecs[8];
extern const void * gPalPadDetailsFrontierPagePrinters[8];
extern pcm_SpriteTemplate_2 gPalPadArrowSpriteTemplates[2];
extern pcm_SpriteTemplate_2 gPalPadCursorSpriteTemplate;

const pcm_SpriteTemplate_0 gPalPadDeleteEffectSpriteTemplate = {
    .spriteList = NULL,
    .header = NULL,
    .position = {
        .x = 0,
        .y = 0,
        .z = 0,
    },
    .scale = {
        .x = 4096,
        .y = 4096,
        .z = 4096,
    },
    .rotation = 0,
    .drawPriority = 0,
    .whichScreen = 1,
    .heapID = 0,
};

const void * gPalPadDetailsPagePrinters[3] = { (const void *)&pcref_PalPadDetails_PrintUnionRoomPage, (const void *)&pcref_PalPadDetails_PrintWiFiPlazaPage, (const void *)&pcref_PalPadDetails_PrintReturnPage };

const void * gPalPadRosterScrollCallbacks[4] = { (const void *)&pcref_PalPadRoster_DeselectTab, NULL, (const void *)&pcref_PalPadRoster_DrawTabsOnScroll, NULL };

const void * gPalPadDetailsPageWindowSpecs[8] = { (const void *)&pcref_sPalPadDetailsPage0WindowSpecs, (const void *)&pcref_sPalPadDetailsPage1WindowSpecs, (const void *)&pcref_sPalPadDetailsPage2WindowSpecs, (const void *)&pcref_sPalPadDetailsPage3WindowSpecs, (const void *)&pcref_sPalPadDetailsPage4WindowSpecs, (const void *)&pcref_sPalPadDetailsPage5WindowSpecs, (const void *)&pcref_sPalPadDetailsPage6WindowSpecs, (const void *)&pcref_sPalPadDetailsPage7WindowSpecs };

const void * gPalPadDetailsFrontierPagePrinters[8] = { (const void *)&pcref_PalPadDetails_PrintUnionRoomPage, (const void *)&pcref_PalPadDetails_PrintWiFiPlazaPage, (const void *)&pcref_PalPadDetails_PrintBattleTowerPage, (const void *)&pcref_PalPadDetails_PrintBattleFactoryPage, (const void *)&pcref_PalPadDetails_PrintBattleCastlePage, (const void *)&pcref_PalPadDetails_PrintBattleHallPage, (const void *)&pcref_PalPadDetails_PrintBattleArcadePage, (const void *)&pcref_PalPadDetails_PrintReturnPage };

pcm_SpriteTemplate_2 gPalPadArrowSpriteTemplates[2] = {
    {
        .spriteList = NULL,
        .header = NULL,
        .position = {
            .x = 32768,
            .y = 401408,
            .z = 0,
        },
        .scale = {
            .x = 4096,
            .y = 4096,
            .z = 4096,
        },
        .rotation = 0,
        .drawPriority = 8,
        .whichScreen = 1,
        .heapID = 0,
    },
    {
        .spriteList = NULL,
        .header = NULL,
        .position = {
            .x = 1015808,
            .y = 401408,
            .z = 0,
        },
        .scale = {
            .x = 4096,
            .y = 4096,
            .z = 4096,
        },
        .rotation = 0,
        .drawPriority = 8,
        .whichScreen = 1,
        .heapID = 0,
    },
};

__attribute__((used)) static void pc_alias_gPalPadArrowTemplateScale(void) {
    __asm__ volatile(".globl " PCSYM(gPalPadArrowTemplateScale) "\n.set " PCSYM(gPalPadArrowTemplateScale) ", " PCSYM(gPalPadArrowSpriteTemplates) "+%c0" :: "i"(0 * sizeof(pcm_SpriteTemplate_2) + __builtin_offsetof(pcm_SpriteTemplate_2, scale)));
}

pcm_SpriteTemplate_2 gPalPadCursorSpriteTemplate = {
    .spriteList = NULL,
    .header = NULL,
    .position = {
        .x = 0,
        .y = 0,
        .z = 0,
    },
    .scale = {
        .x = 4096,
        .y = 4096,
        .z = 4096,
    },
    .rotation = 0,
    .drawPriority = 9,
    .whichScreen = 1,
    .heapID = 0,
};
