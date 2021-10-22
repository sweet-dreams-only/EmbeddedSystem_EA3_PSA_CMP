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
 *          File:  Components/Rte_Ap_ePWM2.h
 *     Workspace:  C:/synergy_projects_working/PSA3.5.1/PSA_BMPV_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nxtr  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_EPWM2_H
# define _RTE_AP_EPWM2_H

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

#  define Rte_InitValue_CtrldDmpStsCmp_Cnt_lgc (FALSE)
#  define Rte_InitValue_DiagStsCtrldDisRmpPres_Cnt_lgc (FALSE)
#  define Rte_InitValue_DiagStsNonRecRmpToZeroFltPres_Cnt_lgc (FALSE)
#  define Rte_InitValue_RampDwnStatusComplete_Cnt_lgc (FALSE)
# endif


# ifndef RTE_CORE
#  define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h"

/**********************************************************************************************************************
 * Buffers for Mode Management
 *********************************************************************************************************************/
extern VAR(Rte_ModeType_StaMd_Mode, RTE_VAR_NOINIT) Rte_ModeMachine_StaMd9_SystemState9_Mode;

#  define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h"
# endif /* !defined(RTE_CORE) */



# ifndef RTE_CORE
#  define RTE_START_SEC_VAR_Ap_9_NOINIT_UNSPECIFIED
#  include "MemMap.h"

/**********************************************************************************************************************
 * Buffers for implicit communication
 *********************************************************************************************************************/

extern VAR(Rte_tsTask_2ms_9, RTE_VAR_NOINIT) Rte_Task_2ms_9;

#  define RTE_STOP_SEC_VAR_Ap_9_NOINIT_UNSPECIFIED
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

#  define Rte_IRead_ePWM2_Per1_CtrldDmpStsCmp_Cnt_lgc() \
  (Rte_Task_2ms_9.Rte_RB.Rte_Ap_ePWM2_ePWM2_Per1.Rte_CtrldDmpStsCmp_Cnt_lgc.value)

#  define Rte_IRead_ePWM2_Per1_DiagStsCtrldDisRmpPres_Cnt_lgc() \
  (Rte_Task_2ms_9.Rte_RB.Rte_Ap_ePWM2_ePWM2_Per1.Rte_DiagStsCtrldDisRmpPres_Cnt_lgc.value)

#  define Rte_IRead_ePWM2_Per1_DiagStsNonRecRmpToZeroFltPres_Cnt_lgc() \
  (Rte_Task_2ms_9.Rte_RB.Rte_Ap_ePWM2_ePWM2_Per1.Rte_DiagStsNonRecRmpToZeroFltPres_Cnt_lgc.value)

#  define Rte_IRead_ePWM2_Per1_RampDwnStatusComplete_Cnt_lgc() \
  (Rte_Task_2ms_9.Rte_RB.Rte_Ap_ePWM2_ePWM2_Per1.Rte_RampDwnStatusComplete_Cnt_lgc.value)


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Mode_SystemState_Mode() Rte_ModeMachine_StaMd9_SystemState9_Mode


# endif /* !defined(RTE_CORE) */


# define RTE_START_SEC_AP_EPWM2_APPL_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

FUNC(void, RTE_AP_EPWM2_APPL_CODE) ePWM2_Per1(void);

FUNC(void, RTE_AP_EPWM2_APPL_CODE) ePWM2_Trns1(void);

FUNC(void, RTE_AP_EPWM2_APPL_CODE) ePWM2_Trns2(void);

# define RTE_STOP_SEC_AP_EPWM2_APPL_CODE
# include "MemMap.h"

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */


#endif /* _RTE_AP_EPWM2_H */
