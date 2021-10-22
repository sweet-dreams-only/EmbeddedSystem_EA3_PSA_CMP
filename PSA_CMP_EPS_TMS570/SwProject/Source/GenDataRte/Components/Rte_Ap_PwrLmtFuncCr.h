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
 *          File:  Components/Rte_Ap_PwrLmtFuncCr.h
 *     Workspace:  C:/SynergyProjects/PSA_BMPV_EPS_TMS570-nzx5jd/PSA_BMPV_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nxtr  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_PWRLMTFUNCCR_H
# define _RTE_AP_PWRLMTFUNCCR_H

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

#  define Rte_InitValue_AltFaultActive_Cnt_lgc (FALSE)
#  define Rte_InitValue_CntDisMtrTrqCmdMRF_MtrNm_f32 (0.0F)
#  define Rte_InitValue_EstKe_VpRadpS_f32 (0.0F)
#  define Rte_InitValue_FltTrqLmt_Uls_f32 (0.0F)
#  define Rte_InitValue_MRFMtrTrqCmd_MtrNm_f32 (0.0F)
#  define Rte_InitValue_MotorVelMRF_MtrRadpS_f32 (0.0F)
#  define Rte_InitValue_PosServEnable_Cnt_lgc (FALSE)
#  define Rte_InitValue_ThresholdExceeded_Cnt_lgc (FALSE)
#  define Rte_InitValue_Vecu_Volt_f32 (5.0F)
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

extern VAR(Rte_tsTask_10ms_10a, RTE_VAR_NOINIT) Rte_Task_10ms_10a;

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

#  define Rte_IRead_PwrLmtFuncCr_Per1_AltFaultActive_Cnt_lgc() \
  (FALSE)

#  define Rte_IRead_PwrLmtFuncCr_Per1_CntDisMtrTrqCmdMRF_MtrNm_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1.Rte_CntDisMtrTrqCmdMRF_MtrNm_f32.value)

#  define Rte_IRead_PwrLmtFuncCr_Per1_EstKe_VpRadpS_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1.Rte_EstKe_VpRadpS_f32.value)

#  define Rte_IRead_PwrLmtFuncCr_Per1_MotorVelMRF_MtrRadpS_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1.Rte_MotorVelMRF_MtrRadpS_f32.value)

#  define Rte_IRead_PwrLmtFuncCr_Per1_PosServEnable_Cnt_lgc() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1.Rte_PosServEnable_Cnt_lgc.value)

#  define Rte_IRead_PwrLmtFuncCr_Per1_Vecu_Volt_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1.Rte_Vecu_Volt_f32.value)

#  define Rte_IWrite_PwrLmtFuncCr_Per1_MRFMtrTrqCmd_MtrNm_f32(data) \
  ( \
    Rte_Task_2ms_10.Rte_RB.Rte_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1.Rte_MRFMtrTrqCmd_MtrNm_f32.value = (data) \
  )

#  define Rte_IWriteRef_PwrLmtFuncCr_Per1_MRFMtrTrqCmd_MtrNm_f32() \
  (&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per1.Rte_MRFMtrTrqCmd_MtrNm_f32.value)

#  define Rte_IRead_PwrLmtFuncCr_Per2_CntDisMtrTrqCmdMRF_MtrNm_f32() \
  (Rte_Task_10ms_10a.Rte_RB.Rte_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2.Rte_CntDisMtrTrqCmdMRF_MtrNm_f32.value)

#  define Rte_IRead_PwrLmtFuncCr_Per2_Vecu_Volt_f32() \
  (Rte_Task_10ms_10a.Rte_RB.Rte_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2.Rte_Vecu_Volt_f32.value)

#  define Rte_IWrite_PwrLmtFuncCr_Per2_FltTrqLmt_Uls_f32(data) \
  ( \
    Rte_Task_10ms_10a.Rte_RB.Rte_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2.Rte_FltTrqLmt_Uls_f32.value = (data) \
  )

#  define Rte_IWriteRef_PwrLmtFuncCr_Per2_FltTrqLmt_Uls_f32() \
  (&Rte_Task_10ms_10a.Rte_RB.Rte_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2.Rte_FltTrqLmt_Uls_f32.value)

#  define Rte_IWrite_PwrLmtFuncCr_Per2_ThresholdExceeded_Cnt_lgc(data) \
  ( \
    Rte_Task_10ms_10a.Rte_RB.Rte_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2.Rte_ThresholdExceeded_Cnt_lgc.value = (data) \
  )

#  define Rte_IWriteRef_PwrLmtFuncCr_Per2_ThresholdExceeded_Cnt_lgc() \
  (&Rte_Task_10ms_10a.Rte_RB.Rte_Ap_PwrLmtFuncCr_PwrLmtFuncCr_Per2.Rte_ThresholdExceeded_Cnt_lgc.value)


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Mode_SystemState_Mode() Rte_ModeMachine_StaMd_SystemState_Mode


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_AP_DIAGMGR10_APPL_CODE
#  include "MemMap.h"
FUNC(Std_ReturnType, RTE_AP_DIAGMGR10_APPL_CODE) NxtrDiagMgr10_GetNTCStatus(NTCNumber NTC_Cnt_T_enum, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGMGR10_APPL_VAR) Status_Ptr_T_u08);
#  define RTE_STOP_SEC_AP_DIAGMGR10_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_NxtrDiagMgr_GetNTCStatus NxtrDiagMgr10_GetNTCStatus
#  define RTE_START_SEC_AP_DIAGMGR10_APPL_CODE
#  include "MemMap.h"
FUNC(Std_ReturnType, RTE_AP_DIAGMGR10_APPL_CODE) NxtrDiagMgr10_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum);
#  define RTE_STOP_SEC_AP_DIAGMGR10_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_NxtrDiagMgr_SetNTCStatus NxtrDiagMgr10_SetNTCStatus
#  define RTE_START_SEC_NXTRLIBS_APPL_CODE
#  include "MemMap.h"
FUNC(void, RTE_NXTRLIBS_APPL_CODE) DtrmnElapsedTime_mS_u16(UInt32 InitialTime, P2VAR(UInt16, AUTOMATIC, RTE_NXTRLIBS_APPL_VAR) ElapsedTime);
#  define RTE_STOP_SEC_NXTRLIBS_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_SystemTime_DtrmnElapsedTime_mS_u16(arg1, arg2) (DtrmnElapsedTime_mS_u16(arg1, arg2), ((Std_ReturnType)RTE_E_OK))
#  define RTE_START_SEC_NXTRLIBS_APPL_CODE
#  include "MemMap.h"
FUNC(void, RTE_NXTRLIBS_APPL_CODE) GetSystemTime_mS_u32(P2VAR(UInt32, AUTOMATIC, RTE_NXTRLIBS_APPL_VAR) CurrentTime);
#  define RTE_STOP_SEC_NXTRLIBS_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_SystemTime_GetSystemTime_mS_u32(arg1) (GetSystemTime_mS_u32(arg1), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define RTE_START_SEC_AP_PWRLMTFUNCCR_APPL_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

FUNC(void, RTE_AP_PWRLMTFUNCCR_APPL_CODE) PwrLmtFuncCr_Init1(void);

FUNC(void, RTE_AP_PWRLMTFUNCCR_APPL_CODE) PwrLmtFuncCr_Per1(void);

FUNC(void, RTE_AP_PWRLMTFUNCCR_APPL_CODE) PwrLmtFuncCr_Per2(void);

# define RTE_STOP_SEC_AP_PWRLMTFUNCCR_APPL_CODE
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


#endif /* _RTE_AP_PWRLMTFUNCCR_H */
