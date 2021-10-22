/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Ap_TuningSelAuth.c
 *     Workspace:  C:/SynergyEA3/Working/TuningSelAuth/autosar
 *     SW-C Type:  Ap_TuningSelAuth
 *  Generated at:  Thu May 19 15:31:18 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 2.17.2
 *       License:  License CBD1010122 valid for CBD1010122 Nxtr  GM MSR_SLP3_BSW_RTE_wGMLAN TexasInstruments TMS570 Texas Instruments
 *
 *   Description:  C-Code implementation template for SW-C <Ap_TuningSelAuth>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/* Version Control:
 * Date Created:      Tue Jul 3 10:05:09 2012
 * %version:          6 %
 * %derived_by:       cz7lt6 %
 * %date_modified:    Mon Oct 28 11:51:03 2013 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 07/03/12  1        VK        Initial component based design release for FDD SF-23 v001						5793 
 * 07/27/12  1        LWW       Updates for performing tuning selection
 * 09/23/12  3        Selva      Checkpoints added and mempmap macros corrected		                          6252
 * 10/24/12  4        BWL       Update trigger rates                                                          6625
 * 07/11/12  5        KJS       Added support for tune-on-the-fly phase 1
 * 10/28/13  6        KJS       Updated enum TuningSessionAddrPtrEnum with new options. No functional
 *								source changes were made for this change.  
 * 05/16/16  7        SB        Implemented SF023A version 4 & 5 of design                                    EA3#6360
 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_Ap_TuningSelAuth.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "CalConstants.h"
#include "filters.h"
#include "GlobalMacro.h"
#include "fixmath.h"
#include "interpolation.h"

/* MISRA-C:2004 Rule 8.7: Deviation required for the display variables and filter constants because of memory map */
/* PRQA S 4395 EOF
* MISRA-C: 2004 Rule 10.4: This deviation is required for library macros.  The rule is suppressed for the entire file */
/* MISRA-C:2004 Rule 19.1: Deviation required for the AUTOSAR Compliance */

#define D_10MS_SEC_F32				0.010F

/* Module Internal Variables */
#define TUNINGSELAUTH_START_SEC_VAR_CLEARED_16
#include "MemMap.h" /* PRQA S 5087 */
STATIC VAR(uint16, AP_TUNINGSELAUTH_VAR_NOINIT) PrevTunSet_Cnt_M_u16;
STATIC VAR(uint16, AP_TUNINGSELAUTH_VAR_NOINIT) PrevTunPers_Cnt_M_u16;
#define TUNINGSELAUTH_STOP_SEC_VAR_CLEARED_16
#include "MemMap.h" /* PRQA S 5087 */

#define TUNINGSELAUTH_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */
STATIC VAR(LPF32KSV_Str, AP_TUNINGSELAUTH_VAR_NOINIT) HwTrqLPFiltSV_HwNm_M_str;
#define TUNINGSELAUTH_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * Boolean: Boolean (standard type)
 * Float: Real in interval ]-FLT_MAX...FLT_MAX[ with single precision (standard type)
 * UInt16: Integer in interval [0...65535] (standard type)
 * UInt32: Integer in interval [0...4294967295] (standard type)
 *
 * Enumeration Types:
 * ==================
 * TuningSessionAddrPtrEnum: Enumeration of integer in interval [0...255] with enumerators
 *   TUN_SESSION_PTR_PERS (0u)
 *   TUN_SESSION_PTR_SETS (1u)
 *   TUN_SESSION_PTR_COMMON (2u)
 *   TUN_SESSION_PTR_SETANDPER (3u)
 *   TUN_SESSION_PTR_SETANDPERANDCOMMON (4u)
 *   TUN_SESSION_PTR_CUSTSEG (16u)
 *   TUN_SESSION_PTR_DISABLED (255u)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Defined Constants
 *
 **********************************************************************************************************************
 *
 * Primitive Type Constants:
 * =========================
 * Boolean: D_FALSE_CNT_LGC = FALSE
 * Boolean: D_TRUE_CNT_LGC = TRUE
 * Float: D_ZERO_ULS_F32 = 0
 * TuningSessionAddrPtrEnum: D_TUNSESSIONADRPTRINIT_CNT_ENUM = 255u
 * UInt16: D_ZERO_CNT_U16 = 0u
 * UInt32: D_ZERO_CNT_U32 = 0u
 *
 *********************************************************************************************************************/


#define RTE_START_SEC_AP_TUNINGSELAUTH_APPL_CODE
#include "MemMap.h"  /* PRQA S 5087 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TuningSelAuth_Init1
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
 *   UInt16 Rte_IRead_TuningSelAuth_Init1_DesiredTunPers_Cnt_u16(void)
 *   UInt16 Rte_IRead_TuningSelAuth_Init1_DesiredTunSet_Cnt_u16(void)
 *
 * Output Interfaces:
 * ==================
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_TuningSelAuth_Init1_ActiveTunPers_Cnt_u16(UInt16 data)
 *   UInt16 *Rte_IWriteRef_TuningSelAuth_Init1_ActiveTunPers_Cnt_u16(void)
 *   void Rte_IWrite_TuningSelAuth_Init1_ActiveTunSet_Cnt_u16(UInt16 data)
 *   UInt16 *Rte_IWriteRef_TuningSelAuth_Init1_ActiveTunSet_Cnt_u16(void)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_TUNINGSELAUTH_APPL_CODE) TuningSelAuth_Init1(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: TuningSelAuth_Init1
 *********************************************************************************************************************/
	VAR(uint16, AUTOMATIC) DesiredTunPers_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) DesiredTunSet_Cnt_T_u16;

	DesiredTunPers_Cnt_T_u16 = Rte_IRead_TuningSelAuth_Init1_DesiredTunPers_Cnt_u16();
	DesiredTunSet_Cnt_T_u16 = Rte_IRead_TuningSelAuth_Init1_DesiredTunSet_Cnt_u16();

	if (DesiredTunPers_Cnt_T_u16 >= TableSize_m(T_TunPersSelectionTbl_Ptr_Str[0]))
	{
		DesiredTunPers_Cnt_T_u16 = 0U;
	}

	if (DesiredTunSet_Cnt_T_u16 >= TableSize_m(T_TunSetSelectionTbl_Ptr_Str))
	{
		DesiredTunSet_Cnt_T_u16 = 0U;
	}

	TunPer_Ptr_Str = T_TunPersSelectionTbl_Ptr_Str[DesiredTunSet_Cnt_T_u16][DesiredTunPers_Cnt_T_u16];
	TunSet_Ptr_Str = T_TunSetSelectionTbl_Ptr_Str[DesiredTunSet_Cnt_T_u16];
	
	Rte_IWrite_TuningSelAuth_Init1_ActiveTunPers_Cnt_u16(DesiredTunPers_Cnt_T_u16);
	Rte_IWrite_TuningSelAuth_Init1_ActiveTunSet_Cnt_u16(DesiredTunSet_Cnt_T_u16);
	
	PrevTunPers_Cnt_M_u16 = DesiredTunPers_Cnt_T_u16;
	PrevTunSet_Cnt_M_u16 = DesiredTunSet_Cnt_T_u16;

	/* Low pass filter init */
	LPF_KUpdate_f32_m(k_TunSelHwTrqLPFKn_Hz_f32, D_10MS_SEC_F32, &HwTrqLPFiltSV_HwNm_M_str);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TuningSelAuth_Per1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Implicit S/R API:
 *   -----------------
 *   UInt32 Rte_IRead_TuningSelAuth_Per1_ActiveTunOvrPtrAddr_Cnt_u32(void)
 *   UInt16 Rte_IRead_TuningSelAuth_Per1_DesiredTunPers_Cnt_u16(void)
 *   UInt16 Rte_IRead_TuningSelAuth_Per1_DesiredTunSet_Cnt_u16(void)
 *   Float Rte_IRead_TuningSelAuth_Per1_HandwheelVelocity_HwRadpS_f32(void)
 *   Float Rte_IRead_TuningSelAuth_Per1_HwTorque_HwNm_f32(void)
 *   TuningSessionAddrPtrEnum Rte_IRead_TuningSelAuth_Per1_TuningSessionActPtr_Cnt_u8(void)
 *   Float Rte_IRead_TuningSelAuth_Per1_VehicleSpeed_Kph_f32(void)
 *
 * Output Interfaces:
 * ==================
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_TuningSelAuth_Per1_ActiveTunPers_Cnt_u16(UInt16 data)
 *   UInt16 *Rte_IWriteRef_TuningSelAuth_Per1_ActiveTunPers_Cnt_u16(void)
 *   void Rte_IWrite_TuningSelAuth_Per1_ActiveTunSet_Cnt_u16(UInt16 data)
 *   UInt16 *Rte_IWriteRef_TuningSelAuth_Per1_ActiveTunSet_Cnt_u16(void)
 *   void Rte_IWrite_TuningSelAuth_Per1_TunReqGranted_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_TuningSelAuth_Per1_TunReqGranted_Cnt_lgc(void)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_TUNINGSELAUTH_APPL_CODE) TuningSelAuth_Per1(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: TuningSelAuth_Per1
 *********************************************************************************************************************/

	VAR(float32, AUTOMATIC) HwTorque_HwNm_T_f32;
	VAR(float32, AUTOMATIC) VehicleSpeed_Kph_T_f32;
	VAR(float32, AUTOMATIC) HwTrqThY_HwNm_T_f32;
	VAR(float32, AUTOMATIC) HwTorqueFilt_HwNm_T_f32;
	VAR(float32, AUTOMATIC) AbsltHwTorqueFilt_HwNm_T_f32;
	VAR(float32, AUTOMATIC) HandwheelVelocity_HwRadpS_T_f32;
	VAR(uint16, AUTOMATIC) DesiredTunPers_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) DesiredTunSet_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) VehicleSpeed_Kph_T_u9p7;
	VAR(uint16, AUTOMATIC) HwTrqThY_HwNm_T_u4p12;
	VAR(boolean, AUTOMATIC) TunReqGranted_Cnt_T_lgc;

	VAR(uint32, AUTOMATIC) TunSessionAddrPtr_Cnt_T_u32;
	VAR(TuningSessionAddrPtrEnum, AUTOMATIC) TuningSessionActPtr_Cnt_T_u8;

	DesiredTunPers_Cnt_T_u16 	= Rte_IRead_TuningSelAuth_Per1_DesiredTunPers_Cnt_u16();
	DesiredTunSet_Cnt_T_u16 	= Rte_IRead_TuningSelAuth_Per1_DesiredTunSet_Cnt_u16();
	HwTorque_HwNm_T_f32 		= Rte_IRead_TuningSelAuth_Per1_HwTorque_HwNm_f32();
	HandwheelVelocity_HwRadpS_T_f32 = Rte_IRead_TuningSelAuth_Per1_HandwheelVelocity_HwRadpS_f32();
	VehicleSpeed_Kph_T_f32 		= Rte_IRead_TuningSelAuth_Per1_VehicleSpeed_Kph_f32();

	TunSessionAddrPtr_Cnt_T_u32 = Rte_IRead_TuningSelAuth_Per1_ActiveTunOvrPtrAddr_Cnt_u32();
	TuningSessionActPtr_Cnt_T_u8 = Rte_IRead_TuningSelAuth_Per1_TuningSessionActPtr_Cnt_u8();


	AbsltHwTorqueFilt_HwNm_T_f32 = Abs_f32_m(LPF_OpUpdate_f32_m(HwTorque_HwNm_T_f32, &HwTrqLPFiltSV_HwNm_M_str));	
	VehicleSpeed_Kph_T_u9p7 = FPM_FloatToFixed_m(VehicleSpeed_Kph_T_f32, u9p7_T);            
	HwTrqThY_HwNm_T_u4p12 = IntplVarXY_u16_u16Xu16Y_Cnt(t_TunSel_HwTrqThX_Kph_u9p7,
														  t_TunSel_HwTrqThY_HwNm_u4p12,
														  TableSize_m(t_TunSel_HwTrqThX_Kph_u9p7),
														  VehicleSpeed_Kph_T_u9p7);
	
	HwTrqThY_HwNm_T_f32 = FPM_FixedToFloat_m(HwTrqThY_HwNm_T_u4p12, u4p12_T);

	if ((Abs_f32_m(HandwheelVelocity_HwRadpS_T_f32) <= k_TunSel_HwVelThresh_HwRadpS_f32) &&
		(AbsltHwTorqueFilt_HwNm_T_f32 <= HwTrqThY_HwNm_T_f32) && 
		(VehicleSpeed_Kph_T_f32 <= k_TunSelVehSpdThresh_Kph_f32))
	{
		TunReqGranted_Cnt_T_lgc = TRUE;
	}
	else
	{
		TunReqGranted_Cnt_T_lgc = FALSE;
	}
	if(TunReqGranted_Cnt_T_lgc == TRUE)
	{
		if (DesiredTunPers_Cnt_T_u16 >= TableSize_m(T_TunPersSelectionTbl_Ptr_Str[0]))
		{
			DesiredTunPers_Cnt_T_u16 = PrevTunPers_Cnt_M_u16;
		}

		if (DesiredTunSet_Cnt_T_u16 >= TableSize_m(T_TunSetSelectionTbl_Ptr_Str))
		{
			DesiredTunSet_Cnt_T_u16 = PrevTunSet_Cnt_M_u16;
		}

		if(TuningSessionActPtr_Cnt_T_u8 == TUN_SESSION_PTR_DISABLED)
		{
			/* No override active, use the flash values */
			TunPer_Ptr_Str = T_TunPersSelectionTbl_Ptr_Str[DesiredTunSet_Cnt_T_u16][DesiredTunPers_Cnt_T_u16];
			TunSet_Ptr_Str = T_TunSetSelectionTbl_Ptr_Str[DesiredTunSet_Cnt_T_u16];
		}
		else
		{
			switch(TuningSessionActPtr_Cnt_T_u8)
			{
				case TUN_SESSION_PTR_PERS:
					TunPer_Ptr_Str = (const TUNING_P_Str *)TunSessionAddrPtr_Cnt_T_u32;
					TunSet_Ptr_Str = T_TunSetSelectionTbl_Ptr_Str[DesiredTunSet_Cnt_T_u16];
				break;
				case TUN_SESSION_PTR_SETS:
					TunPer_Ptr_Str = T_TunPersSelectionTbl_Ptr_Str[DesiredTunSet_Cnt_T_u16][DesiredTunPers_Cnt_T_u16];
					TunSet_Ptr_Str = (const TUNING_Y_Str *)TunSessionAddrPtr_Cnt_T_u32;
				break;
				case TUN_SESSION_PTR_COMMON:
					/* TODO: Define this structure of cals */

				/* TODO: Remove comment around break after structure is defined for common cals. For now, in case the pointer
				 * is set to the common set, apply flash cals */
				/* break; */
				default:
					/* Invalid value, use the flash values */
					TunPer_Ptr_Str = T_TunPersSelectionTbl_Ptr_Str[DesiredTunSet_Cnt_T_u16][DesiredTunPers_Cnt_T_u16];
					TunSet_Ptr_Str = T_TunSetSelectionTbl_Ptr_Str[DesiredTunSet_Cnt_T_u16];
				break;
			}
		}

		Rte_IWrite_TuningSelAuth_Per1_ActiveTunPers_Cnt_u16(DesiredTunPers_Cnt_T_u16);
		Rte_IWrite_TuningSelAuth_Per1_ActiveTunSet_Cnt_u16(DesiredTunSet_Cnt_T_u16);

		PrevTunPers_Cnt_M_u16 = DesiredTunPers_Cnt_T_u16;
		PrevTunSet_Cnt_M_u16 = DesiredTunSet_Cnt_T_u16;
	}
	else
	{
		Rte_IWrite_TuningSelAuth_Per1_ActiveTunPers_Cnt_u16(PrevTunPers_Cnt_M_u16);
		Rte_IWrite_TuningSelAuth_Per1_ActiveTunSet_Cnt_u16(PrevTunSet_Cnt_M_u16);
	}
	Rte_IWrite_TuningSelAuth_Per1_TunReqGranted_Cnt_lgc(TunReqGranted_Cnt_T_lgc);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define RTE_STOP_SEC_AP_TUNINGSELAUTH_APPL_CODE
#include "MemMap.h"  /* PRQA S 5087 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
