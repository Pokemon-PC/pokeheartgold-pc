#ifndef NNSYS_G2D_FMT_G2D_CELL_DATA_H_
#define NNSYS_G2D_FMT_G2D_CELL_DATA_H_

// PC port: pointer patched into file data, kept 32-bit wide (see
// src/platform_pc/nitro_compat/platform_pc_prefix.h). Empty on the DS.
#ifndef PC_PTR32
#define PC_PTR32
#endif

#include <nitro.h>
#include <nnsys/g2d/fmt/g2d_Character_data.h>

typedef struct NNSG2dCellOAMAttrData {
    u16 attr0;
    u16 attr1;
    u16 attr2;

} NNSG2dCellOAMAttrData;

typedef struct NNSG2dCellData {
    u16 numOAMAttrs;
    u16 cellAttr;
    NNSG2dCellOAMAttrData *PC_PTR32 pOamAttrArray;
} NNSG2dCellData;

typedef struct NNSG2dCellVramTransferData {
    u32 srcDataOffset;
    u32 szByte;

} NNSG2dCellVramTransferData;

typedef struct NNSG2dVramTransferData {
    u32 szByteMax;
    NNSG2dCellVramTransferData *PC_PTR32 pCellTransferDataArray;

} NNSG2dVramTransferData;

typedef struct NNSG2dCellDataBank {
    u16 numCells;
    u16 cellBankAttr;
    NNSG2dCellData *PC_PTR32 pCellDataArrayHead;
    NNSG2dCharacterDataMapingType mappingMode;
    NNSG2dVramTransferData *PC_PTR32 pVramTransferData;
    void *PC_PTR32 pStringBank;
    void *PC_PTR32 pExtendedData;
} NNSG2dCellDataBank;

#endif // NNSYS_G2D_FMT_G2D_CELL_DATA_H_
