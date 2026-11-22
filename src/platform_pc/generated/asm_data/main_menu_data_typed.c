/* Generated from asm/main_menu_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(sStr_mywh_SYSSTATE_BUSY);
PCREF(sStr_mywh_SYSSTATE_CONNECTED);
PCREF(sStr_mywh_SYSSTATE_CONNECT_FAIL);
PCREF(sStr_mywh_SYSSTATE_DATASHARING);
PCREF(sStr_mywh_SYSSTATE_ERROR);
PCREF(sStr_mywh_SYSSTATE_IDLE);
PCREF(sStr_mywh_SYSSTATE_KEYSHARING);
PCREF(sStr_mywh_SYSSTATE_MEASURECHANNEL);
PCREF(sStr_mywh_SYSSTATE_SCANNING);
PCREF(sStr_mywh_SYSSTATE_STOP);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    const void * spec;
    int32_t saveSlot;
} pcm_PmAgbCartridge_0;

typedef struct {
    uint16_t attr0;
    uint16_t attr1;
} pcm_struct_anonymous_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_lib_include_nitro_gx_g2_oam_h_7_9_7;

typedef struct {
    uint32_t y : 8;
    uint32_t rsMode : 2;
    uint32_t objMode : 2;
    uint32_t mosaic : 1;
    uint32_t colorMode : 1;
    uint32_t shape : 2;
    uint32_t x : 9;
    uint32_t rsParam : 5;
    uint32_t size : 2;
} pcm_struct_anonymous_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_lib_include_nitro_gx_g2_oam_h_11_9_8;

typedef struct {
    uint32_t _0 : 28;
    uint32_t flipH : 1;
    uint32_t flipV : 1;
    uint32_t _1 : 2;
} pcm_struct_anonymous_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_lib_include_nitro_gx_g2_oam_h_23_9_9;

typedef union {
    uint32_t attr01;
    pcm_struct_anonymous_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_lib_include_nitro_gx_g2_oam_h_7_9_7 _anon1;
    pcm_struct_anonymous_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_lib_include_nitro_gx_g2_oam_h_11_9_8 _anon2;
    pcm_struct_anonymous_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_lib_include_nitro_gx_g2_oam_h_23_9_9 _anon3;
} pcm_union_anonymous_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_lib_include_nitro_gx_g2_oam_h_5_5_6;

typedef struct {
    uint16_t attr2;
    uint16_t _3;
} pcm_struct_anonymous_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_lib_include_nitro_gx_g2_oam_h_31_9_11;

typedef struct {
    uint32_t charNo : 10;
    uint32_t priority : 2;
    uint32_t cParam : 4;
    uint32_t _2 : 16;
} pcm_struct_anonymous_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_lib_include_nitro_gx_g2_oam_h_36_9_12;

typedef union {
    pcm_struct_anonymous_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_lib_include_nitro_gx_g2_oam_h_31_9_11 _anon0;
    uint32_t attr23;
    pcm_struct_anonymous_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_lib_include_nitro_gx_g2_oam_h_36_9_12 _anon2;
} pcm_union_anonymous_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_lib_include_nitro_gx_g2_oam_h_30_5_10;

typedef struct {
    pcm_union_anonymous_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_lib_include_nitro_gx_g2_oam_h_5_5_6 _anon0;
    pcm_union_anonymous_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_lib_include_nitro_gx_g2_oam_h_30_5_10 _anon1;
} pcm_GXOamAttr_5;

typedef struct {
    int32_t _00;
    int32_t _01;
    int32_t _02;
    int32_t _10;
    int32_t _11;
    int32_t _12;
    int32_t _20;
    int32_t _21;
    int32_t _22;
    int32_t _30;
    int32_t _31;
    int32_t _32;
} pcm_struct_anonymous_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_lib_include_nitro_fx_fx_h_117_5_14;

typedef union {
    pcm_struct_anonymous_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_lib_include_nitro_fx_fx_h_117_5_14 _anon0;
    int32_t m[4][3];
    int32_t a[12];
} pcm_MtxFx43_13;

typedef struct {
    const void * pCurrentTargetSurface;
    int32_t affineOverwriteMode;
    const void * pImgProxy;
    const void * pPltProxy;
    uint32_t base2DCharOffset;
    uint32_t baseTexAddr3D;
    uint32_t basePltAddr3D;
    const void * pFuncOamRegister;
    const void * pFuncOamAffineRegister;
    uint32_t flipFlag;
    const void * pCurrentMtxCacheFor2D;
    const void * pCurrentMxt;
    int32_t bDrawEnable;
    int32_t zFor3DSoftwareSprite;
    pcm_GXOamAttr_5 currentOam;
    pcm_MtxFx43_13 mtxFor3DGE;
} pcm_NNSG2dRndCoreInstance_4;

typedef struct {
    pcm_NNSG2dRndCoreInstance_4 rendererCore;
    const void * pTargetSurfaceList;
    const void * pCurrentSurface;
    const void * pPaletteSwapTbl;
    uint32_t opzHint;
    int32_t spriteZoffsetStep;
    uint32_t overwriteEnableFlag;
    uint16_t overwritePriority;
    uint16_t overwritePlttNo;
    int32_t overwriteObjMode;
    int32_t overwriteMosaicFlag;
    uint16_t overwritePlttNoOffset;
    uint16_t pad16_;
} pcm_NNSG2dRendererInstance_3;

typedef struct {
    int32_t x;
    int32_t y;
} pcm_NNSG2dFVec2_19;

typedef struct {
    pcm_NNSG2dFVec2_19 posTopLeft;
    pcm_NNSG2dFVec2_19 sizeView;
} pcm_NNSG2dViewRect_18;

typedef struct {
    pcm_NNSG2dViewRect_18 viewRect;
    int32_t bActive;
    int32_t type;
    const void * pBeforeDrawCellBackFunc;
    const void * pAfterDrawCellBackFunc;
    const void * pBeforeDrawOamBackFunc;
    const void * pAfterDrawOamBackFunc;
} pcm_NNSG2dRndCoreSurface_17;

typedef struct {
    pcm_NNSG2dViewRect_18 viewRect;
    int32_t bActive;
    int32_t type;
    const void * pBeforeCoreDrawCellBack;
    const void * pAfterCoreDrawCellBack;
    const void * pBeforeCoreDrawOamBack;
    const void * pAfterCoreDrawOamBack;
} pcm_struct_anonymous_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_lib_include_nnsys_g2d_g2d_Renderer_h_34_9_20;

typedef union {
    pcm_NNSG2dRndCoreSurface_17 coreSurface;
    pcm_struct_anonymous_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_lib_include_nnsys_g2d_g2d_Renderer_h_34_9_20 _anon1;
} pcm_union_anonymous_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_lib_include_nnsys_g2d_g2d_Renderer_h_32_5_16;

typedef struct {
    pcm_union_anonymous_at_D_LUC_pokemonall_decomp_pokeheartgold_master_pokeheartgold_master_lib_include_nnsys_g2d_g2d_Renderer_h_32_5_16 _anon0;
    const void * pFuncOamRegister;
    const void * pFuncOamAffineRegister;
    const void * pNextSurface;
    const void * pFuncVisibilityCulling;
    const void * pBeforeDrawCellBackFunc;
    const void * pAfterDrawCellBackFunc;
    const void * pBeforeDrawOamBackFunc;
    const void * pAfterDrawOamBackFunc;
} pcm_NNSG2dRenderSurface_15;

typedef struct {
    pcm_NNSG2dRendererInstance_3 rendererInstance;
    pcm_NNSG2dRenderSurface_15 renderSurface[2];
} pcm_G2dRenderer_2;

typedef struct {
    const void * charRes;
    const void * plttRes;
    const void * cellRes;
    const void * animRes;
    uint8_t unk_10[8];
} pcm_MainMenuUtilSpriteRes_21;

typedef struct {
    const void * imageProxy;
    const void * charData;
    const void * plttProxy;
    const void * cellData;
    const void * cellAnim;
    const void * multiCellData;
    const void * multiCellAnim;
    int32_t flag;
    uint8_t priority;
} pcm_SpriteResourcesHeader_22;

typedef struct {
    const void * spriteList;
    pcm_G2dRenderer_2 renderer;
    const void * resMan[6];
    pcm_MainMenuUtilSpriteRes_21 spriteRes[2];
    pcm_SpriteResourcesHeader_22 resHeaders[2];
} pcm_MainMenuUtilSprites_1;

typedef struct {
    const void * work;
    const void * print;
} pcm_MysteryGiftBeacon_23;

extern pcm_PmAgbCartridge_0 gPmAgbCartridgeSpec;
extern const void * gMysteryGiftBeaconStateNames[10];
extern pcm_MainMenuUtilSprites_1 gMainMenuUtilSprites;
extern pcm_MysteryGiftBeacon_23 gMysteryGiftBeacon;

pcm_PmAgbCartridge_0 gPmAgbCartridgeSpec = {
    .spec = NULL,
    .saveSlot = -1,
};

const void * gMysteryGiftBeaconStateNames[10] = { (const void *)&pcref_sStr_mywh_SYSSTATE_STOP, (const void *)&pcref_sStr_mywh_SYSSTATE_IDLE, (const void *)&pcref_sStr_mywh_SYSSTATE_SCANNING, (const void *)&pcref_sStr_mywh_SYSSTATE_BUSY, (const void *)&pcref_sStr_mywh_SYSSTATE_CONNECTED, (const void *)&pcref_sStr_mywh_SYSSTATE_DATASHARING, (const void *)&pcref_sStr_mywh_SYSSTATE_KEYSHARING, (const void *)&pcref_sStr_mywh_SYSSTATE_MEASURECHANNEL,
  (const void *)&pcref_sStr_mywh_SYSSTATE_CONNECT_FAIL, (const void *)&pcref_sStr_mywh_SYSSTATE_ERROR };

pcm_MainMenuUtilSprites_1 gMainMenuUtilSprites;

__attribute__((used)) static void pc_alias_gMainMenuUtilRenderer(void) {
    __asm__ volatile(".globl " PCSYM(gMainMenuUtilRenderer) "\n.set " PCSYM(gMainMenuUtilRenderer) ", " PCSYM(gMainMenuUtilSprites) "+%c0" :: "i"(__builtin_offsetof(pcm_MainMenuUtilSprites_1, renderer)));
}

pcm_MysteryGiftBeacon_23 gMysteryGiftBeacon;
