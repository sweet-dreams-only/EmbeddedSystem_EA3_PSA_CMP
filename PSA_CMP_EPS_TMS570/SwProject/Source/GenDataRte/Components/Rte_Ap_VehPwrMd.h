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
 *          File:  Components/Rte_Ap_VehPwrMd.h
 *     Workspace:  C:/Components/PSA_CMP/PSA_CMP_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nxtr  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_VEHPWRMD_H
# define _RTE_AP_VEHPWRMD_H

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

#  define Rte_InitValue_ATermActive_Cnt_lgc (TRUE)
#  define Rte_InitValue_CTermActive_Cnt_lgc (FALSE)
#  define Rte_InitValue_DmdDelestDASts_Cnt_u08 (0U)
#  define Rte_InitValue_DmdDelestDaVld_Cnt_lgc (FALSE)
#  define Rte_InitValue_EngONSrlComSvcDft_Cnt_lgc (FALSE)
#  define Rte_InitValue_EngOn_Cnt_lgc (FALSE)
#  define Rte_InitValue_EtatMT_Cnt_u08 (0U)
#  define Rte_InitValue_MEC_Cnt_enum (0U)
#  define Rte_InitValue_OperRampRate_XpmS_f32 (0.0F)
#  define Rte_InitValue_OperRampValue_Uls_f32 (0.0F)
#  define Rte_InitValue_OutputRampMult_Uls_f32 (0.0F)
#  define Rte_InitValue_RampDwnStatusComplete_Cnt_lgc (FALSE)
#  define Rte_InitValue_STTdSelected_Cnt_lgc (FALSE)
#  define Rte_InitValue_SrlComVehSpd_Kph_f32 (0.0F)
#  define Rte_InitValue_VehSpdValid_Cnt_lgc (FALSE)
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

extern VAR(Rte_tsTask_Init_9, RTE_VAR_NOINIT) Rte_Task_Init_9;

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

#  define Rte_IWrite_VehPwrMd_Init1_OperRampRate_XpmS_f32(data) \
  ( \
    Rte_Task_Init_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Init1.Rte_OperRampRate_XpmS_f32.value = (data) \
  )

#  define Rte_IWriteRef_VehPwrMd_Init1_OperRampRate_XpmS_f32() \
  (&Rte_Task_Init_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Init1.Rte_OperRampRate_XpmS_f32.value)

#  define Rte_IWrite_VehPwrMd_Init1_OperRampValue_Uls_f32(data) \
  ( \
    Rte_Task_Init_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Init1.Rte_OperRampValue_Uls_f32.value = (data) \
  )

#  define Rte_IWriteRef_VehPwrMd_Init1_OperRampValue_Uls_f32() \
  (&Rte_Task_Init_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Init1.Rte_OperRampValue_Uls_f32.value)

#  define Rte_IRead_VehPwrMd_Per1_DmdDelestDASts_Cnt_u08() \
  (Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_DmdDelestDASts_Cnt_u08.value)

#  define Rte_IRead_VehPwrMd_Per1_DmdDelestDaVld_Cnt_lgc() \
  (Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_DmdDelestDaVld_Cnt_lgc.value)

#  define Rte_IRead_VehPwrMd_Per1_EngONSrlComSvcDft_Cnt_lgc() \
  (Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_EngONSrlComSvcDft_Cnt_lgc.value)

#  define Rte_IRead_VehPwrMd_Per1_EngOn_Cnt_lgc() \
  (Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_EngOn_Cnt_lgc.value)

#  define Rte_IRead_VehPwrMd_Per1_EtatMT_Cnt_u08() \
  (Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_EtatMT_Cnt_u08.value)

#  define Rte_IRead_VehPwrMd_Per1_MEC_Cnt_enum() \
  (Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_MEC_Cnt_enum.value)

#  define Rte_IRead_VehPwrMd_Per1_OutputRampMult_Uls_f32() \
  (Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_OutputRampMult_Uls_f32.value)

#  define Rte_IRead_VehPwrMd_Per1_RampDwnStatusComplete_Cnt_lgc() \
  (Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_RampDwnStatusComplete_Cnt_lgc.value)

#  define Rte_IRead_VehPwrMd_Per1_STTdSelected_Cnt_lgc() \
  (Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_STTdSelected_Cnt_lgc.value)

#  define Rte_IRead_VehPwrMd_Per1_SrlComVehSpd_Kph_f32() \
  (Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_SrlComVehSpd_Kph_f32.value)

#  define Rte_IRead_VehPwrMd_Per1_VehSpdValid_Cnt_lgc() \
  (Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_VehSpdValid_Cnt_lgc.value)

#  define Rte_IWrite_VehPwrMd_Per1_ATermActive_Cnt_lgc(data) \
  ( \
    Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_ATermActive_Cnt_lgc.value = (data) \
  )

#  define Rte_IWriteRef_VehPwrMd_Per1_ATermActive_Cnt_lgc() \
  (&Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_ATermActive_Cnt_lgc.value)

#  define Rte_IWrite_VehPwrMd_Per1_CTermActive_Cnt_lgc(data) \
  ( \
    Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_CTermActive_Cnt_lgc.value = (data) \
  )

#  define Rte_IWriteRef_VehPwrMd_Per1_CTermActive_Cnt_lgc() \
  (&Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_CTermActive_Cnt_lgc.value)

#  define Rte_IWrite_VehPwrMd_Per1_OperRampRate_XpmS_f32(data) \
  ( \
    Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_OperRampRate_XpmS_f32.value = (data) \
  )

#  define Rte_IWriteRef_VehPwrMd_Per1_OperRampRate_XpmS_f32() \
  (&Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_OperRampRate_XpmS_f32.value)

#  define Rte_IWrite_VehPwrMd_Per1_OperRampValue_Uls_f32(data) \
  ( \
    Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_OperRampValue_Uls_f32.value = (data) \
  )

#  define Rte_IWriteRef_VehPwrMd_Per1_OperRampValue_Uls_f32() \
  (&Rte_Task_2ms_9.Rte_RB.Rte_Ap_VehPwrMd_VehPwrMd_Per1.Rte_OperRampValue_Uls_f32.value)


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Mode_SystemState_Mode() Rte_ModeMachine_StaMd9_SystemState9_Mode


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_IOHWABSTRACTION_APPL_CODE
#  include "MemMap.h"
FUNC(Std_ReturnType, RTE_IOHWABSTRACTION_APPL_CODE) IoHwAb_GetEpsEn(P2VAR(IoHwAb_BoolType, AUTOMATIC, RTE_IOHWABSTRACTION_APPL_VAR) signal);
#  define RTE_STOP_SEC_IOHWABSTRACTION_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_EpsEn_OP_GET IoHwAb_GetEpsEn
#  define RTE_START_SEC_AP_DIAGMGR9_APPL_CODE
#  include "MemMap.h"
FUNC(Std_ReturnType, RTE_AP_DIAGMGR9_APPL_CODE) NxtrDiagMgr9_GetNTCFailed(NTCNumber NTC_Cnt_T_enum, P2VAR(Boolean, AUTOMATIC, RTE_AP_DIAGMGR9_APPL_VAR) NTCFailed_Ptr_T_lgc);
#  define RTE_STOP_SEC_AP_DIAGMGR9_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_NxtrDiagMgr_GetNTCFailed NxtrDiagMgr9_GetNTCFailed
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


# define RTE_START_SEC_AP_VEHPWRMD_APPL_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

FUNC(void, RTE_AP_VEHPWRMD_APPL_CODE) VehPwrMd_Init1(void);

FUNC(void, RTE_AP_VEHPWRMD_APPL_CODE) VehPwrMd_Per1(void);

# define RTE_STOP_SEC_AP_VEHPWRMD_APPL_CODE
# include "MemMap.h"


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_EpsEn_E_NOT_OK (1U)

#  define RTE_E_NxtrDiagMgr_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */


#endif /* _RTE_AP_VEHPWRMD_H */
