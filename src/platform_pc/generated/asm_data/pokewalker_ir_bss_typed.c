/* Generated from asm/pokewalker_ir_bss.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    uint8_t unk_00;
    uint8_t unk_01[3];
    uint32_t sessionId;
    uint32_t connected;
    const void * onConnect;
    uint32_t numDisconnects;
    const void * onClose;
    uint32_t closing;
    const void * onReceive;
    uint32_t ownId;
    uint32_t handshakeStarted;
    uint32_t handshakeState;
    uint32_t active;
    uint64_t lastReceiveTick;
} pcm_PokewalkerIrLink_0;

extern pcm_PokewalkerIrLink_0 gPokewalkerIrLink;

pcm_PokewalkerIrLink_0 gPokewalkerIrLink;
