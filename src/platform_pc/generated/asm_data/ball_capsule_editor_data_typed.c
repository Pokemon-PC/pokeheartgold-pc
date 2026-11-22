/* Generated from asm/ball_capsule_editor_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(BallCapsuleEditor_MenuEdit);
PCREF(BallCapsuleEditor_MenuQuit);
PCREF(BallCapsuleEditor_MenuRemove);
PCREF(BallCapsuleEditor_MenuSet);
PCREF(BallCapsuleEditor_MenuSwitch);
PCREF(BallCapsuleEditor_ModeEdit);
PCREF(BallCapsuleEditor_ModeNone);
PCREF(BallCapsuleEditor_ModeRemove);
PCREF(BallCapsuleEditor_ModeSelect);
PCREF(BallCapsuleEditor_ModeSwitch);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    uint32_t msgId;
    const void * func;
} pcm_BallCapsuleEditorMenuItem_0;

extern const const void * gBallCapsuleEditorModes[5];
extern const pcm_BallCapsuleEditorMenuItem_0 gBallCapsuleEditorMenuItems[5];

const const void * gBallCapsuleEditorModes[5] = { (const void *)&pcref_BallCapsuleEditor_ModeSelect, (const void *)&pcref_BallCapsuleEditor_ModeEdit, (const void *)&pcref_BallCapsuleEditor_ModeRemove, (const void *)&pcref_BallCapsuleEditor_ModeSwitch, (const void *)&pcref_BallCapsuleEditor_ModeNone };

const pcm_BallCapsuleEditorMenuItem_0 gBallCapsuleEditorMenuItems[5] = {
    {
        .msgId = 0,
        .func = (const void *)&pcref_BallCapsuleEditor_MenuEdit,
    },
    {
        .msgId = 1,
        .func = (const void *)&pcref_BallCapsuleEditor_MenuQuit,
    },
    {
        .msgId = 2,
        .func = (const void *)&pcref_BallCapsuleEditor_MenuSet,
    },
    {
        .msgId = 3,
        .func = (const void *)&pcref_BallCapsuleEditor_MenuRemove,
    },
    {
        .msgId = 4,
        .func = (const void *)&pcref_BallCapsuleEditor_MenuSwitch,
    },
};
