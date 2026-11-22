/* Generated from asm/spin_trade_flow_data.s by tools/pc_port/asm_data_to_c.py - do not edit. */

#include <stddef.h>
#include <stdint.h>

/* pcref_X is a distinct C name bound to the linker symbol X, so referencing
 * it never conflicts with however a header declares X. */
#define PCREF_STR2(x) #x
#define PCREF_STR(x) PCREF_STR2(x)
#define PCREF(sym) extern char pcref_##sym[] __asm__(PCREF_STR(__USER_LABEL_PREFIX__) #sym)
#define PCSYM(sym) PCREF_STR(__USER_LABEL_PREFIX__) #sym

/* referenced symbols: linker aliases, only their address is used */
PCREF(SpinTradeApp_Exit);
PCREF(SpinTradeApp_Init);
PCREF(SpinTradeApp_Main);
PCREF(SpinTradeFlow_Finish);
PCREF(SpinTradeFlow_LaunchGroupApp);
PCREF(SpinTradeFlow_WaitGroupApp);
PCREF(SpinTradeFlow_WaitPartyMenu);
PCREF(SpinTradeFlow_WaitSpinTradeApp);
PCREF(SpinTradeFlow_WaitSummary);
PCREF(SpinTradeGroupApp_Exit);
PCREF(SpinTradeGroupApp_Init);
PCREF(SpinTradeGroupApp_Main);

/* DS types re-declared with the same members (layout identical to the
 * game's own declarations once compiled for the host) */
typedef struct {
    const void * init;
    const void * exec;
    const void * exit;
    uint32_t ovy_id;
} pcm_OverlayManagerTemplate_0;

extern const pcm_OverlayManagerTemplate_0 gOverlayTemplate_SpinTradeGroup;
extern const pcm_OverlayManagerTemplate_0 gOverlayTemplate_SpinTrade;
extern const const void * gSpinTradeFlowStates[6];

const pcm_OverlayManagerTemplate_0 gOverlayTemplate_SpinTradeGroup = {
    .init = (const void *)&pcref_SpinTradeGroupApp_Init,
    .exec = (const void *)&pcref_SpinTradeGroupApp_Main,
    .exit = (const void *)&pcref_SpinTradeGroupApp_Exit,
    .ovy_id = 85,
};

const pcm_OverlayManagerTemplate_0 gOverlayTemplate_SpinTrade = {
    .init = (const void *)&pcref_SpinTradeApp_Init,
    .exec = (const void *)&pcref_SpinTradeApp_Main,
    .exit = (const void *)&pcref_SpinTradeApp_Exit,
    .ovy_id = 85,
};

const const void * gSpinTradeFlowStates[6] = { (const void *)&pcref_SpinTradeFlow_LaunchGroupApp, (const void *)&pcref_SpinTradeFlow_WaitGroupApp, (const void *)&pcref_SpinTradeFlow_WaitPartyMenu, (const void *)&pcref_SpinTradeFlow_WaitSummary, (const void *)&pcref_SpinTradeFlow_WaitSpinTradeApp, (const void *)&pcref_SpinTradeFlow_Finish };
