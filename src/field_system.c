#include "field_system.h"

#include "constants/field/map_load.h"
#include "constants/maps.h"
#include "constants/scrcmd.h"
#include "constants/sndseq.h"

#include "field/field_control.h"
#include "field/signpost.h"

#include "field_warp_tasks.h"
#include "main.h"
#include "map_events.h"
#ifdef PLATFORM_PC
#include "map_matrix.h"
#else
#endif
#include "math_util.h"
#include "player_avatar_actions.h"
#include "field/bottom_screen_app.h"
#include "overlay_124.h"
#include "overlay_35.h"
#include "overlay_manager.h"
#include "poke_overlay.h"
#include "system.h"
#include "communication_core.h"
#include "comm_player_manager.h"
#include "player_avatar_movement.h"
#include "pokedex_resume_state.h"
#include "gear_phone_ring_manager.h"

FS_EXTERN_OVERLAY(intro_title);
FS_EXTERN_OVERLAY(OVY_124);
FS_EXTERN_OVERLAY(field);

const OverlayManagerTemplate gApplication_NewGameFieldsys = {
    .init = Field_NewGame_AppInit,
    .exec = Field_AppExec,
    .exit = Field_AppExit,
    .ovy_id = FS_OVERLAY_ID_NONE
};

const OverlayManagerTemplate gApplication_ContinueFieldsys = {
    .init = Field_Continue_AppInit,
    .exec = Field_AppExec,
    .exit = Field_AppExit,
    .ovy_id = FS_OVERLAY_ID_NONE
};

static FieldSystem *sFieldSysPtr;

#ifdef PLATFORM_PC
// For the PC test hooks (PHG_TEST_SAVE_AT, src/platform_pc/nitro/nitro_pc.c).
FieldSystem *pc_test_field_system(void) {
    return sFieldSysPtr;
}

// PHG_TEST_MAP: ASCII map around the player for scripted navigation tests.
//   @ player  # blocked  . free  G tall grass  D door/warp  ~ water
//   v ^ < > ledge (jump direction)  o map object (NPC, item, sign...)  P PC
BOOL FieldSystem_CheckTileCollision(FieldSystem *fieldSystem, int x, int z);
u8 GetMetatileBehavior(FieldSystem *fieldSystem, int x, int z);
BOOL MetatileBehavior_IsTallGrass(u8 tile);
BOOL MetatileBehavior_CanGenerateWalkingEncounters(u8 tile);
BOOL MetatileBehavior_IsPC(u8 tile);
BOOL MetatileBehavior_IsDoor(u8 tile);
BOOL MetatileBehavior_IsSurfableWater(u8 tile);
BOOL MetatileBehavior_IsJumpNorth(u8 tile);
BOOL MetatileBehavior_IsJumpSouth(u8 tile);
BOOL MetatileBehavior_IsJumpWest(u8 tile);
BOOL MetatileBehavior_IsJumpEast(u8 tile);
BOOL MetatileBehavior_IsWarpEast(u8 tile);
BOOL MetatileBehavior_IsWarpWest(u8 tile);
BOOL MetatileBehavior_IsWarpNorth(u8 tile);
BOOL MetatileBehavior_IsWarpSouth(u8 tile);
LocalMapObject *MapObjectManager_GetFirstObjectWithXAndZ(MapObjectManager *manager, u32 x, u32 z, BOOL checkPrevious);
void pc_log(const char *fmt, ...);

// Test hook PHG_TEST_PARTY_LEVEL=N[+]: puts every party Pokémon at level N
// ("+": one experience point before N+1)
// (experience, stats, moves learned up to N) and heals it. Test aid only.
#include "party.h"
#include "pokemon.h"
void InitBoxMonMoveset(BoxPokemon *boxMon);
// almostNext: experience one point short of level+1 (the next win levels up).
void pc_test_set_party_level(int level, BOOL almostNext) {
    if (sFieldSysPtr == NULL || level < 1 || level > 100) {
        return;
    }
    Party *party = SaveArray_Party_Get(sFieldSysPtr->saveData);
    for (int i = 0; i < Party_GetCount(party); i++) {
        Pokemon *mon = Party_GetMonByIndex(party, i);
        if (GetMonData(mon, MON_DATA_IS_EGG, NULL)) {
            continue;
        }
        u32 species = GetMonData(mon, MON_DATA_SPECIES, NULL);
        u32 exp = almostNext && level < 100 ? GetMonExpBySpeciesAndLevel(species, level + 1) - 1
                                            : GetMonExpBySpeciesAndLevel(species, level);
        SetMonData(mon, MON_DATA_EXPERIENCE, &exp);
        CalcMonLevelAndStats(mon);
        InitBoxMonMoveset(Mon_GetBoxMon(mon));
        u32 hp = GetMonData(mon, MON_DATA_MAX_HP, NULL);
        SetMonData(mon, MON_DATA_HP, &hp);
        pc_log("test: party slot %d (species %u) set to level %d", i, (unsigned)species, level);
    }
}

// Test hook PHG_TEST_EGG_READY=1: party eggs at 0 remaining cycles and the
// step counter just before the end of a cycle: hatches within a few steps.
#include "daycare.h"
void pc_test_egg_ready(void) {
    if (sFieldSysPtr == NULL) {
        return;
    }
    Party *party = SaveArray_Party_Get(sFieldSysPtr->saveData);
    for (int i = 0; i < Party_GetCount(party); i++) {
        Pokemon *mon = Party_GetMonByIndex(party, i);
        if (GetMonData(mon, MON_DATA_IS_EGG, NULL)) {
            u32 zero = 0;
            SetMonData(mon, MON_DATA_FRIENDSHIP, &zero);
            pc_log("test: egg in slot %d ready to hatch", i);
        }
    }
    Daycare *dayCare = Save_Daycare_Get(sFieldSysPtr->saveData);
    Save_Daycare_SetEggCycleCounter(dayCare, 253);   // cycle = 256 steps (128 with Flame Body)
}

// Test hook PHG_TEST_GIVE_ITEMS=ID[:QTY][,...]: items added to the bag.
#include "bag.h"
#include "player_data.h"
void pc_test_give_item(u16 item, u16 qty) {
    if (sFieldSysPtr == NULL) {
        return;
    }
    BOOL ok = Bag_AddItem(Save_Bag_Get(sFieldSysPtr->saveData), item, qty, HEAP_ID_FIELD2);
    pc_log("test: give item %u x%u -> %d", (unsigned)item, (unsigned)qty, ok);
}

// Test hooks PHG_TEST_BADGES=N (first N Johto badges) and
// PHG_TEST_MOVES=SLOT:MOVE[,...] (move put in the first move slot, full PP).
void pc_test_set_badges(int n) {
    PlayerProfile *profile = Save_PlayerData_GetProfile(sFieldSysPtr->saveData);
    for (int i = 0; i < n && i < 16; i++) {
        PlayerProfile_SetBadgeFlag(profile, i);
    }
    pc_log("test: %d badges", n);
}

void pc_test_set_move(int slot, u16 move) {
    Party *party = SaveArray_Party_Get(sFieldSysPtr->saveData);
    if (slot >= Party_GetCount(party)) {
        return;
    }
    Pokemon *mon = Party_GetMonByIndex(party, slot);
    SetMonData(mon, MON_DATA_MOVE1, &move);
    u32 pp = 30;
    SetMonData(mon, MON_DATA_MOVE1_PP, &pp);
    pc_log("test: party slot %d move 1 = %u", slot, (unsigned)move);
}

// Test hook PHG_TEST_WARP=MAP:X:Z: warp like the script command Warp
// (fade, map change), facing south. Navigation aid for tests only.
#include "field_warp_tasks.h"
#include "task.h"
static u32 sPcWarpArgs[3];
static BOOL PcTestTask_Warp(TaskManager *taskman) {
    u32 *state = TaskManager_GetStatePtr(taskman);
    if (*state == 0) {
        *state = 1;
        CallTask_ScriptWarp(taskman, sPcWarpArgs[0], -1, sPcWarpArgs[1], sPcWarpArgs[2], DIR_SOUTH);
        return FALSE;
    }
    return TRUE;
}

void pc_test_warp(u32 mapId, u32 x, u32 z) {
    if (sFieldSysPtr == NULL) {
        return;
    }
    sPcWarpArgs[0] = mapId;
    sPcWarpArgs[1] = x;
    sPcWarpArgs[2] = z;
    pc_log("test: warp to map %u (%u, %u)", (unsigned)mapId, (unsigned)x, (unsigned)z);
    FieldSystem_CreateTask(sFieldSysPtr, PcTestTask_Warp, NULL);
}

// Test hooks: the field map is loaded and running (not in a transition or
// another application).
BOOL pc_test_field_ready(void) {
    return sFieldSysPtr != NULL && sFieldSysPtr->runningFieldMap && sFieldSysPtr->mapLoadManager != NULL;
}

// Test saves: also wait until no script/event is running (the player can move).
BOOL FieldSystem_IsPlayerMovementAllowed(FieldSystem *fieldSystem);
BOOL pc_test_field_idle(void) {
    return pc_test_field_ready() && FieldSystem_IsPlayerMovementAllowed(sFieldSysPtr);
}

// Returns FALSE when the field map is not running (transition): try later.
BOOL pc_test_map_dump(int rx, int rz) {
    if (sFieldSysPtr == NULL || sFieldSysPtr->playerAvatar == NULL || sFieldSysPtr->location == NULL
        || !sFieldSysPtr->runningFieldMap || sFieldSysPtr->mapLoadManager == NULL) {
        return FALSE;
    }
    int px = PlayerAvatar_GetXCoord(sFieldSysPtr->playerAvatar);
    int pz = PlayerAvatar_GetZCoord(sFieldSysPtr->playerAvatar);
    pc_log("map %d around x=%d z=%d (columns x=%d..%d)", sFieldSysPtr->location->mapId, px, pz, px - rx, px + rx);
    char row[256];
    for (int z = pz - rz; z <= pz + rz; z++) {
        int n = 0;
        for (int x = px - rx; x <= px + rx && n < 250; x++) {
            char c;
            if (x < 0 || z < 0 || x >= MapMatrix_GetWidth(sFieldSysPtr->mapMatrix) * 32
                || z >= MapMatrix_GetHeight(sFieldSysPtr->mapMatrix) * 32) {
                row[n++] = ' ';   // outside the map: querying it asserts
                continue;
            }
            u8 b = GetMetatileBehavior(sFieldSysPtr, x, z);
            if (x == px && z == pz) {
                c = '@';
            } else if (x >= 0 && z >= 0 && MapObjectManager_GetFirstObjectWithXAndZ(sFieldSysPtr->mapObjectManager, x, z, FALSE) != NULL) {
                c = 'o';
            } else if (MetatileBehavior_IsPC(b)) {
                c = 'P';
            } else if (MetatileBehavior_IsDoor(b) || MetatileBehavior_IsWarpEast(b) || MetatileBehavior_IsWarpWest(b)
                       || MetatileBehavior_IsWarpNorth(b) || MetatileBehavior_IsWarpSouth(b)) {
                c = 'D';
            } else if (MetatileBehavior_IsJumpSouth(b)) {
                c = 'v';
            } else if (MetatileBehavior_IsJumpNorth(b)) {
                c = '^';
            } else if (MetatileBehavior_IsJumpWest(b)) {
                c = '<';
            } else if (MetatileBehavior_IsJumpEast(b)) {
                c = '>';
            } else if (MetatileBehavior_IsSurfableWater(b)) {
                c = '~';
            } else if (FieldSystem_CheckTileCollision(sFieldSysPtr, x, z)) {
                c = '#';
            } else if (MetatileBehavior_IsTallGrass(b) || MetatileBehavior_CanGenerateWalkingEncounters(b)) {
                c = 'G';
            } else {
                c = '.';
            }
            row[n++] = c;
        }
        row[n] = '\0';
        pc_log("map z=%4d %s", z, row);
    }
    return TRUE;
}

// PHG_TEST_POS: map id and player tile, -1 when not in the field.
BOOL pc_test_player_pos(int *mapId, int *x, int *z) {
    if (sFieldSysPtr == NULL || sFieldSysPtr->location == NULL || sFieldSysPtr->playerAvatar == NULL) {
        return FALSE;
    }
    *mapId = sFieldSysPtr->location->mapId;
    *x = PlayerAvatar_GetXCoord(sFieldSysPtr->playerAvatar);
    *z = PlayerAvatar_GetZCoord(sFieldSysPtr->playerAvatar);
    return TRUE;
}
#endif

typedef struct FieldSystemInitWork {
    int unk0;
    int commError;
} FieldSystemInitWork;

static BOOL FieldSystem_Main(FieldSystem *fieldSystem);

BOOL Field_Continue_AppInit(OverlayManager *man, int *unused) {
    FieldSystemInitWork *args = OverlayManager_GetArgs(man);
    sFieldSysPtr = FieldSystem_New(man);

    if (args->commError) {
        CallFieldTask_ContinueGame_CommError(sFieldSysPtr);
    } else {
        CallFieldTask_ContinueGame_Normal(sFieldSysPtr);
    }

    args->commError = 0;

    return TRUE;
}

BOOL Field_NewGame_AppInit(OverlayManager *man, int *unused) {
    sFieldSysPtr = FieldSystem_New(man);
    CallFieldTask_NewGame(sFieldSysPtr);
    return TRUE;
}

BOOL Field_AppExec(OverlayManager *man, int *unused) {
    if (FieldSystem_Main(OverlayManager_GetData(man))) {
        return TRUE;
    }
    return FALSE;
}

extern OverlayManagerTemplate gApplication_TitleScreen;

BOOL Field_AppExit(OverlayManager *man, int *unused) {
    FieldSystem_Delete(man);
    RegisterMainOverlay(FS_OVERLAY_ID(intro_title), &gApplication_TitleScreen);
    return TRUE;
}

extern OverlayManagerTemplate gOverlayTemplate_FieldMap;

void FieldSystem_LoadFieldOverlayInternal(FieldSystem *fieldSystem) {
    GF_ASSERT(fieldSystem->processManager->child == NULL);
    GF_ASSERT(fieldSystem->processManager->parent == NULL);

    HandleLoadOverlay(FS_OVERLAY_ID(field), OVY_LOAD_ASYNC);

    fieldSystem->runningFieldMap = FALSE;
    fieldSystem->processManager->isPaused = FALSE;
    fieldSystem->processManager->parent = OverlayManager_New(&gOverlayTemplate_FieldMap, fieldSystem, HEAP_ID_FIELD2);
}

void FieldSystem_ClearRunningFieldMap(FieldSystem *fieldSystem) {
    fieldSystem->runningFieldMap = FALSE;
}

u8 FieldSystem_GetStartMenuInputState(FieldSystem *fieldSystem) {
    GF_ASSERT(fieldSystem->startMenuInputState == 0 || fieldSystem->startMenuInputState == 1);

    return fieldSystem->startMenuInputState;
}

void FieldSystem_SetStartMenuInputState(FieldSystem *fieldSystem, int state) {
    GF_ASSERT(state == 0 || state == 1);
    fieldSystem->startMenuInputState = state;
}

BOOL FieldSystem_IsFieldMapLoaded(FieldSystem *fieldSystem) {
    return fieldSystem->processManager->parent != NULL;
}

BOOL FieldSystem_IsFieldMapRunning(FieldSystem *fieldSystem) {
    return fieldSystem->processManager->parent != NULL && fieldSystem->runningFieldMap;
}

BOOL FieldSystem_IsChildAppRunning(FieldSystem *fieldSystem) {
    return fieldSystem->processManager->child != NULL;
}

void FieldSystem_LaunchApplication(FieldSystem *fieldSystem, const OverlayManagerTemplate *template, void *parentWork) {
    GF_ASSERT(fieldSystem->processManager->child == NULL);

    FieldSystem_ClearRunningFieldMap(fieldSystem);

    fieldSystem->processManager->child = OverlayManager_New(template, parentWork, HEAP_ID_FIELD2);
}

FieldSystem *FieldSystem_New(OverlayManager *man) {
    Heap_Create(HEAP_ID_3, HEAP_ID_FIELD2, 0x1C000);
    Heap_Create(HEAP_ID_3, HEAP_ID_FIELD3, 0x4000);
    Heap_Create(HEAP_ID_DEFAULT, HEAP_ID_89, 0x570);
    FieldSystem *fieldSystem = OverlayManager_CreateAndGetData(man, sizeof(FieldSystem), HEAP_ID_FIELD2);
    MI_CpuFill8(fieldSystem, 0, sizeof(FieldSystem));
    fieldSystem->processManager = Heap_Alloc(HEAP_ID_FIELD2, sizeof(struct FieldProcessManager));

    fieldSystem->processManager->parent = NULL;
    fieldSystem->processManager->child = NULL;
    fieldSystem->processManager->isPaused = FALSE;
    fieldSystem->processManager->isDone = FALSE;

    HandleLoadOverlay(FS_OVERLAY_ID(OVY_124), OVY_LOAD_ASYNC);

    FieldSystem_Init(man, fieldSystem);

    UnloadOverlayByID(FS_OVERLAY_ID(OVY_124));

    return fieldSystem;
}

void FieldSystem_Delete(OverlayManager *man) {
    FieldSystem *fieldSystem = OverlayManager_GetData(man);
    MapMatrix_Free(fieldSystem->mapMatrix);
    Field_FreeMapEvents(fieldSystem);
    Heap_Free(fieldSystem->bagCursor);
    PokedexResumeState_Free(fieldSystem->pokedexResumeState);
    GearPhoneRingManager_Delete(fieldSystem->phoneRingManager);
    Heap_Free(fieldSystem->processManager);
    OverlayManager_FreeData(man);
    Heap_Destroy(HEAP_ID_89);
    Heap_Destroy(HEAP_ID_FIELD2);
    Heap_Destroy(HEAP_ID_FIELD3);
}

static void ppOverlayManager_RunFrame_DeleteIfFinished(OverlayManager **man) {
    if (*man && OverlayManager_Run(*man)) {
        OverlayManager_Delete(*man);
        *man = NULL;
    }
}

static BOOL FieldSystem_Main(FieldSystem *fieldSystem) {
    FieldSystem_Control(fieldSystem);
    if (FieldSystem_RunTaskFrame(fieldSystem) == TRUE) {
        if (fieldSystem->mapSystems) {
            FieldSystem_SendBottomScreenEvent(fieldSystem, 0, 0);
        }
    }
    if (fieldSystem->processManager->parent) {
        ppOverlayManager_RunFrame_DeleteIfFinished(&fieldSystem->processManager->parent);
        if (!fieldSystem->processManager->parent) {
            UnloadOverlayByID(FS_OVERLAY_ID(field));
        }
    } else if (fieldSystem->processManager->child) {
        ppOverlayManager_RunFrame_DeleteIfFinished(&fieldSystem->processManager->child);
    }
    if (fieldSystem->processManager->isDone && !fieldSystem->taskman && !fieldSystem->processManager->parent && !fieldSystem->processManager->child) {
        return TRUE;
    }
    return FALSE;
}

BOOL FieldSystem_IsPlayerMovementAllowed(FieldSystem *fieldSystem) {
    return !fieldSystem->processManager->isPaused && fieldSystem->runningFieldMap && !FieldSystem_TaskIsRunning(fieldSystem);
}

void FieldSystem_Control(FieldSystem *fieldSystem) {
    FieldInput fieldInput;

    BOOL movementAllowed = FieldSystem_IsPlayerMovementAllowed(fieldSystem);

    if (movementAllowed) {
        PlayerAvatar_UpdateMovement(fieldSystem->playerAvatar);
        FieldInput_Update(&fieldInput, fieldSystem, gSystem.newKeys, gSystem.heldKeys);
    }

    int loadType = fieldSystem->mapLoadType;

    if (fieldSystem->location->mapId == MAP_BATTLE_TOWER) {
        loadType = 0;
    }

    switch (loadType) {
    case 3:
        if (movementAllowed) {
            if (CommPlayerManager_IsLocalPlayerConnected()) {
                if (FieldInput_Process_Colosseum(&fieldInput, fieldSystem) == TRUE) {
                    movementAllowed = FALSE;
                }
            } else {
                movementAllowed = FALSE;
            }
        }
        CommPlayerManager_FieldUpdate(fieldSystem, movementAllowed);
        break;
    case 2:
        if (movementAllowed && FieldInput_Process_UnionRoom(&fieldInput, fieldSystem) != TRUE) {
            PlayerAvatar_MoveControl(fieldSystem->playerAvatar, fieldSystem->mapLoadManager, -1, fieldInput.newKeys, fieldInput.heldKeys, 0);
        }
        break;
    case 4:
        if (movementAllowed) {
            if (FieldInput_Process_BattleTower(&fieldInput, fieldSystem) == TRUE) {
                FieldDrawMapName_Reset(fieldSystem->mapSystems->drawMapNameInfo);
                FieldSystem_SetAndExecuteSignpostWindowCommand(fieldSystem, MAPSIGNCOMMAND_HIDE);
                Field_PlayerAvatar_TryLeavePoketchPose(fieldSystem->playerAvatar);
                FieldSystem_SendBottomScreenEvent(fieldSystem, 0, 1);
                break;
            }
            if (gSystem.newKeys & PAD_BUTTON_A) {
                FieldDrawMapName_Reset(fieldSystem->mapSystems->drawMapNameInfo);
            }
            movementAllowed = 0;
            if (FieldSystem_GetBottomScreenState()) {
                movementAllowed = FieldHookUnused_IsMovementAllowed();
            }
            PlayerAvatar_MoveControl(fieldSystem->playerAvatar, fieldSystem->mapLoadManager, -1, fieldInput.newKeys, fieldInput.heldKeys, movementAllowed);
        }
        break;
    default:
        if (movementAllowed) {
            u32 newEvent = FieldInput_Process(&fieldInput, fieldSystem);
            if (newEvent) {
                FieldDrawMapName_Reset(fieldSystem->mapSystems->drawMapNameInfo);
                FieldSystem_SetAndExecuteSignpostWindowCommand(fieldSystem, MAPSIGNCOMMAND_HIDE);
                PlayerAvatar_ResetMovement(fieldSystem->playerAvatar);
                Field_PlayerAvatar_TryLeavePoketchPose(fieldSystem->playerAvatar);
                FieldSystem_SendBottomScreenEvent(fieldSystem, 0, 1);
                if (newEvent != 2) {
                    GearPhoneRingManager_ResetIfActive(fieldSystem->phoneRingManager);
                }
            } else {
                if (gSystem.newKeys & PAD_BUTTON_A) {
                    FieldDrawMapName_Reset(fieldSystem->mapSystems->drawMapNameInfo);
                }
                u32 flag = 0;
                if (FieldSystem_GetBottomScreenState()) {
                    flag = FieldHookUnused_IsMovementAllowed();
                }
                PlayerAvatar_MoveControl(fieldSystem->playerAvatar, fieldSystem->mapLoadManager, -1, fieldInput.newKeys, fieldInput.heldKeys, flag);
            }
        }
        break;
    }
}

void FieldSystem_PauseProcesses() {
    sFieldSysPtr->processManager->isPaused = TRUE;
    Comm_DisableKeySync();
}

void FieldSystem_ResumeProcesses() {
    sFieldSysPtr->processManager->isPaused = FALSE;
    Comm_EnableKeySync();
}

int FieldSystem_GetBottomScreenState() {
    if (sFieldSysPtr->mapSystems == NULL) {
        return 0;
    }
    return sFieldSysPtr->mapSystems->hookState;
}

void FieldSystem_SetSavedBottomScreenAppId(FieldSystem *fieldSystem, int appId) {
    fieldSystem->savedBottomScreenAppId = appId;
}

BgConfig *FieldSystem_GetBgConfigPtr(FieldSystem *fieldSystem) {
    return fieldSystem->bgConfig;
}

SaveData *FieldSystem_GetSaveData(FieldSystem *fieldSystem) {
    return fieldSystem->saveData;
}

void Task_AntipiracyRandom() {
    LCRandom();
    LCRandom();
}

void Field_ForceEnvironmentSoundRecheck() {
    sFieldSysPtr->environmentSoundState = ENVIRONMENT_SOUND_NONE_UNK2;
}
