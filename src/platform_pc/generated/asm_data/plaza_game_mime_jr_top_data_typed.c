/* Generated from asm/plaza_game_mime_jr_top_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(MimeJrTopDance_Routine1);
PCREF(MimeJrTopDance_Routine2);
PCREF(MimeJrTopDance_Routine3);
PCREF(MimeJrTopDance_Routine4);
PCREF(MimeJrTopDance_Routine5);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    int32_t timer;
    int32_t count;
    int32_t speed;
    int32_t frontPalettes[3];
    int32_t backPalettes[3];
    const void * func;
} pcm_MimeJrTopRoutine_0;

typedef struct {
    const void * func;
    uint8_t unk04[36];
} pcm_MimeJrTopRoutineTask_1;

extern const pcm_MimeJrTopRoutine_0 gMimeJrTopRoutines[0];
extern const pcm_MimeJrTopRoutineTask_1 gMimeJrTopRoutineTasks[8];

const pcm_MimeJrTopRoutine_0 gMimeJrTopRoutines[0] = {

};

const pcm_MimeJrTopRoutineTask_1 gMimeJrTopRoutineTasks[8] = {
    {
        .func = NULL,
        .unk04 = { 150, 0, 0, 0, 2, 0, 0, 0,
          1, 0, 0, 0, 0, 0, 0, 0,
          0, 0, 0, 0, 0, 0, 0, 0,
          0, 0, 0, 0, 0, 0, 0, 0,
          0, 0, 0, 0 },
    },
    {
        .func = (const void *)&pcref_MimeJrTopDance_Routine1,
        .unk04 = { 150, 0, 0, 0, 3, 0, 0, 0,
          2, 0, 0, 0, 0, 0, 0, 0,
          0, 0, 0, 0, 0, 0, 0, 0,
          0, 0, 0, 0, 0, 0, 0, 0,
          0, 0, 0, 0 },
    },
    {
        .func = (const void *)&pcref_MimeJrTopDance_Routine2,
        .unk04 = { 150, 0, 0, 0, 3, 0, 0, 0,
          2, 0, 0, 0, 0, 0, 0, 0,
          1, 0, 0, 0, 0, 0, 0, 0,
          1, 0, 0, 0, 0, 0, 0, 0,
          0, 0, 0, 0 },
    },
    {
        .func = (const void *)&pcref_MimeJrTopDance_Routine2,
        .unk04 = { 150, 0, 0, 0, 3, 0, 0, 0,
          3, 0, 0, 0, 0, 0, 0, 0,
          1, 0, 0, 0, 2, 0, 0, 0,
          2, 0, 0, 0, 0, 0, 0, 0,
          0, 0, 0, 0 },
    },
    {
        .func = (const void *)&pcref_MimeJrTopDance_Routine3,
        .unk04 = { 150, 0, 0, 0, 3, 0, 0, 0,
          4, 0, 0, 0, 0, 0, 0, 0,
          1, 0, 0, 0, 2, 0, 0, 0,
          2, 0, 0, 0, 0, 0, 0, 0,
          0, 0, 0, 0 },
    },
    {
        .func = (const void *)&pcref_MimeJrTopDance_Routine3,
        .unk04 = { 150, 0, 0, 0, 3, 0, 0, 0,
          5, 0, 0, 0, 2, 0, 0, 0,
          1, 0, 0, 0, 0, 0, 0, 0,
          1, 0, 0, 0, 0, 0, 0, 0,
          0, 0, 0, 0 },
    },
    {
        .func = (const void *)&pcref_MimeJrTopDance_Routine4,
        .unk04 = { 150, 0, 0, 0, 3, 0, 0, 0,
          5, 0, 0, 0, 2, 0, 0, 0,
          1, 0, 0, 0, 0, 0, 0, 0,
          2, 0, 0, 0, 0, 0, 0, 0,
          0, 0, 0, 0 },
    },
    {
        .func = (const void *)&pcref_MimeJrTopDance_Routine5,
        .unk04 = { 150, 0, 0, 0, 3, 0, 0, 0,
          5, 0, 0, 0, 2, 0, 0, 0,
          1, 0, 0, 0, 0, 0, 0, 0,
          2, 0, 0, 0, 0, 0, 0, 0,
          0, 0, 0, 0 },
    },
};
