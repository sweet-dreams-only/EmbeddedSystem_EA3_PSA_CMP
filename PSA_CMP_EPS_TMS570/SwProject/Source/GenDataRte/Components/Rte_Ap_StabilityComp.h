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
 *          File:  Components/Rte_Ap_StabilityComp.h
 *     Workspace:  C:/SynergyProjects/PSA_BMPV_EPS_TMS570-nzx5jd/PSA_BMPV_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nxtr  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_STABILITYCOMP_H
# define _RTE_AP_STABILITYCOMP_H

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

#  define Rte_InitValue_AssistCmd_MtrNm_f32 (0.0F)
#  define Rte_InitValue_AssistDDFactor_Uls_f32 (1.0F)
#  define Rte_InitValue_AsstFWActive_Uls_f32 (0.0F)
#  define Rte_InitValue_CombinedAssist_MtrNm_f32 (0.0F)
#  define Rte_InitValue_HwTorque_HwNm_f32 (0.0F)
#  define Rte_InitValue_SysAssistCmd_MtrNm_MtrNm_f32 (0.0F)
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

#  define Rte_IRead_StabilityComp_Per1_AssistDDFactor_Uls_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_StabilityComp_StabilityComp_Per1.Rte_AssistDDFactor_Uls_f32.value)

#  define Rte_IRead_StabilityComp_Per1_AsstFWActive_Uls_f32() \
  (Rte_Task_2ms_10.Rte_TB.Rte_I_AssistFirewall_AsstFirewallActive_Uls_f32.value)

#  define Rte_IRead_StabilityComp_Per1_CombinedAssist_MtrNm_f32() \
  (Rte_Task_2ms_10.Rte_TB.Rte_I_AssistFirewall_CombinedAssist_MtrNm_f32.value)

#  define Rte_IRead_StabilityComp_Per1_HwTorque_HwNm_f32() \
  (Rte_Task_2ms_10.Rte_TB.Rte_I_Sweep_OutputHwTrq_HwNm_f32.value)

#  define Rte_IRead_StabilityComp_Per1_SysAssistCmd_MtrNm_MtrNm_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_StabilityComp_StabilityComp_Per1.Rte_SysAssistCmd_MtrNm_MtrNm_f32.value)

#  define Rte_IRead_StabilityComp_Per1_VehicleSpeed_Kph_f32() \
  (Rte_Task_2ms_10.Rte_TB.Rte_I_SignlCondn_VehicleSpeed_Kph_f32.value)

#  define Rte_IWrite_StabilityComp_Per1_AssistCmd_MtrNm_f32(data) \
  ( \
    Rte_Task_2ms_10.Rte_TB.Rte_I_StabilityComp_AssistCmd_MtrNm_f32.value = (data) \
  )

#  define Rte_IWriteRef_StabilityComp_Per1_AssistCmd_MtrNm_f32() \
  (&Rte_Task_2ms_10.Rte_TB.Rte_I_StabilityComp_AssistCmd_MtrNm_f32.value)


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_AP_FLTINJECTION_APPL_CODE
#  include "MemMap.h"
FUNC(void, RTE_AP_FLTINJECTION_APPL_CODE) FltInjection_SCom_FltInjection(P2VAR(Float, AUTOMATIC, RTE_AP_FLTINJECTION_APPL_VAR) SignalPath_Uls_f32, FltInjectionLocType LocationKey_Cnt_enum);
#  define RTE_STOP_SEC_AP_FLTINJECTION_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_FaultInjection_SCom_FltInjection(arg1, arg2) (FltInjection_SCom_FltInjection(arg1, arg2), ((Std_ReturnType)RTE_E_OK))
#  define RTE_START_SEC_AP_DIAGMGR10_APPL_CODE
#  include "MemMap.h"
FUNC(Std_ReturnType, RTE_AP_DIAGMGR10_APPL_CODE) NxtrDiagMgr10_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum);
#  define RTE_STOP_SEC_AP_DIAGMGR10_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_NxtrDiagMgr_SetNTCStatus NxtrDiagMgr10_SetNTCStatus


# endif /* !defined(RTE_CORE) */


# define RTE_START_SEC_AP_STABILITYCOMP_APPL_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

FUNC(void, RTE_AP_STABILITYCOMP_APPL_CODE) StabilityComp_Init1(void);

FUNC(void, RTE_AP_STABILITYCOMP_APPL_CODE) StabilityComp_Per1(void);

# define RTE_STOP_SEC_AP_STABILITYCOMP_APPL_CODE
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


#endif /* _RTE_AP_STABILITYCOMP_H */
