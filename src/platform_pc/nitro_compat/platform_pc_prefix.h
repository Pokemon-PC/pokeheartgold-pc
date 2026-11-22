/*
 * platform_pc_prefix.h - force-included (-include) in every game / NitroSDK /
 * NitroSystem file built for the PC host.
 */
#pragma once

#if defined(__MINGW32__)
/* MinGW's _mingw.h defines __ptr32/__ptr64/__uptr/__sptr as empty macros
 * (for GCC). Pull it in first, then drop those macros so Clang's real
 * 32-bit pointer qualifiers are used (see PC_PTR32 below). _mingw.h is
 * include-guarded, so later system headers will not redefine them. */
#include <_mingw.h>
#undef __ptr32
#undef __ptr64
#undef __uptr
#undef __sptr
#endif

/*
 * PC_PTR32: pointer member stored on 32 bits, as on the DS.
 *
 * Structures overlaid on game data files (NitroSystem 2D resources: NCGR,
 * NCER, NANR...) contain pointers that are patched in place when a resource
 * is "unpacked". On a 64-bit host a plain pointer would grow to 8 bytes and
 * shift every following field. With Clang, `T *PC_PTR32 field` keeps the
 * field 4 bytes wide and converts transparently (zero-extension) when used;
 * this is valid because all game memory lives below 4 GiB on PC (hw_pc.h).
 * Limitation: such a field cannot appear in a static initializer.
 */
#if defined(__clang__) && (defined(__x86_64__) || defined(__i386__))
#define PC_PTR32 __ptr32 __uptr
#else
#define PC_PTR32
#endif

/* Returns whether a NARC member really is LZ77-compressed (see
 * src/platform_pc/nitro/sdk_asm_pc.c); `declared` is what the code assumed. */
int pc_lz_autodetect(const void *data, int declared);

/* Applies VRAMCNT bank changes; called by lib/NitroSDK/src/gx/gx_vramcnt.c
 * after each write (src/platform_pc/nitro/vram_pc.c). */
void pc_vram_sync(void);

/* The game's V-Blank work is done: the frame can be drawn (src/main.c;
 * src/platform_pc/nitro/nitro_pc.c). */
void pc_nitro_frame_ready(void);

/* Diagnostics usable from game code (src/platform_pc). */
void pc_warn(const char *fmt, ...);
void pc_log_backtrace(const char *tag);
