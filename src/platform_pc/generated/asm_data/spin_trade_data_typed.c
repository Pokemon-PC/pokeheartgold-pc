/* Generated from asm/spin_trade_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(SpinTradeEggDrop_Fall);
PCREF(SpinTradeEggDrop_Init);
PCREF(SpinTradeEggDrop_Land);
PCREF(SpinTrade_State_AlignToSlot);
PCREF(SpinTrade_State_BeginSpin);
PCREF(SpinTrade_State_Cancel);
PCREF(SpinTrade_State_CheckEggs);
PCREF(SpinTrade_State_ClearNames);
PCREF(SpinTrade_State_DropEggs);
PCREF(SpinTrade_State_Exit);
PCREF(SpinTrade_State_FadeOut);
PCREF(SpinTrade_State_GiveBonusBerry);
PCREF(SpinTrade_State_ReceiveResult);
PCREF(SpinTrade_State_RotateToOwnEgg);
PCREF(SpinTrade_State_Save);
PCREF(SpinTrade_State_SendJoin);
PCREF(SpinTrade_State_SendParty);
PCREF(SpinTrade_State_SendPlayerCount);
PCREF(SpinTrade_State_SendReady);
PCREF(SpinTrade_State_SendResult);
PCREF(SpinTrade_State_SendSlots);
PCREF(SpinTrade_State_SendSpinStart);
PCREF(SpinTrade_State_SendStart);
PCREF(SpinTrade_State_SendTradeSlot);
PCREF(SpinTrade_State_SetupDrop);
PCREF(SpinTrade_State_ShowBagFull);
PCREF(SpinTrade_State_ShowNames);
PCREF(SpinTrade_State_ShowReceivedEgg);
PCREF(SpinTrade_State_SpinClient);
PCREF(SpinTrade_State_SpinHost);
PCREF(SpinTrade_State_Start);
PCREF(SpinTrade_State_StartCountdown);
PCREF(SpinTrade_State_StartExitSync);
PCREF(SpinTrade_State_StartResultSync);
PCREF(SpinTrade_State_StartSave);
PCREF(SpinTrade_State_StartSpinSync);
PCREF(SpinTrade_State_StartSync);
PCREF(SpinTrade_State_StopSpin);
PCREF(SpinTrade_State_Wait);
PCREF(SpinTrade_State_WaitBeforeSpin);
PCREF(SpinTrade_State_WaitBerryFanfare);
PCREF(SpinTrade_State_WaitCancelMessage);
PCREF(SpinTrade_State_WaitConfirm);
PCREF(SpinTrade_State_WaitConnections);
PCREF(SpinTrade_State_WaitDisconnect);
PCREF(SpinTrade_State_WaitEggFanfare);
PCREF(SpinTrade_State_WaitEggsLanded);
PCREF(SpinTrade_State_WaitExitSync);
PCREF(SpinTrade_State_WaitFadeIn);
PCREF(SpinTrade_State_WaitFadeOut);
PCREF(SpinTrade_State_WaitMembers);
PCREF(SpinTrade_State_WaitReady);
PCREF(SpinTrade_State_WaitResultSync);
PCREF(SpinTrade_State_WaitSaveSync);
PCREF(SpinTrade_State_WaitSpinStart);
PCREF(SpinTrade_State_WaitSpinSync);
PCREF(SpinTrade_State_WaitSync);
PCREF(gSpinTradeBonusRanges2P);
PCREF(gSpinTradeBonusRanges3P);
PCREF(gSpinTradeBonusRanges4P);
PCREF(gSpinTradeBonusRanges5P);
PCREF(gSpinTradeNameWindowTemplates2P);
PCREF(gSpinTradeNameWindowTemplates3P);
PCREF(gSpinTradeNameWindowTemplates4P);
PCREF(gSpinTradeNameWindowTemplates5P);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    uint32_t count;
    const void * ranges;
} pcm_SpinTradeBonusAreas_0;

extern const const void * gSpinTradeEggDropStateFuncs[3];
extern const const void * gSpinTradeNameWindowTemplates[6];
extern const pcm_SpinTradeBonusAreas_0 gSpinTradeBonusAreas[6];
extern const const void * gSpinTradeStateFuncs[54];

const const void * gSpinTradeEggDropStateFuncs[3] = { (const void *)&pcref_SpinTradeEggDrop_Init, (const void *)&pcref_SpinTradeEggDrop_Fall, (const void *)&pcref_SpinTradeEggDrop_Land };

const const void * gSpinTradeNameWindowTemplates[6] = { NULL, NULL, (const void *)&pcref_gSpinTradeNameWindowTemplates2P, (const void *)&pcref_gSpinTradeNameWindowTemplates3P, (const void *)&pcref_gSpinTradeNameWindowTemplates4P, (const void *)&pcref_gSpinTradeNameWindowTemplates5P };

const pcm_SpinTradeBonusAreas_0 gSpinTradeBonusAreas[6] = {
    {
        .count = 0,
        .ranges = NULL,
    },
    {
        .count = 0,
        .ranges = NULL,
    },
    {
        .count = 1,
        .ranges = (const void *)&pcref_gSpinTradeBonusRanges2P,
    },
    {
        .count = 2,
        .ranges = (const void *)&pcref_gSpinTradeBonusRanges3P,
    },
    {
        .count = 2,
        .ranges = (const void *)&pcref_gSpinTradeBonusRanges4P,
    },
    {
        .count = 2,
        .ranges = (const void *)&pcref_gSpinTradeBonusRanges5P,
    },
};

const const void * gSpinTradeStateFuncs[54] = { (const void *)&pcref_SpinTrade_State_Start, (const void *)&pcref_SpinTrade_State_WaitFadeIn, (const void *)&pcref_SpinTrade_State_WaitMembers, (const void *)&pcref_SpinTrade_State_SendStart, (const void *)&pcref_SpinTrade_State_WaitConnections, (const void *)&pcref_SpinTrade_State_SendPlayerCount, (const void *)&pcref_SpinTrade_State_SendSlots, (const void *)&pcref_SpinTrade_State_SendReady,
  (const void *)&pcref_SpinTrade_State_SendJoin, (const void *)&pcref_SpinTrade_State_WaitReady, (const void *)&pcref_SpinTrade_State_StartSync, (const void *)&pcref_SpinTrade_State_WaitSync, (const void *)&pcref_SpinTrade_State_SendTradeSlot, (const void *)&pcref_SpinTrade_State_SendParty, (const void *)&pcref_SpinTrade_State_CheckEggs, (const void *)&pcref_SpinTrade_State_WaitConfirm,
  (const void *)&pcref_SpinTrade_State_SetupDrop, (const void *)&pcref_SpinTrade_State_DropEggs, (const void *)&pcref_SpinTrade_State_WaitEggsLanded, (const void *)&pcref_SpinTrade_State_WaitBeforeSpin, (const void *)&pcref_SpinTrade_State_SendSpinStart, (const void *)&pcref_SpinTrade_State_WaitSpinStart, (const void *)&pcref_SpinTrade_State_StartSpinSync, (const void *)&pcref_SpinTrade_State_WaitSpinSync,
  (const void *)&pcref_SpinTrade_State_StartCountdown, (const void *)&pcref_SpinTrade_State_ClearNames, (const void *)&pcref_SpinTrade_State_BeginSpin, (const void *)&pcref_SpinTrade_State_SpinHost, (const void *)&pcref_SpinTrade_State_SpinClient, (const void *)&pcref_SpinTrade_State_StopSpin, (const void *)&pcref_SpinTrade_State_RotateToOwnEgg, (const void *)&pcref_SpinTrade_State_AlignToSlot,
  (const void *)&pcref_SpinTrade_State_StartResultSync, (const void *)&pcref_SpinTrade_State_WaitResultSync, (const void *)&pcref_SpinTrade_State_SendResult, (const void *)&pcref_SpinTrade_State_ReceiveResult, (const void *)&pcref_SpinTrade_State_ShowNames, (const void *)&pcref_SpinTrade_State_ShowReceivedEgg, (const void *)&pcref_SpinTrade_State_WaitEggFanfare, (const void *)&pcref_SpinTrade_State_GiveBonusBerry,
  (const void *)&pcref_SpinTrade_State_WaitBerryFanfare, (const void *)&pcref_SpinTrade_State_ShowBagFull, (const void *)&pcref_SpinTrade_State_Wait, (const void *)&pcref_SpinTrade_State_StartSave, (const void *)&pcref_SpinTrade_State_WaitSaveSync, (const void *)&pcref_SpinTrade_State_Save, (const void *)&pcref_SpinTrade_State_Cancel, (const void *)&pcref_SpinTrade_State_WaitCancelMessage,
  (const void *)&pcref_SpinTrade_State_StartExitSync, (const void *)&pcref_SpinTrade_State_WaitExitSync, (const void *)&pcref_SpinTrade_State_WaitDisconnect, (const void *)&pcref_SpinTrade_State_FadeOut, (const void *)&pcref_SpinTrade_State_WaitFadeOut, (const void *)&pcref_SpinTrade_State_Exit };
