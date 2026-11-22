#include <nitro.h>
#include <nnsys/gfd_internal.h>

#ifdef PLATFORM_PC
#define PC_LNK_VRAM_BLOCK_SIZE sizeof(LnkVramBlock) // 16 on the DS
#else
#define PC_LNK_VRAM_BLOCK_SIZE 16
#endif

// Built with a different compiler version than the rest of the module (see the Makefile), so it is
// its own translation unit. It also defines the manager state.

#pragma force_active on

LnkPlttVramManager gLnkPlttVramManager;

void NNS_GfdResetLnkPlttVramState(void) {
    gLnkPlttVramManager.blockPool = NNSi_GfdInitLnkVramBlockPool(gLnkPlttVramManager.pWork, gLnkPlttVramManager.szWork / PC_LNK_VRAM_BLOCK_SIZE);
    NNSi_GfdInitLnkVramMan(&gLnkPlttVramManager.freeList);
    NNSi_GfdAddNewFreeBlock(&gLnkPlttVramManager.freeList, &gLnkPlttVramManager.blockPool, 0, gLnkPlttVramManager.szByte);
    NNSi_GfdMergeAllFreeBlocks(&gLnkPlttVramManager.freeList, &gLnkPlttVramManager.blockPool);
}
