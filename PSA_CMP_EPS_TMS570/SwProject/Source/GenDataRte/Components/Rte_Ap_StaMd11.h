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
 *          File:  Components/Rte_Ap_StaMd11.h
 *     Workspace:  C:/SynergyProjects/PSA_BMPV_EPS_TMS570-nzx5jd/PSA_BMPV_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nxtr  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_STAMD11_H
# define _RTE_AP_STAMD11_H

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

# include "Rte_Hook.h"


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_ATerm_Cnt_lgc (TRUE)
#  define Rte_InitValue_CTerm_Cnt_lgc (FALSE)
#  define Rte_InitValue_ControlledDampStatusComplete_Cnt_lgc (FALSE)
#  define Rte_InitValue_FTerm_Cnt_lgc (FALSE)
#  define Rte_InitValue_RampStatusComplete_Cnt_lgc (FALSE)
#  define Rte_InitValue_TMFTestComplete_Cnt_lgc (FALSE)
# endif


# ifndef RTE_CORE
#  define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h"

/**********************************************************************************************************************
 * Buffers for Mode Management
 *********************************************************************************************************************/
extern VAR(Rte_ModeType_StaMd_Mode, RTE_VAR_NOINIT) Rte_ModeMachine_StaMd11_SystemState11_Mode;

#  define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h"
# endif /* !defined(RTE_CORE) */



# ifndef RTE_CORE
#  define RTE_START_SEC_VAR_Ap_11_NOINIT_UNSPECIFIED
#  include "MemMap.h"

/**********************************************************************************************************************
 * Buffers for implicit communication
 *********************************************************************************************************************/

extern VAR(Rte_tsTask_2ms_11, RTE_VAR_NOINIT) Rte_Task_2ms_11;

#  define RTE_STOP_SEC_VAR_Ap_11_NOINIT_UNSPECIFIED
#  include "MemMap.h"
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Ap_StaMd11_SystemState11_Mode(Rte_ModeType_StaMd_Mode nextMode);


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

#  define Rte_IRead_StaMd11_Per1_ATerm_Cnt_lgc() \
  (Rte_Task_2ms_11.Rte_RB.Rte_Ap_StaMd11_StaMd11_Per1.Rte_ATerm_Cnt_lgc.value)

#  define Rte_IRead_StaMd11_Per1_CTerm_Cnt_lgc() \
  (Rte_Task_2ms_11.Rte_RB.Rte_Ap_StaMd11_StaMd11_Per1.Rte_CTerm_Cnt_lgc.value)

#  define Rte_IRead_StaMd11_Per1_ControlledDampStatusComplete_Cnt_lgc() \
  (Rte_Task_2ms_11.Rte_RB.Rte_Ap_StaMd11_StaMd11_Per1.Rte_ControlledDampStatusComplete_Cnt_lgc.value)

#  define Rte_IRead_StaMd11_Per1_FTerm_Cnt_lgc() \
  (Rte_Task_2ms_11.Rte_RB.Rte_Ap_StaMd11_StaMd11_Per1.Rte_FTerm_Cnt_lgc.value)

#  define Rte_IRead_StaMd11_Per1_RampStatusComplete_Cnt_lgc() \
  (Rte_Task_2ms_11.Rte_RB.Rte_Ap_StaMd11_StaMd11_Per1.Rte_RampStatusComplete_Cnt_lgc.value)

#  define Rte_IRead_StaMd11_Per1_TMFTestComplete_Cnt_lgc() \
  (Rte_Task_2ms_11.Rte_RB.Rte_Ap_StaMd11_StaMd11_Per1.Rte_TMFTestComplete_Cnt_lgc.value)


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Mode_SystemState11_Mode() Rte_ModeMachine_StaMd11_SystemState11_Mode


/**********************************************************************************************************************
 * Rte_Switch_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Switch_SystemState11_Mode Rte_Switch_Ap_StaMd11_SystemState11_Mode


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_AP_DIAGMGR11_APPL_CODE
#  include "MemMap.h"
FUNC(Std_ReturnType, RTE_AP_DIAGMGR11_APPL_CODE) NxtrDiagMgr11_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum);
#  define RTE_STOP_SEC_AP_DIAGMGR11_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_NxtrDiagMgr_SetNTCStatus NxtrDiagMgr11_SetNTCStatus


/**********************************************************************************************************************
 * Exclusive Areas
 *********************************************************************************************************************/

#  define Rte_Enter_StaMds11_MilestoneRqst_WARMINIT_ExclArea() \
  { \
    Rte_EnterHook_Ap_StaMd11_StaMds11_MilestoneRqst_WARMINIT_ExclArea_Start(); \
    SuspendOSInterrupts(); \
    Rte_EnterHook_Ap_StaMd11_StaMds11_MilestoneRqst_WARMINIT_ExclArea_Return(); \
  }

#  define Rte_Exit_StaMds11_MilestoneRqst_WARMINIT_ExclArea() \
  { \
    Rte_ExitHook_Ap_StaMd11_StaMds11_MilestoneRqst_WARMINIT_ExclArea_Start(); \
    ResumeOSInterrupts(); \
    Rte_ExitHook_Ap_StaMd11_StaMds11_MilestoneRqst_WARMINIT_ExclArea_Return(); \
  }


# endif /* !defined(RTE_CORE) */


# define RTE_START_SEC_AP_STAMD11_APPL_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

FUNC(void, RTE_AP_STAMD11_APPL_CODE) MilestoneRqst11_WarmInitMilestoneComplete(StaMd_Users user);

FUNC(void, RTE_AP_STAMD11_APPL_CODE) MilestoneRqst11_WarmInitMilestoneNotComplete(StaMd_Users user);

FUNC(void, RTE_AP_STAMD11_APPL_CODE) StaMd11_Per1(void);

# define RTE_STOP_SEC_AP_STAMD11_APPL_CODE
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


#endif /* _RTE_AP_STAMD11_H */
