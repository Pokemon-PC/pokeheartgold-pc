/* Generated from lib/asm/nnsys_g2d_bss.s by tools/pc_port/asm_data_to_c.py - do not edit. */

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

__attribute__((aligned(8))) unsigned char gOamManagerNextId[4];

__attribute__((aligned(8))) unsigned char gOamBuffers[4032];

__asm__(".globl " PCSYM(gOamBufferMainOam) "\n.set " PCSYM(gOamBufferMainOam) ", " PCSYM(gOamBuffers) "+256");

__asm__(".globl " PCSYM(gOamBufferMainAffineOwners) "\n.set " PCSYM(gOamBufferMainAffineOwners) ", " PCSYM(gOamBuffers) "+1280");

__asm__(".globl " PCSYM(gOamBufferSubOamOwners) "\n.set " PCSYM(gOamBufferSubOamOwners) ", " PCSYM(gOamBuffers) "+1344");

__asm__(".globl " PCSYM(gOamBufferSubOam) "\n.set " PCSYM(gOamBufferSubOam) ", " PCSYM(gOamBuffers) "+1600");

__asm__(".globl " PCSYM(gOamBufferSubAffineOwners) "\n.set " PCSYM(gOamBufferSubAffineOwners) ", " PCSYM(gOamBuffers) "+2624");

__asm__(".globl " PCSYM(gOamBufferSoftOamOwners) "\n.set " PCSYM(gOamBufferSoftOamOwners) ", " PCSYM(gOamBuffers) "+2688");

__asm__(".globl " PCSYM(gOamBufferSoftOam) "\n.set " PCSYM(gOamBufferSoftOam) ", " PCSYM(gOamBuffers) "+2944");

__asm__(".globl " PCSYM(gOamBufferSoftAffineOwners) "\n.set " PCSYM(gOamBufferSoftAffineOwners) ", " PCSYM(gOamBuffers) "+3968");
