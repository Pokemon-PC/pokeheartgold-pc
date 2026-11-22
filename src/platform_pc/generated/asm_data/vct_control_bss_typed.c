/* Generated from lib/asm/vct_control_bss.s by tools/pc_port/asm_data_to_c.py - do not edit. */

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
    uint8_t aid;
    uint8_t peer;
    uint8_t pad[2];
    const void * callback;
    const void * context;
    int32_t state;
    int32_t mode;
    int32_t flag;
} pcm_Vct_1;

typedef struct {
    uint32_t frame;
    uint32_t received;
    uint32_t active;
    pcm_Vct_1 vct;
} pcm_Control_0;

extern pcm_Control_0 gVctControl;

pcm_Control_0 gVctControl;

__attribute__((used)) static void pc_alias___vct(void) {
    __asm__ volatile(".globl " PCSYM(__vct) "\n.set " PCSYM(__vct) ", " PCSYM(gVctControl) "+%c0" :: "i"(__builtin_offsetof(pcm_Control_0, vct)));
}
