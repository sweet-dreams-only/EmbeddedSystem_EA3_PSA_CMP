/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2011 by Vctr Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vctr Informatik GmbH.
 *                Vctr Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vctr Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Components/Rte_Ap_AssistFirewall.h
 *     Workspace:  C:/SynergyProjects/PSA_BMPV_EPS_TMS570-nzx5jd/PSA_BMPV_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nxtr  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_ASSISTFIREWALL_H
# define _RTE_AP_ASSISTFIREWALL_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_Type.h"


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_AsstFirewallActive_Uls_f32 (0.0F)
#  define Rte_InitValue_BaseAssistCmd_MtrNm_f32 (0.0F)
#  define Rte_InitValue_CombinedAssist_MtrNm_f32 (0.0F)
#  define Rte_InitValue_Defeat_AsstTbl_Service_Cnt_lgc (FALSE)
#  define Rte_InitValue_HighFreqAssist_MtrNm_f32 (0.0F)
#  define Rte_InitValue_HwTorque_HwNm_f32 (0.0F)
#  define Rte_InitValue_HysteresisComp_MtrNm_f32 (0.0F)
#  define Rte_InitValue_MEC_Counter_Cnt_enum (0U)
#  define Rte_InitValue_VehicleSpeed_Kph_f32 (0.0F)
# endif


# ifndef RTE_CORE
#  define RTE_START_SEC_VAR_Ap_10_NOINIT_UNSPECIFIED
#  include "MemMap.h"

/**********************************************************************************************************************
 * Buffers for implicit communication
 *********************************************************************************************************************/

extern VAR(Rte_tsTask_2ms_10, RTE_VAR_NOINIT) Rte_Task_2ms_10;

#  define RTE_STOP_SEC_VAR_Ap_10_NOINIT_UNSPECIFIED
#  include "MemMap.h"
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/

# define RTE_STOP_SEC_CODE
# include "MemMap.h"


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

#  define Rte_IRead_AssistFirewall_Per1_BaseAssistCmd_MtrNm_f32() \
  (Rte_Task_2ms_10.Rte_TB.Rte_I_Assist_BaseAssistCmd_MtrNm_f32.value)

#  define Rte_IRead_AssistFirewall_Per1_Defeat_AsstTbl_Service_Cnt_lgc() \
  (Rte_Task_2ms_10.Rte_TB.Rte_I_CDDInterface6_DftAsstTbl_Cnt_lgc.value)

#  define Rte_IRead_AssistFirewall_Per1_HighFreqAssist_MtrNm_f32() \
  (Rte_Task_2ms_10.Rte_TB.Rte_I_HighFreqAssist_HighFreqAssist_MtrNm_f32.value)

#  define Rte_IRead_AssistFirewall_Per1_HwTorque_HwNm_f32() \
  (Rte_Task_2ms_10.Rte_TB.Rte_I_Sweep_OutputHwTrq_HwNm_f32.value)

#  define Rte_IRead_AssistFirewall_Per1_HysteresisComp_MtrNm_f32() \
  (Rte_Task_2ms_10.Rte_TB.Rte_I_HystComp_HysteresisComp_MtrNm_f32.value)

#  define Rte_IRead_AssistFirewall_Per1_MEC_Counter_Cnt_enum() \
  (Rte_Task_2ms_10.Rte_TB.Rte_I_CDDInterface9_MEC_Cnt_enum.value)

#  define Rte_IRead_AssistFirewall_Per1_VehicleSpeed_Kph_f32() \
  (Rte_Task_2ms_10.Rte_TB.Rte_I_SignlCondn_VehicleSpeed_Kph_f32.value)

#  define Rte_IWrite_AssistFirewall_Per1_AsstFirewallActive_Uls_f32(data) \
  ( \
    Rte_Task_2ms_10.Rte_TB.Rte_I_AssistFirewall_AsstFirewallActive_Uls_f32.value = (data) \
  )

#  define Rte_IWriteRef_AssistFirewall_Per1_AsstFirewallActive_Uls_f32() \
  (&Rte_Task_2ms_10.Rte_TB.Rte_I_AssistFirewall_AsstFirewallActive_Uls_f32.value)

#  define Rte_IWrite_AssistFirewall_Per1_CombinedAssist_MtrNm_f32(data) \
  ( \
    Rte_Task_2ms_10.Rte_TB.Rte_I_AssistFirewall_CombinedAssist_MtrNm_f32.value = (data) \
  )

#  define Rte_IWriteRef_AssistFirewall_Per1_CombinedAssist_MtrNm_f32() \
  (&Rte_Task_2ms_10.Rte_TB.Rte_I_AssistFirewall_CombinedAssist_MtrNm_f32.value)


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_AP_DIAGMGR10_APPL_CODE
#  include "MemMap.h"
FUNC(Std_ReturnType, RTE_AP_DIAGMGR10_APPL_CODE) NxtrDiagMgr10_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum);
#  define RTE_STOP_SEC_AP_DIAGMGR10_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_NxtrDiagMgr_SetNTCStatus NxtrDiagMgr10_SetNTCStatus


# endif /* !defined(RTE_CORE) */


# define RTE_START_SEC_AP_ASSISTFIREWALL_APPL_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

FUNC(void, RTE_AP_ASSISTFIREWALL_APPL_CODE) AssistFirewall_Init1(void);

FUNC(void, RTE_AP_ASSISTFIREWALL_APPL_CODE) AssistFirewall_Per1(void);

# define RTE_STOP_SEC_AP_ASSISTFIREWALL_APPL_CODE
# include "MemMap.h"


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_NxtrDiagMgr_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */


#endif /* _RTE_AP_ASSISTFIREWALL_H */
