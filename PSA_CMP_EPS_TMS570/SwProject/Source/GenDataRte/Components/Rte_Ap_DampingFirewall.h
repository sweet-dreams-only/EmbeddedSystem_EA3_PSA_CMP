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
 *          File:  Components/Rte_Ap_DampingFirewall.h
 *     Workspace:  C:/synergy_projects_working/PSA_CMP/PSA_CMP_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nxtr  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_DAMPINGFIREWALL_H
# define _RTE_AP_DAMPINGFIREWALL_H

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
#  define Rte_InitValue_CombinedDamping_MtrNm_f32 (0.0F)
#  define Rte_InitValue_DampingCmd_MtrNm_f32 (0.0F)
#  define Rte_InitValue_Defeat_Damping_Svc_Cnt_lgc (FALSE)
#  define Rte_InitValue_FreqDepDmpSrlComSvcDft_Cnt_lgc (FALSE)
#  define Rte_InitValue_HwTorque_HwNm_f32 (0.0F)
#  define Rte_InitValue_InertiaComp_MtrNm_f32 (0.0F)
#  define Rte_InitValue_MEC_Counter_Cnt_enum (0U)
#  define Rte_InitValue_MtrVelCRF_MtrRadpS_f32 (0.0F)
#  define Rte_InitValue_VehicleLonAccel_KphpS_f32 (0.0F)
#  define Rte_InitValue_VehicleSpeed_Kph_f32 (0.0F)
#  define Rte_InitValue_WIRCmdAmpBlnd_MtrNm_f32 (0.0F)
# endif


# ifndef RTE_CORE
#  define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h"

/**********************************************************************************************************************
 * Buffers for Mode Management
 *********************************************************************************************************************/
extern VAR(Rte_ModeType_StaMd_Mode, RTE_VAR_NOINIT) Rte_ModeMachine_StaMd_SystemState_Mode;

#  define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h"
# endif /* !defined(RTE_CORE) */



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

#  define Rte_IRead_DampingFirewall_Per1_AsstFirewallActive_Uls_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_DampingFirewall_DampingFirewall_Per1.Rte_AsstFirewallActive_Uls_f32.value)

#  define Rte_IRead_DampingFirewall_Per1_BaseAssistCmd_MtrNm_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_DampingFirewall_DampingFirewall_Per1.Rte_BaseAssistCmd_MtrNm_f32.value)

#  define Rte_IRead_DampingFirewall_Per1_DampingCmd_MtrNm_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_DampingFirewall_DampingFirewall_Per1.Rte_DampingCmd_MtrNm_f32.value)

#  define Rte_IRead_DampingFirewall_Per1_Defeat_Damping_Svc_Cnt_lgc() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_DampingFirewall_DampingFirewall_Per1.Rte_Defeat_Damping_Svc_Cnt_lgc.value)

#  define Rte_IRead_DampingFirewall_Per1_FreqDepDmpSrlComSvcDft_Cnt_lgc() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_DampingFirewall_DampingFirewall_Per1.Rte_FreqDepDmpSrlComSvcDft_Cnt_lgc.value)

#  define Rte_IRead_DampingFirewall_Per1_HwTorque_HwNm_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_DampingFirewall_DampingFirewall_Per1.Rte_HwTorque_HwNm_f32.value)

#  define Rte_IRead_DampingFirewall_Per1_InertiaComp_MtrNm_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_DampingFirewall_DampingFirewall_Per1.Rte_InertiaComp_MtrNm_f32.value)

#  define Rte_IRead_DampingFirewall_Per1_MEC_Counter_Cnt_enum() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_DampingFirewall_DampingFirewall_Per1.Rte_MEC_Counter_Cnt_enum.value)

#  define Rte_IRead_DampingFirewall_Per1_MtrVelCRF_MtrRadpS_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_DampingFirewall_DampingFirewall_Per1.Rte_MtrVelCRF_MtrRadpS_f32.value)

#  define Rte_IRead_DampingFirewall_Per1_VehicleLonAccel_KphpS_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_DampingFirewall_DampingFirewall_Per1.Rte_VehicleLonAccel_KphpS_f32.value)

#  define Rte_IRead_DampingFirewall_Per1_VehicleSpeed_Kph_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_DampingFirewall_DampingFirewall_Per1.Rte_VehicleSpeed_Kph_f32.value)

#  define Rte_IRead_DampingFirewall_Per1_WIRCmdAmpBlnd_MtrNm_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_DampingFirewall_DampingFirewall_Per1.Rte_WIRCmdAmpBlnd_MtrNm_f32.value)

#  define Rte_IWrite_DampingFirewall_Per1_CombinedDamping_MtrNm_f32(data) \
  ( \
    Rte_Task_2ms_10.Rte_RB.Rte_Ap_DampingFirewall_DampingFirewall_Per1.Rte_CombinedDamping_MtrNm_f32.value = (data) \
  )

#  define Rte_IWriteRef_DampingFirewall_Per1_CombinedDamping_MtrNm_f32() \
  (&Rte_Task_2ms_10.Rte_RB.Rte_Ap_DampingFirewall_DampingFirewall_Per1.Rte_CombinedDamping_MtrNm_f32.value)


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Mode_SystemState_Mode() Rte_ModeMachine_StaMd_SystemState_Mode


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


# define RTE_START_SEC_AP_DAMPINGFIREWALL_APPL_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

FUNC(void, RTE_AP_DAMPINGFIREWALL_APPL_CODE) DampingFirewall_Init1(void);

FUNC(void, RTE_AP_DAMPINGFIREWALL_APPL_CODE) DampingFirewall_Per1(void);

# define RTE_STOP_SEC_AP_DAMPINGFIREWALL_APPL_CODE
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


#endif /* _RTE_AP_DAMPINGFIREWALL_H */
