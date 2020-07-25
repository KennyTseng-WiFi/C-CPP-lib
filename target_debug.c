
/*
 * 11ac target: 
 */

#include "umac_wmi_api.h"
UMAC_WMI_DEBUG_EVENT("caller 0x%x \n", __builtin_return_address(0));
UMAC_WMI_DEBUG_EVENT("%s-%d: call!\n", __func__, __LINE__);
UMAC_WMI_DEBUG_EVENT("%s-%d: caller %x!\n", __func__, __LINE__, __builtin_return_address(0));

/*
 * 11ax target: 
 */
#include <wmi_api.h>
UMAC_WMI_DEBUG_EVENT("caller 0x%x\n", (A_UINT32)__builtin_return_address(0));

wdiag_msg(WLAN_MODULE_WAL, DBGLOG_ERR," kenny - \n");

// cnss_diag -c -p | grep kenny &

