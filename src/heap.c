#include "heap.h"

#ifdef PLATFORM_PC
#include <stdio.h>
#else
#endif
#ifdef PLATFORM_PC
#include <string.h>
#else
#endif

#include "global.h"

#include "error_handling.h"
#include "error_message_reset.h"
#include "comm_state.h"

typedef struct HeapInfo {
    NNSFndHeapHandle *heapHandles;
    NNSFndHeapHandle *parentHeapHandles;
    void **subHeapRawPtrs;
    u16 *numMemBlocks;
    u8 *heapIdxs;
    u16 totalNumHeaps;
    u16 nTemplates;
    u16 maxHeaps;
    u16 unallocatedHeapID;
} HeapInfo;

typedef struct MemoryBlock {
    u8 filler_00[12];
    u32 heapID : 8;
    u32 filler_0D : 24;
} MemoryBlock;

static HeapInfo sHeapInfo;

static BOOL CreateHeapInternal(enum HeapID parent, enum HeapID child, u32 size, s32 alignment);

#ifdef PLATFORM_PC
// Heap sizes were tuned for the DS, where pointers are 4 bytes. On the 64-bit
// PC build every structure holding pointers is larger, so all heaps get four
// times the room (the PC main arena is larger; see src/platform_pc/hw_pc.h).
#define PC_HEAP_SIZE(sz) ((sz) * 4)
#else
#define PC_HEAP_SIZE(sz) (sz)
#endif

void Heap_InitSystem(const HeapParam *templates, u32 nTemplates, u32 totalNumHeaps, u32 preSize) {
    void *ptr;
    u32 i;
    u32 usableHeaps = nTemplates + 24;

    if (totalNumHeaps < usableHeaps) {
        totalNumHeaps = usableHeaps;
    }

    if (preSize != 0) {
        // force align
        while (preSize % 4 != 0) {
            preSize++;
        }

        OS_AllocFromArenaLo(OS_ARENA_MAIN, preSize, 4);
    }

    sHeapInfo.heapHandles = (NNSFndHeapHandle *)OS_AllocFromArenaLo(
        OS_ARENA_MAIN,
        (usableHeaps + 1) * sizeof(NNSFndHeapHandle)
            + usableHeaps * sizeof(NNSFndHeapHandle)
            + usableHeaps * sizeof(void *)
            + totalNumHeaps * sizeof(u16)
            + totalNumHeaps,
        4);
    sHeapInfo.parentHeapHandles = sHeapInfo.heapHandles + (usableHeaps + 1);
    sHeapInfo.subHeapRawPtrs = (void **)(sHeapInfo.parentHeapHandles + usableHeaps);
    sHeapInfo.numMemBlocks = (u16 *)(sHeapInfo.subHeapRawPtrs + usableHeaps);
    sHeapInfo.heapIdxs = (u8 *)(sHeapInfo.numMemBlocks + totalNumHeaps);
    sHeapInfo.totalNumHeaps = (u16)totalNumHeaps;
    sHeapInfo.nTemplates = (u16)nTemplates;
    sHeapInfo.unallocatedHeapID = (u16)usableHeaps;
    sHeapInfo.maxHeaps = (u16)usableHeaps;

    for (i = 0; i < nTemplates; i++) {
        switch (templates[i].arena) {
        case OS_ARENA_MAIN:
        default:
            ptr = OS_AllocFromArenaLo(OS_ARENA_MAIN, PC_HEAP_SIZE(templates[i].size), 4);
            break;
        case OS_ARENA_MAINEX:
            ptr = OS_AllocFromArenaHi(OS_ARENA_MAINEX, PC_HEAP_SIZE(templates[i].size), 4);
            break;
        }

        if (ptr != NULL) {
            sHeapInfo.heapHandles[i] = NNS_FndCreateExpHeap(ptr, PC_HEAP_SIZE(templates[i].size));
            sHeapInfo.heapIdxs[i] = (u8)i;
        } else {
            GF_ASSERT(FALSE);
        }
    }

    for (i = nTemplates; i < usableHeaps + 1; i++) {
        sHeapInfo.heapHandles[i] = NULL;
        sHeapInfo.heapIdxs[i] = (u8)sHeapInfo.unallocatedHeapID;
    }

    while (i < totalNumHeaps) {
        sHeapInfo.heapIdxs[i++] = (u8)sHeapInfo.unallocatedHeapID;
    }

    for (i = 0; i < totalNumHeaps; i++) {
        sHeapInfo.numMemBlocks[i] = 0;
    }
}

static s32 FindFirstAvailableHeapHandle(void) {
    s32 i;

    for (i = sHeapInfo.nTemplates; i < sHeapInfo.maxHeaps; i++) {
        if (sHeapInfo.heapHandles[i] == NULL) {
            return i;
        }
    }

    return -1;
}

BOOL Heap_Create(enum HeapID parent, enum HeapID child, u32 size) {
    return CreateHeapInternal(parent, child, size, 4);
}

BOOL Heap_CreateAtEnd(enum HeapID parent, enum HeapID child, u32 size) {
    return CreateHeapInternal(parent, child, size, -4);
}

static BOOL CreateHeapInternal(enum HeapID parent, enum HeapID child, u32 size, s32 alignment) {
    GF_ASSERT(OS_GetProcMode() != OS_PROCMODE_IRQ);
#ifdef PLATFORM_PC
    size = PC_HEAP_SIZE(size);
#else
#endif

    u8 *ptr = sHeapInfo.heapIdxs;
    if (sHeapInfo.unallocatedHeapID == ptr[child]) {
        NNSFndHeapHandle parentHeap = sHeapInfo.heapHandles[ptr[parent]];
        if (parentHeap != NULL) {
            void *newHeapAddr = NNS_FndAllocFromExpHeapEx(parentHeap, size, alignment);
            if (newHeapAddr != NULL) {
                s32 i = FindFirstAvailableHeapHandle();
                if (i >= 0) {
                    sHeapInfo.heapHandles[i] = NNS_FndCreateExpHeap(newHeapAddr, size);

                    if (sHeapInfo.heapHandles[i] != NULL) {
                        sHeapInfo.parentHeapHandles[i] = parentHeap;
                        sHeapInfo.subHeapRawPtrs[i] = newHeapAddr;
                        sHeapInfo.heapIdxs[child] = (u8)i;

                        return TRUE;
                    } else {
                        GF_ASSERT(FALSE);
                    }
                } else {
                    GF_ASSERT(FALSE);
                }
            } else {
                GF_ASSERT(FALSE);
            }
        } else {
            GF_ASSERT(FALSE);
        }
    } else {
        GF_ASSERT(FALSE);
    }
    return FALSE;
}

void Heap_Destroy(enum HeapID heapID) {
    GF_ASSERT(OS_GetProcMode() != OS_PROCMODE_IRQ);

    NNSFndHeapHandle handle = sHeapInfo.heapHandles[sHeapInfo.heapIdxs[heapID]];

    if (handle != NULL) {
        NNS_FndDestroyExpHeap(handle);

        u8 index = sHeapInfo.heapIdxs[heapID];
        NNSFndHeapHandle parentHeap = sHeapInfo.parentHeapHandles[index];
        void *childRaw = sHeapInfo.subHeapRawPtrs[index];
        if (parentHeap != NULL && childRaw != NULL) {
            NNS_FndFreeToExpHeap(parentHeap, childRaw);
        } else {
            GF_ASSERT(FALSE);
        }

        sHeapInfo.heapHandles[sHeapInfo.heapIdxs[heapID]] = NULL;
        sHeapInfo.parentHeapHandles[sHeapInfo.heapIdxs[heapID]] = NULL;
        sHeapInfo.subHeapRawPtrs[sHeapInfo.heapIdxs[heapID]] = NULL;

        sHeapInfo.heapIdxs[heapID] = (u8)sHeapInfo.unallocatedHeapID;
    }
}

static void *AllocFromHeapInternal(NNSFndHeapHandle heap, u32 size, s32 alignment, enum HeapID heapID) {
    GF_ASSERT(heap);

#ifdef PLATFORM_PC
    {
        extern int gPcHeapCheck;
        BOOL pc_heap_check(void);
        void pc_log_backtrace(const char *why);
        if (gPcHeapCheck == 1 && !pc_heap_check()) {
            pc_log_backtrace("heapcheck (alloc)");
            gPcHeapCheck = 2;
        }
    }
#endif
    OSIntrMode intrMode = OS_DisableInterrupts();
    size += sizeof(MemoryBlock);
    void *ptr = NNS_FndAllocFromExpHeapEx(heap, size, alignment);

    OS_RestoreInterrupts(intrMode);
    if (ptr != NULL) {
        ((MemoryBlock *)ptr)->heapID = heapID;

        ptr += sizeof(MemoryBlock);
    }

    return ptr;
}

#ifdef PLATFORM_PC
#include <nnsys/fnd_internal.h>
void pc_log(const char *fmt, ...);

/* Debug (PHG_HEAPCHECK=1, src/platform_pc/nitro/nitro_pc.c): walks every
 * heap's block lists; on damage, names the used block that ends where the
 * damaged header starts - the likely overflow - and the code that
 * allocated it. Returns FALSE when a heap is damaged. */
#define MBLOCK_USED_SIG 0x5544
#define MBLOCK_FREE_SIG 0x4652
static BOOL CheckBlockList(int idx, ExpHeap *heap, ExpHeapBlockList *list, u16 sig) {
    u8 *lo = heap->head.heapStart, *hi = heap->head.heapEnd;
    ExpHeapBlock *prev = NULL;
    for (ExpHeapBlock *b = list->head; b != NULL; prev = b, b = b->next) {
        BOOL ok = (u8 *)b >= lo && (u8 *)b < hi && b->signature == sig && b->prev == prev
               && (u8 *)(b + 1) + b->blockSize <= hi;
        if (ok) {
            continue;
        }
        u8 *bad = (prev == NULL) ? (u8 *)list->head : (u8 *)prev->next;
        pc_log("heapcheck: heap #%d (%p-%p) damaged %s block at %p (after %p)", idx, lo, hi,
               sig == MBLOCK_USED_SIG ? "used" : "free", bad, prev);
        for (ExpHeapBlock *u = heap->exp.usedBlocks.head; u != NULL && (u8 *)u >= lo && (u8 *)u < hi; u = u->next) {
            u8 *end = (u8 *)(u + 1) + u->blockSize;
            if (end <= bad && end + 64 > bad) {
                void *ra;
                memcpy(&ra, u + 1, sizeof ra);
                pc_log("heapcheck:   used block %p..%p (%u bytes) allocated from %p", (void *)(u + 1), end,
                       (unsigned)u->blockSize, ra);
                char hex[3 * 96 + 1];
                const u8 *q = (const u8 *)u;
                for (int k = 0; k < 96; k++) {
                    snprintf(hex + 3 * k, 4, "%02X ", q[k]);
                }
                pc_log("heapcheck:   bytes from header: %s", hex);
            }
        }
        return FALSE;
    }
    return TRUE;
}

BOOL pc_heap_check(void) {
    for (int i = 0; i < sHeapInfo.maxHeaps; i++) {
        ExpHeap *heap = (ExpHeap *)sHeapInfo.heapHandles[i];
        if (heap == NULL || heap->head.signature != 0x45585048) {   /* 'EXPH' */
            continue;
        }
        if (!CheckBlockList(i, heap, &heap->exp.usedBlocks, MBLOCK_USED_SIG)
            || !CheckBlockList(i, heap, &heap->exp.freeBlocks, MBLOCK_FREE_SIG)) {
            return FALSE;
        }
    }
    return TRUE;
}
#endif

static void AllocFail(void) {
#ifdef PLATFORM_PC
    pc_log_backtrace("alloc-fail");
#endif
    if (CommState_Exists()) {
        PrintErrorMessageAndReset();
    }
}

void *Heap_Alloc(enum HeapID heapID, u32 size) {
    void *ptr = NULL;

    if ((u32)heapID < sHeapInfo.totalNumHeaps) {
        u8 index = sHeapInfo.heapIdxs[heapID];
        ptr = AllocFromHeapInternal(sHeapInfo.heapHandles[index], size, 4, heapID);
    }
#ifdef PLATFORM_PC
    if (ptr != NULL) {   /* who allocated it (pc_heap_check), in MemoryBlock's filler */
        void *ra = __builtin_return_address(0);
        memcpy((u8 *)ptr - sizeof(MemoryBlock), &ra, sizeof ra);
    }
#endif

    if (ptr != NULL) {
        sHeapInfo.numMemBlocks[heapID]++;
    } else {
#ifdef PLATFORM_PC
        pc_warn("Heap_Alloc(heap %d, %u bytes) failed: %u bytes free", (int)heapID, (unsigned)size,
                (unsigned)HeapExp_FndGetTotalFreeSize(heapID));
#endif
        AllocFail();
    }

    return ptr;
}

void *Heap_AllocAtEnd(enum HeapID heapID, u32 size) {
    void *ptr = NULL;

    if ((u32)heapID < sHeapInfo.totalNumHeaps) {
        u8 index = sHeapInfo.heapIdxs[heapID];
        ptr = AllocFromHeapInternal(sHeapInfo.heapHandles[index], size, -4, heapID);
    }
#ifdef PLATFORM_PC
    if (ptr != NULL) {
        void *ra = __builtin_return_address(0);
        memcpy((u8 *)ptr - sizeof(MemoryBlock), &ra, sizeof ra);
    }
#endif

    if (ptr != NULL) {
        sHeapInfo.numMemBlocks[heapID]++;
    } else {
        AllocFail();
    }

    return ptr;
}

void Heap_Free(void *ptr) {
    ptr -= sizeof(MemoryBlock);
    enum HeapID heapID = (enum HeapID)((MemoryBlock *)ptr)->heapID;

    if ((u32)heapID < sHeapInfo.totalNumHeaps) {
        u8 index = sHeapInfo.heapIdxs[heapID];
        NNSFndHeapHandle heap = sHeapInfo.heapHandles[index];

        GF_ASSERT(heap != NULL);

        if (sHeapInfo.numMemBlocks[heapID] == 0) {
            GF_heap_c_dummy_return_true(heapID);
        }

        GF_ASSERT(sHeapInfo.numMemBlocks[heapID] != 0);

        sHeapInfo.numMemBlocks[heapID]--;

        OSIntrMode intrMode = OS_DisableInterrupts();
        NNS_FndFreeToExpHeap(heap, ptr);
        OS_RestoreInterrupts(intrMode);
        return;
    }

    GF_ASSERT(FALSE);
}

void Heap_FreeExplicit(enum HeapID heapID, void *ptr) {
    GF_ASSERT(OS_GetProcMode() != OS_PROCMODE_IRQ);

    if ((u32)heapID < sHeapInfo.totalNumHeaps) {
        u8 index = sHeapInfo.heapIdxs[heapID];
        NNSFndHeapHandle heap = sHeapInfo.heapHandles[index];

        GF_ASSERT(heap != NULL);

        ptr -= sizeof(MemoryBlock);
        GF_ASSERT(((MemoryBlock *)ptr)->heapID == heapID);

        NNS_FndFreeToExpHeap(heap, ptr);
        GF_ASSERT(sHeapInfo.numMemBlocks[heapID] != 0);
        sHeapInfo.numMemBlocks[heapID]--;
        return;
    }

    GF_ASSERT(FALSE);
}

u32 HeapExp_FndGetTotalFreeSize(enum HeapID heapID) {
    if ((u32)heapID < sHeapInfo.totalNumHeaps) {
        u8 index = sHeapInfo.heapIdxs[heapID];
        return NNS_FndGetTotalFreeSizeForExpHeap(sHeapInfo.heapHandles[index]);
    }

    GF_ASSERT(FALSE);
    return 0;
}

void HeapExp_FndInitAllocator(NNSFndAllocator *pAllocator, enum HeapID heapID, int alignment) {
    if ((u32)heapID < sHeapInfo.totalNumHeaps) {
        u8 index = sHeapInfo.heapIdxs[heapID];
        NNS_FndInitAllocatorForExpHeap(pAllocator, sHeapInfo.heapHandles[index], alignment);
        return;
    }

    GF_ASSERT(FALSE);
}

void Heap_Realloc(void *ptr, u32 newSize) {
    GF_ASSERT(OS_GetProcMode() != OS_PROCMODE_IRQ);

    newSize += sizeof(MemoryBlock);
    ptr -= sizeof(MemoryBlock);

    if (NNS_FndGetSizeForMBlockExpHeap(ptr) >= newSize) {
        u32 heapID = ((MemoryBlock *)ptr)->heapID;
        u8 index = sHeapInfo.heapIdxs[heapID];

        NNS_FndResizeForMBlockExpHeap(sHeapInfo.heapHandles[index], ptr, newSize);
        return;
    }
    GF_ASSERT(FALSE);
}

BOOL GF_heap_c_dummy_return_true(enum HeapID heapID) {
#pragma unused(heapID)
    return TRUE;
}
