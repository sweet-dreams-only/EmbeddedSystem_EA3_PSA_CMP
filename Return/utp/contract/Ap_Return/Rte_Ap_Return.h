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
 *          File:  Rte_Ap_Return.h
 *     Workspace:  C:/Synergy_projects/Return-lz4p8n/Return/autosar/Ap_Return.dcf
 *     SW-C Type:  Ap_Return
 *  Generated at:  Thu May 23 16:09:19 2013
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nxtr  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C <Ap_Return> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_RETURN_H
# define _RTE_AP_RETURN_H

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

typedef P2CONST(struct Rte_CDS_Ap_Return, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AssistMechTempEst_DegC_f32 (0.0F)
# define Rte_InitValue_DefeatReturnSvc_Cnt_lgc (FALSE)
# define Rte_InitValue_DiagStsHwPosDis_Cnt_lgc (FALSE)
# define Rte_InitValue_HandwheelAuthority_Uls_f32 (0.0F)
# define Rte_InitValue_HandwheelPosition_HwDeg_f32 (0.0F)
# define Rte_InitValue_HandwheelVel_HwRadpS_f32 (0.0F)
# define Rte_InitValue_HwTorque_HwNm_f32 (0.0F)
# define Rte_InitValue_PAReturnSclFct_Uls_f32 (1.0F)
# define Rte_InitValue_ReturnCmd_MtrNm_f32 (0.0F)
# define Rte_InitValue_ReturnDDFactor_Uls_f32 (1.0F)
# define Rte_InitValue_ReturnOffset_HwDeg_f32 (0.0F)
# define Rte_InitValue_VehicleSpeed_Kph_f32 (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_Return_FltInjection_SCom_FltInjection(P2VAR(Float, AUTOMATIC, RTE_AP_RETURN_APPL_VAR) SignalPath_Uls_f32, FltInjectionLocType LocationKey_Cnt_enum);

# define RTE_STOP_SEC_CODE
# include "MemMap.h"



/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

# define Rte_IRead_Return_Per1_AssistMechTempEst_DegC_f32() \
  (Rte_Inst_Ap_Return->Return_Per1_AssistMechTempEst_DegC_f32->value)

# define Rte_IRead_Return_Per1_DefeatReturnSvc_Cnt_lgc() \
  (Rte_Inst_Ap_Return->Return_Per1_DefeatReturnSvc_Cnt_lgc->value)

# define Rte_IRead_Return_Per1_DiagStsHwPosDis_Cnt_lgc() \
  (Rte_Inst_Ap_Return->Return_Per1_DiagStsHwPosDis_Cnt_lgc->value)

# define Rte_IRead_Return_Per1_HandwheelAuthority_Uls_f32() \
  (Rte_Inst_Ap_Return->Return_Per1_HandwheelAuthority_Uls_f32->value)

# define Rte_IRead_Return_Per1_HandwheelPosition_HwDeg_f32() \
  (Rte_Inst_Ap_Return->Return_Per1_HandwheelPosition_HwDeg_f32->value)

# define Rte_IRead_Return_Per1_HandwheelVel_HwRadpS_f32() \
  (Rte_Inst_Ap_Return->Return_Per1_HandwheelVel_HwRadpS_f32->value)

# define Rte_IRead_Return_Per1_HwTorque_HwNm_f32() \
  (Rte_Inst_Ap_Return->Return_Per1_HwTorque_HwNm_f32->value)

# define Rte_IRead_Return_Per1_PAReturnSclFct_Uls_f32() \
  (Rte_Inst_Ap_Return->Return_Per1_PAReturnSclFct_Uls_f32->value)

# define Rte_IRead_Return_Per1_ReturnDDFactor_Uls_f32() \
  (Rte_Inst_Ap_Return->Return_Per1_ReturnDDFactor_Uls_f32->value)

# define Rte_IRead_Return_Per1_ReturnOffset_HwDeg_f32() \
  (Rte_Inst_Ap_Return->Return_Per1_ReturnOffset_HwDeg_f32->value)

# define Rte_IRead_Return_Per1_VehicleSpeed_Kph_f32() \
  (Rte_Inst_Ap_Return->Return_Per1_VehicleSpeed_Kph_f32->value)

# define Rte_IWrite_Return_Per1_ReturnCmd_MtrNm_f32(data) \
  ( \
  Rte_Inst_Ap_Return->Return_Per1_ReturnCmd_MtrNm_f32->value = (data) \
  )

# define Rte_IWriteRef_Return_Per1_ReturnCmd_MtrNm_f32() \
  (&Rte_Inst_Ap_Return->Return_Per1_ReturnCmd_MtrNm_f32->value)


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_FltInjection_SCom_FltInjection Rte_Call_Ap_Return_FltInjection_SCom_FltInjection




# define RTE_START_SEC_AP_RETURN_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 *
 * Runnable Entity Name: Return_Per1
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
 *   Float Rte_IRead_Return_Per1_AssistMechTempEst_DegC_f32(void)
 *   Boolean Rte_IRead_Return_Per1_DefeatReturnSvc_Cnt_lgc(void)
 *   Boolean Rte_IRead_Return_Per1_DiagStsHwPosDis_Cnt_lgc(void)
 *   Float Rte_IRead_Return_Per1_HandwheelAuthority_Uls_f32(void)
 *   Float Rte_IRead_Return_Per1_HandwheelPosition_HwDeg_f32(void)
 *   Float Rte_IRead_Return_Per1_HandwheelVel_HwRadpS_f32(void)
 *   Float Rte_IRead_Return_Per1_HwTorque_HwNm_f32(void)
 *   Float Rte_IRead_Return_Per1_PAReturnSclFct_Uls_f32(void)
 *   Float Rte_IRead_Return_Per1_ReturnDDFactor_Uls_f32(void)
 *   Float Rte_IRead_Return_Per1_ReturnOffset_HwDeg_f32(void)
 *   Float Rte_IRead_Return_Per1_VehicleSpeed_Kph_f32(void)
 *
 * Output Interfaces:
 * ==================
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_Return_Per1_ReturnCmd_MtrNm_f32(Float data)
 *   Float *Rte_IWriteRef_Return_Per1_ReturnCmd_MtrNm_f32(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInjection_SCom_FltInjection(Float *SignalPath_Uls_f32, FltInjectionLocType LocationKey_Cnt_enum)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_RETURN_APPL_CODE) Return_Per1(void);

# define RTE_STOP_SEC_AP_RETURN_APPL_CODE
# include "MemMap.h"

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1369335798
#    error "The magic number of the generated file <C:/Synergy_projects/Return-lz4p8n/Return/utp/contract/Ap_Return/Rte_Ap_Return.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1369335798
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_AP_RETURN_H */
