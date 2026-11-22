#include "error_handling.h"

#include "global.h"

#include "error_message_reset.h"
#include "comm_state.h"

void GF_AssertFail(void) {
#ifdef PLATFORM_PC
    pc_log_backtrace("assert");
#endif
    if (!CommState_Exists()) {
        return;
    }

    if (OS_GetProcMode() != OS_PROCMODE_IRQ) {
        PrintErrorMessageAndReset();
    }
}
