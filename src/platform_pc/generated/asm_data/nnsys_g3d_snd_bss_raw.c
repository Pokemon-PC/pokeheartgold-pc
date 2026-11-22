/* Generated from lib/asm/nnsys_g3d_snd_bss.s by tools/pc_port/asm_data_to_c.py - do not edit. */

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

__attribute__((aligned(8))) unsigned char gMatAnmResultBuffer[3584];

__attribute__((aligned(8))) unsigned char gScaleCache[1536];

__asm__(".globl " PCSYM(gScaleCacheScaleY) "\n.set " PCSYM(gScaleCacheScaleY) ", " PCSYM(gScaleCache) "+4");

__asm__(".globl " PCSYM(gScaleCacheScaleZ) "\n.set " PCSYM(gScaleCacheScaleZ) ", " PCSYM(gScaleCache) "+8");

__asm__(".globl " PCSYM(gScaleCacheInvScale) "\n.set " PCSYM(gScaleCacheInvScale) ", " PCSYM(gScaleCache) "+12");

__asm__(".globl " PCSYM(gScaleCacheInvScaleY) "\n.set " PCSYM(gScaleCacheInvScaleY) ", " PCSYM(gScaleCache) "+16");

__asm__(".globl " PCSYM(gScaleCacheInvScaleZ) "\n.set " PCSYM(gScaleCacheInvScaleZ) ", " PCSYM(gScaleCache) "+20");

__attribute__((aligned(8))) unsigned char gEvpMtxCache[6400];

__asm__(".globl " PCSYM(gEvpMtxCacheFirstDirMtx) "\n.set " PCSYM(gEvpMtxCacheFirstDirMtx) ", " PCSYM(gEvpMtxCache) "+64");

__attribute__((aligned(8))) unsigned char gSndDriverInfo[9152];

__attribute__((aligned(8))) unsigned char gSndResourceMgr[12];

__attribute__((aligned(8))) unsigned char gSndWaveOuts[320];

__attribute__((aligned(8))) unsigned char gSndStrmListInitialized[4];
