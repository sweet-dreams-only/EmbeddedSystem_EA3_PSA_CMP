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
 *          File:  Components/Rte_Ap_PsaAgArbn.h
 *     Workspace:  C:/Components/PSA_CMP/PSA_CMP_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nxtr  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_PSAAGARBN_H
# define _RTE_AP_PSAAGARBN_H

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

#  define Rte_InitValue_AbsltHwPosn_HwDeg_f32 (0.0F)
#  define Rte_InitValue_AbsltHwPosnLvl1_Cnt_lgc (FALSE)
#  define Rte_InitValue_AbsltHwPosnLvl2_Cnt_lgc (FALSE)
#  define Rte_InitValue_AbsltHwPosnPrecision_HwDeg_f32 (0.0F)
#  define Rte_InitValue_AbsltHwPosnVld_Cnt_lgc (FALSE)
#  define Rte_InitValue_AgArbnStToSerlCom_Cnt_enum (0U)
#  define Rte_InitValue_AlignedCumMechMtrPosStatus_Cnt_u08 (0U)
#  define Rte_InitValue_AlignedRelHwPos_HwDeg_f32 (0.0F)
#  define Rte_InitValue_CumMechMtrPosStatus_Cnt_u08 (0U)
#  define Rte_InitValue_EscAckFromSerlCom_Cnt_lgc (FALSE)
#  define Rte_InitValue_EscDataVldFromSerlCom_Cnt_lgc (FALSE)
#  define Rte_InitValue_EscOffsEna_Cnt_lgc (FALSE)
#  define Rte_InitValue_EscOffsFromSerlCom_HwDeg_f32 (0.0F)
#  define Rte_InitValue_EscPrecisionFromSerlCom_HwDeg_f32 (0.0F)
#  define Rte_InitValue_HandwheelAuthority_Uls_f32 (0.0F)
#  define Rte_InitValue_HandwheelPosition_HwDeg_f32 (0.0F)
#  define Rte_InitValue_HwTorque_HwNm_f32 (0.0F)
#  define Rte_InitValue_MtrVelCRF_MtrRadpS_f32 (0.0F)
#  define Rte_InitValue_RelHwPos_HwDeg_f32 (0.0F)
#  define Rte_InitValue_RelHwPosnToSerlCom_HwDeg_f32 (0.0F)
#  define Rte_InitValue_RelHwPosnVldToSerlCom_Cnt_lgc (FALSE)
#  define Rte_InitValue_SensorlessAuthority_Uls_f32 (0.0F)
#  define Rte_InitValue_SensorlessHwPos_HwDeg_f32 (0.0F)
#  define Rte_InitValue_TorqueCmdCRF_MtrNm_f32 (0.0F)
#  define Rte_InitValue_VehicleSpeed_Kph_f32 (0.0F)
#  define Rte_InitValue_VehicleSpeedValid_Cnt_lgc (FALSE)
# endif


# ifndef RTE_CORE
#  define RTE_START_SEC_VAR_Ap_10_NOINIT_UNSPECIFIED
#  include "MemMap.h"

/**********************************************************************************************************************
 * Buffers for implicit communication
 *********************************************************************************************************************/

extern VAR(Rte_tsTask_Init_10, RTE_VAR_NOINIT) Rte_Task_Init_10;

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

#  define Rte_IRead_PsaAgArbn_Init1_EscOffsEna_Cnt_lgc() \
  (Rte_Task_Init_10.Rte_TB.Rte_I_CDDInterface10_ESCOffsCfgSeld_Cnt_lgc.value)

#  define Rte_IRead_PsaAgArbn_Per1_AlignedCumMechMtrPosStatus_Cnt_u08() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_AlignedCumMechMtrPosStatus_Cnt_u08.value)

#  define Rte_IRead_PsaAgArbn_Per1_AlignedRelHwPos_HwDeg_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_AlignedRelHwPos_HwDeg_f32.value)

#  define Rte_IRead_PsaAgArbn_Per1_CumMechMtrPosStatus_Cnt_u08() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_CumMechMtrPosStatus_Cnt_u08.value)

#  define Rte_IRead_PsaAgArbn_Per1_EscAckFromSerlCom_Cnt_lgc() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_EscAckFromSerlCom_Cnt_lgc.value)

#  define Rte_IRead_PsaAgArbn_Per1_EscDataVldFromSerlCom_Cnt_lgc() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_EscDataVldFromSerlCom_Cnt_lgc.value)

#  define Rte_IRead_PsaAgArbn_Per1_EscOffsEna_Cnt_lgc() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_EscOffsEna_Cnt_lgc.value)

#  define Rte_IRead_PsaAgArbn_Per1_EscOffsFromSerlCom_HwDeg_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_EscOffsFromSerlCom_HwDeg_f32.value)

#  define Rte_IRead_PsaAgArbn_Per1_EscPrecisionFromSerlCom_HwDeg_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_EscPrecisionFromSerlCom_HwDeg_f32.value)

#  define Rte_IRead_PsaAgArbn_Per1_HwTorque_HwNm_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_HwTorque_HwNm_f32.value)

#  define Rte_IRead_PsaAgArbn_Per1_MtrVelCRF_MtrRadpS_f32() \
  (Rte_Task_2ms_10.Rte_TB.Rte_I_MtrVel_MotorVelCRF_MtrRadpS_f32.value)

#  define Rte_IRead_PsaAgArbn_Per1_RelHwPos_HwDeg_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_RelHwPos_HwDeg_f32.value)

#  define Rte_IRead_PsaAgArbn_Per1_SensorlessAuthority_Uls_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_SensorlessAuthority_Uls_f32.value)

#  define Rte_IRead_PsaAgArbn_Per1_SensorlessHwPos_HwDeg_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_SensorlessHwPos_HwDeg_f32.value)

#  define Rte_IRead_PsaAgArbn_Per1_TorqueCmdCRF_MtrNm_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_TorqueCmdCRF_MtrNm_f32.value)

#  define Rte_IRead_PsaAgArbn_Per1_VehicleSpeedValid_Cnt_lgc() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_VehicleSpeedValid_Cnt_lgc.value)

#  define Rte_IRead_PsaAgArbn_Per1_VehicleSpeed_Kph_f32() \
  (Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_VehicleSpeed_Kph_f32.value)

#  define Rte_IWrite_PsaAgArbn_Per1_AbsltHwPosnLvl1_Cnt_lgc(data) \
  ( \
    Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_AbsltHwPosnLvl1_Cnt_lgc.value = (data) \
  )

#  define Rte_IWriteRef_PsaAgArbn_Per1_AbsltHwPosnLvl1_Cnt_lgc() \
  (&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_AbsltHwPosnLvl1_Cnt_lgc.value)

#  define Rte_IWrite_PsaAgArbn_Per1_AbsltHwPosnLvl2_Cnt_lgc(data) \
  ( \
    Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_AbsltHwPosnLvl2_Cnt_lgc.value = (data) \
  )

#  define Rte_IWriteRef_PsaAgArbn_Per1_AbsltHwPosnLvl2_Cnt_lgc() \
  (&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_AbsltHwPosnLvl2_Cnt_lgc.value)

#  define Rte_IWrite_PsaAgArbn_Per1_AbsltHwPosnPrecision_HwDeg_f32(data) \
  ( \
    Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_AbsltHwPosnPrecision_HwDeg_f32.value = (data) \
  )

#  define Rte_IWriteRef_PsaAgArbn_Per1_AbsltHwPosnPrecision_HwDeg_f32() \
  (&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_AbsltHwPosnPrecision_HwDeg_f32.value)

#  define Rte_IWrite_PsaAgArbn_Per1_AbsltHwPosnVld_Cnt_lgc(data) \
  ( \
    Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_AbsltHwPosnVld_Cnt_lgc.value = (data) \
  )

#  define Rte_IWriteRef_PsaAgArbn_Per1_AbsltHwPosnVld_Cnt_lgc() \
  (&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_AbsltHwPosnVld_Cnt_lgc.value)

#  define Rte_IWrite_PsaAgArbn_Per1_AbsltHwPosn_HwDeg_f32(data) \
  ( \
    Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_AbsltHwPosn_HwDeg_f32.value = (data) \
  )

#  define Rte_IWriteRef_PsaAgArbn_Per1_AbsltHwPosn_HwDeg_f32() \
  (&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_AbsltHwPosn_HwDeg_f32.value)

#  define Rte_IWrite_PsaAgArbn_Per1_AgArbnStToSerlCom_Cnt_enum(data) \
  ( \
    Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_AgArbnStToSerlCom_Cnt_enum.value = (data) \
  )

#  define Rte_IWriteRef_PsaAgArbn_Per1_AgArbnStToSerlCom_Cnt_enum() \
  (&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_AgArbnStToSerlCom_Cnt_enum.value)

#  define Rte_IWrite_PsaAgArbn_Per1_HandwheelAuthority_Uls_f32(data) \
  ( \
    Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_HandwheelAuthority_Uls_f32.value = (data) \
  )

#  define Rte_IWriteRef_PsaAgArbn_Per1_HandwheelAuthority_Uls_f32() \
  (&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_HandwheelAuthority_Uls_f32.value)

#  define Rte_IWrite_PsaAgArbn_Per1_HandwheelPosition_HwDeg_f32(data) \
  ( \
    Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_HandwheelPosition_HwDeg_f32.value = (data) \
  )

#  define Rte_IWriteRef_PsaAgArbn_Per1_HandwheelPosition_HwDeg_f32() \
  (&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_HandwheelPosition_HwDeg_f32.value)

#  define Rte_IWrite_PsaAgArbn_Per1_RelHwPosnToSerlCom_HwDeg_f32(data) \
  ( \
    Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_RelHwPosnToSerlCom_HwDeg_f32.value = (data) \
  )

#  define Rte_IWriteRef_PsaAgArbn_Per1_RelHwPosnToSerlCom_HwDeg_f32() \
  (&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_RelHwPosnToSerlCom_HwDeg_f32.value)

#  define Rte_IWrite_PsaAgArbn_Per1_RelHwPosnVldToSerlCom_Cnt_lgc(data) \
  ( \
    Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_RelHwPosnVldToSerlCom_Cnt_lgc.value = (data) \
  )

#  define Rte_IWriteRef_PsaAgArbn_Per1_RelHwPosnVldToSerlCom_Cnt_lgc() \
  (&Rte_Task_2ms_10.Rte_RB.Rte_Ap_PsaAgArbn_PsaAgArbn_Per1.Rte_RelHwPosnVldToSerlCom_Cnt_lgc.value)


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
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
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h"
FUNC(void, RTE_NVMPROXY_APPL_CODE) NvMProxy_GetErrorStatus(UInt8 parg0, P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_NVMPROXY_APPL_VAR) ErrorStatus);
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_PsaAgArbnLrndOffsBlk_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((UInt8)22, arg1), ((Std_ReturnType)RTE_E_OK))
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h"
FUNC(void, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(UInt8 parg0, Boolean RamBlockStatus);
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_PsaAgArbnLrndOffsBlk_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((UInt8)22, arg1), ((Std_ReturnType)RTE_E_OK))
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h"
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_WriteBlock(UInt8 parg0, P2CONST(UInt8, AUTOMATIC, RTE_NVMPROXY_APPL_DATA) DstPtr);
# else
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_WriteBlock(UInt8 parg0, P2CONST(NvM_DestPtr, AUTOMATIC, RTE_NVMPROXY_APPL_DATA) DstPtr);
# endif
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_PsaAgArbnLrndOffsBlk_WriteBlock(arg1) (NvMProxy_WriteBlock((UInt8)22, arg1))
#  define RTE_START_SEC_NXTRLIBS_APPL_CODE
#  include "MemMap.h"
FUNC(void, RTE_NXTRLIBS_APPL_CODE) DtrmnElapsedTime_uS_u32(UInt32 InitialTime, P2VAR(UInt32, AUTOMATIC, RTE_NXTRLIBS_APPL_VAR) ElapsedTime);
#  define RTE_STOP_SEC_NXTRLIBS_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_SystemTime_DtrmnElapsedTime_uS_u32(arg1, arg2) (DtrmnElapsedTime_uS_u32(arg1, arg2), ((Std_ReturnType)RTE_E_OK))
#  define RTE_START_SEC_NXTRLIBS_APPL_CODE
#  include "MemMap.h"
FUNC(void, RTE_NXTRLIBS_APPL_CODE) GetSystemTime_mS_u32(P2VAR(UInt32, AUTOMATIC, RTE_NXTRLIBS_APPL_VAR) CurrentTime);
#  define RTE_STOP_SEC_NXTRLIBS_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_SystemTime_GetSystemTime_mS_u32(arg1) (GetSystemTime_mS_u32(arg1), ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Ap_10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h"

extern VAR(PsaAgAnLrndOffs_Str, RTE_VAR_DEFAULT_RTE_Ap_10_PIM_GROUP) Rte_PsaAgArbn_PsaAgArbnLrndOffsData;

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Ap_10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h"

#  endif

#  define Rte_Pim_PsaAgArbnLrndOffsData() \
  (&Rte_PsaAgArbn_PsaAgArbnLrndOffsData)


# endif /* !defined(RTE_CORE) */


# define RTE_START_SEC_AP_PSAAGARBN_APPL_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

FUNC(void, RTE_AP_PSAAGARBN_APPL_CODE) PsaAgArbn_Init1(void);

FUNC(void, RTE_AP_PSAAGARBN_APPL_CODE) PsaAgArbn_Per1(void);

FUNC(void, RTE_AP_PSAAGARBN_APPL_CODE) PsaAgArbn_SCom_PsaAaCmd(PsaAgArbnDiagCmdReq_Enum DiagCmd_Cnt_enum);

# define RTE_STOP_SEC_AP_PSAAGARBN_APPL_CODE
# include "MemMap.h"


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK (1U)

#  define RTE_E_NxtrDiagMgr_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */


#endif /* _RTE_AP_PSAAGARBN_H */
