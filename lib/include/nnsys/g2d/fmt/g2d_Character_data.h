#ifndef NNSYS_G2D_FMT_G2D_CHARACTER_DATA_H_
#define NNSYS_G2D_FMT_G2D_CHARACTER_DATA_H_

// PC port: pointer patched into file data, kept 32-bit wide (see
// src/platform_pc/nitro_compat/platform_pc_prefix.h). Empty on the DS.
#ifndef PC_PTR32
#define PC_PTR32
#endif

#include <nitro.h>

#define NNS_G2D_CHARACTER_FMT_MASK              0xFF    // 8 bit
#define NNS_G2D_VRAMTRANSFERDATA_FLAG_MASK      0x1     // 1 bit
#define NNS_G2D_CHARACTER_FMT_SHIFT             0
#define NNS_G2D_VRAMTRANSFERDATA_FLAG_SHIFT     8

typedef enum NNSG2dCharacterDataMapingType {
    NNS_G2D_CHARACTERMAPING_1D_32,
    NNS_G2D_CHARACTERMAPING_1D_64,
    NNS_G2D_CHARACTERMAPING_1D_128,
    NNS_G2D_CHARACTERMAPING_1D_256,
    NNS_G2D_CHARACTERMAPING_2D,
    NNS_G2D_CHARACTERMAPING_MAX
} NNSG2dCharacterDataMapingType;

typedef struct NNSG2dCharacterData {
    u16 H;
    u16 W;
    GXTexFmt pixelFmt;
    GXOBJVRamModeChar mapingType;
    u32 characterFmt;
    u32 szByte;
    void *PC_PTR32 pRawData;
} NNSG2dCharacterData;

typedef struct NNSG2dPaletteCompressInfo {
    u16 numPalette;
    u16 pad16;
    void *PC_PTR32 pPlttIdxTbl;
} NNSG2dPaletteCompressInfo;

typedef struct NNSG2dPaletteData {
    GXTexFmt fmt;
    BOOL bExtendedPlt;
    u32 szByte;
    void *PC_PTR32 pRawData;
} NNSG2dPaletteData;

#endif //NNSYS_G2D_FMT_G2D_CHARACTER_DATA_H_
