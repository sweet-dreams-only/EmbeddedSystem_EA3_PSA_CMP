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
 *          File:  Components/Rte_Ap_PeakCurrEst.h
 *     Workspace:  C:/Component/PSA_CMP_Synergy/PSA_CMP_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nxtr  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_PEAKCURREST_H
# define _RTE_AP_PEAKCURREST_H

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

#  define Rte_InitValue_DualEcuMotCtrlMtgnEna_Cnt_lgc (FALSE)
#  define Rte_InitValue_EstPkCurr_AmpSq_f32 (0.0F)
#  define Rte_InitValue_FiltEstPkCurr_AmpSq_f32 (0.0F)
#  define Rte_InitValue_IvtrLoaMtgtnEn_Cnt_lgc (FALSE)
#  define Rte_InitValue_MotCurrLoaMtgtnEn_Cnt_lgc (FALSE)
#  define Rte_InitValue_MtrCurrDax_Amp_f32 (0.0F)
#  define Rte_InitValue_MtrCurrDaxRef_Amp_f32 (0.0F)
#  define Rte_InitValue_MtrCurrQax_Amp_f32 (0.0F)
#  define Rte_InitValue_MtrCurrQaxRef_Amp_f32 (0.0F)
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

#  define Rte_IRead_PeakCurrEst_Per1_DualEcuMotCtrlMtgnEna_Cnt_lgc() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PeakCurrEst_PeakCurrEst_Per1.Rte_DualEcuMotCtrlMtgnEna_Cnt_lgc.value)

#  define Rte_IRead_PeakCurrEst_Per1_IvtrLoaMtgtnEn_Cnt_lgc() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PeakCurrEst_PeakCurrEst_Per1.Rte_IvtrLoaMtgtnEn_Cnt_lgc.value)

#  define Rte_IRead_PeakCurrEst_Per1_MotCurrLoaMtgtnEn_Cnt_lgc() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PeakCurrEst_PeakCurrEst_Per1.Rte_MotCurrLoaMtgtnEn_Cnt_lgc.value)

#  define Rte_IRead_PeakCurrEst_Per1_MtrCurrDaxRef_Amp_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PeakCurrEst_PeakCurrEst_Per1.Rte_MtrCurrDaxRef_Amp_f32.value)

#  define Rte_IRead_PeakCurrEst_Per1_MtrCurrDax_Amp_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PeakCurrEst_PeakCurrEst_Per1.Rte_MtrCurrDax_Amp_f32.value)

#  define Rte_IRead_PeakCurrEst_Per1_MtrCurrQaxRef_Amp_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PeakCurrEst_PeakCurrEst_Per1.Rte_MtrCurrQaxRef_Amp_f32.value)

#  define Rte_IRead_PeakCurrEst_Per1_MtrCurrQax_Amp_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PeakCurrEst_PeakCurrEst_Per1.Rte_MtrCurrQax_Amp_f32.value)

#  define Rte_IWrite_PeakCurrEst_Per1_EstPkCurr_AmpSq_f32(data) \
  ( \
    Rte_Task_2ms_10.Rte_RB.Rte_Ap_PeakCurrEst_PeakCurrEst_Per1.Rte_EstPkCurr_AmpSq_f32.value = (data) \
  )

#  define Rte_IWriteRef_PeakCurrEst_Per1_EstPkCurr_AmpSq_f32() \
  (&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PeakCurrEst_PeakCurrEst_Per1.Rte_EstPkCurr_AmpSq_f32.value)

#  define Rte_IWrite_PeakCurrEst_Per2_FiltEstPkCurr_AmpSq_f32(data) \
  ( \
    Rte_Task_100ms_10.Rte_RB.Rte_Ap_PeakCurrEst_PeakCurrEst_Per2.Rte_FiltEstPkCurr_AmpSq_f32.value = (data) \
  )

#  define Rte_IWriteRef_PeakCurrEst_Per2_FiltEstPkCurr_AmpSq_f32() \
  (&Rte_Task_100ms_10.Rte_RB.Rte_Ap_PeakCurrEst_PeakCurrEst_Per2.Rte_FiltEstPkCurr_AmpSq_f32.value)


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Mode_SystemState_Mode() Rte_ModeMachine_StaMd_SystemState_Mode


# endif /* !defined(RTE_CORE) */


# define RTE_START_SEC_AP_PEAKCURREST_APPL_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

FUNC(void, RTE_AP_PEAKCURREST_APPL_CODE) PeakCurrEst_Per1(void);

FUNC(void, RTE_AP_PEAKCURREST_APPL_CODE) PeakCurrEst_Per2(void);

# define RTE_STOP_SEC_AP_PEAKCURREST_APPL_CODE
# include "MemMap.h"

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */


#endif /* _RTE_AP_PEAKCURREST_H */
