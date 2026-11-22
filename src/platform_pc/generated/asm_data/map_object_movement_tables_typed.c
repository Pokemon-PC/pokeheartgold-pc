/* Generated from asm/map_object_movement_tables.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(AlternatingSpinMovement_Init);
PCREF(AlternatingSpinMovement_Update);
PCREF(BackAndForthMovement_Init);
PCREF(BackAndForthMovement_Update);
PCREF(FaceDirectionMovement_InitDown);
PCREF(FaceDirectionMovement_InitLeft);
PCREF(FaceDirectionMovement_InitRight);
PCREF(FaceDirectionMovement_InitUp);
PCREF(FaceDirectionMovement_Update);
PCREF(FollowPartnerMovement_Delete);
PCREF(FollowPartnerMovement_Init);
PCREF(FollowPartnerMovement_Resume);
PCREF(FollowPartnerMovement_Update);
PCREF(FollowPlayerMovement_Delete);
PCREF(FollowPlayerMovement_Init);
PCREF(FollowPlayerMovement_Update);
PCREF(FollowPlayerMovement_UpdateFollowMon);
PCREF(FollowPlayerMovement_UpdateMirror);
PCREF(HiddenObjectMovement_Delete);
PCREF(HiddenObjectMovement_InitCover0);
PCREF(HiddenObjectMovement_InitCover1);
PCREF(HiddenObjectMovement_InitCover2);
PCREF(HiddenObjectMovement_InitCover3);
PCREF(HiddenObjectMovement_Resume);
PCREF(HiddenObjectMovement_Update);
PCREF(MapObjectMovement_NoOpDelete);
PCREF(MapObjectMovement_NoOpInit);
PCREF(MapObjectMovement_NoOpRestore);
PCREF(MapObjectMovement_NoOpUpdate);
PCREF(PathMovement_InitEastNorthSouthWest);
PCREF(PathMovement_InitEastNorthWestSouth);
PCREF(PathMovement_InitEastSouthNorthWest);
PCREF(PathMovement_InitEastSouthWestNorth);
PCREF(PathMovement_InitEastWestNorthSouth);
PCREF(PathMovement_InitEastWestSouthNorth);
PCREF(PathMovement_InitNorthEastSouthWest);
PCREF(PathMovement_InitNorthEastWestSouth);
PCREF(PathMovement_InitNorthSouthEastWest);
PCREF(PathMovement_InitNorthSouthWestEast);
PCREF(PathMovement_InitNorthWestSouthEast);
PCREF(PathMovement_InitSouthEastNorthWest);
PCREF(PathMovement_InitSouthEastWestNorth);
PCREF(PathMovement_InitSouthNorthEastWest);
PCREF(PathMovement_InitSouthNorthWestEast);
PCREF(PathMovement_InitSouthWestEastNorth);
PCREF(PathMovement_InitSouthWestNorthEast);
PCREF(PathMovement_InitWestEastNorthSouth);
PCREF(PathMovement_InitWestEastSouthNorth);
PCREF(PathMovement_InitWestEastSouthNorth2);
PCREF(PathMovement_InitWestNorthEastSouth);
PCREF(PathMovement_InitWestNorthSouthEast);
PCREF(PathMovement_InitWestSouthEastNorth);
PCREF(PathMovement_InitWestSouthNorthEast);
PCREF(PathMovement_Update);
PCREF(RandomLookMovement_Delete);
PCREF(RandomLookMovement_InitAnyDirection);
PCREF(RandomLookMovement_InitDownLeft);
PCREF(RandomLookMovement_InitDownLeftRight);
PCREF(RandomLookMovement_InitDownRight);
PCREF(RandomLookMovement_InitLeftRight);
PCREF(RandomLookMovement_InitUpDown);
PCREF(RandomLookMovement_InitUpDownLeft);
PCREF(RandomLookMovement_InitUpDownRight);
PCREF(RandomLookMovement_InitUpLeft);
PCREF(RandomLookMovement_InitUpLeftRight);
PCREF(RandomLookMovement_InitUpRight);
PCREF(RandomLookMovement_Update);
PCREF(RandomWalkMovement_InitAnyDirection);
PCREF(RandomWalkMovement_InitLeftRight);
PCREF(RandomWalkMovement_InitUpDown);
PCREF(RandomWalkMovement_Update);
PCREF(SpinMovement_InitClockwise);
PCREF(SpinMovement_InitCounterclockwise);
PCREF(SpinMovement_Update);
PCREF(gMovementCmdSteps_000);
PCREF(gMovementCmdSteps_001);
PCREF(gMovementCmdSteps_002);
PCREF(gMovementCmdSteps_003);
PCREF(gMovementCmdSteps_004);
PCREF(gMovementCmdSteps_005);
PCREF(gMovementCmdSteps_006);
PCREF(gMovementCmdSteps_007);
PCREF(gMovementCmdSteps_008);
PCREF(gMovementCmdSteps_009);
PCREF(gMovementCmdSteps_010);
PCREF(gMovementCmdSteps_011);
PCREF(gMovementCmdSteps_012);
PCREF(gMovementCmdSteps_013);
PCREF(gMovementCmdSteps_014);
PCREF(gMovementCmdSteps_015);
PCREF(gMovementCmdSteps_016);
PCREF(gMovementCmdSteps_017);
PCREF(gMovementCmdSteps_018);
PCREF(gMovementCmdSteps_019);
PCREF(gMovementCmdSteps_020);
PCREF(gMovementCmdSteps_021);
PCREF(gMovementCmdSteps_022);
PCREF(gMovementCmdSteps_023);
PCREF(gMovementCmdSteps_024);
PCREF(gMovementCmdSteps_025);
PCREF(gMovementCmdSteps_026);
PCREF(gMovementCmdSteps_027);
PCREF(gMovementCmdSteps_028);
PCREF(gMovementCmdSteps_029);
PCREF(gMovementCmdSteps_030);
PCREF(gMovementCmdSteps_031);
PCREF(gMovementCmdSteps_032);
PCREF(gMovementCmdSteps_033);
PCREF(gMovementCmdSteps_034);
PCREF(gMovementCmdSteps_035);
PCREF(gMovementCmdSteps_036);
PCREF(gMovementCmdSteps_037);
PCREF(gMovementCmdSteps_038);
PCREF(gMovementCmdSteps_039);
PCREF(gMovementCmdSteps_040);
PCREF(gMovementCmdSteps_041);
PCREF(gMovementCmdSteps_042);
PCREF(gMovementCmdSteps_043);
PCREF(gMovementCmdSteps_044);
PCREF(gMovementCmdSteps_045);
PCREF(gMovementCmdSteps_046);
PCREF(gMovementCmdSteps_047);
PCREF(gMovementCmdSteps_048);
PCREF(gMovementCmdSteps_049);
PCREF(gMovementCmdSteps_050);
PCREF(gMovementCmdSteps_051);
PCREF(gMovementCmdSteps_052);
PCREF(gMovementCmdSteps_053);
PCREF(gMovementCmdSteps_054);
PCREF(gMovementCmdSteps_055);
PCREF(gMovementCmdSteps_056);
PCREF(gMovementCmdSteps_057);
PCREF(gMovementCmdSteps_058);
PCREF(gMovementCmdSteps_059);
PCREF(gMovementCmdSteps_060);
PCREF(gMovementCmdSteps_061);
PCREF(gMovementCmdSteps_062);
PCREF(gMovementCmdSteps_063);
PCREF(gMovementCmdSteps_064);
PCREF(gMovementCmdSteps_065);
PCREF(gMovementCmdSteps_066);
PCREF(gMovementCmdSteps_067);
PCREF(gMovementCmdSteps_068);
PCREF(gMovementCmdSteps_069);
PCREF(gMovementCmdSteps_070);
PCREF(gMovementCmdSteps_071);
PCREF(gMovementCmdSteps_072);
PCREF(gMovementCmdSteps_073);
PCREF(gMovementCmdSteps_074);
PCREF(gMovementCmdSteps_075);
PCREF(gMovementCmdSteps_076);
PCREF(gMovementCmdSteps_077);
PCREF(gMovementCmdSteps_078);
PCREF(gMovementCmdSteps_079);
PCREF(gMovementCmdSteps_080);
PCREF(gMovementCmdSteps_081);
PCREF(gMovementCmdSteps_082);
PCREF(gMovementCmdSteps_083);
PCREF(gMovementCmdSteps_084);
PCREF(gMovementCmdSteps_085);
PCREF(gMovementCmdSteps_086);
PCREF(gMovementCmdSteps_087);
PCREF(gMovementCmdSteps_088);
PCREF(gMovementCmdSteps_089);
PCREF(gMovementCmdSteps_090);
PCREF(gMovementCmdSteps_091);
PCREF(gMovementCmdSteps_092);
PCREF(gMovementCmdSteps_093);
PCREF(gMovementCmdSteps_094);
PCREF(gMovementCmdSteps_095);
PCREF(gMovementCmdSteps_096);
PCREF(gMovementCmdSteps_097);
PCREF(gMovementCmdSteps_098);
PCREF(gMovementCmdSteps_099);
PCREF(gMovementCmdSteps_100);
PCREF(gMovementCmdSteps_101);
PCREF(gMovementCmdSteps_102);
PCREF(gMovementCmdSteps_103);
PCREF(gMovementCmdSteps_104);
PCREF(gMovementCmdSteps_105);
PCREF(gMovementCmdSteps_106);
PCREF(gMovementCmdSteps_107);
PCREF(gMovementCmdSteps_108);
PCREF(gMovementCmdSteps_109);
PCREF(gMovementCmdSteps_110);
PCREF(gMovementCmdSteps_111);
PCREF(gMovementCmdSteps_112);
PCREF(sFaceMovements);
PCREF(sJumpFarMovements);
PCREF(sJumpFartherMovements);
PCREF(sJumpNearFastMovements);
PCREF(sJumpNearSlowMovements);
PCREF(sJumpOnSpotFastMovements);
PCREF(sJumpOnSpotSlowMovements);
PCREF(sRunMovements);
PCREF(sWalkEverSoSlightlyFastMovements);
PCREF(sWalkFastMovements);
PCREF(sWalkFasterMovements);
PCREF(sWalkFastestMovements);
PCREF(sWalkNormalMovements);
PCREF(sWalkOnSpotFastMovements);
PCREF(sWalkOnSpotFasterMovements);
PCREF(sWalkOnSpotNormalMovements);
PCREF(sWalkOnSpotSlowMovements);
PCREF(sWalkOnSpotSlowerMovements);
PCREF(sWalkSlightlyFastMovements);
PCREF(sWalkSlightlyFasterMovements);
PCREF(sWalkSlowMovements);
PCREF(sWalkSlowerMovements);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    uint32_t unk0;
    const void * init;
    const void * update;
    const void * delete;
    const void * restore;
} pcm_MapObjectMovementCallbacks_0;

extern const pcm_MapObjectMovementCallbacks_0 sHiddenObjectCover1MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sPathTable15MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sHiddenObjectCover3MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sFollowPlayer55MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sPathTable14MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sHiddenObjectCover2MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sSpinClockwiseMovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sHiddenObjectCover0MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sPathTable19MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sFollowPlayer56MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sPathTable20MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sPathTable21MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sPathTable22MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sPathTable23MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sPathTable25MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sPathTable26MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sPathTable27MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sPathTable28MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sPathTable29MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sPathTable30MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sNoMovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sPlayerMovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sPathTable31MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sPathTable24MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sPathTable32MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sRandomWalkLeftRightMovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sPathTable33MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sPathTable34MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sRandomLookDownLeftMovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sPathTable18MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sPathTable17MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sPathTable16MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sRandomLookDownRightMovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sPathTable35MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sBackAndForthMovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sAlternatingSpinMovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sPathTable36MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sSpinCounterclockwiseMovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sFaceDirectionRightMovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sFaceDirectionLeftMovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sRandomLookDownLeftRightMovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sPathTable37MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sRandomLookUpDownMovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sRandomLookLeftRightMovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sFollowPlayer48MovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sRandomLookUpLeftRightMovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sRandomLookUpDownRightMovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sRandomLookUpDownLeftMovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sFaceDirectionUpMovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sFaceDirectionDownMovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sRandomLookUpRightMovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sRandomLookUpLeftMovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sFollowPartnerMovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sRandomWalkUpDownMovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sRandomWalkAnyDirectionMovementCallbacks[1];
extern const pcm_MapObjectMovementCallbacks_0 sRandomLookAnyDirectionMovementCallbacks[1];
extern const const void * gMovementsByDirection[23];
extern const const void * gMapObjectMovementCallbacks[57];
extern const const void * gMovementCmdTable[113];

const pcm_MapObjectMovementCallbacks_0 sHiddenObjectCover1MovementCallbacks[1] = {
    {
        .unk0 = 52,
        .init = (const void *)&pcref_HiddenObjectMovement_InitCover1,
        .update = (const void *)&pcref_HiddenObjectMovement_Update,
        .delete = (const void *)&pcref_HiddenObjectMovement_Delete,
        .restore = (const void *)&pcref_HiddenObjectMovement_Resume,
    },
};

const pcm_MapObjectMovementCallbacks_0 sPathTable15MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_PathMovement_InitEastWestSouthNorth,
        .update = (const void *)&pcref_PathMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sHiddenObjectCover3MovementCallbacks[1] = {
    {
        .unk0 = 54,
        .init = (const void *)&pcref_HiddenObjectMovement_InitCover3,
        .update = (const void *)&pcref_HiddenObjectMovement_Update,
        .delete = (const void *)&pcref_HiddenObjectMovement_Delete,
        .restore = (const void *)&pcref_HiddenObjectMovement_Resume,
    },
};

const pcm_MapObjectMovementCallbacks_0 sFollowPlayer55MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_FollowPlayerMovement_Init,
        .update = (const void *)&pcref_FollowPlayerMovement_Update,
        .delete = (const void *)&pcref_FollowPlayerMovement_Delete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sPathTable14MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_PathMovement_InitNorthEastWestSouth,
        .update = (const void *)&pcref_PathMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sHiddenObjectCover2MovementCallbacks[1] = {
    {
        .unk0 = 53,
        .init = (const void *)&pcref_HiddenObjectMovement_InitCover2,
        .update = (const void *)&pcref_HiddenObjectMovement_Update,
        .delete = (const void *)&pcref_HiddenObjectMovement_Delete,
        .restore = (const void *)&pcref_HiddenObjectMovement_Resume,
    },
};

const pcm_MapObjectMovementCallbacks_0 sSpinClockwiseMovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_SpinMovement_InitClockwise,
        .update = (const void *)&pcref_SpinMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sHiddenObjectCover0MovementCallbacks[1] = {
    {
        .unk0 = 51,
        .init = (const void *)&pcref_HiddenObjectMovement_InitCover0,
        .update = (const void *)&pcref_HiddenObjectMovement_Update,
        .delete = (const void *)&pcref_HiddenObjectMovement_Delete,
        .restore = (const void *)&pcref_HiddenObjectMovement_Resume,
    },
};

const pcm_MapObjectMovementCallbacks_0 sPathTable19MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_PathMovement_InitWestEastSouthNorth2,
        .update = (const void *)&pcref_PathMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sFollowPlayer56MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_FollowPlayerMovement_Init,
        .update = (const void *)&pcref_FollowPlayerMovement_UpdateMirror,
        .delete = (const void *)&pcref_FollowPlayerMovement_Delete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sPathTable20MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_PathMovement_InitSouthNorthWestEast,
        .update = (const void *)&pcref_PathMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sPathTable21MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_PathMovement_InitEastSouthNorthWest,
        .update = (const void *)&pcref_PathMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sPathTable22MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_PathMovement_InitWestNorthSouthEast,
        .update = (const void *)&pcref_PathMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sPathTable23MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_PathMovement_InitNorthSouthEastWest,
        .update = (const void *)&pcref_PathMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sPathTable25MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_PathMovement_InitSouthEastWestNorth,
        .update = (const void *)&pcref_PathMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sPathTable26MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_PathMovement_InitEastNorthSouthWest,
        .update = (const void *)&pcref_PathMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sPathTable27MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_PathMovement_InitNorthSouthWestEast,
        .update = (const void *)&pcref_PathMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sPathTable28MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_PathMovement_InitWestEastNorthSouth,
        .update = (const void *)&pcref_PathMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sPathTable29MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_PathMovement_InitSouthWestEastNorth,
        .update = (const void *)&pcref_PathMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sPathTable30MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_PathMovement_InitNorthWestSouthEast,
        .update = (const void *)&pcref_PathMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sNoMovementCallbacks[1] = {
    {
        .unk0 = 0,
        .init = (const void *)&pcref_MapObjectMovement_NoOpInit,
        .update = (const void *)&pcref_MapObjectMovement_NoOpUpdate,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sPlayerMovementCallbacks[1] = {
    {
        .unk0 = 1,
        .init = (const void *)&pcref_MapObjectMovement_NoOpInit,
        .update = (const void *)&pcref_MapObjectMovement_NoOpUpdate,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sPathTable31MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_PathMovement_InitSouthEastNorthWest,
        .update = (const void *)&pcref_PathMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sPathTable24MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_PathMovement_InitEastWestNorthSouth,
        .update = (const void *)&pcref_PathMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sPathTable32MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_PathMovement_InitWestSouthEastNorth,
        .update = (const void *)&pcref_PathMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sRandomWalkLeftRightMovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_RandomWalkMovement_InitLeftRight,
        .update = (const void *)&pcref_RandomWalkMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sPathTable33MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_PathMovement_InitEastNorthWestSouth,
        .update = (const void *)&pcref_PathMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sPathTable34MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_PathMovement_InitNorthEastSouthWest,
        .update = (const void *)&pcref_PathMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sRandomLookDownLeftMovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_RandomLookMovement_InitDownLeft,
        .update = (const void *)&pcref_RandomLookMovement_Update,
        .delete = (const void *)&pcref_RandomLookMovement_Delete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sPathTable18MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_PathMovement_InitWestEastSouthNorth,
        .update = (const void *)&pcref_PathMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sPathTable17MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_PathMovement_InitWestSouthNorthEast,
        .update = (const void *)&pcref_PathMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sPathTable16MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_PathMovement_InitSouthNorthEastWest,
        .update = (const void *)&pcref_PathMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sRandomLookDownRightMovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_RandomLookMovement_InitDownRight,
        .update = (const void *)&pcref_RandomLookMovement_Update,
        .delete = (const void *)&pcref_RandomLookMovement_Delete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sPathTable35MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_PathMovement_InitSouthWestNorthEast,
        .update = (const void *)&pcref_PathMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sBackAndForthMovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_BackAndForthMovement_Init,
        .update = (const void *)&pcref_BackAndForthMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sAlternatingSpinMovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_AlternatingSpinMovement_Init,
        .update = (const void *)&pcref_AlternatingSpinMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sPathTable36MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_PathMovement_InitWestNorthEastSouth,
        .update = (const void *)&pcref_PathMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sSpinCounterclockwiseMovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_SpinMovement_InitCounterclockwise,
        .update = (const void *)&pcref_SpinMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sFaceDirectionRightMovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_FaceDirectionMovement_InitRight,
        .update = (const void *)&pcref_FaceDirectionMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sFaceDirectionLeftMovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_FaceDirectionMovement_InitLeft,
        .update = (const void *)&pcref_FaceDirectionMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sRandomLookDownLeftRightMovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_RandomLookMovement_InitDownLeftRight,
        .update = (const void *)&pcref_RandomLookMovement_Update,
        .delete = (const void *)&pcref_RandomLookMovement_Delete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sPathTable37MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_PathMovement_InitEastSouthWestNorth,
        .update = (const void *)&pcref_PathMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sRandomLookUpDownMovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_RandomLookMovement_InitUpDown,
        .update = (const void *)&pcref_RandomLookMovement_Update,
        .delete = (const void *)&pcref_RandomLookMovement_Delete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sRandomLookLeftRightMovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_RandomLookMovement_InitLeftRight,
        .update = (const void *)&pcref_RandomLookMovement_Update,
        .delete = (const void *)&pcref_RandomLookMovement_Delete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sFollowPlayer48MovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_FollowPlayerMovement_Init,
        .update = (const void *)&pcref_FollowPlayerMovement_UpdateFollowMon,
        .delete = (const void *)&pcref_FollowPlayerMovement_Delete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sRandomLookUpLeftRightMovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_RandomLookMovement_InitUpLeftRight,
        .update = (const void *)&pcref_RandomLookMovement_Update,
        .delete = (const void *)&pcref_RandomLookMovement_Delete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sRandomLookUpDownRightMovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_RandomLookMovement_InitUpDownRight,
        .update = (const void *)&pcref_RandomLookMovement_Update,
        .delete = (const void *)&pcref_RandomLookMovement_Delete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sRandomLookUpDownLeftMovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_RandomLookMovement_InitUpDownLeft,
        .update = (const void *)&pcref_RandomLookMovement_Update,
        .delete = (const void *)&pcref_RandomLookMovement_Delete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sFaceDirectionUpMovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_FaceDirectionMovement_InitUp,
        .update = (const void *)&pcref_FaceDirectionMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sFaceDirectionDownMovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_FaceDirectionMovement_InitDown,
        .update = (const void *)&pcref_FaceDirectionMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sRandomLookUpRightMovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_RandomLookMovement_InitUpRight,
        .update = (const void *)&pcref_RandomLookMovement_Update,
        .delete = (const void *)&pcref_RandomLookMovement_Delete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sRandomLookUpLeftMovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_RandomLookMovement_InitUpLeft,
        .update = (const void *)&pcref_RandomLookMovement_Update,
        .delete = (const void *)&pcref_RandomLookMovement_Delete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sFollowPartnerMovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_FollowPartnerMovement_Init,
        .update = (const void *)&pcref_FollowPartnerMovement_Update,
        .delete = (const void *)&pcref_FollowPartnerMovement_Delete,
        .restore = (const void *)&pcref_FollowPartnerMovement_Resume,
    },
};

const pcm_MapObjectMovementCallbacks_0 sRandomWalkUpDownMovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_RandomWalkMovement_InitUpDown,
        .update = (const void *)&pcref_RandomWalkMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sRandomWalkAnyDirectionMovementCallbacks[1] = {
    {
        .unk0 = 3,
        .init = (const void *)&pcref_RandomWalkMovement_InitAnyDirection,
        .update = (const void *)&pcref_RandomWalkMovement_Update,
        .delete = (const void *)&pcref_MapObjectMovement_NoOpDelete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const pcm_MapObjectMovementCallbacks_0 sRandomLookAnyDirectionMovementCallbacks[1] = {
    {
        .unk0 = 2,
        .init = (const void *)&pcref_RandomLookMovement_InitAnyDirection,
        .update = (const void *)&pcref_RandomLookMovement_Update,
        .delete = (const void *)&pcref_RandomLookMovement_Delete,
        .restore = (const void *)&pcref_MapObjectMovement_NoOpRestore,
    },
};

const const void * gMovementsByDirection[23] = { (const void *)&pcref_sFaceMovements, (const void *)&pcref_sWalkSlowerMovements, (const void *)&pcref_sWalkSlowMovements, (const void *)&pcref_sWalkNormalMovements, (const void *)&pcref_sWalkFastMovements, (const void *)&pcref_sWalkFasterMovements, (const void *)&pcref_sWalkOnSpotSlowerMovements, (const void *)&pcref_sWalkOnSpotSlowMovements,
  (const void *)&pcref_sWalkOnSpotNormalMovements, (const void *)&pcref_sWalkOnSpotFastMovements, (const void *)&pcref_sWalkOnSpotFasterMovements, (const void *)&pcref_sJumpOnSpotSlowMovements, (const void *)&pcref_sJumpOnSpotFastMovements, (const void *)&pcref_sJumpNearFastMovements, (const void *)&pcref_sJumpFarMovements, (const void *)&pcref_sWalkSlightlyFastMovements,
  (const void *)&pcref_sWalkSlightlyFasterMovements, (const void *)&pcref_sWalkFastestMovements, (const void *)&pcref_sRunMovements, (const void *)&pcref_sJumpNearSlowMovements, (const void *)&pcref_sJumpFartherMovements, (const void *)&pcref_sWalkEverSoSlightlyFastMovements, NULL };

const const void * gMapObjectMovementCallbacks[57] = { (const void *)&sNoMovementCallbacks, (const void *)&sPlayerMovementCallbacks, (const void *)&sRandomLookAnyDirectionMovementCallbacks, (const void *)&sRandomWalkAnyDirectionMovementCallbacks, (const void *)&sRandomWalkUpDownMovementCallbacks, (const void *)&sRandomWalkLeftRightMovementCallbacks, (const void *)&sRandomLookUpLeftMovementCallbacks, (const void *)&sRandomLookUpRightMovementCallbacks,
  (const void *)&sRandomLookDownLeftMovementCallbacks, (const void *)&sRandomLookDownRightMovementCallbacks, (const void *)&sRandomLookUpDownLeftMovementCallbacks, (const void *)&sRandomLookUpDownRightMovementCallbacks, (const void *)&sRandomLookUpLeftRightMovementCallbacks, (const void *)&sRandomLookDownLeftRightMovementCallbacks, (const void *)&sFaceDirectionUpMovementCallbacks, (const void *)&sFaceDirectionDownMovementCallbacks,
  (const void *)&sFaceDirectionLeftMovementCallbacks, (const void *)&sFaceDirectionRightMovementCallbacks, (const void *)&sSpinCounterclockwiseMovementCallbacks, (const void *)&sSpinClockwiseMovementCallbacks, (const void *)&sBackAndForthMovementCallbacks, (const void *)&sPathTable14MovementCallbacks, (const void *)&sPathTable15MovementCallbacks, (const void *)&sPathTable16MovementCallbacks,
  (const void *)&sPathTable17MovementCallbacks, (const void *)&sPathTable18MovementCallbacks, (const void *)&sPathTable19MovementCallbacks, (const void *)&sPathTable20MovementCallbacks, (const void *)&sPathTable21MovementCallbacks, (const void *)&sPathTable22MovementCallbacks, (const void *)&sPathTable23MovementCallbacks, (const void *)&sPathTable24MovementCallbacks,
  (const void *)&sPathTable25MovementCallbacks, (const void *)&sPathTable26MovementCallbacks, (const void *)&sPathTable27MovementCallbacks, (const void *)&sPathTable28MovementCallbacks, (const void *)&sPathTable29MovementCallbacks, (const void *)&sPathTable30MovementCallbacks, (const void *)&sPathTable31MovementCallbacks, (const void *)&sPathTable32MovementCallbacks,
  (const void *)&sPathTable33MovementCallbacks, (const void *)&sPathTable34MovementCallbacks, (const void *)&sPathTable35MovementCallbacks, (const void *)&sPathTable36MovementCallbacks, (const void *)&sPathTable37MovementCallbacks, (const void *)&sRandomLookUpDownMovementCallbacks, (const void *)&sRandomLookLeftRightMovementCallbacks, NULL,
  (const void *)&sFollowPlayer48MovementCallbacks, (const void *)&sAlternatingSpinMovementCallbacks, (const void *)&sFollowPartnerMovementCallbacks, (const void *)&sHiddenObjectCover0MovementCallbacks, (const void *)&sHiddenObjectCover1MovementCallbacks, (const void *)&sHiddenObjectCover2MovementCallbacks, (const void *)&sHiddenObjectCover3MovementCallbacks, (const void *)&sFollowPlayer55MovementCallbacks,
  (const void *)&sFollowPlayer56MovementCallbacks };

const const void * gMovementCmdTable[113] = { (const void *)&pcref_gMovementCmdSteps_000, (const void *)&pcref_gMovementCmdSteps_001, (const void *)&pcref_gMovementCmdSteps_002, (const void *)&pcref_gMovementCmdSteps_003, (const void *)&pcref_gMovementCmdSteps_004, (const void *)&pcref_gMovementCmdSteps_005, (const void *)&pcref_gMovementCmdSteps_006, (const void *)&pcref_gMovementCmdSteps_007,
  (const void *)&pcref_gMovementCmdSteps_008, (const void *)&pcref_gMovementCmdSteps_009, (const void *)&pcref_gMovementCmdSteps_010, (const void *)&pcref_gMovementCmdSteps_011, (const void *)&pcref_gMovementCmdSteps_012, (const void *)&pcref_gMovementCmdSteps_013, (const void *)&pcref_gMovementCmdSteps_014, (const void *)&pcref_gMovementCmdSteps_015,
  (const void *)&pcref_gMovementCmdSteps_016, (const void *)&pcref_gMovementCmdSteps_017, (const void *)&pcref_gMovementCmdSteps_018, (const void *)&pcref_gMovementCmdSteps_019, (const void *)&pcref_gMovementCmdSteps_020, (const void *)&pcref_gMovementCmdSteps_021, (const void *)&pcref_gMovementCmdSteps_022, (const void *)&pcref_gMovementCmdSteps_023,
  (const void *)&pcref_gMovementCmdSteps_024, (const void *)&pcref_gMovementCmdSteps_025, (const void *)&pcref_gMovementCmdSteps_026, (const void *)&pcref_gMovementCmdSteps_027, (const void *)&pcref_gMovementCmdSteps_028, (const void *)&pcref_gMovementCmdSteps_029, (const void *)&pcref_gMovementCmdSteps_030, (const void *)&pcref_gMovementCmdSteps_031,
  (const void *)&pcref_gMovementCmdSteps_032, (const void *)&pcref_gMovementCmdSteps_033, (const void *)&pcref_gMovementCmdSteps_034, (const void *)&pcref_gMovementCmdSteps_035, (const void *)&pcref_gMovementCmdSteps_036, (const void *)&pcref_gMovementCmdSteps_037, (const void *)&pcref_gMovementCmdSteps_038, (const void *)&pcref_gMovementCmdSteps_039,
  (const void *)&pcref_gMovementCmdSteps_040, (const void *)&pcref_gMovementCmdSteps_041, (const void *)&pcref_gMovementCmdSteps_042, (const void *)&pcref_gMovementCmdSteps_043, (const void *)&pcref_gMovementCmdSteps_044, (const void *)&pcref_gMovementCmdSteps_045, (const void *)&pcref_gMovementCmdSteps_046, (const void *)&pcref_gMovementCmdSteps_047,
  (const void *)&pcref_gMovementCmdSteps_048, (const void *)&pcref_gMovementCmdSteps_049, (const void *)&pcref_gMovementCmdSteps_050, (const void *)&pcref_gMovementCmdSteps_051, (const void *)&pcref_gMovementCmdSteps_052, (const void *)&pcref_gMovementCmdSteps_053, (const void *)&pcref_gMovementCmdSteps_054, (const void *)&pcref_gMovementCmdSteps_055,
  (const void *)&pcref_gMovementCmdSteps_056, (const void *)&pcref_gMovementCmdSteps_057, (const void *)&pcref_gMovementCmdSteps_058, (const void *)&pcref_gMovementCmdSteps_059, (const void *)&pcref_gMovementCmdSteps_060, (const void *)&pcref_gMovementCmdSteps_061, (const void *)&pcref_gMovementCmdSteps_062, (const void *)&pcref_gMovementCmdSteps_063,
  (const void *)&pcref_gMovementCmdSteps_064, (const void *)&pcref_gMovementCmdSteps_065, (const void *)&pcref_gMovementCmdSteps_066, (const void *)&pcref_gMovementCmdSteps_067, (const void *)&pcref_gMovementCmdSteps_068, (const void *)&pcref_gMovementCmdSteps_069, (const void *)&pcref_gMovementCmdSteps_070, (const void *)&pcref_gMovementCmdSteps_071,
  (const void *)&pcref_gMovementCmdSteps_072, (const void *)&pcref_gMovementCmdSteps_073, (const void *)&pcref_gMovementCmdSteps_074, (const void *)&pcref_gMovementCmdSteps_075, (const void *)&pcref_gMovementCmdSteps_076, (const void *)&pcref_gMovementCmdSteps_077, (const void *)&pcref_gMovementCmdSteps_078, (const void *)&pcref_gMovementCmdSteps_079,
  (const void *)&pcref_gMovementCmdSteps_080, (const void *)&pcref_gMovementCmdSteps_081, (const void *)&pcref_gMovementCmdSteps_082, (const void *)&pcref_gMovementCmdSteps_083, (const void *)&pcref_gMovementCmdSteps_084, (const void *)&pcref_gMovementCmdSteps_085, (const void *)&pcref_gMovementCmdSteps_086, (const void *)&pcref_gMovementCmdSteps_087,
  (const void *)&pcref_gMovementCmdSteps_088, (const void *)&pcref_gMovementCmdSteps_089, (const void *)&pcref_gMovementCmdSteps_090, (const void *)&pcref_gMovementCmdSteps_091, (const void *)&pcref_gMovementCmdSteps_092, (const void *)&pcref_gMovementCmdSteps_093, (const void *)&pcref_gMovementCmdSteps_094, (const void *)&pcref_gMovementCmdSteps_095,
  (const void *)&pcref_gMovementCmdSteps_096, (const void *)&pcref_gMovementCmdSteps_097, (const void *)&pcref_gMovementCmdSteps_098, (const void *)&pcref_gMovementCmdSteps_099, (const void *)&pcref_gMovementCmdSteps_100, (const void *)&pcref_gMovementCmdSteps_101, (const void *)&pcref_gMovementCmdSteps_102, (const void *)&pcref_gMovementCmdSteps_103,
  (const void *)&pcref_gMovementCmdSteps_104, (const void *)&pcref_gMovementCmdSteps_105, (const void *)&pcref_gMovementCmdSteps_106, (const void *)&pcref_gMovementCmdSteps_107, (const void *)&pcref_gMovementCmdSteps_108, (const void *)&pcref_gMovementCmdSteps_109, (const void *)&pcref_gMovementCmdSteps_110, (const void *)&pcref_gMovementCmdSteps_111,
  (const void *)&pcref_gMovementCmdSteps_112 };
