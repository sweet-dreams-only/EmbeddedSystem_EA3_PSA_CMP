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
 *          File:  Components/Rte_Ap_TqRsDg.h
 *     Workspace:  C:/Component/PSA_CMP_Synergy/PSA_CMP_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nxtr  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_TQRSDG_H
# define _RTE_AP_TQRSDG_H

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

#  define Rte_InitValue_CorrMtrPosElec_Rev_f32 (0.0F)
#  define Rte_InitValue_EstKe_VpRadpS_f32 (0.0F)
#  define Rte_InitValue_EstR_Ohm_f32 (0.0F)
#  define Rte_InitValue_MRFMtrVel_MtrRadpS_f32 (0.0F)
#  define Rte_InitValue_MtrCurrDaxRef_Amp_f32 (0.0F)
#  define Rte_InitValue_MtrCurrIdptSig_Cnt_u08 (2U)
#  define Rte_InitValue_MtrCurrQaxFinalRef_Amp_f32 (0.0F)
#  define Rte_InitValue_MtrVoltDax_Volt_f32 (0.0F)
#  define Rte_InitValue_MtrVoltQax_Volt_f32 (0.0F)
#  define Rte_InitValue_OutputRampMult_Uls_f32 (0.0F)
#  define Rte_InitValue_TrqLimitMin_MtrNm_f32 (0.0F)
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

#  define Rte_IRead_TqRsDg_Per1_CorrMtrPosElec_Rev_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_TqRsDg_TqRsDg_Per1.Rte_CorrMtrPosElec_Rev_f32.value)

#  define Rte_IRead_TqRsDg_Per1_EstKe_VpRadpS_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_TqRsDg_TqRsDg_Per1.Rte_EstKe_VpRadpS_f32.value)

#  define Rte_IRead_TqRsDg_Per1_EstR_Ohm_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_TqRsDg_TqRsDg_Per1.Rte_EstR_Ohm_f32.value)

#  define Rte_IRead_TqRsDg_Per1_MRFMtrVel_MtrRadpS_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_TqRsDg_TqRsDg_Per1.Rte_MRFMtrVel_MtrRadpS_f32.value)

#  define Rte_IRead_TqRsDg_Per1_MtrCurrDaxRef_Amp_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_TqRsDg_TqRsDg_Per1.Rte_MtrCurrDaxRef_Amp_f32.value)

#  define Rte_IRead_TqRsDg_Per1_MtrCurrQaxFinalRef_Amp_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_TqRsDg_TqRsDg_Per1.Rte_MtrCurrQaxFinalRef_Amp_f32.value)

#  define Rte_IRead_TqRsDg_Per1_MtrVoltDax_Volt_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_TqRsDg_TqRsDg_Per1.Rte_MtrVoltDax_Volt_f32.value)

#  define Rte_IRead_TqRsDg_Per1_MtrVoltQax_Volt_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_TqRsDg_TqRsDg_Per1.Rte_MtrVoltQax_Volt_f32.value)

#  define Rte_IRead_TqRsDg_Per1_OutputRampMult_Uls_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_TqRsDg_TqRsDg_Per1.Rte_OutputRampMult_Uls_f32.value)

#  define Rte_IRead_TqRsDg_Per1_TrqLimitMin_MtrNm_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_TqRsDg_TqRsDg_Per1.Rte_TrqLimitMin_MtrNm_f32.value)

#  define Rte_IWrite_TqRsDg_Per1_MtrCurrIdptSig_Cnt_u08(data) \
  ( \
    Rte_Task_2ms_10.Rte_RB.Rte_Ap_TqRsDg_TqRsDg_Per1.Rte_MtrCurrIdptSig_Cnt_u08.value = (data) \
  )

#  define Rte_IWriteRef_TqRsDg_Per1_MtrCurrIdptSig_Cnt_u08() \
  (&Rte_Task_2ms_10.Rte_RB.Rte_Ap_TqRsDg_TqRsDg_Per1.Rte_MtrCurrIdptSig_Cnt_u08.value)


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


# define RTE_START_SEC_AP_TQRSDG_APPL_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

FUNC(void, RTE_AP_TQRSDG_APPL_CODE) TqRsDg_Init1(void);

FUNC(void, RTE_AP_TQRSDG_APPL_CODE) TqRsDg_Per1(void);

# define RTE_STOP_SEC_AP_TQRSDG_APPL_CODE
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


#endif /* _RTE_AP_TQRSDG_H */
