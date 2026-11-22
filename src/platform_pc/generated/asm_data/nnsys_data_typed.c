/* Generated from lib/asm/nnsys_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(AllocPlttVram_);
PCREF(AllocTexVram_);
PCREF(AllocatorAllocForExpHeap);
PCREF(AllocatorFreeForExpHeap);
PCREF(ClearArea1D);
PCREF(ClearAreaLine);
PCREF(ClearContinuous);
PCREF(ClearLine);
PCREF(CpuLoadOAMMain_);
PCREF(CpuLoadOAMSub_);
PCREF(DoTransfer2dBG0CharMain);
PCREF(DoTransfer2dBG0CharSub);
PCREF(DoTransfer2dBG0ScrMain);
PCREF(DoTransfer2dBG0ScrSub);
PCREF(DoTransfer2dBG1CharMain);
PCREF(DoTransfer2dBG1CharSub);
PCREF(DoTransfer2dBG1ScrMain);
PCREF(DoTransfer2dBG1ScrSub);
PCREF(DoTransfer2dBG2BmpMain);
PCREF(DoTransfer2dBG2BmpSub);
PCREF(DoTransfer2dBG2CharMain);
PCREF(DoTransfer2dBG2CharSub);
PCREF(DoTransfer2dBG2ScrMain);
PCREF(DoTransfer2dBG2ScrSub);
PCREF(DoTransfer2dBG3BmpMain);
PCREF(DoTransfer2dBG3BmpSub);
PCREF(DoTransfer2dBG3CharMain);
PCREF(DoTransfer2dBG3CharSub);
PCREF(DoTransfer2dBG3ScrMain);
PCREF(DoTransfer2dBG3ScrSub);
PCREF(DoTransfer2dBGExtPlttMain);
PCREF(DoTransfer2dBGExtPlttSub);
PCREF(DoTransfer2dBGPlttMain);
PCREF(DoTransfer2dBGPlttSub);
PCREF(DoTransfer2dObjCharMain);
PCREF(DoTransfer2dObjCharSub);
PCREF(DoTransfer2dObjExtPlttMain);
PCREF(DoTransfer2dObjExtPlttSub);
PCREF(DoTransfer2dObjOamMain);
PCREF(DoTransfer2dObjOamSub);
PCREF(DoTransfer2dObjPlttMain);
PCREF(DoTransfer2dObjPlttSub);
PCREF(DoTransfer3dClearImageColor);
PCREF(DoTransfer3dClearImageDepth);
PCREF(DoTransfer3dTex);
PCREF(DoTransfer3dTexPltt);
PCREF(DrawGlyph1D);
PCREF(DrawGlyphLine);
PCREF(FreePlttVram_);
PCREF(FreeTexVram_);
PCREF(NNSi_G3dAnmBlendJnt);
PCREF(NNSi_G3dAnmBlendMat);
PCREF(NNSi_G3dAnmBlendVis);
PCREF(NNSi_G3dAnmCalcNsBca);
PCREF(NNSi_G3dAnmCalcNsBma);
PCREF(NNSi_G3dAnmCalcNsBta);
PCREF(NNSi_G3dAnmCalcNsBtp);
PCREF(NNSi_G3dAnmCalcNsBva);
PCREF(NNSi_G3dAnmObjInitNsBca);
PCREF(NNSi_G3dAnmObjInitNsBma);
PCREF(NNSi_G3dAnmObjInitNsBta);
PCREF(NNSi_G3dAnmObjInitNsBtp);
PCREF(NNSi_G3dAnmObjInitNsBva);
PCREF(NNSi_G3dFuncSbc_BB);
PCREF(NNSi_G3dFuncSbc_BBY);
PCREF(NNSi_G3dFuncSbc_CALLDL);
PCREF(NNSi_G3dFuncSbc_ENVMAP);
PCREF(NNSi_G3dFuncSbc_MAT);
PCREF(NNSi_G3dFuncSbc_MAT_InternalDefault);
PCREF(NNSi_G3dFuncSbc_MTX);
PCREF(NNSi_G3dFuncSbc_NODE);
PCREF(NNSi_G3dFuncSbc_NODEDESC);
PCREF(NNSi_G3dFuncSbc_NODEMIX);
PCREF(NNSi_G3dFuncSbc_NOP);
PCREF(NNSi_G3dFuncSbc_POSSCALE);
PCREF(NNSi_G3dFuncSbc_PRJMAP);
PCREF(NNSi_G3dFuncSbc_RET);
PCREF(NNSi_G3dFuncSbc_SHP);
PCREF(NNSi_G3dFuncSbc_SHP_InternalDefault);
PCREF(NNSi_G3dGetJointScaleBasic);
PCREF(NNSi_G3dGetJointScaleMaya);
PCREF(NNSi_G3dGetJointScaleSi3d);
PCREF(NNSi_G3dSendJointSRTBasic);
PCREF(NNSi_G3dSendJointSRTMaya);
PCREF(NNSi_G3dSendJointSRTSi3d);
PCREF(NNSi_G3dSendTexSRT3dsMax);
PCREF(NNSi_G3dSendTexSRTMaya);
PCREF(NNSi_G3dSendTexSRTSi3d);
PCREF(NNSi_G3dSendTexSRTXsi);
PCREF(_02110998);
PCREF(_021109B0);
PCREF(gFrmTexVramRegion1);
PCREF(gFrmTexVramRegion2);
PCREF(gFrmTexVramRegions);
PCREF(texmtxCalc_flagRS_);
PCREF(texmtxCalc_flagRS___3dsmax);
PCREF(texmtxCalc_flagRS___xsi);
PCREF(texmtxCalc_flagR_);
PCREF(texmtxCalc_flagR___3dsmax);
PCREF(texmtxCalc_flagR___xsi);
PCREF(texmtxCalc_flagS_);
PCREF(texmtxCalc_flagS___3dsmax);
PCREF(texmtxCalc_flagS___xsi);
PCREF(texmtxCalc_flagTRS_);
PCREF(texmtxCalc_flagTRS___3dsmax);
PCREF(texmtxCalc_flagTRS___xsi);
PCREF(texmtxCalc_flagTR_);
PCREF(texmtxCalc_flagTR___3dsmax);
PCREF(texmtxCalc_flagTR___xsi);
PCREF(texmtxCalc_flagTS_);
PCREF(texmtxCalc_flagTS___3dsmax);
PCREF(texmtxCalc_flagTS___xsi);
PCREF(texmtxCalc_flagT_);
PCREF(texmtxCalc_flagT___3dsmax);
PCREF(texmtxCalc_flagT___xsi);
PCREF(texmtxCalc_flag_);
PCREF(texmtxCalc_flag___3dsmax);
PCREF(texmtxCalc_flag___xsi);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    const void * headObject;
    const void * tailObject;
    uint16_t numObjects;
    uint16_t offset;
} pcm_NNSFndList_0;

typedef struct {
    const void * pfAlloc;
    const void * pfFree;
} pcm_NNSFndAllocatorFunc_1;

typedef struct {
    const void * pDrawGlyph;
    const void * pClear;
    const void * pClearArea;
} pcm_G2dCharCanvasVTable_2;

typedef struct {
    uint8_t category0;
    uint8_t unk_01;
    uint16_t category1;
    const void * func;
} pcm_G3dAnmObjInitEntry_3;

extern pcm_NNSFndList_0 gFndRootHeapList;
extern const pcm_NNSFndAllocatorFunc_1 gFndExpHeapAllocatorFunc;
extern const const void * gVramTransferFuncTable[36];
extern const pcm_G2dCharCanvasVTable_2 gCharCanvasVTableBG;
extern const pcm_G2dCharCanvasVTable_2 gCharCanvasVTableObj1D;
extern const void * NNS_GfdDefaultFuncAllocTexVram;
extern const void * NNS_GfdDefaultFuncFreeTexVram;
extern const void * NNS_GfdDefaultFuncAllocPlttVram;
extern const void * NNS_GfdDefaultFuncFreePlttVram;
extern const void * gFrmTexVramSearch4x4[2];
extern const void * gFrmTexVramSearchNormal[5];
extern const void * gOamLoadFuncs[5];
extern const void * gAnmCalcFuncNsBva;
extern const void * gAnmCalcFuncNsBca;
extern const void * gAnmCalcFuncNsBta;
extern const void * gAnmCalcFuncNsBtp;
extern const void * gAnmCalcFuncNsBma;
extern const void * gAnmBlendVisDefault;
extern const void * gAnmBlendJntDefault;
extern const void * gAnmBlendMatDefault;
extern pcm_G3dAnmObjInitEntry_3 gAnmObjInitFuncs[0];
extern const void * gAnmObjInitFuncsFirstFunc[19];
extern const void * gSendJointSRTFuncs[3];
extern const void * gGetJointScaleFuncs[3];
extern const void * gSendTexSRTFuncs[4];
extern const void * gSbcMatFuncs[4];
extern const void * gSbcShpFuncs[4];
extern const void * gSbcFuncs[32];
extern const void * gTexMtxCalcFuncsMaya[8];
extern const void * gTexMtxCalcFuncs3dsMax[8];
extern const void * gTexMtxCalcFuncsXsi[8];

pcm_NNSFndList_0 gFndRootHeapList;

const pcm_NNSFndAllocatorFunc_1 gFndExpHeapAllocatorFunc = {
    .pfAlloc = (const void *)&pcref_AllocatorAllocForExpHeap,
    .pfFree = (const void *)&pcref_AllocatorFreeForExpHeap,
};

const const void * gVramTransferFuncTable[36] = { (const void *)&pcref_DoTransfer3dTex, (const void *)&pcref_DoTransfer3dTexPltt, (const void *)&pcref_DoTransfer3dClearImageColor, (const void *)&pcref_DoTransfer3dClearImageDepth, (const void *)&pcref_DoTransfer2dBG0CharMain, (const void *)&pcref_DoTransfer2dBG1CharMain, (const void *)&pcref_DoTransfer2dBG2CharMain, (const void *)&pcref_DoTransfer2dBG3CharMain,
  (const void *)&pcref_DoTransfer2dBG0ScrMain, (const void *)&pcref_DoTransfer2dBG1ScrMain, (const void *)&pcref_DoTransfer2dBG2ScrMain, (const void *)&pcref_DoTransfer2dBG3ScrMain, (const void *)&pcref_DoTransfer2dBG2BmpMain, (const void *)&pcref_DoTransfer2dBG3BmpMain, (const void *)&pcref_DoTransfer2dObjPlttMain, (const void *)&pcref_DoTransfer2dBGPlttMain,
  (const void *)&pcref_DoTransfer2dObjExtPlttMain, (const void *)&pcref_DoTransfer2dBGExtPlttMain, (const void *)&pcref_DoTransfer2dObjOamMain, (const void *)&pcref_DoTransfer2dObjCharMain, (const void *)&pcref_DoTransfer2dBG0CharSub, (const void *)&pcref_DoTransfer2dBG1CharSub, (const void *)&pcref_DoTransfer2dBG2CharSub, (const void *)&pcref_DoTransfer2dBG3CharSub,
  (const void *)&pcref_DoTransfer2dBG0ScrSub, (const void *)&pcref_DoTransfer2dBG1ScrSub, (const void *)&pcref_DoTransfer2dBG2ScrSub, (const void *)&pcref_DoTransfer2dBG3ScrSub, (const void *)&pcref_DoTransfer2dBG2BmpSub, (const void *)&pcref_DoTransfer2dBG3BmpSub, (const void *)&pcref_DoTransfer2dObjPlttSub, (const void *)&pcref_DoTransfer2dBGPlttSub,
  (const void *)&pcref_DoTransfer2dObjExtPlttSub, (const void *)&pcref_DoTransfer2dBGExtPlttSub, (const void *)&pcref_DoTransfer2dObjOamSub, (const void *)&pcref_DoTransfer2dObjCharSub };

const void *const _021093F0[3] = {
    (const void *)&pcref_DrawGlyphLine,
    (const void *)&pcref_ClearLine,
    (const void *)&pcref_ClearAreaLine,
};

const pcm_G2dCharCanvasVTable_2 gCharCanvasVTableBG = {
    .pDrawGlyph = (const void *)&pcref_DrawGlyphLine,
    .pClear = (const void *)&pcref_ClearContinuous,
    .pClearArea = (const void *)&pcref_ClearAreaLine,
};

const pcm_G2dCharCanvasVTable_2 gCharCanvasVTableObj1D = {
    .pDrawGlyph = (const void *)&pcref_DrawGlyph1D,
    .pClear = (const void *)&pcref_ClearContinuous,
    .pClearArea = (const void *)&pcref_ClearArea1D,
};

const void * NNS_GfdDefaultFuncAllocTexVram = (const void *)&pcref_AllocTexVram_;

const void * NNS_GfdDefaultFuncFreeTexVram = (const void *)&pcref_FreeTexVram_;

const void * NNS_GfdDefaultFuncAllocPlttVram = (const void *)&pcref_AllocPlttVram_;

const void * NNS_GfdDefaultFuncFreePlttVram = (const void *)&pcref_FreePlttVram_;

const void * gFrmTexVramSearch4x4[2] = { (const void *)&pcref_gFrmTexVramRegions, (const void *)&pcref__02110998 };

const void * gFrmTexVramSearchNormal[5] = { (const void *)&pcref__021109B0, (const void *)&pcref__02110998, (const void *)&pcref_gFrmTexVramRegions, (const void *)&pcref_gFrmTexVramRegion2, (const void *)&pcref_gFrmTexVramRegion1 };

const void * gOamLoadFuncs[5] = { (const void *)&pcref_CpuLoadOAMMain_, (const void *)&pcref_CpuLoadOAMSub_, NULL, NULL, NULL };

const void * gAnmCalcFuncNsBva = (const void *)&pcref_NNSi_G3dAnmCalcNsBva;

const void * gAnmCalcFuncNsBca = (const void *)&pcref_NNSi_G3dAnmCalcNsBca;

const void * gAnmCalcFuncNsBta = (const void *)&pcref_NNSi_G3dAnmCalcNsBta;

const void * gAnmCalcFuncNsBtp = (const void *)&pcref_NNSi_G3dAnmCalcNsBtp;

const void * gAnmCalcFuncNsBma = (const void *)&pcref_NNSi_G3dAnmCalcNsBma;

const void * gAnmBlendVisDefault = (const void *)&pcref_NNSi_G3dAnmBlendVis;

const void * gAnmBlendJntDefault = (const void *)&pcref_NNSi_G3dAnmBlendJnt;

const void * gAnmBlendMatDefault = (const void *)&pcref_NNSi_G3dAnmBlendMat;

pcm_G3dAnmObjInitEntry_3 gAnmObjInitFuncs[0] = {

};

const void * gAnmObjInitFuncsFirstFunc[19] = { (const void *)&pcref_NNSi_G3dAnmObjInitNsBma, (const void *)(uintptr_t)0x5450004d, (const void *)&pcref_NNSi_G3dAnmObjInitNsBtp, (const void *)(uintptr_t)0x5441004d, (const void *)&pcref_NNSi_G3dAnmObjInitNsBta, (const void *)(uintptr_t)0x56410056, (const void *)&pcref_NNSi_G3dAnmObjInitNsBva, (const void *)(uintptr_t)0x4341004a,
  (const void *)&pcref_NNSi_G3dAnmObjInitNsBca, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL };

const void * gSendJointSRTFuncs[3] = { (const void *)&pcref_NNSi_G3dSendJointSRTBasic, (const void *)&pcref_NNSi_G3dSendJointSRTMaya, (const void *)&pcref_NNSi_G3dSendJointSRTSi3d };

const void * gGetJointScaleFuncs[3] = { (const void *)&pcref_NNSi_G3dGetJointScaleBasic, (const void *)&pcref_NNSi_G3dGetJointScaleMaya, (const void *)&pcref_NNSi_G3dGetJointScaleSi3d };

const void * gSendTexSRTFuncs[4] = { (const void *)&pcref_NNSi_G3dSendTexSRTMaya, (const void *)&pcref_NNSi_G3dSendTexSRTSi3d, (const void *)&pcref_NNSi_G3dSendTexSRT3dsMax, (const void *)&pcref_NNSi_G3dSendTexSRTXsi };

const void * gSbcMatFuncs[4] = { (const void *)&pcref_NNSi_G3dFuncSbc_MAT_InternalDefault, NULL, NULL, NULL };

const void * gSbcShpFuncs[4] = { (const void *)&pcref_NNSi_G3dFuncSbc_SHP_InternalDefault, NULL, NULL, NULL };

const void * gSbcFuncs[32] = { (const void *)&pcref_NNSi_G3dFuncSbc_NOP, (const void *)&pcref_NNSi_G3dFuncSbc_RET, (const void *)&pcref_NNSi_G3dFuncSbc_NODE, (const void *)&pcref_NNSi_G3dFuncSbc_MTX, (const void *)&pcref_NNSi_G3dFuncSbc_MAT, (const void *)&pcref_NNSi_G3dFuncSbc_SHP, (const void *)&pcref_NNSi_G3dFuncSbc_NODEDESC, (const void *)&pcref_NNSi_G3dFuncSbc_BB,
  (const void *)&pcref_NNSi_G3dFuncSbc_BBY, (const void *)&pcref_NNSi_G3dFuncSbc_NODEMIX, (const void *)&pcref_NNSi_G3dFuncSbc_CALLDL, (const void *)&pcref_NNSi_G3dFuncSbc_POSSCALE, (const void *)&pcref_NNSi_G3dFuncSbc_ENVMAP, (const void *)&pcref_NNSi_G3dFuncSbc_PRJMAP, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };

const void * gTexMtxCalcFuncsMaya[8] = { (const void *)&pcref_texmtxCalc_flag_, (const void *)&pcref_texmtxCalc_flagS_, (const void *)&pcref_texmtxCalc_flagR_, (const void *)&pcref_texmtxCalc_flagRS_, (const void *)&pcref_texmtxCalc_flagT_, (const void *)&pcref_texmtxCalc_flagTS_, (const void *)&pcref_texmtxCalc_flagTR_, (const void *)&pcref_texmtxCalc_flagTRS_ };

const void * gTexMtxCalcFuncs3dsMax[8] = { (const void *)&pcref_texmtxCalc_flag___3dsmax, (const void *)&pcref_texmtxCalc_flagS___3dsmax, (const void *)&pcref_texmtxCalc_flagR___3dsmax, (const void *)&pcref_texmtxCalc_flagRS___3dsmax, (const void *)&pcref_texmtxCalc_flagT___3dsmax, (const void *)&pcref_texmtxCalc_flagTS___3dsmax, (const void *)&pcref_texmtxCalc_flagTR___3dsmax, (const void *)&pcref_texmtxCalc_flagTRS___3dsmax };

const void * gTexMtxCalcFuncsXsi[8] = { (const void *)&pcref_texmtxCalc_flag___xsi, (const void *)&pcref_texmtxCalc_flagS___xsi, (const void *)&pcref_texmtxCalc_flagR___xsi, (const void *)&pcref_texmtxCalc_flagRS___xsi, (const void *)&pcref_texmtxCalc_flagT___xsi, (const void *)&pcref_texmtxCalc_flagTS___xsi, (const void *)&pcref_texmtxCalc_flagTR___xsi, (const void *)&pcref_texmtxCalc_flagTRS___xsi };
