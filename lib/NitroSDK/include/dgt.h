#ifndef GUARD_DGT_H
#define GUARD_DGT_H

#ifdef PLATFORM_PC
// 32-bit like the DS (`long` is 64-bit on LP64 hosts; u32 is `unsigned int` on PC).
#define DGT_ULONG unsigned int
#else
#define DGT_ULONG unsigned long
#endif

#include "nitro/types.h"

struct DGTHash1Context {
    union {
        struct {
            DGT_ULONG a, b, c, d;
        };
        DGT_ULONG state[4];
    };
    unsigned long long length;
    union {
        DGT_ULONG buffer32[16];
        unsigned char buffer8[64];
    };
};

struct DGTHash2Context {
    DGT_ULONG Intermediate_Hash[5];
    DGT_ULONG Length_Low;
    DGT_ULONG Length_High;
    int Message_Block_Index;
    union {
        unsigned char Message_Block[64];
        DGT_ULONG Message_Block_Words[16];
    };
    int Computed;
    int Corrupted;
};

void DGT_Hash1Reset(struct DGTHash1Context *context);
void DGT_Hash1SetSource(struct DGTHash1Context *context, u8 *input, u32 length);
void DGT_Hash1GetDigest_R(u8 *digest, struct DGTHash1Context *context);
void DGT_Hash2Reset(struct DGTHash2Context *context);
void DGT_Hash2SetSource(struct DGTHash2Context *context, u8 *input, u32 length);
void DGT_Hash2GetDigest(struct DGTHash2Context *context, u8 *digest);

#endif
