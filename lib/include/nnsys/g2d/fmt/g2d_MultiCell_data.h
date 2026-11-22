#ifndef NNSYS_G2D_FMT_G2D_MULTICELL_DATA_H_
#define NNSYS_G2D_FMT_G2D_MULTICELL_DATA_H_

// PC port: pointer patched into file data, kept 32-bit wide (see
// src/platform_pc/nitro_compat/platform_pc_prefix.h). Empty on the DS.
#ifndef PC_PTR32
#define PC_PTR32
#endif

#include <nitro.h>

typedef struct NNSG2dMultiCellHierarchyData {
    u16 animSequenceIdx;
    s16 posX;
    s16 posY;
    u16 nodeAttr;
} NNSG2dMultiCellHierarchyData;

typedef struct NNSG2dMultiCellData {
    u16 numNodes;
    u16 numCellAnim;
    NNSG2dMultiCellHierarchyData *PC_PTR32 pHierDataArray;
} NNSG2dMultiCellData;

typedef struct NNSG2dMultiCellDataBank {
    u16 numMultiCellData;
    u16 pad16;
    NNSG2dMultiCellData *PC_PTR32 pMultiCellDataArray;
    NNSG2dMultiCellHierarchyData *PC_PTR32 pHierarchyDataArray;
    void *PC_PTR32 pStringBank;
    void *PC_PTR32 pExtendedData;
} NNSG2dMultiCellDataBank;

#endif // NNSYS_G2D_FMT_G2D_MULTICELL_DATA_H_
