/*
 * nnsys_data_pc.c - C definitions of NitroSystem globals that the DS build
 * gets from assembly data files (lib/asm/nnsys_data.s).
 *
 * Milestone 3 converts lib/asm/*.s and asm/*.s wholesale; this file only
 * holds what the Fnd heap/allocator code needs today.
 */
#include <nitro.h>
#include <nnsys/fnd_internal.h>

/* lib/asm/nnsys_data.s (.bss) */
BOOL gFndRootHeapListInitialized;
NNSFndList gFndRootHeapList;

/* lib/asm/nnsys_data.s (.rodata): { alloc, free } pairs for the expanded
 * heap followed by the SDK (OS_*Heap) heap, exactly as on the DS. */
void *AllocatorAllocForExpHeap(NNSFndAllocator *allocator, u32 size);
void AllocatorFreeForExpHeap(NNSFndAllocator *allocator, void *memBlock);
void *AllocatorAllocForSDKHeap(NNSFndAllocator *allocator, u32 size);
void AllocatorFreeForSDKHeap(NNSFndAllocator *allocator, void *memBlock);

const NNSFndAllocatorFunc gFndExpHeapAllocatorFunc = { AllocatorAllocForExpHeap, AllocatorFreeForExpHeap };
const NNSFndAllocatorFunc gFndSDKHeapAllocatorFunc = { AllocatorAllocForSDKHeap, AllocatorFreeForSDKHeap };
