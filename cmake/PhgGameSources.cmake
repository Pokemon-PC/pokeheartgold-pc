# Sources of the game and of the Nintendo libraries that are compiled for the
# PC host, and those that the PC layer (src/platform_pc) replaces.
#
# Defines PHG_GAME_SOURCES.

set(_root ${PROJECT_SOURCE_DIR})

# --- the game: exactly the C files main.lsf links into the ROM ---------------
# (src/ also holds files that are not part of the ROM, e.g. text_0205B4EC.c,
# which duplicates dialog_box.c: the DS linker only takes listed objects.)
file(STRINGS ${_root}/main.lsf _lsf_objects REGEX "^[ \t]*Object[ \t]+src/")
set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS ${_root}/main.lsf)
set(_game "")
foreach(_line IN LISTS _lsf_objects)
    string(REGEX REPLACE "^[ \t]*Object[ \t]+(src/[^ \t(]+)\\.o.*$" "\\1" _stem "${_line}")
    if(EXISTS ${_root}/${_stem}.c)
        list(APPEND _game ${_root}/${_stem}.c)
    endif()
    # ${_stem}.cpp: Wi-Fi Plaza lobby (src/lobby, online only) - not built yet.
endforeach()
list(REMOVE_DUPLICATES _game)

# --- NitroSystem: plain C, compiled unchanged ------------------------------
file(GLOB _nnsys CONFIGURE_DEPENDS ${_root}/lib/NitroSystem/src/*.c)

# --- NitroSDK ----------------------------------------------------------------
set(_sdk ${_root}/lib/NitroSDK/src)
file(GLOB _sdk_fx   CONFIGURE_DEPENDS ${_sdk}/fx/*.c)
file(GLOB _sdk_gx   CONFIGURE_DEPENDS ${_sdk}/gx/*.c)
file(GLOB _sdk_math CONFIGURE_DEPENDS ${_sdk}/math/*.c)
file(GLOB _sdk_mi   CONFIGURE_DEPENDS ${_sdk}/mi/*.c)
set(_sdk_misc
    ${_sdk}/dgt_hash.c
    ${_sdk}/std_sprintf.c
    ${_sdk}/std_sprintf_writer.c
    ${_sdk}/std_string.c
    ${_sdk}/rtc/rtc_convert_pre.c
    ${_sdk}/rtc/rtc_convert_post.c
    ${_sdk}/rtc/rtc_convert_date_time_to_second.c
    ${_sdk}/os/os_alloc.c)
set(PHG_SDK_SOURCES ${_sdk_fx} ${_sdk_gx} ${_sdk_math} ${_sdk_mi} ${_sdk_misc})

# Hand-written ARM assembly, replaced by src/platform_pc/nitro/sdk_asm_pc.c
# (fx matrices, GX FIFO, LZ77, qsort, swap, SHA-1) and mi_nitro_pc.c (MI_Cpu*).
# DMA goes through registers: replaced by src/platform_pc/nitro/mi_dma_pc.c.
list(FILTER PHG_SDK_SOURCES EXCLUDE REGEX
    ".*/(fx_mtx22|fx_mtx33_identity|fx_mtx33_rot_yz|fx_mtx43_identity|fx_mtx43_rot|fx_mtx43_scale|fx_mtx44_identity|fx_mtx44_rot|gxasm|g3x_nop_clear_fifo|math_qsort|mi_memory|mi_swap|mi_uncompress|mi_dma|mi_dma_card|mi_dma_gxcommand|mi_dma_hblank|mi_init)\\.c$")
# Not built (replaced by the PC Nitro layer or meaningless on PC):
#   os/*  (kernel: threads, IRQ, cache, arenas...)   -> nitro/os_nitro_pc.c
#   fs/*  (NitroFS, overlays)                        -> nitro/fs_nitro_pc.c
#   card/*, ctrdg/*, pxi/*, mb/*, wm*, wvr.c, mic.c, pm.c, tp.c, spi
#   snd/* (ARM9 side of the ARM7 sound driver)       -> audio, milestone 6
#   crt0.c, cp/CP_context.c, dgt_hash2_arm4_small.c, rtc_api.c, rtc_internal.c

# --- lib/src: particle system (spl_*) and crypto -----------------------------
file(GLOB _libsrc CONFIGURE_DEPENDS ${_root}/lib/src/*.c)
# RC4 is ARM assembly and only used by online features.
list(FILTER _libsrc EXCLUDE REGEX ".*/nitrocrypto_rc4(_fast)?\\.c$")

# Not built: lib/MSL_C (host C library instead), lib/NitroDWC, lib/NitroWiFi,
# lib/libCPS, lib/libVCT (Nintendo Wi-Fi Connection, offline on PC),
# lib/dsprot (anti-piracy), lib/syscall (BIOS) -> stubs in src/platform_pc.

set(PHG_GAME_SOURCES ${_game} ${_nnsys} ${PHG_SDK_SOURCES} ${_libsrc})
list(LENGTH _game _n_game)
list(LENGTH PHG_GAME_SOURCES _n_all)
message(STATUS "PC game sources: ${_n_game} game files, ${_n_all} total")
