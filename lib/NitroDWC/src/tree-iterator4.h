#ifndef DWC_TREE_ITERATOR4_H
#define DWC_TREE_ITERATOR4_H
typedef struct Iterator {
    void *current;
#ifdef __cplusplus
    void Advance();
#endif
} Iterator;
// DS memory-layout check (32-bit pointers); not applicable to the 64-bit PC build.
#ifndef PLATFORM_PC
typedef char DwcTreeIteratorSize4[sizeof(Iterator)==4?1:-1];
#endif
#ifndef __cplusplus
void LobbyTreeIterator_Advance(Iterator *);
#endif
#endif
