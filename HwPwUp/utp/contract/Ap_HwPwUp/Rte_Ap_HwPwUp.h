/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2010 by Vctr Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vctr Informatik GmbH.
 *                Vctr Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vctr Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_Ap_HwPwUp.h
 *     Workspace:  C:/Users/nzt9hv/Documents/Synergy/ccm_wa/ESG_Dev_65/HwPwUp-nzt9hv1/HwPwUp/autosar
 *     SW-C Type:  Ap_HwPwUp
 *  Generated at:  Wed Jun  4 14:18:50 2014
 *
 *     Generator:  MICROSAR RTE Generator Version 2.17.2
 *       License:  License CBD1010122 valid for CBD1010122 Nxtr  GM MSR_SLP3_BSW_RTE_wGMLAN TexasInstruments TMS570 Texas Instruments
 *
 *   Description:  Application header file for SW-C <Ap_HwPwUp> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_HWPWUP_H
# define _RTE_AP_HWPWUP_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_Type.h"

typedef P2CONST(struct Rte_CDS_Ap_HwPwUp, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_MtrDrvrInitComplete_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_MtrDrvrInitStart_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_PwrDiscATestComplete_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_PwrDiscATestStart_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_PwrDiscBTestComplete_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_PwrDiscBTestStart_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_TMFTestComplete_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_TMFTestStart_Cnt_lgc ((Boolean)FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Rte_ModeType_StaMd_Mode, RTE_CODE) Rte_Mode_Ap_HwPwUp_SystemState_Mode(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_HwPwUp_MilestoneRqst_WarmInitMilestoneComplete(StaMd_Users user);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_HwPwUp_MilestoneRqst_WarmInitMilestoneNotComplete(StaMd_Users user);

# define RTE_STOP_SEC_CODE
# include "MemMap.h"



/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

# define Rte_IRead_HwPwUp_Per1_MtrDrvrInitComplete_Cnt_lgc() \
  (Rte_Inst_Ap_HwPwUp->HwPwUp_Per1_MtrDrvrInitComplete_Cnt_lgc->value)

# define Rte_IRead_HwPwUp_Per1_PwrDiscATestComplete_Cnt_lgc() \
  (Rte_Inst_Ap_HwPwUp->HwPwUp_Per1_PwrDiscATestComplete_Cnt_lgc->value)

# define Rte_IRead_HwPwUp_Per1_PwrDiscBTestComplete_Cnt_lgc() \
  (Rte_Inst_Ap_HwPwUp->HwPwUp_Per1_PwrDiscBTestComplete_Cnt_lgc->value)

# define Rte_IRead_HwPwUp_Per1_TMFTestComplete_Cnt_lgc() \
  (Rte_Inst_Ap_HwPwUp->HwPwUp_Per1_TMFTestComplete_Cnt_lgc->value)

# define Rte_IWrite_HwPwUp_Per1_MtrDrvrInitStart_Cnt_lgc(data) \
  ( \
  Rte_Inst_Ap_HwPwUp->HwPwUp_Per1_MtrDrvrInitStart_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_HwPwUp_Per1_MtrDrvrInitStart_Cnt_lgc() \
  (&Rte_Inst_Ap_HwPwUp->HwPwUp_Per1_MtrDrvrInitStart_Cnt_lgc->value)

# define Rte_IWrite_HwPwUp_Per1_PwrDiscATestStart_Cnt_lgc(data) \
  ( \
  Rte_Inst_Ap_HwPwUp->HwPwUp_Per1_PwrDiscATestStart_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_HwPwUp_Per1_PwrDiscATestStart_Cnt_lgc() \
  (&Rte_Inst_Ap_HwPwUp->HwPwUp_Per1_PwrDiscATestStart_Cnt_lgc->value)

# define Rte_IWrite_HwPwUp_Per1_PwrDiscBTestStart_Cnt_lgc(data) \
  ( \
  Rte_Inst_Ap_HwPwUp->HwPwUp_Per1_PwrDiscBTestStart_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_HwPwUp_Per1_PwrDiscBTestStart_Cnt_lgc() \
  (&Rte_Inst_Ap_HwPwUp->HwPwUp_Per1_PwrDiscBTestStart_Cnt_lgc->value)

# define Rte_IWrite_HwPwUp_Per1_TMFTestStart_Cnt_lgc(data) \
  ( \
  Rte_Inst_Ap_HwPwUp->HwPwUp_Per1_TMFTestStart_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_HwPwUp_Per1_TMFTestStart_Cnt_lgc() \
  (&Rte_Inst_Ap_HwPwUp->HwPwUp_Per1_TMFTestStart_Cnt_lgc->value)

# define Rte_IWrite_HwPwUp_Trns1_MtrDrvrInitStart_Cnt_lgc(data) \
  ( \
  Rte_Inst_Ap_HwPwUp->HwPwUp_Trns1_MtrDrvrInitStart_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_HwPwUp_Trns1_MtrDrvrInitStart_Cnt_lgc() \
  (&Rte_Inst_Ap_HwPwUp->HwPwUp_Trns1_MtrDrvrInitStart_Cnt_lgc->value)

# define Rte_IWrite_HwPwUp_Trns1_PwrDiscATestStart_Cnt_lgc(data) \
  ( \
  Rte_Inst_Ap_HwPwUp->HwPwUp_Trns1_PwrDiscATestStart_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_HwPwUp_Trns1_PwrDiscATestStart_Cnt_lgc() \
  (&Rte_Inst_Ap_HwPwUp->HwPwUp_Trns1_PwrDiscATestStart_Cnt_lgc->value)

# define Rte_IWrite_HwPwUp_Trns1_PwrDiscBTestStart_Cnt_lgc(data) \
  ( \
  Rte_Inst_Ap_HwPwUp->HwPwUp_Trns1_PwrDiscBTestStart_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_HwPwUp_Trns1_PwrDiscBTestStart_Cnt_lgc() \
  (&Rte_Inst_Ap_HwPwUp->HwPwUp_Trns1_PwrDiscBTestStart_Cnt_lgc->value)

# define Rte_IWrite_HwPwUp_Trns1_TMFTestStart_Cnt_lgc(data) \
  ( \
  Rte_Inst_Ap_HwPwUp->HwPwUp_Trns1_TMFTestStart_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_HwPwUp_Trns1_TMFTestStart_Cnt_lgc() \
  (&Rte_Inst_Ap_HwPwUp->HwPwUp_Trns1_TMFTestStart_Cnt_lgc->value)


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Mode_SystemState_Mode Rte_Mode_Ap_HwPwUp_SystemState_Mode


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_MilestoneRqst_WarmInitMilestoneComplete Rte_Call_Ap_HwPwUp_MilestoneRqst_WarmInitMilestoneComplete
# define Rte_Call_MilestoneRqst_WarmInitMilestoneNotComplete Rte_Call_Ap_HwPwUp_MilestoneRqst_WarmInitMilestoneNotComplete




# define RTE_START_SEC_AP_HWPWUP_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwPwUp_Per1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Implicit S/R API:
 *   -----------------
 *   Boolean Rte_IRead_HwPwUp_Per1_MtrDrvrInitComplete_Cnt_lgc(void)
 *   Boolean Rte_IRead_HwPwUp_Per1_PwrDiscATestComplete_Cnt_lgc(void)
 *   Boolean Rte_IRead_HwPwUp_Per1_PwrDiscBTestComplete_Cnt_lgc(void)
 *   Boolean Rte_IRead_HwPwUp_Per1_TMFTestComplete_Cnt_lgc(void)
 *
 * Output Interfaces:
 * ==================
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_HwPwUp_Per1_MtrDrvrInitStart_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_HwPwUp_Per1_MtrDrvrInitStart_Cnt_lgc(void)
 *   void Rte_IWrite_HwPwUp_Per1_PwrDiscATestStart_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_HwPwUp_Per1_PwrDiscATestStart_Cnt_lgc(void)
 *   void Rte_IWrite_HwPwUp_Per1_PwrDiscBTestStart_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_HwPwUp_Per1_PwrDiscBTestStart_Cnt_lgc(void)
 *   void Rte_IWrite_HwPwUp_Per1_TMFTestStart_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_HwPwUp_Per1_TMFTestStart_Cnt_lgc(void)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_MilestoneRqst_WarmInitMilestoneComplete(StaMd_Users user)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_HWPWUP_APPL_CODE) HwPwUp_Per1(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwPwUp_Trns1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on exiting of Mode <DISABLE> of ModeDeclarationGroupPrototype <Mode> of PortPrototype <SystemState>
 *   - triggered on entering of Mode <WARMINIT> of ModeDeclarationGroupPrototype <Mode> of PortPrototype <SystemState>
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_HwPwUp_Trns1_MtrDrvrInitStart_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_HwPwUp_Trns1_MtrDrvrInitStart_Cnt_lgc(void)
 *   void Rte_IWrite_HwPwUp_Trns1_PwrDiscATestStart_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_HwPwUp_Trns1_PwrDiscATestStart_Cnt_lgc(void)
 *   void Rte_IWrite_HwPwUp_Trns1_PwrDiscBTestStart_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_HwPwUp_Trns1_PwrDiscBTestStart_Cnt_lgc(void)
 *   void Rte_IWrite_HwPwUp_Trns1_TMFTestStart_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_HwPwUp_Trns1_TMFTestStart_Cnt_lgc(void)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_MilestoneRqst_WarmInitMilestoneNotComplete(StaMd_Users user)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_HWPWUP_APPL_CODE) HwPwUp_Trns1(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwPwUp_Trns2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on entering of Mode <DISABLE> of ModeDeclarationGroupPrototype <Mode> of PortPrototype <SystemState>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_HWPWUP_APPL_CODE) HwPwUp_Trns2(void);

# define RTE_STOP_SEC_AP_HWPWUP_APPL_CODE
# include "MemMap.h"

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1401906933
#    error "The magic number of the generated file <C:/Users/nzt9hv/Documents/Synergy/ccm_wa/ESG_Dev_65/HwPwUp-nzt9hv1/HwPwUp/utp/contract/Ap_HwPwUp/Rte_Ap_HwPwUp.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1401906933
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_AP_HWPWUP_H */
