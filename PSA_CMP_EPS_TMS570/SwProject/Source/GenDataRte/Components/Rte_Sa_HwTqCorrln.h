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
 *          File:  Components/Rte_Sa_HwTqCorrln.h
 *     Workspace:  C:/synergy_projects_working/PSA_CMP/PSA_CMP_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nxtr  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_SA_HWTQCORRLN_H
# define _RTE_SA_HWTQCORRLN_H

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

#  define Rte_InitValue_HwTq1Qlfr_State_enum (0U)
#  define Rte_InitValue_HwTq1RollgCntr_Cnt_u08 (0U)
#  define Rte_InitValue_HwTq1Val_HwNm_f32 (0.0F)
#  define Rte_InitValue_HwTq2Qlfr_State_enum (0U)
#  define Rte_InitValue_HwTq2RollgCntr_Cnt_u08 (0U)
#  define Rte_InitValue_HwTq2Val_HwNm_f32 (0.0F)
#  define Rte_InitValue_HwTqCorrlnSts_Cnt_u16 (3U)
#  define Rte_InitValue_HwTqIdptSig_Cnt_u08 (4U)
#  define Rte_InitValue_HwTqVal_HwNm_f32 (0.0F)
# endif


# ifndef RTE_CORE
#  define RTE_START_SEC_VAR_Ap_10_NOINIT_UNSPECIFIED
#  include "MemMap.h"

/**********************************************************************************************************************
 * Buffers for implicit communication
 *********************************************************************************************************************/

extern VAR(Rte_tsTask_2ms_10, RTE_VAR_NOINIT) Rte_Task_2ms_10;

extern VAR(Rte_tsTask_4ms_10, RTE_VAR_NOINIT) Rte_Task_4ms_10;

extern VAR(Rte_tsTask_100ms_10, RTE_VAR_NOINIT) Rte_Task_100ms_10;

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

#  define Rte_IRead_HwTqCorrln_Per1_HwTq1Qlfr_State_enum() \
  (Rte_Task_2ms_10.Rte_TB.Rte_I_Nhet1CfgAndUse_HwTq1Qlfr_State_enum.value)

#  define Rte_IRead_HwTqCorrln_Per1_HwTq1RollgCntr_Cnt_u08() \
  (Rte_Task_2ms_10.Rte_TB.Rte_I_Nhet1CfgAndUse_HwTq1RollgCntr_Cnt_u08.value)

#  define Rte_IRead_HwTqCorrln_Per1_HwTq1Val_HwNm_f32() \
  (Rte_Task_2ms_10.Rte_TB.Rte_I_Nhet1CfgAndUse_HwTq1Val_HwNm_f32.value)

#  define Rte_IRead_HwTqCorrln_Per1_HwTq2Qlfr_State_enum() \
  (Rte_Task_2ms_10.Rte_TB.Rte_I_Nhet1CfgAndUse_HwTq2Qlfr_State_enum.value)

#  define Rte_IRead_HwTqCorrln_Per1_HwTq2RollgCntr_Cnt_u08() \
  (Rte_Task_2ms_10.Rte_TB.Rte_I_Nhet1CfgAndUse_HwTq2RollgCntr_Cnt_u08.value)

#  define Rte_IRead_HwTqCorrln_Per1_HwTq2Val_HwNm_f32() \
  (Rte_Task_2ms_10.Rte_TB.Rte_I_Nhet1CfgAndUse_HwTq2Val_HwNm_f32.value)

#  define Rte_IWrite_HwTqCorrln_Per1_HwTqCorrlnSts_Cnt_u16(data) \
  ( \
    Rte_Task_2ms_10.Rte_TB.Rte_I_HwTqCorrln_HwTqCorrlnSts_Cnt_u16.value = (data) \
  )

#  define Rte_IWriteRef_HwTqCorrln_Per1_HwTqCorrlnSts_Cnt_u16() \
  (&Rte_Task_2ms_10.Rte_TB.Rte_I_HwTqCorrln_HwTqCorrlnSts_Cnt_u16.value)

#  define Rte_IRead_HwTqCorrln_Per2_HwTq1Val_HwNm_f32() \
  (Rte_Task_4ms_10.Rte_RB.Rte_Sa_HwTqCorrln_HwTqCorrln_Per2.Rte_HwTq1Val_HwNm_f32.value)

#  define Rte_IRead_HwTqCorrln_Per2_HwTq2Val_HwNm_f32() \
  (Rte_Task_4ms_10.Rte_RB.Rte_Sa_HwTqCorrln_HwTqCorrln_Per2.Rte_HwTq2Val_HwNm_f32.value)

#  define Rte_IWrite_HwTqCorrln_Per2_HwTqIdptSig_Cnt_u08(data) \
  ( \
    Rte_Task_4ms_10.Rte_TB.Rte_I_HwTqCorrln_HwTqIdptSig_Cnt_u08.value = (data) \
  )

#  define Rte_IWriteRef_HwTqCorrln_Per2_HwTqIdptSig_Cnt_u08() \
  (&Rte_Task_4ms_10.Rte_TB.Rte_I_HwTqCorrln_HwTqIdptSig_Cnt_u08.value)

#  define Rte_IRead_HwTqCorrln_Per3_HwTqVal_HwNm_f32() \
  (Rte_Task_100ms_10.Rte_RB.Rte_Sa_HwTqCorrln_HwTqCorrln_Per3.Rte_HwTqVal_HwNm_f32.value)


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h"
FUNC(void, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(UInt8 parg0, Boolean RamBlockStatus);
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_HwTqCorrlnCh1CMCLPFSvBlk_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((UInt8)20, arg1), ((Std_ReturnType)RTE_E_OK))
#  define RTE_START_SEC_AP_DIAGMGR10_APPL_CODE
#  include "MemMap.h"
FUNC(Std_ReturnType, RTE_AP_DIAGMGR10_APPL_CODE) NxtrDiagMgr10_GetNTCActive(NTCNumber NTC_Cnt_T_enum, P2VAR(Boolean, AUTOMATIC, RTE_AP_DIAGMGR10_APPL_VAR) NTCActive_Ptr_T_lgc);
#  define RTE_STOP_SEC_AP_DIAGMGR10_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_NxtrDiagMgr_GetNTCActive NxtrDiagMgr10_GetNTCActive
#  define RTE_START_SEC_AP_DIAGMGR10_APPL_CODE
#  include "MemMap.h"
FUNC(Std_ReturnType, RTE_AP_DIAGMGR10_APPL_CODE) NxtrDiagMgr10_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum);
#  define RTE_STOP_SEC_AP_DIAGMGR10_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_NxtrDiagMgr_SetNTCStatus NxtrDiagMgr10_SetNTCStatus


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Ap_10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h"

extern VAR(Float, RTE_VAR_DEFAULT_RTE_Ap_10_PIM_GROUP) Rte_HwTqCorrln_HwTqCorrlnCh1CMCLPFSvData;

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Ap_10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h"

#  endif

#  define Rte_Pim_HwTqCorrlnCh1CMCLPFSvData() \
  (&Rte_HwTqCorrln_HwTqCorrlnCh1CMCLPFSvData)


# endif /* !defined(RTE_CORE) */


# define RTE_START_SEC_SA_HWTQCORRLN_APPL_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

FUNC(void, RTE_SA_HWTQCORRLN_APPL_CODE) HwTqCorrln_Init1(void);

FUNC(void, RTE_SA_HWTQCORRLN_APPL_CODE) HwTqCorrln_Per1(void);

FUNC(void, RTE_SA_HWTQCORRLN_APPL_CODE) HwTqCorrln_Per2(void);

FUNC(void, RTE_SA_HWTQCORRLN_APPL_CODE) HwTqCorrln_Per3(void);

# define RTE_STOP_SEC_SA_HWTQCORRLN_APPL_CODE
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


#endif /* _RTE_SA_HWTQCORRLN_H */
