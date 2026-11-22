/*
 * snd_pc.h - software DS sound driver (see snd_pc.c).
 */
#ifndef PHG_SND_PC_H
#define PHG_SND_PC_H

#include <nnsys/snd_internal.h>
#include <nnsys/snd_arc_strm_internal.h>

/* Game-thread work once per V-Blank: alarm callbacks, and running the driver
 * when there is no audio device. */
void pc_snd_vblank(void);
/* Power-on state (soft reset). */
void pc_snd_reset(void);

#endif
