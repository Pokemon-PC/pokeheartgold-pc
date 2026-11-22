/* Generated from asm/record_mixing_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(BattleRoomTrainer_sizeof);
PCREF(RecordMixing_BattleRoomTrainer_Load);
PCREF(RecordMixing_BattleRoomTrainer_Merge);
PCREF(RecordMixing_Block23List0_GetSize);
PCREF(RecordMixing_Block23List0_Load);
PCREF(RecordMixing_Block23List0_Load2);
PCREF(RecordMixing_Block23List1_GetSize);
PCREF(RecordMixing_Block23List1_Load);
PCREF(RecordMixing_Block23List1_Load2);
PCREF(RecordMixing_Block23List2_GetSize);
PCREF(RecordMixing_Block23List2_Load);
PCREF(RecordMixing_Block23List2_Load2);
PCREF(RecordMixing_Block23_Merge);
PCREF(RecordMixing_Fashion_GetSize);
PCREF(RecordMixing_Fashion_Load);
PCREF(RecordMixing_Fashion_Merge);
PCREF(RecordMixing_FriendGroup_GetSize);
PCREF(RecordMixing_FriendGroup_Load);
PCREF(RecordMixing_FriendGroup_Merge);
PCREF(RecordMixing_Rankings_Load);
PCREF(RecordMixing_Rankings_Merge);
PCREF(Save_Rankings_GetMixingSize);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    const void * getSize;
    const void * load;
    const void * merge;
} pcm_RecordMixingHandler_0;

extern const pcm_RecordMixingHandler_0 sRecordMixingHandlers[10];

const pcm_RecordMixingHandler_0 sRecordMixingHandlers[10] = {
    {
        .getSize = (const void *)&pcref_RecordMixing_FriendGroup_GetSize,
        .load = (const void *)&pcref_RecordMixing_FriendGroup_Load,
        .merge = (const void *)&pcref_RecordMixing_FriendGroup_Merge,
    },
    {
        .getSize = (const void *)&pcref_RecordMixing_Fashion_GetSize,
        .load = (const void *)&pcref_RecordMixing_Fashion_Load,
        .merge = (const void *)&pcref_RecordMixing_Fashion_Merge,
    },
    {
        .getSize = (const void *)&pcref_RecordMixing_Block23List0_GetSize,
        .load = (const void *)&pcref_RecordMixing_Block23List0_Load,
        .merge = NULL,
    },
    {
        .getSize = (const void *)&pcref_RecordMixing_Block23List1_GetSize,
        .load = (const void *)&pcref_RecordMixing_Block23List1_Load,
        .merge = NULL,
    },
    {
        .getSize = (const void *)&pcref_RecordMixing_Block23List2_GetSize,
        .load = (const void *)&pcref_RecordMixing_Block23List2_Load,
        .merge = NULL,
    },
    {
        .getSize = (const void *)&pcref_Save_Rankings_GetMixingSize,
        .load = (const void *)&pcref_RecordMixing_Rankings_Load,
        .merge = (const void *)&pcref_RecordMixing_Rankings_Merge,
    },
    {
        .getSize = (const void *)&pcref_BattleRoomTrainer_sizeof,
        .load = (const void *)&pcref_RecordMixing_BattleRoomTrainer_Load,
        .merge = (const void *)&pcref_RecordMixing_BattleRoomTrainer_Merge,
    },
    {
        .getSize = (const void *)&pcref_RecordMixing_Block23List0_GetSize,
        .load = (const void *)&pcref_RecordMixing_Block23List0_Load2,
        .merge = NULL,
    },
    {
        .getSize = (const void *)&pcref_RecordMixing_Block23List1_GetSize,
        .load = (const void *)&pcref_RecordMixing_Block23List1_Load2,
        .merge = NULL,
    },
    {
        .getSize = (const void *)&pcref_RecordMixing_Block23List2_GetSize,
        .load = (const void *)&pcref_RecordMixing_Block23List2_Load2,
        .merge = (const void *)&pcref_RecordMixing_Block23_Merge,
    },
};
