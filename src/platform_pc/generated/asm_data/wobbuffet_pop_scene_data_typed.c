/* Generated from asm/wobbuffet_pop_scene_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(CommCmd_GetSize0);
PCREF(WobbuffetPop_GetEventCommandSize);
PCREF(WobbuffetPop_GetPlayerValueCommandSize);
PCREF(WobbuffetPop_HandleCountdownEvent);
PCREF(WobbuffetPop_HandleDemoEvent);
PCREF(WobbuffetPop_HandleFinishEvent);
PCREF(WobbuffetPop_HandleNewBalloonEvent);
PCREF(WobbuffetPop_HandlePopEvent);
PCREF(WobbuffetPop_HandlePumpEvent);
PCREF(WobbuffetPop_HandleSyncEvent);
PCREF(WobbuffetPop_RecvEvent);
PCREF(WobbuffetPop_RecvFinished);
PCREF(WobbuffetPop_RecvPlayerValue);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    const void * recv;
    const void * getSize;
    const void * getBuffer;
} pcm_CommCommand_0;

extern const pcm_CommCommand_0 gWobbuffetPopCommands[4];
extern const const void * gWobbuffetPopEventFuncs[8];

const pcm_CommCommand_0 gWobbuffetPopCommands[4] = {
    {
        .recv = NULL,
        .getSize = (const void *)&pcref_CommCmd_GetSize0,
        .getBuffer = NULL,
    },
    {
        .recv = (const void *)&pcref_WobbuffetPop_RecvPlayerValue,
        .getSize = (const void *)&pcref_WobbuffetPop_GetPlayerValueCommandSize,
        .getBuffer = NULL,
    },
    {
        .recv = (const void *)&pcref_WobbuffetPop_RecvEvent,
        .getSize = (const void *)&pcref_WobbuffetPop_GetEventCommandSize,
        .getBuffer = NULL,
    },
    {
        .recv = (const void *)&pcref_WobbuffetPop_RecvFinished,
        .getSize = (const void *)&pcref_CommCmd_GetSize0,
        .getBuffer = NULL,
    },
};

const const void * gWobbuffetPopEventFuncs[8] = { NULL, (const void *)&pcref_WobbuffetPop_HandlePumpEvent, (const void *)&pcref_WobbuffetPop_HandlePopEvent, (const void *)&pcref_WobbuffetPop_HandleNewBalloonEvent, (const void *)&pcref_WobbuffetPop_HandleCountdownEvent, (const void *)&pcref_WobbuffetPop_HandleFinishEvent, (const void *)&pcref_WobbuffetPop_HandleSyncEvent, (const void *)&pcref_WobbuffetPop_HandleDemoEvent };
