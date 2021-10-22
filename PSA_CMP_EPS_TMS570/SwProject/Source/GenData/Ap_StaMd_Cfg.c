
/*****************************************************************************
* Copyright 2010 Nxtr Automotive, All Rights Reserved.
* Nxtr Confidential
*
* Module File Name  : Ap_StaMd_Cfg.c
* Module Description: Configuration file of StaMd module
* Product           : Gen II Plus - EA3.0
* Generator         : artt 2.0.2.0
* Generation Time   : 19.08.2014 14:22:21
*****************************************************************************/
/* Version Control:
 * Date Created:      Fri Jul 13 18:34:17 2012
 * %version:          3 %
 * %date_modified:    Thu Feb  6 22:58:36 2014 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 10/10/12   1       LWW       Initial template creation
 * 10/24/12   2       LWW       Added exclude configuration for applications to skip generation
 * 06/05/13   3       KJS       Added support for SysC global variables
 * 02/03/14   4       BDO       Add FBLTransitionActive to support FDD ES10B v13                               9674              
 */

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#define STAMD_C /* Enable visibility to Module internal definitions in StaMd.h*/
#include "Ap_StaMd_Cfg.h"


/*******************************************************************************
**                      Module Private Data                                   **
*******************************************************************************/
 
#define STAMD6_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
	VAR(Rte_ModeType_StaMd_Mode, AP_STAMD_VAR) SystemState6_Cnt_M_enum = RTE_MODE_StaMd_Mode_WARMINIT;
#define STAMD6_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define STAMD6_START_SEC_VAR_CLEARED_32
#include "MemMap.h"
	VAR(uint32, AP_STAMD_VAR) WarmInitMilestoneRqst6_Cnt_M_u32;
#define STAMD6_STOP_SEC_VAR_CLEARED_32
#include "MemMap.h"

	
#define STAMD6_START_SEC_VAR_CLEARED_BOOLEAN
#include "MemMap.h"
	VAR(boolean, AP_STAMD_VAR) EcuResetActive_Cnt_M_lgc;
	VAR(boolean, AP_STAMD_VAR) FBLTransitionActive_Cnt_M_lgc;
#define STAMD6_STOP_SEC_VAR_CLEARED_BOOLEAN
#include "MemMap.h"

#define STAMD9_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
	VAR(Rte_ModeType_StaMd_Mode, AP_STAMD_VAR) SystemState9_Cnt_M_enum = RTE_MODE_StaMd_Mode_WARMINIT;
#define STAMD9_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define STAMD9_START_SEC_VAR_CLEARED_32
#include "MemMap.h"
	VAR(uint32, AP_STAMD_VAR) WarmInitMilestoneRqst9_Cnt_M_u32;
#define STAMD9_STOP_SEC_VAR_CLEARED_32
#include "MemMap.h"


#define STAMD10_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
	
	VAR(Rte_ModeType_StaMd_Mode, AP_STAMD_VAR) SystemState_Cnt_M_enum = RTE_MODE_StaMd_Mode_WARMINIT;
#define STAMD10_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


#define STAMD10_START_SEC_VAR_CLEARED_32
#include "MemMap.h"
	
	VAR(uint32, AP_STAMD_VAR) WarmInitMilestoneRqst_Cnt_M_u32;
#define STAMD10_STOP_SEC_VAR_CLEARED_32
#include "MemMap.h"

	
#define STAMD10_START_SEC_VAR_CLEARED_BOOLEAN
#include "MemMap.h"
	
	VAR(boolean, AP_STAMD_VAR) StopTODPerOperation_Cnt_M_lgc;
	VAR(boolean, AP_STAMD_VAR) FinalNvMWriteInProgress_Cnt_M_lgc;
	VAR(boolean, AP_STAMD_VAR) TransitionComplete_Cnt_M_lgc;
#define STAMD10_STOP_SEC_VAR_CLEARED_BOOLEAN
#include "MemMap.h"

	
#define STAMD10_START_SEC_VAR_CLEARED_8
#include "MemMap.h"
	volatile VAR(uint8, AP_STAMD_VAR) StTrnsVctr_Cnt_D_b08;
#define STAMD10_STOP_SEC_VAR_CLEARED_8
#include "MemMap.h"
#define STAMD11_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
	VAR(Rte_ModeType_StaMd_Mode, AP_STAMD_VAR) SystemState11_Cnt_M_enum = RTE_MODE_StaMd_Mode_WARMINIT;
	VAR(Rte_ModeType_StaMd_Mode, AP_STAMD_VAR) SysCSystemState_Cnt_M_enum = RTE_MODE_StaMd_Mode_WARMINIT;
#define STAMD11_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define STAMD11_START_SEC_VAR_CLEARED_16
#include "MemMap.h"
	VAR(uint16, AP_STAMD_VAR) StaMdsSysCFltCntr_Cnt_M_u16;
#define STAMD11_STOP_SEC_VAR_CLEARED_16
#include "MemMap.h"

#define STAMD11_START_SEC_VAR_CLEARED_32
#include "MemMap.h"
	VAR(uint32, AP_STAMD_VAR) WarmInitMilestoneRqst11_Cnt_M_u32;
#define STAMD11_STOP_SEC_VAR_CLEARED_32
#include "MemMap.h"


CONST(TypeHInfoType_Str, AP_STAMD_CONST) T_TypeHInfo_Cnt_Str[5] = {
	{&Lnk_TypeH0_Start, (uint32)&Lnk_TypeH0_Size},
	{&Lnk_TypeH6_Start, (uint32)&Lnk_TypeH6_Size},
	{&Lnk_TypeH9_Start, (uint32)&Lnk_TypeH9_Size},
	{&Lnk_TypeH10_Start, (uint32)&Lnk_TypeH10_Size},
	{&Lnk_TypeH11_Start, (uint32)&Lnk_TypeH11_Size},
};
CONSTP2VAR(Rte_ModeType_StaMd_Mode, AUTOMATIC, AP_STAMD_CONST) T_CurrentSystemState_Ptr_enum[4] = {
	&SystemState6_Cnt_M_enum,
	&SystemState9_Cnt_M_enum,
	&SystemState_Cnt_M_enum,
	&SystemState11_Cnt_M_enum,
};
CONSTP2VAR(uint32, AUTOMATIC, AP_STAMD_CONST) T_WarmInitMilestoneRqst_Ptr_enum[4] = {
	&WarmInitMilestoneRqst6_Cnt_M_u32,
	&WarmInitMilestoneRqst9_Cnt_M_u32,
	&WarmInitMilestoneRqst_Cnt_M_u32,
	&WarmInitMilestoneRqst11_Cnt_M_u32,
};
