/*
 * pokemod_pkpc.c - with PKPC_RUST=ON, level-2 mods are applied by the Rust
 * library of the plateforme project (libpkpc_ffi.a, pkpc.h) instead of
 * pokemod_patch.c. fs_pc.c and game_main_pc.c call pkpc_* directly; this
 * file only keeps the one pm_patch_* entry point used by the game sources
 * (scrcmd_mart.c registers its moddable tables), so they stay unchanged.
 */
#include "pkpc.h"
#include "pokemod_patch.h"

void pm_patch_register_table(const char *name, void *ptr, uint32_t size) {
    pkpc_register_table(name, ptr, size);
}
