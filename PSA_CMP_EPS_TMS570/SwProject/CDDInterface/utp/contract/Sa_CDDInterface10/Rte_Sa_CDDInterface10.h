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
 *          File:  Rte_Sa_CDDInterface10.h
 *     Workspace:  C:/Components/PSA_CMP/PSA_CMP_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *     SW-C Type:  Sa_CDDInterface10
 *  Generated at:  Thu May 10 12:58:13 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nxtr  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C <Sa_CDDInterface10> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_SA_CDDINTERFACE10_H
# define _RTE_SA_CDDINTERFACE10_H

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

typedef P2CONST(struct Rte_CDS_Sa_CDDInterface10, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_CommOffset_Cnt_u16 (0U)
# define Rte_InitValue_ESCOffsCfgSeld_Cnt_lgc (FALSE)
# define Rte_InitValue_IvtrLoaMtgtnEn_Cnt_lgc (FALSE)
# define Rte_InitValue_MRFMtrVel_MtrRadpS_f32 (0.0F)
# define Rte_InitValue_MotCurrLoaMtgtnEn_Cnt_lgc (FALSE)
# define Rte_InitValue_MtrCurr1TempOffset_Volt_f32 (0.0F)
# define Rte_InitValue_MtrCurr2TempOffset_Volt_f32 (0.0F)
# define Rte_InitValue_MtrPosPolarity_Cnt_s08 (0)
# define Rte_InitValue_TurnsCounterSelected_Cnt_lgc (FALSE)
# define Rte_InitValue_Vecu_Volt_f32 (5.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Rte_ModeType_StaMd_Mode, RTE_CODE) Rte_Mode_Sa_CDDInterface10_SystemState_Mode(void);

# define RTE_STOP_SEC_CODE
# include "MemMap.h"



/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

# define Rte_IRead_CDDInterface10_Init1_MtrPosPolarity_Cnt_s08() \
  (Rte_Inst_Sa_CDDInterface10->CDDInterface10_Init1_MtrPosPolarity_Cnt_s08->value)

# define Rte_IWrite_CDDInterface10_Init1_ESCOffsCfgSeld_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface10->CDDInterface10_Init1_ESCOffsCfgSeld_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface10_Init1_ESCOffsCfgSeld_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface10->CDDInterface10_Init1_ESCOffsCfgSeld_Cnt_lgc->value)

# define Rte_IWrite_CDDInterface10_Init1_TurnsCounterSelected_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface10->CDDInterface10_Init1_TurnsCounterSelected_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface10_Init1_TurnsCounterSelected_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface10->CDDInterface10_Init1_TurnsCounterSelected_Cnt_lgc->value)

# define Rte_IRead_CDDInterface10_Per1_CommOffset_Cnt_u16() \
  (Rte_Inst_Sa_CDDInterface10->CDDInterface10_Per1_CommOffset_Cnt_u16->value)

# define Rte_IRead_CDDInterface10_Per1_IvtrLoaMtgtnEn_Cnt_lgc() \
  (Rte_Inst_Sa_CDDInterface10->CDDInterface10_Per1_IvtrLoaMtgtnEn_Cnt_lgc->value)

# define Rte_IRead_CDDInterface10_Per1_MRFMtrVel_MtrRadpS_f32() \
  (Rte_Inst_Sa_CDDInterface10->CDDInterface10_Per1_MRFMtrVel_MtrRadpS_f32->value)

# define Rte_IRead_CDDInterface10_Per1_MotCurrLoaMtgtnEn_Cnt_lgc() \
  (Rte_Inst_Sa_CDDInterface10->CDDInterface10_Per1_MotCurrLoaMtgtnEn_Cnt_lgc->value)

# define Rte_IRead_CDDInterface10_Per1_MtrCurr1TempOffset_Volt_f32() \
  (Rte_Inst_Sa_CDDInterface10->CDDInterface10_Per1_MtrCurr1TempOffset_Volt_f32->value)

# define Rte_IRead_CDDInterface10_Per1_MtrCurr2TempOffset_Volt_f32() \
  (Rte_Inst_Sa_CDDInterface10->CDDInterface10_Per1_MtrCurr2TempOffset_Volt_f32->value)

# define Rte_IRead_CDDInterface10_Per1_MtrPosPolarity_Cnt_s08() \
  (Rte_Inst_Sa_CDDInterface10->CDDInterface10_Per1_MtrPosPolarity_Cnt_s08->value)

# define Rte_IRead_CDDInterface10_Per1_Vecu_Volt_f32() \
  (Rte_Inst_Sa_CDDInterface10->CDDInterface10_Per1_Vecu_Volt_f32->value)

# define Rte_IWrite_CDDInterface10_Per1_ESCOffsCfgSeld_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_CDDInterface10->CDDInterface10_Per1_ESCOffsCfgSeld_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_CDDInterface10_Per1_ESCOffsCfgSeld_Cnt_lgc() \
  (&Rte_Inst_Sa_CDDInterface10->CDDInterface10_Per1_ESCOffsCfgSeld_Cnt_lgc->value)


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Mode_SystemState_Mode Rte_Mode_Sa_CDDInterface10_SystemState_Mode




# define RTE_START_SEC_SA_CDDINTERFACE10_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 *
 * Runnable Entity Name: CDDInterface10_Init1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Implicit S/R API:
 *   -----------------
 *   SInt8 Rte_IRead_CDDInterface10_Init1_MtrPosPolarity_Cnt_s08(void)
 *
 * Output Interfaces:
 * ==================
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_CDDInterface10_Init1_ESCOffsCfgSeld_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface10_Init1_ESCOffsCfgSeld_Cnt_lgc(void)
 *   void Rte_IWrite_CDDInterface10_Init1_TurnsCounterSelected_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface10_Init1_TurnsCounterSelected_Cnt_lgc(void)
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

FUNC(void, RTE_SA_CDDINTERFACE10_APPL_CODE) CDDInterface10_Init1(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CDDInterface10_Per1
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
 *   UInt16 Rte_IRead_CDDInterface10_Per1_CommOffset_Cnt_u16(void)
 *   Boolean Rte_IRead_CDDInterface10_Per1_IvtrLoaMtgtnEn_Cnt_lgc(void)
 *   Float Rte_IRead_CDDInterface10_Per1_MRFMtrVel_MtrRadpS_f32(void)
 *   Boolean Rte_IRead_CDDInterface10_Per1_MotCurrLoaMtgtnEn_Cnt_lgc(void)
 *   Float Rte_IRead_CDDInterface10_Per1_MtrCurr1TempOffset_Volt_f32(void)
 *   Float Rte_IRead_CDDInterface10_Per1_MtrCurr2TempOffset_Volt_f32(void)
 *   SInt8 Rte_IRead_CDDInterface10_Per1_MtrPosPolarity_Cnt_s08(void)
 *   Float Rte_IRead_CDDInterface10_Per1_Vecu_Volt_f32(void)
 *
 * Output Interfaces:
 * ==================
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_CDDInterface10_Per1_ESCOffsCfgSeld_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_CDDInterface10_Per1_ESCOffsCfgSeld_Cnt_lgc(void)
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

FUNC(void, RTE_SA_CDDINTERFACE10_APPL_CODE) CDDInterface10_Per1(void);

# define RTE_STOP_SEC_SA_CDDINTERFACE10_APPL_CODE
# include "MemMap.h"

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1525941296
#    error "The magic number of the generated file <C:/Components/PSA_CMP/PSA_CMP_EPS_TMS570/SwProject/CDDInterface/utp/contract/Sa_CDDInterface10/Rte_Sa_CDDInterface10.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1525941296
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_SA_CDDINTERFACE10_H */
