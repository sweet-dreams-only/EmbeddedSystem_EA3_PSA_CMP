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
 *          File:  Rte_Type.h
 *     Workspace:  C:/Synergy_projects/ReturnFirewall-lz4p8n/ReturnFirewall/autosar/Ap_ReturnFirewall.dcf
 *     SW-C Type:  Ap_ReturnFirewall
 *  Generated at:  Mon May 13 17:57:31 2013
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nxtr  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Header file containing user defined AUTOSAR types and RTE structures (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TYPE_H
# define _RTE_TYPE_H

# include "Rte.h"


/**********************************************************************************************************************
 * Data type definitions
 *********************************************************************************************************************/

# define Rte_TypeDef_Boolean
typedef boolean Boolean;

# define Rte_TypeDef_Float
typedef float32 Float;
# define Float_LowerLimit (-FLT_MAX)
# define Float_UpperLimit (FLT_MAX)

# define Rte_TypeDef_SInt16
typedef sint16 SInt16;
# define SInt16_LowerLimit (-32768)
# define SInt16_UpperLimit (32767)

# define Rte_TypeDef_UInt8
typedef uint8 UInt8;
# define UInt8_LowerLimit (0U)
# define UInt8_UpperLimit (255U)

# define Rte_TypeDef_ManufModeType
typedef uint8 ManufModeType;
# define ManufModeType_LowerLimit (0U)
# define ManufModeType_UpperLimit (2U)
# if (defined RTE_CONST_ProductionMode) || (defined ProductionMode)
#  if (!defined RTE_CONST_ProductionMode) || (RTE_CONST_ProductionMode != 0U)
#   error "Enumeration constant <ProductionMode> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_ProductionMode (0U)
#  define ProductionMode (0U)
# endif
# if (defined RTE_CONST_ManufacturingMode) || (defined ManufacturingMode)
#  if (!defined RTE_CONST_ManufacturingMode) || (RTE_CONST_ManufacturingMode != 1U)
#   error "Enumeration constant <ManufacturingMode> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_ManufacturingMode (1U)
#  define ManufacturingMode (1U)
# endif
# if (defined RTE_CONST_EngineeringMode) || (defined EngineeringMode)
#  if (!defined RTE_CONST_EngineeringMode) || (RTE_CONST_EngineeringMode != 2U)
#   error "Enumeration constant <EngineeringMode> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_EngineeringMode (2U)
#  define EngineeringMode (2U)
# endif

# define Rte_TypeDef_NTCNumber
typedef uint16 NTCNumber;
# define NTCNumber_LowerLimit (0U)
# define NTCNumber_UpperLimit (511U)
# if (defined RTE_CONST_NTC_Num_FlashWrapperLgcFlt) || (defined NTC_Num_FlashWrapperLgcFlt)
#  if (!defined RTE_CONST_NTC_Num_FlashWrapperLgcFlt) || (RTE_CONST_NTC_Num_FlashWrapperLgcFlt != 1U)
#   error "Enumeration constant <NTC_Num_FlashWrapperLgcFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_FlashWrapperLgcFlt (1U)
#  define NTC_Num_FlashWrapperLgcFlt (1U)
# endif
# if (defined RTE_CONST_NTC_Num_FlashECCCorr) || (defined NTC_Num_FlashECCCorr)
#  if (!defined RTE_CONST_NTC_Num_FlashECCCorr) || (RTE_CONST_NTC_Num_FlashECCCorr != 2U)
#   error "Enumeration constant <NTC_Num_FlashECCCorr> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_FlashECCCorr (2U)
#  define NTC_Num_FlashECCCorr (2U)
# endif
# if (defined RTE_CONST_NTC_Num_FlashECCMemFlt) || (defined NTC_Num_FlashECCMemFlt)
#  if (!defined RTE_CONST_NTC_Num_FlashECCMemFlt) || (RTE_CONST_NTC_Num_FlashECCMemFlt != 3U)
#   error "Enumeration constant <NTC_Num_FlashECCMemFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_FlashECCMemFlt (3U)
#  define NTC_Num_FlashECCMemFlt (3U)
# endif
# if (defined RTE_CONST_NTC_Num_FlashCRCMemFault) || (defined NTC_Num_FlashCRCMemFault)
#  if (!defined RTE_CONST_NTC_Num_FlashCRCMemFault) || (RTE_CONST_NTC_Num_FlashCRCMemFault != 4U)
#   error "Enumeration constant <NTC_Num_FlashCRCMemFault> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_FlashCRCMemFault (4U)
#  define NTC_Num_FlashCRCMemFault (4U)
# endif
# if (defined RTE_CONST_NTC_Num_EEPROMDiag) || (defined NTC_Num_EEPROMDiag)
#  if (!defined RTE_CONST_NTC_Num_EEPROMDiag) || (RTE_CONST_NTC_Num_EEPROMDiag != 10U)
#   error "Enumeration constant <NTC_Num_EEPROMDiag> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_EEPROMDiag (10U)
#  define NTC_Num_EEPROMDiag (10U)
# endif
# if (defined RTE_CONST_NTC_Num_EEPROMDiagMtrStr) || (defined NTC_Num_EEPROMDiagMtrStr)
#  if (!defined RTE_CONST_NTC_Num_EEPROMDiagMtrStr) || (RTE_CONST_NTC_Num_EEPROMDiagMtrStr != 11U)
#   error "Enumeration constant <NTC_Num_EEPROMDiagMtrStr> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_EEPROMDiagMtrStr (11U)
#  define NTC_Num_EEPROMDiagMtrStr (11U)
# endif
# if (defined RTE_CONST_NTC_Num_PriSnsrTrqStorFlt) || (defined NTC_Num_PriSnsrTrqStorFlt)
#  if (!defined RTE_CONST_NTC_Num_PriSnsrTrqStorFlt) || (RTE_CONST_NTC_Num_PriSnsrTrqStorFlt != 12U)
#   error "Enumeration constant <NTC_Num_PriSnsrTrqStorFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PriSnsrTrqStorFlt (12U)
#  define NTC_Num_PriSnsrTrqStorFlt (12U)
# endif
# if (defined RTE_CONST_NTC_Num_EEPROMDiagPosTrimStr) || (defined NTC_Num_EEPROMDiagPosTrimStr)
#  if (!defined RTE_CONST_NTC_Num_EEPROMDiagPosTrimStr) || (RTE_CONST_NTC_Num_EEPROMDiagPosTrimStr != 13U)
#   error "Enumeration constant <NTC_Num_EEPROMDiagPosTrimStr> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_EEPROMDiagPosTrimStr (13U)
#  define NTC_Num_EEPROMDiagPosTrimStr (13U)
# endif
# if (defined RTE_CONST_NTC_Num_SecSnsrTrqStorFlt) || (defined NTC_Num_SecSnsrTrqStorFlt)
#  if (!defined RTE_CONST_NTC_Num_SecSnsrTrqStorFlt) || (RTE_CONST_NTC_Num_SecSnsrTrqStorFlt != 14U)
#   error "Enumeration constant <NTC_Num_SecSnsrTrqStorFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_SecSnsrTrqStorFlt (14U)
#  define NTC_Num_SecSnsrTrqStorFlt (14U)
# endif
# if (defined RTE_CONST_NTC_Num_EEPROMDiagPolarityStr) || (defined NTC_Num_EEPROMDiagPolarityStr)
#  if (!defined RTE_CONST_NTC_Num_EEPROMDiagPolarityStr) || (RTE_CONST_NTC_Num_EEPROMDiagPolarityStr != 15U)
#   error "Enumeration constant <NTC_Num_EEPROMDiagPolarityStr> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_EEPROMDiagPolarityStr (15U)
#  define NTC_Num_EEPROMDiagPolarityStr (15U)
# endif
# if (defined RTE_CONST_NTC_Num_RAMDiag_GeneralFlt) || (defined NTC_Num_RAMDiag_GeneralFlt)
#  if (!defined RTE_CONST_NTC_Num_RAMDiag_GeneralFlt) || (RTE_CONST_NTC_Num_RAMDiag_GeneralFlt != 16U)
#   error "Enumeration constant <NTC_Num_RAMDiag_GeneralFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_RAMDiag_GeneralFlt (16U)
#  define NTC_Num_RAMDiag_GeneralFlt (16U)
# endif
# if (defined RTE_CONST_NTC_Num_RAMDiag_WrprLgcFlt) || (defined NTC_Num_RAMDiag_WrprLgcFlt)
#  if (!defined RTE_CONST_NTC_Num_RAMDiag_WrprLgcFlt) || (RTE_CONST_NTC_Num_RAMDiag_WrprLgcFlt != 17U)
#   error "Enumeration constant <NTC_Num_RAMDiag_WrprLgcFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_RAMDiag_WrprLgcFlt (17U)
#  define NTC_Num_RAMDiag_WrprLgcFlt (17U)
# endif
# if (defined RTE_CONST_NTC_Num_RAMDiag_ECCCorrIndFlt) || (defined NTC_Num_RAMDiag_ECCCorrIndFlt)
#  if (!defined RTE_CONST_NTC_Num_RAMDiag_ECCCorrIndFlt) || (RTE_CONST_NTC_Num_RAMDiag_ECCCorrIndFlt != 18U)
#   error "Enumeration constant <NTC_Num_RAMDiag_ECCCorrIndFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_RAMDiag_ECCCorrIndFlt (18U)
#  define NTC_Num_RAMDiag_ECCCorrIndFlt (18U)
# endif
# if (defined RTE_CONST_NTC_Num_RAMDiag_ECCMemFlt) || (defined NTC_Num_RAMDiag_ECCMemFlt)
#  if (!defined RTE_CONST_NTC_Num_RAMDiag_ECCMemFlt) || (RTE_CONST_NTC_Num_RAMDiag_ECCMemFlt != 19U)
#   error "Enumeration constant <NTC_Num_RAMDiag_ECCMemFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_RAMDiag_ECCMemFlt (19U)
#  define NTC_Num_RAMDiag_ECCMemFlt (19U)
# endif
# if (defined RTE_CONST_NTC_Num_RAMDiag_CRCMemFlt) || (defined NTC_Num_RAMDiag_CRCMemFlt)
#  if (!defined RTE_CONST_NTC_Num_RAMDiag_CRCMemFlt) || (RTE_CONST_NTC_Num_RAMDiag_CRCMemFlt != 20U)
#   error "Enumeration constant <NTC_Num_RAMDiag_CRCMemFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_RAMDiag_CRCMemFlt (20U)
#  define NTC_Num_RAMDiag_CRCMemFlt (20U)
# endif
# if (defined RTE_CONST_NTC_Num_RAMDiag_VIMRamFlt) || (defined NTC_Num_RAMDiag_VIMRamFlt)
#  if (!defined RTE_CONST_NTC_Num_RAMDiag_VIMRamFlt) || (RTE_CONST_NTC_Num_RAMDiag_VIMRamFlt != 23U)
#   error "Enumeration constant <NTC_Num_RAMDiag_VIMRamFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_RAMDiag_VIMRamFlt (23U)
#  define NTC_Num_RAMDiag_VIMRamFlt (23U)
# endif
# if (defined RTE_CONST_NTC_Num_RAMDiag_NHET1RamFlt) || (defined NTC_Num_RAMDiag_NHET1RamFlt)
#  if (!defined RTE_CONST_NTC_Num_RAMDiag_NHET1RamFlt) || (RTE_CONST_NTC_Num_RAMDiag_NHET1RamFlt != 24U)
#   error "Enumeration constant <NTC_Num_RAMDiag_NHET1RamFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_RAMDiag_NHET1RamFlt (24U)
#  define NTC_Num_RAMDiag_NHET1RamFlt (24U)
# endif
# if (defined RTE_CONST_NTC_Num_RAMDiag_NHET2RamFlt) || (defined NTC_Num_RAMDiag_NHET2RamFlt)
#  if (!defined RTE_CONST_NTC_Num_RAMDiag_NHET2RamFlt) || (RTE_CONST_NTC_Num_RAMDiag_NHET2RamFlt != 25U)
#   error "Enumeration constant <NTC_Num_RAMDiag_NHET2RamFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_RAMDiag_NHET2RamFlt (25U)
#  define NTC_Num_RAMDiag_NHET2RamFlt (25U)
# endif
# if (defined RTE_CONST_NTC_Num_RAMDiag_ADC1RamFlt) || (defined NTC_Num_RAMDiag_ADC1RamFlt)
#  if (!defined RTE_CONST_NTC_Num_RAMDiag_ADC1RamFlt) || (RTE_CONST_NTC_Num_RAMDiag_ADC1RamFlt != 26U)
#   error "Enumeration constant <NTC_Num_RAMDiag_ADC1RamFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_RAMDiag_ADC1RamFlt (26U)
#  define NTC_Num_RAMDiag_ADC1RamFlt (26U)
# endif
# if (defined RTE_CONST_NTC_Num_RAMDiag_DCANRamFault) || (defined NTC_Num_RAMDiag_DCANRamFault)
#  if (!defined RTE_CONST_NTC_Num_RAMDiag_DCANRamFault) || (RTE_CONST_NTC_Num_RAMDiag_DCANRamFault != 27U)
#   error "Enumeration constant <NTC_Num_RAMDiag_DCANRamFault> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_RAMDiag_DCANRamFault (27U)
#  define NTC_Num_RAMDiag_DCANRamFault (27U)
# endif
# if (defined RTE_CONST_NTC_Num_RAMDiag_ADC2RamFlt) || (defined NTC_Num_RAMDiag_ADC2RamFlt)
#  if (!defined RTE_CONST_NTC_Num_RAMDiag_ADC2RamFlt) || (RTE_CONST_NTC_Num_RAMDiag_ADC2RamFlt != 28U)
#   error "Enumeration constant <NTC_Num_RAMDiag_ADC2RamFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_RAMDiag_ADC2RamFlt (28U)
#  define NTC_Num_RAMDiag_ADC2RamFlt (28U)
# endif
# if (defined RTE_CONST_NTC_Num_RAMDiag_HETTU1RamFlt) || (defined NTC_Num_RAMDiag_HETTU1RamFlt)
#  if (!defined RTE_CONST_NTC_Num_RAMDiag_HETTU1RamFlt) || (RTE_CONST_NTC_Num_RAMDiag_HETTU1RamFlt != 29U)
#   error "Enumeration constant <NTC_Num_RAMDiag_HETTU1RamFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_RAMDiag_HETTU1RamFlt (29U)
#  define NTC_Num_RAMDiag_HETTU1RamFlt (29U)
# endif
# if (defined RTE_CONST_NTC_Num_RAMDiag_HETTU2RamFlt) || (defined NTC_Num_RAMDiag_HETTU2RamFlt)
#  if (!defined RTE_CONST_NTC_Num_RAMDiag_HETTU2RamFlt) || (RTE_CONST_NTC_Num_RAMDiag_HETTU2RamFlt != 30U)
#   error "Enumeration constant <NTC_Num_RAMDiag_HETTU2RamFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_RAMDiag_HETTU2RamFlt (30U)
#  define NTC_Num_RAMDiag_HETTU2RamFlt (30U)
# endif
# if (defined RTE_CONST_NTC_Num_CPU_RegVer) || (defined NTC_Num_CPU_RegVer)
#  if (!defined RTE_CONST_NTC_Num_CPU_RegVer) || (RTE_CONST_NTC_Num_CPU_RegVer != 32U)
#   error "Enumeration constant <NTC_Num_CPU_RegVer> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CPU_RegVer (32U)
#  define NTC_Num_CPU_RegVer (32U)
# endif
# if (defined RTE_CONST_NTC_Num_CPU_CoreInitFlt) || (defined NTC_Num_CPU_CoreInitFlt)
#  if (!defined RTE_CONST_NTC_Num_CPU_CoreInitFlt) || (RTE_CONST_NTC_Num_CPU_CoreInitFlt != 33U)
#   error "Enumeration constant <NTC_Num_CPU_CoreInitFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CPU_CoreInitFlt (33U)
#  define NTC_Num_CPU_CoreInitFlt (33U)
# endif
# if (defined RTE_CONST_NTC_Num_CPU_CoreRunTimeFlt) || (defined NTC_Num_CPU_CoreRunTimeFlt)
#  if (!defined RTE_CONST_NTC_Num_CPU_CoreRunTimeFlt) || (RTE_CONST_NTC_Num_CPU_CoreRunTimeFlt != 34U)
#   error "Enumeration constant <NTC_Num_CPU_CoreRunTimeFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CPU_CoreRunTimeFlt (34U)
#  define NTC_Num_CPU_CoreRunTimeFlt (34U)
# endif
# if (defined RTE_CONST_NTC_Num_CPU_ClockMon) || (defined NTC_Num_CPU_ClockMon)
#  if (!defined RTE_CONST_NTC_Num_CPU_ClockMon) || (RTE_CONST_NTC_Num_CPU_ClockMon != 35U)
#   error "Enumeration constant <NTC_Num_CPU_ClockMon> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CPU_ClockMon (35U)
#  define NTC_Num_CPU_ClockMon (35U)
# endif
# if (defined RTE_CONST_NTC_Num_CPU_eFuseFlt) || (defined NTC_Num_CPU_eFuseFlt)
#  if (!defined RTE_CONST_NTC_Num_CPU_eFuseFlt) || (RTE_CONST_NTC_Num_CPU_eFuseFlt != 36U)
#   error "Enumeration constant <NTC_Num_CPU_eFuseFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CPU_eFuseFlt (36U)
#  define NTC_Num_CPU_eFuseFlt (36U)
# endif
# if (defined RTE_CONST_NTC_Num_CPU_MPUViolation) || (defined NTC_Num_CPU_MPUViolation)
#  if (!defined RTE_CONST_NTC_Num_CPU_MPUViolation) || (RTE_CONST_NTC_Num_CPU_MPUViolation != 37U)
#   error "Enumeration constant <NTC_Num_CPU_MPUViolation> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CPU_MPUViolation (37U)
#  define NTC_Num_CPU_MPUViolation (37U)
# endif
# if (defined RTE_CONST_NTC_Num_CPU_FactPrcsErr) || (defined NTC_Num_CPU_FactPrcsErr)
#  if (!defined RTE_CONST_NTC_Num_CPU_FactPrcsErr) || (RTE_CONST_NTC_Num_CPU_FactPrcsErr != 40U)
#   error "Enumeration constant <NTC_Num_CPU_FactPrcsErr> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CPU_FactPrcsErr (40U)
#  define NTC_Num_CPU_FactPrcsErr (40U)
# endif
# if (defined RTE_CONST_NTC_Num_PropExeDiag_InitDiag) || (defined NTC_Num_PropExeDiag_InitDiag)
#  if (!defined RTE_CONST_NTC_Num_PropExeDiag_InitDiag) || (RTE_CONST_NTC_Num_PropExeDiag_InitDiag != 41U)
#   error "Enumeration constant <NTC_Num_PropExeDiag_InitDiag> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PropExeDiag_InitDiag (41U)
#  define NTC_Num_PropExeDiag_InitDiag (41U)
# endif
# if (defined RTE_CONST_NTC_Num_PrgFlwDeadlnFlt) || (defined NTC_Num_PrgFlwDeadlnFlt)
#  if (!defined RTE_CONST_NTC_Num_PrgFlwDeadlnFlt) || (RTE_CONST_NTC_Num_PrgFlwDeadlnFlt != 42U)
#   error "Enumeration constant <NTC_Num_PrgFlwDeadlnFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PrgFlwDeadlnFlt (42U)
#  define NTC_Num_PrgFlwDeadlnFlt (42U)
# endif
# if (defined RTE_CONST_NTC_Num_PropExeDiag_RunTimeDiag) || (defined NTC_Num_PropExeDiag_RunTimeDiag)
#  if (!defined RTE_CONST_NTC_Num_PropExeDiag_RunTimeDiag) || (RTE_CONST_NTC_Num_PropExeDiag_RunTimeDiag != 43U)
#   error "Enumeration constant <NTC_Num_PropExeDiag_RunTimeDiag> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PropExeDiag_RunTimeDiag (43U)
#  define NTC_Num_PropExeDiag_RunTimeDiag (43U)
# endif
# if (defined RTE_CONST_NTC_Num_PropExeDiag_COPTimeout) || (defined NTC_Num_PropExeDiag_COPTimeout)
#  if (!defined RTE_CONST_NTC_Num_PropExeDiag_COPTimeout) || (RTE_CONST_NTC_Num_PropExeDiag_COPTimeout != 44U)
#   error "Enumeration constant <NTC_Num_PropExeDiag_COPTimeout> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PropExeDiag_COPTimeout (44U)
#  define NTC_Num_PropExeDiag_COPTimeout (44U)
# endif
# if (defined RTE_CONST_NTC_Num_PropExeDiag_PrefetchAbort) || (defined NTC_Num_PropExeDiag_PrefetchAbort)
#  if (!defined RTE_CONST_NTC_Num_PropExeDiag_PrefetchAbort) || (RTE_CONST_NTC_Num_PropExeDiag_PrefetchAbort != 48U)
#   error "Enumeration constant <NTC_Num_PropExeDiag_PrefetchAbort> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PropExeDiag_PrefetchAbort (48U)
#  define NTC_Num_PropExeDiag_PrefetchAbort (48U)
# endif
# if (defined RTE_CONST_NTC_Num_PropExeDiag_DataAbort) || (defined NTC_Num_PropExeDiag_DataAbort)
#  if (!defined RTE_CONST_NTC_Num_PropExeDiag_DataAbort) || (RTE_CONST_NTC_Num_PropExeDiag_DataAbort != 49U)
#   error "Enumeration constant <NTC_Num_PropExeDiag_DataAbort> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PropExeDiag_DataAbort (49U)
#  define NTC_Num_PropExeDiag_DataAbort (49U)
# endif
# if (defined RTE_CONST_NTC_Num_PerDiag_ADC1Flt) || (defined NTC_Num_PerDiag_ADC1Flt)
#  if (!defined RTE_CONST_NTC_Num_PerDiag_ADC1Flt) || (RTE_CONST_NTC_Num_PerDiag_ADC1Flt != 50U)
#   error "Enumeration constant <NTC_Num_PerDiag_ADC1Flt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PerDiag_ADC1Flt (50U)
#  define NTC_Num_PerDiag_ADC1Flt (50U)
# endif
# if (defined RTE_CONST_NTC_Num_PerDiag_ADC2Flt) || (defined NTC_Num_PerDiag_ADC2Flt)
#  if (!defined RTE_CONST_NTC_Num_PerDiag_ADC2Flt) || (RTE_CONST_NTC_Num_PerDiag_ADC2Flt != 51U)
#   error "Enumeration constant <NTC_Num_PerDiag_ADC2Flt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PerDiag_ADC2Flt (51U)
#  define NTC_Num_PerDiag_ADC2Flt (51U)
# endif
# if (defined RTE_CONST_NTC_Num_PerDiag_ADCCrossChkFlt) || (defined NTC_Num_PerDiag_ADCCrossChkFlt)
#  if (!defined RTE_CONST_NTC_Num_PerDiag_ADCCrossChkFlt) || (RTE_CONST_NTC_Num_PerDiag_ADCCrossChkFlt != 52U)
#   error "Enumeration constant <NTC_Num_PerDiag_ADCCrossChkFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PerDiag_ADCCrossChkFlt (52U)
#  define NTC_Num_PerDiag_ADCCrossChkFlt (52U)
# endif
# if (defined RTE_CONST_NTC_Num_PerDiag_IllegalAccess) || (defined NTC_Num_PerDiag_IllegalAccess)
#  if (!defined RTE_CONST_NTC_Num_PerDiag_IllegalAccess) || (RTE_CONST_NTC_Num_PerDiag_IllegalAccess != 53U)
#   error "Enumeration constant <NTC_Num_PerDiag_IllegalAccess> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PerDiag_IllegalAccess (53U)
#  define NTC_Num_PerDiag_IllegalAccess (53U)
# endif
# if (defined RTE_CONST_NTC_Num_PerDiag_DMAFlt) || (defined NTC_Num_PerDiag_DMAFlt)
#  if (!defined RTE_CONST_NTC_Num_PerDiag_DMAFlt) || (RTE_CONST_NTC_Num_PerDiag_DMAFlt != 54U)
#   error "Enumeration constant <NTC_Num_PerDiag_DMAFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PerDiag_DMAFlt (54U)
#  define NTC_Num_PerDiag_DMAFlt (54U)
# endif
# if (defined RTE_CONST_NTC_Num_PerDiag_CPUWarning) || (defined NTC_Num_PerDiag_CPUWarning)
#  if (!defined RTE_CONST_NTC_Num_PerDiag_CPUWarning) || (RTE_CONST_NTC_Num_PerDiag_CPUWarning != 63U)
#   error "Enumeration constant <NTC_Num_PerDiag_CPUWarning> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PerDiag_CPUWarning (63U)
#  define NTC_Num_PerDiag_CPUWarning (63U)
# endif
# if (defined RTE_CONST_NTC_Num_TmpMonFunc) || (defined NTC_Num_TmpMonFunc)
#  if (!defined RTE_CONST_NTC_Num_TmpMonFunc) || (RTE_CONST_NTC_Num_TmpMonFunc != 64U)
#   error "Enumeration constant <NTC_Num_TmpMonFunc> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_TmpMonFunc (64U)
#  define NTC_Num_TmpMonFunc (64U)
# endif
# if (defined RTE_CONST_NTC_Num_TmpMonRunTimeFlt) || (defined NTC_Num_TmpMonRunTimeFlt)
#  if (!defined RTE_CONST_NTC_Num_TmpMonRunTimeFlt) || (RTE_CONST_NTC_Num_TmpMonRunTimeFlt != 65U)
#   error "Enumeration constant <NTC_Num_TmpMonRunTimeFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_TmpMonRunTimeFlt (65U)
#  define NTC_Num_TmpMonRunTimeFlt (65U)
# endif
# if (defined RTE_CONST_NTC_Num_PowerRelayInitFlt) || (defined NTC_Num_PowerRelayInitFlt)
#  if (!defined RTE_CONST_NTC_Num_PowerRelayInitFlt) || (RTE_CONST_NTC_Num_PowerRelayInitFlt != 66U)
#   error "Enumeration constant <NTC_Num_PowerRelayInitFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PowerRelayInitFlt (66U)
#  define NTC_Num_PowerRelayInitFlt (66U)
# endif
# if (defined RTE_CONST_NTC_Num_PrechargeFailure) || (defined NTC_Num_PrechargeFailure)
#  if (!defined RTE_CONST_NTC_Num_PrechargeFailure) || (RTE_CONST_NTC_Num_PrechargeFailure != 67U)
#   error "Enumeration constant <NTC_Num_PrechargeFailure> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PrechargeFailure (67U)
#  define NTC_Num_PrechargeFailure (67U)
# endif
# if (defined RTE_CONST_NTC_Num_PowerRelayRunFlt) || (defined NTC_Num_PowerRelayRunFlt)
#  if (!defined RTE_CONST_NTC_Num_PowerRelayRunFlt) || (RTE_CONST_NTC_Num_PowerRelayRunFlt != 68U)
#   error "Enumeration constant <NTC_Num_PowerRelayRunFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PowerRelayRunFlt (68U)
#  define NTC_Num_PowerRelayRunFlt (68U)
# endif
# if (defined RTE_CONST_NTC_Num_Thermistor) || (defined NTC_Num_Thermistor)
#  if (!defined RTE_CONST_NTC_Num_Thermistor) || (RTE_CONST_NTC_Num_Thermistor != 69U)
#   error "Enumeration constant <NTC_Num_Thermistor> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Thermistor (69U)
#  define NTC_Num_Thermistor (69U)
# endif
# if (defined RTE_CONST_NTC_Num_RefSupplyVltg) || (defined NTC_Num_RefSupplyVltg)
#  if (!defined RTE_CONST_NTC_Num_RefSupplyVltg) || (RTE_CONST_NTC_Num_RefSupplyVltg != 70U)
#   error "Enumeration constant <NTC_Num_RefSupplyVltg> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_RefSupplyVltg (70U)
#  define NTC_Num_RefSupplyVltg (70U)
# endif
# if (defined RTE_CONST_NTC_Num_TrcvrInterfaceFlt) || (defined NTC_Num_TrcvrInterfaceFlt)
#  if (!defined RTE_CONST_NTC_Num_TrcvrInterfaceFlt) || (RTE_CONST_NTC_Num_TrcvrInterfaceFlt != 71U)
#   error "Enumeration constant <NTC_Num_TrcvrInterfaceFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_TrcvrInterfaceFlt (71U)
#  define NTC_Num_TrcvrInterfaceFlt (71U)
# endif
# if (defined RTE_CONST_NTC_Num_CPUSupplyOvervoltage) || (defined NTC_Num_CPUSupplyOvervoltage)
#  if (!defined RTE_CONST_NTC_Num_CPUSupplyOvervoltage) || (RTE_CONST_NTC_Num_CPUSupplyOvervoltage != 72U)
#   error "Enumeration constant <NTC_Num_CPUSupplyOvervoltage> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CPUSupplyOvervoltage (72U)
#  define NTC_Num_CPUSupplyOvervoltage (72U)
# endif
# if (defined RTE_CONST_NTC_Num_GateDrvFlt) || (defined NTC_Num_GateDrvFlt)
#  if (!defined RTE_CONST_NTC_Num_GateDrvFlt) || (RTE_CONST_NTC_Num_GateDrvFlt != 77U)
#   error "Enumeration constant <NTC_Num_GateDrvFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_GateDrvFlt (77U)
#  define NTC_Num_GateDrvFlt (77U)
# endif
# if (defined RTE_CONST_NTC_Num_OnStateSingleFET) || (defined NTC_Num_OnStateSingleFET)
#  if (!defined RTE_CONST_NTC_Num_OnStateSingleFET) || (RTE_CONST_NTC_Num_OnStateSingleFET != 78U)
#   error "Enumeration constant <NTC_Num_OnStateSingleFET> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_OnStateSingleFET (78U)
#  define NTC_Num_OnStateSingleFET (78U)
# endif
# if (defined RTE_CONST_NTC_Num_OnStateMultiFET) || (defined NTC_Num_OnStateMultiFET)
#  if (!defined RTE_CONST_NTC_Num_OnStateMultiFET) || (RTE_CONST_NTC_Num_OnStateMultiFET != 79U)
#   error "Enumeration constant <NTC_Num_OnStateMultiFET> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_OnStateMultiFET (79U)
#  define NTC_Num_OnStateMultiFET (79U)
# endif
# if (defined RTE_CONST_NTC_Num_PhaseVoltageVerf) || (defined NTC_Num_PhaseVoltageVerf)
#  if (!defined RTE_CONST_NTC_Num_PhaseVoltageVerf) || (RTE_CONST_NTC_Num_PhaseVoltageVerf != 80U)
#   error "Enumeration constant <NTC_Num_PhaseVoltageVerf> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PhaseVoltageVerf (80U)
#  define NTC_Num_PhaseVoltageVerf (80U)
# endif
# if (defined RTE_CONST_NTC_Num_PhaseDscnt) || (defined NTC_Num_PhaseDscnt)
#  if (!defined RTE_CONST_NTC_Num_PhaseDscnt) || (RTE_CONST_NTC_Num_PhaseDscnt != 81U)
#   error "Enumeration constant <NTC_Num_PhaseDscnt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PhaseDscnt (81U)
#  define NTC_Num_PhaseDscnt (81U)
# endif
# if (defined RTE_CONST_NTC_Num_DigPhaseVoltageVerf) || (defined NTC_Num_DigPhaseVoltageVerf)
#  if (!defined RTE_CONST_NTC_Num_DigPhaseVoltageVerf) || (RTE_CONST_NTC_Num_DigPhaseVoltageVerf != 82U)
#   error "Enumeration constant <NTC_Num_DigPhaseVoltageVerf> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DigPhaseVoltageVerf (82U)
#  define NTC_Num_DigPhaseVoltageVerf (82U)
# endif
# if (defined RTE_CONST_NTC_Num_PhaseDscntFailedDisable) || (defined NTC_Num_PhaseDscntFailedDisable)
#  if (!defined RTE_CONST_NTC_Num_PhaseDscntFailedDisable) || (RTE_CONST_NTC_Num_PhaseDscntFailedDisable != 83U)
#   error "Enumeration constant <NTC_Num_PhaseDscntFailedDisable> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PhaseDscntFailedDisable (83U)
#  define NTC_Num_PhaseDscntFailedDisable (83U)
# endif
# if (defined RTE_CONST_NTC_Num_CurrentMeas1) || (defined NTC_Num_CurrentMeas1)
#  if (!defined RTE_CONST_NTC_Num_CurrentMeas1) || (RTE_CONST_NTC_Num_CurrentMeas1 != 84U)
#   error "Enumeration constant <NTC_Num_CurrentMeas1> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CurrentMeas1 (84U)
#  define NTC_Num_CurrentMeas1 (84U)
# endif
# if (defined RTE_CONST_NTC_Num_CurrentMeas2) || (defined NTC_Num_CurrentMeas2)
#  if (!defined RTE_CONST_NTC_Num_CurrentMeas2) || (RTE_CONST_NTC_Num_CurrentMeas2 != 85U)
#   error "Enumeration constant <NTC_Num_CurrentMeas2> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CurrentMeas2 (85U)
#  define NTC_Num_CurrentMeas2 (85U)
# endif
# if (defined RTE_CONST_NTC_Num_CurrentMeasCrossChk) || (defined NTC_Num_CurrentMeasCrossChk)
#  if (!defined RTE_CONST_NTC_Num_CurrentMeasCrossChk) || (RTE_CONST_NTC_Num_CurrentMeasCrossChk != 86U)
#   error "Enumeration constant <NTC_Num_CurrentMeasCrossChk> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CurrentMeasCrossChk (86U)
#  define NTC_Num_CurrentMeasCrossChk (86U)
# endif
# if (defined RTE_CONST_NTC_Num_PDSupplyOverVoltage) || (defined NTC_Num_PDSupplyOverVoltage)
#  if (!defined RTE_CONST_NTC_Num_PDSupplyOverVoltage) || (RTE_CONST_NTC_Num_PDSupplyOverVoltage != 87U)
#   error "Enumeration constant <NTC_Num_PDSupplyOverVoltage> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PDSupplyOverVoltage (87U)
#  define NTC_Num_PDSupplyOverVoltage (87U)
# endif
# if (defined RTE_CONST_NTC_Num_ChargePumpUnderVoltage) || (defined NTC_Num_ChargePumpUnderVoltage)
#  if (!defined RTE_CONST_NTC_Num_ChargePumpUnderVoltage) || (RTE_CONST_NTC_Num_ChargePumpUnderVoltage != 88U)
#   error "Enumeration constant <NTC_Num_ChargePumpUnderVoltage> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_ChargePumpUnderVoltage (88U)
#  define NTC_Num_ChargePumpUnderVoltage (88U)
# endif
# if (defined RTE_CONST_NTC_Num_HwTrqSensor) || (defined NTC_Num_HwTrqSensor)
#  if (!defined RTE_CONST_NTC_Num_HwTrqSensor) || (RTE_CONST_NTC_Num_HwTrqSensor != 96U)
#   error "Enumeration constant <NTC_Num_HwTrqSensor> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_HwTrqSensor (96U)
#  define NTC_Num_HwTrqSensor (96U)
# endif
# if (defined RTE_CONST_NTC_Num_AnaVsDigHwTrq) || (defined NTC_Num_AnaVsDigHwTrq)
#  if (!defined RTE_CONST_NTC_Num_AnaVsDigHwTrq) || (RTE_CONST_NTC_Num_AnaVsDigHwTrq != 97U)
#   error "Enumeration constant <NTC_Num_AnaVsDigHwTrq> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_AnaVsDigHwTrq (97U)
#  define NTC_Num_AnaVsDigHwTrq (97U)
# endif
# if (defined RTE_CONST_NTC_Num_TrqSensorRecoveryFlt) || (defined NTC_Num_TrqSensorRecoveryFlt)
#  if (!defined RTE_CONST_NTC_Num_TrqSensorRecoveryFlt) || (RTE_CONST_NTC_Num_TrqSensorRecoveryFlt != 98U)
#   error "Enumeration constant <NTC_Num_TrqSensorRecoveryFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_TrqSensorRecoveryFlt (98U)
#  define NTC_Num_TrqSensorRecoveryFlt (98U)
# endif
# if (defined RTE_CONST_NTC_Num_TrqSensorScaleInvalid) || (defined NTC_Num_TrqSensorScaleInvalid)
#  if (!defined RTE_CONST_NTC_Num_TrqSensorScaleInvalid) || (RTE_CONST_NTC_Num_TrqSensorScaleInvalid != 100U)
#   error "Enumeration constant <NTC_Num_TrqSensorScaleInvalid> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_TrqSensorScaleInvalid (100U)
#  define NTC_Num_TrqSensorScaleInvalid (100U)
# endif
# if (defined RTE_CONST_NTC_Num_T1vsT2) || (defined NTC_Num_T1vsT2)
#  if (!defined RTE_CONST_NTC_Num_T1vsT2) || (RTE_CONST_NTC_Num_T1vsT2 != 101U)
#   error "Enumeration constant <NTC_Num_T1vsT2> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_T1vsT2 (101U)
#  define NTC_Num_T1vsT2 (101U)
# endif
# if (defined RTE_CONST_NTC_Num_T1OutofRange) || (defined NTC_Num_T1OutofRange)
#  if (!defined RTE_CONST_NTC_Num_T1OutofRange) || (RTE_CONST_NTC_Num_T1OutofRange != 102U)
#   error "Enumeration constant <NTC_Num_T1OutofRange> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_T1OutofRange (102U)
#  define NTC_Num_T1OutofRange (102U)
# endif
# if (defined RTE_CONST_NTC_Num_T2OutofRange) || (defined NTC_Num_T2OutofRange)
#  if (!defined RTE_CONST_NTC_Num_T2OutofRange) || (RTE_CONST_NTC_Num_T2OutofRange != 103U)
#   error "Enumeration constant <NTC_Num_T2OutofRange> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_T2OutofRange (103U)
#  define NTC_Num_T2OutofRange (103U)
# endif
# if (defined RTE_CONST_NTC_Num_DigT1vsT2) || (defined NTC_Num_DigT1vsT2)
#  if (!defined RTE_CONST_NTC_Num_DigT1vsT2) || (RTE_CONST_NTC_Num_DigT1vsT2 != 104U)
#   error "Enumeration constant <NTC_Num_DigT1vsT2> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DigT1vsT2 (104U)
#  define NTC_Num_DigT1vsT2 (104U)
# endif
# if (defined RTE_CONST_NTC_Num_DigT1OutofRange) || (defined NTC_Num_DigT1OutofRange)
#  if (!defined RTE_CONST_NTC_Num_DigT1OutofRange) || (RTE_CONST_NTC_Num_DigT1OutofRange != 105U)
#   error "Enumeration constant <NTC_Num_DigT1OutofRange> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DigT1OutofRange (105U)
#  define NTC_Num_DigT1OutofRange (105U)
# endif
# if (defined RTE_CONST_NTC_Num_DigT2OutofRange) || (defined NTC_Num_DigT2OutofRange)
#  if (!defined RTE_CONST_NTC_Num_DigT2OutofRange) || (RTE_CONST_NTC_Num_DigT2OutofRange != 106U)
#   error "Enumeration constant <NTC_Num_DigT2OutofRange> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DigT2OutofRange (106U)
#  define NTC_Num_DigT2OutofRange (106U)
# endif
# if (defined RTE_CONST_NTC_Num_RedT1vsT2) || (defined NTC_Num_RedT1vsT2)
#  if (!defined RTE_CONST_NTC_Num_RedT1vsT2) || (RTE_CONST_NTC_Num_RedT1vsT2 != 107U)
#   error "Enumeration constant <NTC_Num_RedT1vsT2> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_RedT1vsT2 (107U)
#  define NTC_Num_RedT1vsT2 (107U)
# endif
# if (defined RTE_CONST_NTC_Num_HWASensorRel) || (defined NTC_Num_HWASensorRel)
#  if (!defined RTE_CONST_NTC_Num_HWASensorRel) || (RTE_CONST_NTC_Num_HWASensorRel != 110U)
#   error "Enumeration constant <NTC_Num_HWASensorRel> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_HWASensorRel (110U)
#  define NTC_Num_HWASensorRel (110U)
# endif
# if (defined RTE_CONST_NTC_Num_HWASensorAbs) || (defined NTC_Num_HWASensorAbs)
#  if (!defined RTE_CONST_NTC_Num_HWASensorAbs) || (RTE_CONST_NTC_Num_HWASensorAbs != 111U)
#   error "Enumeration constant <NTC_Num_HWASensorAbs> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_HWASensorAbs (111U)
#  define NTC_Num_HWASensorAbs (111U)
# endif
# if (defined RTE_CONST_NTC_Num_PriMSB_SinCosCorr) || (defined NTC_Num_PriMSB_SinCosCorr)
#  if (!defined RTE_CONST_NTC_Num_PriMSB_SinCosCorr) || (RTE_CONST_NTC_Num_PriMSB_SinCosCorr != 112U)
#   error "Enumeration constant <NTC_Num_PriMSB_SinCosCorr> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PriMSB_SinCosCorr (112U)
#  define NTC_Num_PriMSB_SinCosCorr (112U)
# endif
# if (defined RTE_CONST_NTC_Num_SecMSB_SinCosCorr) || (defined NTC_Num_SecMSB_SinCosCorr)
#  if (!defined RTE_CONST_NTC_Num_SecMSB_SinCosCorr) || (RTE_CONST_NTC_Num_SecMSB_SinCosCorr != 113U)
#   error "Enumeration constant <NTC_Num_SecMSB_SinCosCorr> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_SecMSB_SinCosCorr (113U)
#  define NTC_Num_SecMSB_SinCosCorr (113U)
# endif
# if (defined RTE_CONST_NTC_Num_PriVsSec_SinCosCorr) || (defined NTC_Num_PriVsSec_SinCosCorr)
#  if (!defined RTE_CONST_NTC_Num_PriVsSec_SinCosCorr) || (RTE_CONST_NTC_Num_PriVsSec_SinCosCorr != 114U)
#   error "Enumeration constant <NTC_Num_PriVsSec_SinCosCorr> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PriVsSec_SinCosCorr (114U)
#  define NTC_Num_PriVsSec_SinCosCorr (114U)
# endif
# if (defined RTE_CONST_NTC_Num_DigMSBFlt) || (defined NTC_Num_DigMSBFlt)
#  if (!defined RTE_CONST_NTC_Num_DigMSBFlt) || (RTE_CONST_NTC_Num_DigMSBFlt != 115U)
#   error "Enumeration constant <NTC_Num_DigMSBFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DigMSBFlt (115U)
#  define NTC_Num_DigMSBFlt (115U)
# endif
# if (defined RTE_CONST_NTC_Num_MtrVelFlt) || (defined NTC_Num_MtrVelFlt)
#  if (!defined RTE_CONST_NTC_Num_MtrVelFlt) || (RTE_CONST_NTC_Num_MtrVelFlt != 116U)
#   error "Enumeration constant <NTC_Num_MtrVelFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_MtrVelFlt (116U)
#  define NTC_Num_MtrVelFlt (116U)
# endif
# if (defined RTE_CONST_NTC_Num_HWAtoMtrAngleCorr) || (defined NTC_Num_HWAtoMtrAngleCorr)
#  if (!defined RTE_CONST_NTC_Num_HWAtoMtrAngleCorr) || (RTE_CONST_NTC_Num_HWAtoMtrAngleCorr != 117U)
#   error "Enumeration constant <NTC_Num_HWAtoMtrAngleCorr> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_HWAtoMtrAngleCorr (117U)
#  define NTC_Num_HWAtoMtrAngleCorr (117U)
# endif
# if (defined RTE_CONST_NTC_Num_TurnCntr_PosLoss) || (defined NTC_Num_TurnCntr_PosLoss)
#  if (!defined RTE_CONST_NTC_Num_TurnCntr_PosLoss) || (RTE_CONST_NTC_Num_TurnCntr_PosLoss != 128U)
#   error "Enumeration constant <NTC_Num_TurnCntr_PosLoss> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_TurnCntr_PosLoss (128U)
#  define NTC_Num_TurnCntr_PosLoss (128U)
# endif
# if (defined RTE_CONST_NTC_Num_TurnCntr_MicroProcFlt) || (defined NTC_Num_TurnCntr_MicroProcFlt)
#  if (!defined RTE_CONST_NTC_Num_TurnCntr_MicroProcFlt) || (RTE_CONST_NTC_Num_TurnCntr_MicroProcFlt != 129U)
#   error "Enumeration constant <NTC_Num_TurnCntr_MicroProcFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_TurnCntr_MicroProcFlt (129U)
#  define NTC_Num_TurnCntr_MicroProcFlt (129U)
# endif
# if (defined RTE_CONST_NTC_Num_TurnCntr_SensorPosFlt) || (defined NTC_Num_TurnCntr_SensorPosFlt)
#  if (!defined RTE_CONST_NTC_Num_TurnCntr_SensorPosFlt) || (RTE_CONST_NTC_Num_TurnCntr_SensorPosFlt != 130U)
#   error "Enumeration constant <NTC_Num_TurnCntr_SensorPosFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_TurnCntr_SensorPosFlt (130U)
#  define NTC_Num_TurnCntr_SensorPosFlt (130U)
# endif
# if (defined RTE_CONST_NTC_Num_TurnCntr_SpiComFlt) || (defined NTC_Num_TurnCntr_SpiComFlt)
#  if (!defined RTE_CONST_NTC_Num_TurnCntr_SpiComFlt) || (RTE_CONST_NTC_Num_TurnCntr_SpiComFlt != 131U)
#   error "Enumeration constant <NTC_Num_TurnCntr_SpiComFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_TurnCntr_SpiComFlt (131U)
#  define NTC_Num_TurnCntr_SpiComFlt (131U)
# endif
# if (defined RTE_CONST_NTC_Num_TurnCntr_HighQuiescCur) || (defined NTC_Num_TurnCntr_HighQuiescCur)
#  if (!defined RTE_CONST_NTC_Num_TurnCntr_HighQuiescCur) || (RTE_CONST_NTC_Num_TurnCntr_HighQuiescCur != 132U)
#   error "Enumeration constant <NTC_Num_TurnCntr_HighQuiescCur> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_TurnCntr_HighQuiescCur (132U)
#  define NTC_Num_TurnCntr_HighQuiescCur (132U)
# endif
# if (defined RTE_CONST_NTC_Num_TurnCntr_MainResets) || (defined NTC_Num_TurnCntr_MainResets)
#  if (!defined RTE_CONST_NTC_Num_TurnCntr_MainResets) || (RTE_CONST_NTC_Num_TurnCntr_MainResets != 133U)
#   error "Enumeration constant <NTC_Num_TurnCntr_MainResets> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_TurnCntr_MainResets (133U)
#  define NTC_Num_TurnCntr_MainResets (133U)
# endif
# if (defined RTE_CONST_NTC_Num_KinematicIntDiag) || (defined NTC_Num_KinematicIntDiag)
#  if (!defined RTE_CONST_NTC_Num_KinematicIntDiag) || (RTE_CONST_NTC_Num_KinematicIntDiag != 144U)
#   error "Enumeration constant <NTC_Num_KinematicIntDiag> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_KinematicIntDiag (144U)
#  define NTC_Num_KinematicIntDiag (144U)
# endif
# if (defined RTE_CONST_NTC_Num_HighFriction) || (defined NTC_Num_HighFriction)
#  if (!defined RTE_CONST_NTC_Num_HighFriction) || (RTE_CONST_NTC_Num_HighFriction != 145U)
#   error "Enumeration constant <NTC_Num_HighFriction> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_HighFriction (145U)
#  define NTC_Num_HighFriction (145U)
# endif
# if (defined RTE_CONST_NTC_Num_DutyCycleExceeded) || (defined NTC_Num_DutyCycleExceeded)
#  if (!defined RTE_CONST_NTC_Num_DutyCycleExceeded) || (RTE_CONST_NTC_Num_DutyCycleExceeded != 148U)
#   error "Enumeration constant <NTC_Num_DutyCycleExceeded> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DutyCycleExceeded (148U)
#  define NTC_Num_DutyCycleExceeded (148U)
# endif
# if (defined RTE_CONST_NTC_Num_AbsTempThermLimit) || (defined NTC_Num_AbsTempThermLimit)
#  if (!defined RTE_CONST_NTC_Num_AbsTempThermLimit) || (RTE_CONST_NTC_Num_AbsTempThermLimit != 149U)
#   error "Enumeration constant <NTC_Num_AbsTempThermLimit> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_AbsTempThermLimit (149U)
#  define NTC_Num_AbsTempThermLimit (149U)
# endif
# if (defined RTE_CONST_NTC_Num_LatchActive) || (defined NTC_Num_LatchActive)
#  if (!defined RTE_CONST_NTC_Num_LatchActive) || (RTE_CONST_NTC_Num_LatchActive != 160U)
#   error "Enumeration constant <NTC_Num_LatchActive> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_LatchActive (160U)
#  define NTC_Num_LatchActive (160U)
# endif
# if (defined RTE_CONST_NTC_Num_OpTrqVsHwTrq) || (defined NTC_Num_OpTrqVsHwTrq)
#  if (!defined RTE_CONST_NTC_Num_OpTrqVsHwTrq) || (RTE_CONST_NTC_Num_OpTrqVsHwTrq != 168U)
#   error "Enumeration constant <NTC_Num_OpTrqVsHwTrq> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_OpTrqVsHwTrq (168U)
#  define NTC_Num_OpTrqVsHwTrq (168U)
# endif
# if (defined RTE_CONST_NTC_Num_CurrentReas) || (defined NTC_Num_CurrentReas)
#  if (!defined RTE_CONST_NTC_Num_CurrentReas) || (RTE_CONST_NTC_Num_CurrentReas != 169U)
#   error "Enumeration constant <NTC_Num_CurrentReas> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CurrentReas (169U)
#  define NTC_Num_CurrentReas (169U)
# endif
# if (defined RTE_CONST_NTC_Num_OpVoltage) || (defined NTC_Num_OpVoltage)
#  if (!defined RTE_CONST_NTC_Num_OpVoltage) || (RTE_CONST_NTC_Num_OpVoltage != 176U)
#   error "Enumeration constant <NTC_Num_OpVoltage> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_OpVoltage (176U)
#  define NTC_Num_OpVoltage (176U)
# endif
# if (defined RTE_CONST_NTC_Num_ExVoltageLow) || (defined NTC_Num_ExVoltageLow)
#  if (!defined RTE_CONST_NTC_Num_ExVoltageLow) || (RTE_CONST_NTC_Num_ExVoltageLow != 177U)
#   error "Enumeration constant <NTC_Num_ExVoltageLow> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_ExVoltageLow (177U)
#  define NTC_Num_ExVoltageLow (177U)
# endif
# if (defined RTE_CONST_NTC_Num_ReducedAsstLowVoltage) || (defined NTC_Num_ReducedAsstLowVoltage)
#  if (!defined RTE_CONST_NTC_Num_ReducedAsstLowVoltage) || (RTE_CONST_NTC_Num_ReducedAsstLowVoltage != 178U)
#   error "Enumeration constant <NTC_Num_ReducedAsstLowVoltage> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_ReducedAsstLowVoltage (178U)
#  define NTC_Num_ReducedAsstLowVoltage (178U)
# endif
# if (defined RTE_CONST_NTC_Num_ExVoltageHigh) || (defined NTC_Num_ExVoltageHigh)
#  if (!defined RTE_CONST_NTC_Num_ExVoltageHigh) || (RTE_CONST_NTC_Num_ExVoltageHigh != 180U)
#   error "Enumeration constant <NTC_Num_ExVoltageHigh> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_ExVoltageHigh (180U)
#  define NTC_Num_ExVoltageHigh (180U)
# endif
# if (defined RTE_CONST_NTC_Num_OpVoltageOvrMax) || (defined NTC_Num_OpVoltageOvrMax)
#  if (!defined RTE_CONST_NTC_Num_OpVoltageOvrMax) || (RTE_CONST_NTC_Num_OpVoltageOvrMax != 181U)
#   error "Enumeration constant <NTC_Num_OpVoltageOvrMax> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_OpVoltageOvrMax (181U)
#  define NTC_Num_OpVoltageOvrMax (181U)
# endif
# if (defined RTE_CONST_NTC_Num_IgnConfDiag) || (defined NTC_Num_IgnConfDiag)
#  if (!defined RTE_CONST_NTC_Num_IgnConfDiag) || (RTE_CONST_NTC_Num_IgnConfDiag != 184U)
#   error "Enumeration constant <NTC_Num_IgnConfDiag> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_IgnConfDiag (184U)
#  define NTC_Num_IgnConfDiag (184U)
# endif
# if (defined RTE_CONST_NTC_Num_TurnCntr_LowBattery) || (defined NTC_Num_TurnCntr_LowBattery)
#  if (!defined RTE_CONST_NTC_Num_TurnCntr_LowBattery) || (RTE_CONST_NTC_Num_TurnCntr_LowBattery != 185U)
#   error "Enumeration constant <NTC_Num_TurnCntr_LowBattery> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_TurnCntr_LowBattery (185U)
#  define NTC_Num_TurnCntr_LowBattery (185U)
# endif
# if (defined RTE_CONST_NTC_Num_EEPROMCloseFailed) || (defined NTC_Num_EEPROMCloseFailed)
#  if (!defined RTE_CONST_NTC_Num_EEPROMCloseFailed) || (RTE_CONST_NTC_Num_EEPROMCloseFailed != 191U)
#   error "Enumeration constant <NTC_Num_EEPROMCloseFailed> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_EEPROMCloseFailed (191U)
#  define NTC_Num_EEPROMCloseFailed (191U)
# endif
# if (defined RTE_CONST_NTC_Num_SigPath1CrossChk) || (defined NTC_Num_SigPath1CrossChk)
#  if (!defined RTE_CONST_NTC_Num_SigPath1CrossChk) || (RTE_CONST_NTC_Num_SigPath1CrossChk != 192U)
#   error "Enumeration constant <NTC_Num_SigPath1CrossChk> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_SigPath1CrossChk (192U)
#  define NTC_Num_SigPath1CrossChk (192U)
# endif
# if (defined RTE_CONST_NTC_Num_SigPath2CrossChk) || (defined NTC_Num_SigPath2CrossChk)
#  if (!defined RTE_CONST_NTC_Num_SigPath2CrossChk) || (RTE_CONST_NTC_Num_SigPath2CrossChk != 193U)
#   error "Enumeration constant <NTC_Num_SigPath2CrossChk> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_SigPath2CrossChk (193U)
#  define NTC_Num_SigPath2CrossChk (193U)
# endif
# if (defined RTE_CONST_NTC_Num_SigPath3CrossChk) || (defined NTC_Num_SigPath3CrossChk)
#  if (!defined RTE_CONST_NTC_Num_SigPath3CrossChk) || (RTE_CONST_NTC_Num_SigPath3CrossChk != 194U)
#   error "Enumeration constant <NTC_Num_SigPath3CrossChk> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_SigPath3CrossChk (194U)
#  define NTC_Num_SigPath3CrossChk (194U)
# endif
# if (defined RTE_CONST_NTC_Num_SigPath4CrossChk) || (defined NTC_Num_SigPath4CrossChk)
#  if (!defined RTE_CONST_NTC_Num_SigPath4CrossChk) || (RTE_CONST_NTC_Num_SigPath4CrossChk != 195U)
#   error "Enumeration constant <NTC_Num_SigPath4CrossChk> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_SigPath4CrossChk (195U)
#  define NTC_Num_SigPath4CrossChk (195U)
# endif
# if (defined RTE_CONST_NTC_Num_SigPath5CrossChk) || (defined NTC_Num_SigPath5CrossChk)
#  if (!defined RTE_CONST_NTC_Num_SigPath5CrossChk) || (RTE_CONST_NTC_Num_SigPath5CrossChk != 196U)
#   error "Enumeration constant <NTC_Num_SigPath5CrossChk> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_SigPath5CrossChk (196U)
#  define NTC_Num_SigPath5CrossChk (196U)
# endif
# if (defined RTE_CONST_NTC_Num_DampingFWReached) || (defined NTC_Num_DampingFWReached)
#  if (!defined RTE_CONST_NTC_Num_DampingFWReached) || (RTE_CONST_NTC_Num_DampingFWReached != 197U)
#   error "Enumeration constant <NTC_Num_DampingFWReached> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DampingFWReached (197U)
#  define NTC_Num_DampingFWReached (197U)
# endif
# if (defined RTE_CONST_NTC_Num_AssistFWReached) || (defined NTC_Num_AssistFWReached)
#  if (!defined RTE_CONST_NTC_Num_AssistFWReached) || (RTE_CONST_NTC_Num_AssistFWReached != 198U)
#   error "Enumeration constant <NTC_Num_AssistFWReached> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_AssistFWReached (198U)
#  define NTC_Num_AssistFWReached (198U)
# endif
# if (defined RTE_CONST_NTC_Num_ReturnFWReached) || (defined NTC_Num_ReturnFWReached)
#  if (!defined RTE_CONST_NTC_Num_ReturnFWReached) || (RTE_CONST_NTC_Num_ReturnFWReached != 199U)
#   error "Enumeration constant <NTC_Num_ReturnFWReached> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_ReturnFWReached (199U)
#  define NTC_Num_ReturnFWReached (199U)
# endif
# if (defined RTE_CONST_NTC_Num_DampingFWFltMode) || (defined NTC_Num_DampingFWFltMode)
#  if (!defined RTE_CONST_NTC_Num_DampingFWFltMode) || (RTE_CONST_NTC_Num_DampingFWFltMode != 200U)
#   error "Enumeration constant <NTC_Num_DampingFWFltMode> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DampingFWFltMode (200U)
#  define NTC_Num_DampingFWFltMode (200U)
# endif
# if (defined RTE_CONST_NTC_Num_AssistFWFltMode) || (defined NTC_Num_AssistFWFltMode)
#  if (!defined RTE_CONST_NTC_Num_AssistFWFltMode) || (RTE_CONST_NTC_Num_AssistFWFltMode != 201U)
#   error "Enumeration constant <NTC_Num_AssistFWFltMode> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_AssistFWFltMode (201U)
#  define NTC_Num_AssistFWFltMode (201U)
# endif
# if (defined RTE_CONST_NTC_Num_VBICFltMode) || (defined NTC_Num_VBICFltMode)
#  if (!defined RTE_CONST_NTC_Num_VBICFltMode) || (RTE_CONST_NTC_Num_VBICFltMode != 202U)
#   error "Enumeration constant <NTC_Num_VBICFltMode> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_VBICFltMode (202U)
#  define NTC_Num_VBICFltMode (202U)
# endif
# if (defined RTE_CONST_NTC_Num_StaMdsSysC) || (defined NTC_Num_StaMdsSysC)
#  if (!defined RTE_CONST_NTC_Num_StaMdsSysC) || (RTE_CONST_NTC_Num_StaMdsSysC != 203U)
#   error "Enumeration constant <NTC_Num_StaMdsSysC> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_StaMdsSysC (203U)
#  define NTC_Num_StaMdsSysC (203U)
# endif
# if (defined RTE_CONST_NTC_NUM_SysFailureForRotVel) || (defined NTC_NUM_SysFailureForRotVel)
#  if (!defined RTE_CONST_NTC_NUM_SysFailureForRotVel) || (RTE_CONST_NTC_NUM_SysFailureForRotVel != 204U)
#   error "Enumeration constant <NTC_NUM_SysFailureForRotVel> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_NUM_SysFailureForRotVel (204U)
#  define NTC_NUM_SysFailureForRotVel (204U)
# endif
# if (defined RTE_CONST_NTC_NUM_SysFailForRedntRotVel) || (defined NTC_NUM_SysFailForRedntRotVel)
#  if (!defined RTE_CONST_NTC_NUM_SysFailForRedntRotVel) || (RTE_CONST_NTC_NUM_SysFailForRedntRotVel != 205U)
#   error "Enumeration constant <NTC_NUM_SysFailForRedntRotVel> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_NUM_SysFailForRedntRotVel (205U)
#  define NTC_NUM_SysFailForRedntRotVel (205U)
# endif
# if (defined RTE_CONST_NTC_Num_SysFailureForTrqSnsr) || (defined NTC_Num_SysFailureForTrqSnsr)
#  if (!defined RTE_CONST_NTC_Num_SysFailureForTrqSnsr) || (RTE_CONST_NTC_Num_SysFailureForTrqSnsr != 206U)
#   error "Enumeration constant <NTC_Num_SysFailureForTrqSnsr> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_SysFailureForTrqSnsr (206U)
#  define NTC_Num_SysFailureForTrqSnsr (206U)
# endif
# if (defined RTE_CONST_NTC_Num_SysFailureForRedTrqSnsr) || (defined NTC_Num_SysFailureForRedTrqSnsr)
#  if (!defined RTE_CONST_NTC_Num_SysFailureForRedTrqSnsr) || (RTE_CONST_NTC_Num_SysFailureForRedTrqSnsr != 207U)
#   error "Enumeration constant <NTC_Num_SysFailureForRedTrqSnsr> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_SysFailureForRedTrqSnsr (207U)
#  define NTC_Num_SysFailureForRedTrqSnsr (207U)
# endif
# if (defined RTE_CONST_NTC_NUM_SysFailureForCtrlVolt) || (defined NTC_NUM_SysFailureForCtrlVolt)
#  if (!defined RTE_CONST_NTC_NUM_SysFailureForCtrlVolt) || (RTE_CONST_NTC_NUM_SysFailureForCtrlVolt != 209U)
#   error "Enumeration constant <NTC_NUM_SysFailureForCtrlVolt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_NUM_SysFailureForCtrlVolt (209U)
#  define NTC_NUM_SysFailureForCtrlVolt (209U)
# endif
# if (defined RTE_CONST_NTC_Num_GlblSgnlOvrwrtDet) || (defined NTC_Num_GlblSgnlOvrwrtDet)
#  if (!defined RTE_CONST_NTC_Num_GlblSgnlOvrwrtDet) || (RTE_CONST_NTC_Num_GlblSgnlOvrwrtDet != 223U)
#   error "Enumeration constant <NTC_Num_GlblSgnlOvrwrtDet> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_GlblSgnlOvrwrtDet (223U)
#  define NTC_Num_GlblSgnlOvrwrtDet (223U)
# endif
# if (defined RTE_CONST_NTC_Num_WhlImbAlgFlt) || (defined NTC_Num_WhlImbAlgFlt)
#  if (!defined RTE_CONST_NTC_Num_WhlImbAlgFlt) || (RTE_CONST_NTC_Num_WhlImbAlgFlt != 224U)
#   error "Enumeration constant <NTC_Num_WhlImbAlgFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_WhlImbAlgFlt (224U)
#  define NTC_Num_WhlImbAlgFlt (224U)
# endif
# if (defined RTE_CONST_NTC_Num_PAHwVelFlt) || (defined NTC_Num_PAHwVelFlt)
#  if (!defined RTE_CONST_NTC_Num_PAHwVelFlt) || (RTE_CONST_NTC_Num_PAHwVelFlt != 225U)
#   error "Enumeration constant <NTC_Num_PAHwVelFlt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PAHwVelFlt (225U)
#  define NTC_Num_PAHwVelFlt (225U)
# endif
# if (defined RTE_CONST_NTC_Num_AngleCntrlFltC) || (defined NTC_Num_AngleCntrlFltC)
#  if (!defined RTE_CONST_NTC_Num_AngleCntrlFltC) || (RTE_CONST_NTC_Num_AngleCntrlFltC != 226U)
#   error "Enumeration constant <NTC_Num_AngleCntrlFltC> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_AngleCntrlFltC (226U)
#  define NTC_Num_AngleCntrlFltC (226U)
# endif
# if (defined RTE_CONST_NTC_Num_AngleCntrlFltD) || (defined NTC_Num_AngleCntrlFltD)
#  if (!defined RTE_CONST_NTC_Num_AngleCntrlFltD) || (RTE_CONST_NTC_Num_AngleCntrlFltD != 227U)
#   error "Enumeration constant <NTC_Num_AngleCntrlFltD> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_AngleCntrlFltD (227U)
#  define NTC_Num_AngleCntrlFltD (227U)
# endif
# if (defined RTE_CONST_NTC_Num_AngleCntrlFltFG) || (defined NTC_Num_AngleCntrlFltFG)
#  if (!defined RTE_CONST_NTC_Num_AngleCntrlFltFG) || (RTE_CONST_NTC_Num_AngleCntrlFltFG != 228U)
#   error "Enumeration constant <NTC_Num_AngleCntrlFltFG> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_AngleCntrlFltFG (228U)
#  define NTC_Num_AngleCntrlFltFG (228U)
# endif
# if (defined RTE_CONST_NTC_Num_BusOffCh1) || (defined NTC_Num_BusOffCh1)
#  if (!defined RTE_CONST_NTC_Num_BusOffCh1) || (RTE_CONST_NTC_Num_BusOffCh1 != 256U)
#   error "Enumeration constant <NTC_Num_BusOffCh1> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_BusOffCh1 (256U)
#  define NTC_Num_BusOffCh1 (256U)
# endif
# if (defined RTE_CONST_NTC_Num_BusOffCh1NodeMute) || (defined NTC_Num_BusOffCh1NodeMute)
#  if (!defined RTE_CONST_NTC_Num_BusOffCh1NodeMute) || (RTE_CONST_NTC_Num_BusOffCh1NodeMute != 257U)
#   error "Enumeration constant <NTC_Num_BusOffCh1NodeMute> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_BusOffCh1NodeMute (257U)
#  define NTC_Num_BusOffCh1NodeMute (257U)
# endif
# if (defined RTE_CONST_NTC_Num_Node1AAbsent) || (defined NTC_Num_Node1AAbsent)
#  if (!defined RTE_CONST_NTC_Num_Node1AAbsent) || (RTE_CONST_NTC_Num_Node1AAbsent != 258U)
#   error "Enumeration constant <NTC_Num_Node1AAbsent> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node1AAbsent (258U)
#  define NTC_Num_Node1AAbsent (258U)
# endif
# if (defined RTE_CONST_NTC_Num_Node1AFaulty) || (defined NTC_Num_Node1AFaulty)
#  if (!defined RTE_CONST_NTC_Num_Node1AFaulty) || (RTE_CONST_NTC_Num_Node1AFaulty != 259U)
#   error "Enumeration constant <NTC_Num_Node1AFaulty> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node1AFaulty (259U)
#  define NTC_Num_Node1AFaulty (259U)
# endif
# if (defined RTE_CONST_NTC_Num_Node1BAbsent) || (defined NTC_Num_Node1BAbsent)
#  if (!defined RTE_CONST_NTC_Num_Node1BAbsent) || (RTE_CONST_NTC_Num_Node1BAbsent != 260U)
#   error "Enumeration constant <NTC_Num_Node1BAbsent> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node1BAbsent (260U)
#  define NTC_Num_Node1BAbsent (260U)
# endif
# if (defined RTE_CONST_NTC_Num_Node1BFaulty) || (defined NTC_Num_Node1BFaulty)
#  if (!defined RTE_CONST_NTC_Num_Node1BFaulty) || (RTE_CONST_NTC_Num_Node1BFaulty != 261U)
#   error "Enumeration constant <NTC_Num_Node1BFaulty> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node1BFaulty (261U)
#  define NTC_Num_Node1BFaulty (261U)
# endif
# if (defined RTE_CONST_NTC_Num_Node1CAbsent) || (defined NTC_Num_Node1CAbsent)
#  if (!defined RTE_CONST_NTC_Num_Node1CAbsent) || (RTE_CONST_NTC_Num_Node1CAbsent != 262U)
#   error "Enumeration constant <NTC_Num_Node1CAbsent> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node1CAbsent (262U)
#  define NTC_Num_Node1CAbsent (262U)
# endif
# if (defined RTE_CONST_NTC_Num_Node1CFaulty) || (defined NTC_Num_Node1CFaulty)
#  if (!defined RTE_CONST_NTC_Num_Node1CFaulty) || (RTE_CONST_NTC_Num_Node1CFaulty != 263U)
#   error "Enumeration constant <NTC_Num_Node1CFaulty> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node1CFaulty (263U)
#  define NTC_Num_Node1CFaulty (263U)
# endif
# if (defined RTE_CONST_NTC_Num_Node1DAbsent) || (defined NTC_Num_Node1DAbsent)
#  if (!defined RTE_CONST_NTC_Num_Node1DAbsent) || (RTE_CONST_NTC_Num_Node1DAbsent != 264U)
#   error "Enumeration constant <NTC_Num_Node1DAbsent> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node1DAbsent (264U)
#  define NTC_Num_Node1DAbsent (264U)
# endif
# if (defined RTE_CONST_NTC_Num_Node1DFaulty) || (defined NTC_Num_Node1DFaulty)
#  if (!defined RTE_CONST_NTC_Num_Node1DFaulty) || (RTE_CONST_NTC_Num_Node1DFaulty != 265U)
#   error "Enumeration constant <NTC_Num_Node1DFaulty> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node1DFaulty (265U)
#  define NTC_Num_Node1DFaulty (265U)
# endif
# if (defined RTE_CONST_NTC_Num_Node1EAbsent) || (defined NTC_Num_Node1EAbsent)
#  if (!defined RTE_CONST_NTC_Num_Node1EAbsent) || (RTE_CONST_NTC_Num_Node1EAbsent != 266U)
#   error "Enumeration constant <NTC_Num_Node1EAbsent> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node1EAbsent (266U)
#  define NTC_Num_Node1EAbsent (266U)
# endif
# if (defined RTE_CONST_NTC_Num_Node1EFaulty) || (defined NTC_Num_Node1EFaulty)
#  if (!defined RTE_CONST_NTC_Num_Node1EFaulty) || (RTE_CONST_NTC_Num_Node1EFaulty != 267U)
#   error "Enumeration constant <NTC_Num_Node1EFaulty> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node1EFaulty (267U)
#  define NTC_Num_Node1EFaulty (267U)
# endif
# if (defined RTE_CONST_NTC_Num_Node1FAbsent) || (defined NTC_Num_Node1FAbsent)
#  if (!defined RTE_CONST_NTC_Num_Node1FAbsent) || (RTE_CONST_NTC_Num_Node1FAbsent != 268U)
#   error "Enumeration constant <NTC_Num_Node1FAbsent> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node1FAbsent (268U)
#  define NTC_Num_Node1FAbsent (268U)
# endif
# if (defined RTE_CONST_NTC_Num_Node1FFaulty) || (defined NTC_Num_Node1FFaulty)
#  if (!defined RTE_CONST_NTC_Num_Node1FFaulty) || (RTE_CONST_NTC_Num_Node1FFaulty != 269U)
#   error "Enumeration constant <NTC_Num_Node1FFaulty> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node1FFaulty (269U)
#  define NTC_Num_Node1FFaulty (269U)
# endif
# if (defined RTE_CONST_NTC_Num_Node1GAbsent) || (defined NTC_Num_Node1GAbsent)
#  if (!defined RTE_CONST_NTC_Num_Node1GAbsent) || (RTE_CONST_NTC_Num_Node1GAbsent != 270U)
#   error "Enumeration constant <NTC_Num_Node1GAbsent> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node1GAbsent (270U)
#  define NTC_Num_Node1GAbsent (270U)
# endif
# if (defined RTE_CONST_NTC_Num_Node1GFaulty) || (defined NTC_Num_Node1GFaulty)
#  if (!defined RTE_CONST_NTC_Num_Node1GFaulty) || (RTE_CONST_NTC_Num_Node1GFaulty != 271U)
#   error "Enumeration constant <NTC_Num_Node1GFaulty> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node1GFaulty (271U)
#  define NTC_Num_Node1GFaulty (271U)
# endif
# if (defined RTE_CONST_NTC_Num_BusOffCh2) || (defined NTC_Num_BusOffCh2)
#  if (!defined RTE_CONST_NTC_Num_BusOffCh2) || (RTE_CONST_NTC_Num_BusOffCh2 != 272U)
#   error "Enumeration constant <NTC_Num_BusOffCh2> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_BusOffCh2 (272U)
#  define NTC_Num_BusOffCh2 (272U)
# endif
# if (defined RTE_CONST_NTC_Num_Node2AAbsent) || (defined NTC_Num_Node2AAbsent)
#  if (!defined RTE_CONST_NTC_Num_Node2AAbsent) || (RTE_CONST_NTC_Num_Node2AAbsent != 273U)
#   error "Enumeration constant <NTC_Num_Node2AAbsent> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node2AAbsent (273U)
#  define NTC_Num_Node2AAbsent (273U)
# endif
# if (defined RTE_CONST_NTC_Num_Node2AFaulty) || (defined NTC_Num_Node2AFaulty)
#  if (!defined RTE_CONST_NTC_Num_Node2AFaulty) || (RTE_CONST_NTC_Num_Node2AFaulty != 274U)
#   error "Enumeration constant <NTC_Num_Node2AFaulty> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node2AFaulty (274U)
#  define NTC_Num_Node2AFaulty (274U)
# endif
# if (defined RTE_CONST_NTC_Num_Node2BAbsent) || (defined NTC_Num_Node2BAbsent)
#  if (!defined RTE_CONST_NTC_Num_Node2BAbsent) || (RTE_CONST_NTC_Num_Node2BAbsent != 275U)
#   error "Enumeration constant <NTC_Num_Node2BAbsent> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node2BAbsent (275U)
#  define NTC_Num_Node2BAbsent (275U)
# endif
# if (defined RTE_CONST_NTC_Num_Node2BFaulty) || (defined NTC_Num_Node2BFaulty)
#  if (!defined RTE_CONST_NTC_Num_Node2BFaulty) || (RTE_CONST_NTC_Num_Node2BFaulty != 276U)
#   error "Enumeration constant <NTC_Num_Node2BFaulty> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node2BFaulty (276U)
#  define NTC_Num_Node2BFaulty (276U)
# endif
# if (defined RTE_CONST_NTC_Num_Node2CAbsent) || (defined NTC_Num_Node2CAbsent)
#  if (!defined RTE_CONST_NTC_Num_Node2CAbsent) || (RTE_CONST_NTC_Num_Node2CAbsent != 277U)
#   error "Enumeration constant <NTC_Num_Node2CAbsent> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node2CAbsent (277U)
#  define NTC_Num_Node2CAbsent (277U)
# endif
# if (defined RTE_CONST_NTC_Num_Node2CFaulty) || (defined NTC_Num_Node2CFaulty)
#  if (!defined RTE_CONST_NTC_Num_Node2CFaulty) || (RTE_CONST_NTC_Num_Node2CFaulty != 278U)
#   error "Enumeration constant <NTC_Num_Node2CFaulty> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node2CFaulty (278U)
#  define NTC_Num_Node2CFaulty (278U)
# endif
# if (defined RTE_CONST_NTC_Num_Node2DAbsent) || (defined NTC_Num_Node2DAbsent)
#  if (!defined RTE_CONST_NTC_Num_Node2DAbsent) || (RTE_CONST_NTC_Num_Node2DAbsent != 279U)
#   error "Enumeration constant <NTC_Num_Node2DAbsent> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node2DAbsent (279U)
#  define NTC_Num_Node2DAbsent (279U)
# endif
# if (defined RTE_CONST_NTC_Num_Node2DFaulty) || (defined NTC_Num_Node2DFaulty)
#  if (!defined RTE_CONST_NTC_Num_Node2DFaulty) || (RTE_CONST_NTC_Num_Node2DFaulty != 280U)
#   error "Enumeration constant <NTC_Num_Node2DFaulty> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node2DFaulty (280U)
#  define NTC_Num_Node2DFaulty (280U)
# endif
# if (defined RTE_CONST_NTC_Num_Node2EAbsent) || (defined NTC_Num_Node2EAbsent)
#  if (!defined RTE_CONST_NTC_Num_Node2EAbsent) || (RTE_CONST_NTC_Num_Node2EAbsent != 281U)
#   error "Enumeration constant <NTC_Num_Node2EAbsent> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node2EAbsent (281U)
#  define NTC_Num_Node2EAbsent (281U)
# endif
# if (defined RTE_CONST_NTC_Num_Node2EFaulty) || (defined NTC_Num_Node2EFaulty)
#  if (!defined RTE_CONST_NTC_Num_Node2EFaulty) || (RTE_CONST_NTC_Num_Node2EFaulty != 282U)
#   error "Enumeration constant <NTC_Num_Node2EFaulty> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node2EFaulty (282U)
#  define NTC_Num_Node2EFaulty (282U)
# endif
# if (defined RTE_CONST_NTC_Num_Node2FAbsent) || (defined NTC_Num_Node2FAbsent)
#  if (!defined RTE_CONST_NTC_Num_Node2FAbsent) || (RTE_CONST_NTC_Num_Node2FAbsent != 283U)
#   error "Enumeration constant <NTC_Num_Node2FAbsent> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node2FAbsent (283U)
#  define NTC_Num_Node2FAbsent (283U)
# endif
# if (defined RTE_CONST_NTC_Num_Node2FFaulty) || (defined NTC_Num_Node2FFaulty)
#  if (!defined RTE_CONST_NTC_Num_Node2FFaulty) || (RTE_CONST_NTC_Num_Node2FFaulty != 284U)
#   error "Enumeration constant <NTC_Num_Node2FFaulty> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node2FFaulty (284U)
#  define NTC_Num_Node2FFaulty (284U)
# endif
# if (defined RTE_CONST_NTC_Num_Node2GAbsent) || (defined NTC_Num_Node2GAbsent)
#  if (!defined RTE_CONST_NTC_Num_Node2GAbsent) || (RTE_CONST_NTC_Num_Node2GAbsent != 285U)
#   error "Enumeration constant <NTC_Num_Node2GAbsent> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node2GAbsent (285U)
#  define NTC_Num_Node2GAbsent (285U)
# endif
# if (defined RTE_CONST_NTC_Num_Node2GFaulty) || (defined NTC_Num_Node2GFaulty)
#  if (!defined RTE_CONST_NTC_Num_Node2GFaulty) || (RTE_CONST_NTC_Num_Node2GFaulty != 286U)
#   error "Enumeration constant <NTC_Num_Node2GFaulty> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_Node2GFaulty (286U)
#  define NTC_Num_Node2GFaulty (286U)
# endif
# if (defined RTE_CONST_NTC_Num_InvalidMsg_M) || (defined NTC_Num_InvalidMsg_M)
#  if (!defined RTE_CONST_NTC_Num_InvalidMsg_M) || (RTE_CONST_NTC_Num_InvalidMsg_M != 288U)
#   error "Enumeration constant <NTC_Num_InvalidMsg_M> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_InvalidMsg_M (288U)
#  define NTC_Num_InvalidMsg_M (288U)
# endif
# if (defined RTE_CONST_NTC_Num_MissingMsg_M) || (defined NTC_Num_MissingMsg_M)
#  if (!defined RTE_CONST_NTC_Num_MissingMsg_M) || (RTE_CONST_NTC_Num_MissingMsg_M != 289U)
#   error "Enumeration constant <NTC_Num_MissingMsg_M> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_MissingMsg_M (289U)
#  define NTC_Num_MissingMsg_M (289U)
# endif
# if (defined RTE_CONST_NTC_Num_CRCFltMsg_M) || (defined NTC_Num_CRCFltMsg_M)
#  if (!defined RTE_CONST_NTC_Num_CRCFltMsg_M) || (RTE_CONST_NTC_Num_CRCFltMsg_M != 290U)
#   error "Enumeration constant <NTC_Num_CRCFltMsg_M> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CRCFltMsg_M (290U)
#  define NTC_Num_CRCFltMsg_M (290U)
# endif
# if (defined RTE_CONST_NTC_Num_PgrsCntFltMsg_M) || (defined NTC_Num_PgrsCntFltMsg_M)
#  if (!defined RTE_CONST_NTC_Num_PgrsCntFltMsg_M) || (RTE_CONST_NTC_Num_PgrsCntFltMsg_M != 291U)
#   error "Enumeration constant <NTC_Num_PgrsCntFltMsg_M> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PgrsCntFltMsg_M (291U)
#  define NTC_Num_PgrsCntFltMsg_M (291U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRngFltMsg_M) || (defined NTC_Num_DataRngFltMsg_M)
#  if (!defined RTE_CONST_NTC_Num_DataRngFltMsg_M) || (RTE_CONST_NTC_Num_DataRngFltMsg_M != 292U)
#   error "Enumeration constant <NTC_Num_DataRngFltMsg_M> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRngFltMsg_M (292U)
#  define NTC_Num_DataRngFltMsg_M (292U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRateFltMsg_M) || (defined NTC_Num_DataRateFltMsg_M)
#  if (!defined RTE_CONST_NTC_Num_DataRateFltMsg_M) || (RTE_CONST_NTC_Num_DataRateFltMsg_M != 293U)
#   error "Enumeration constant <NTC_Num_DataRateFltMsg_M> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRateFltMsg_M (293U)
#  define NTC_Num_DataRateFltMsg_M (293U)
# endif
# if (defined RTE_CONST_NTC_Num_DataOtherFltMsg_M) || (defined NTC_Num_DataOtherFltMsg_M)
#  if (!defined RTE_CONST_NTC_Num_DataOtherFltMsg_M) || (RTE_CONST_NTC_Num_DataOtherFltMsg_M != 294U)
#   error "Enumeration constant <NTC_Num_DataOtherFltMsg_M> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataOtherFltMsg_M (294U)
#  define NTC_Num_DataOtherFltMsg_M (294U)
# endif
# if (defined RTE_CONST_NTC_Num_InvalidMsg_N) || (defined NTC_Num_InvalidMsg_N)
#  if (!defined RTE_CONST_NTC_Num_InvalidMsg_N) || (RTE_CONST_NTC_Num_InvalidMsg_N != 296U)
#   error "Enumeration constant <NTC_Num_InvalidMsg_N> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_InvalidMsg_N (296U)
#  define NTC_Num_InvalidMsg_N (296U)
# endif
# if (defined RTE_CONST_NTC_Num_MissingMsg_N) || (defined NTC_Num_MissingMsg_N)
#  if (!defined RTE_CONST_NTC_Num_MissingMsg_N) || (RTE_CONST_NTC_Num_MissingMsg_N != 297U)
#   error "Enumeration constant <NTC_Num_MissingMsg_N> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_MissingMsg_N (297U)
#  define NTC_Num_MissingMsg_N (297U)
# endif
# if (defined RTE_CONST_NTC_Num_CRCFltMsg_N) || (defined NTC_Num_CRCFltMsg_N)
#  if (!defined RTE_CONST_NTC_Num_CRCFltMsg_N) || (RTE_CONST_NTC_Num_CRCFltMsg_N != 298U)
#   error "Enumeration constant <NTC_Num_CRCFltMsg_N> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CRCFltMsg_N (298U)
#  define NTC_Num_CRCFltMsg_N (298U)
# endif
# if (defined RTE_CONST_NTC_Num_PgrsCntFltMsg_N) || (defined NTC_Num_PgrsCntFltMsg_N)
#  if (!defined RTE_CONST_NTC_Num_PgrsCntFltMsg_N) || (RTE_CONST_NTC_Num_PgrsCntFltMsg_N != 299U)
#   error "Enumeration constant <NTC_Num_PgrsCntFltMsg_N> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PgrsCntFltMsg_N (299U)
#  define NTC_Num_PgrsCntFltMsg_N (299U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRngFltMsg_N) || (defined NTC_Num_DataRngFltMsg_N)
#  if (!defined RTE_CONST_NTC_Num_DataRngFltMsg_N) || (RTE_CONST_NTC_Num_DataRngFltMsg_N != 300U)
#   error "Enumeration constant <NTC_Num_DataRngFltMsg_N> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRngFltMsg_N (300U)
#  define NTC_Num_DataRngFltMsg_N (300U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRateFltMsg_N) || (defined NTC_Num_DataRateFltMsg_N)
#  if (!defined RTE_CONST_NTC_Num_DataRateFltMsg_N) || (RTE_CONST_NTC_Num_DataRateFltMsg_N != 301U)
#   error "Enumeration constant <NTC_Num_DataRateFltMsg_N> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRateFltMsg_N (301U)
#  define NTC_Num_DataRateFltMsg_N (301U)
# endif
# if (defined RTE_CONST_NTC_Num_DataOtherFltMsg_N) || (defined NTC_Num_DataOtherFltMsg_N)
#  if (!defined RTE_CONST_NTC_Num_DataOtherFltMsg_N) || (RTE_CONST_NTC_Num_DataOtherFltMsg_N != 302U)
#   error "Enumeration constant <NTC_Num_DataOtherFltMsg_N> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataOtherFltMsg_N (302U)
#  define NTC_Num_DataOtherFltMsg_N (302U)
# endif
# if (defined RTE_CONST_NTC_Num_InvalidMsg_O) || (defined NTC_Num_InvalidMsg_O)
#  if (!defined RTE_CONST_NTC_Num_InvalidMsg_O) || (RTE_CONST_NTC_Num_InvalidMsg_O != 304U)
#   error "Enumeration constant <NTC_Num_InvalidMsg_O> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_InvalidMsg_O (304U)
#  define NTC_Num_InvalidMsg_O (304U)
# endif
# if (defined RTE_CONST_NTC_Num_MissingMsg_O) || (defined NTC_Num_MissingMsg_O)
#  if (!defined RTE_CONST_NTC_Num_MissingMsg_O) || (RTE_CONST_NTC_Num_MissingMsg_O != 305U)
#   error "Enumeration constant <NTC_Num_MissingMsg_O> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_MissingMsg_O (305U)
#  define NTC_Num_MissingMsg_O (305U)
# endif
# if (defined RTE_CONST_NTC_Num_CRCFltMsg_O) || (defined NTC_Num_CRCFltMsg_O)
#  if (!defined RTE_CONST_NTC_Num_CRCFltMsg_O) || (RTE_CONST_NTC_Num_CRCFltMsg_O != 306U)
#   error "Enumeration constant <NTC_Num_CRCFltMsg_O> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CRCFltMsg_O (306U)
#  define NTC_Num_CRCFltMsg_O (306U)
# endif
# if (defined RTE_CONST_NTC_Num_PgrsCntFltMsg_O) || (defined NTC_Num_PgrsCntFltMsg_O)
#  if (!defined RTE_CONST_NTC_Num_PgrsCntFltMsg_O) || (RTE_CONST_NTC_Num_PgrsCntFltMsg_O != 307U)
#   error "Enumeration constant <NTC_Num_PgrsCntFltMsg_O> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PgrsCntFltMsg_O (307U)
#  define NTC_Num_PgrsCntFltMsg_O (307U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRngFltMsg_O) || (defined NTC_Num_DataRngFltMsg_O)
#  if (!defined RTE_CONST_NTC_Num_DataRngFltMsg_O) || (RTE_CONST_NTC_Num_DataRngFltMsg_O != 308U)
#   error "Enumeration constant <NTC_Num_DataRngFltMsg_O> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRngFltMsg_O (308U)
#  define NTC_Num_DataRngFltMsg_O (308U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRateFltMsg_O) || (defined NTC_Num_DataRateFltMsg_O)
#  if (!defined RTE_CONST_NTC_Num_DataRateFltMsg_O) || (RTE_CONST_NTC_Num_DataRateFltMsg_O != 309U)
#   error "Enumeration constant <NTC_Num_DataRateFltMsg_O> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRateFltMsg_O (309U)
#  define NTC_Num_DataRateFltMsg_O (309U)
# endif
# if (defined RTE_CONST_NTC_Num_DataOtherFltMsg_O) || (defined NTC_Num_DataOtherFltMsg_O)
#  if (!defined RTE_CONST_NTC_Num_DataOtherFltMsg_O) || (RTE_CONST_NTC_Num_DataOtherFltMsg_O != 310U)
#   error "Enumeration constant <NTC_Num_DataOtherFltMsg_O> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataOtherFltMsg_O (310U)
#  define NTC_Num_DataOtherFltMsg_O (310U)
# endif
# if (defined RTE_CONST_NTC_Num_InvalidMsg_P) || (defined NTC_Num_InvalidMsg_P)
#  if (!defined RTE_CONST_NTC_Num_InvalidMsg_P) || (RTE_CONST_NTC_Num_InvalidMsg_P != 312U)
#   error "Enumeration constant <NTC_Num_InvalidMsg_P> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_InvalidMsg_P (312U)
#  define NTC_Num_InvalidMsg_P (312U)
# endif
# if (defined RTE_CONST_NTC_Num_MissingMsg_P) || (defined NTC_Num_MissingMsg_P)
#  if (!defined RTE_CONST_NTC_Num_MissingMsg_P) || (RTE_CONST_NTC_Num_MissingMsg_P != 313U)
#   error "Enumeration constant <NTC_Num_MissingMsg_P> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_MissingMsg_P (313U)
#  define NTC_Num_MissingMsg_P (313U)
# endif
# if (defined RTE_CONST_NTC_Num_CRCFltMsg_P) || (defined NTC_Num_CRCFltMsg_P)
#  if (!defined RTE_CONST_NTC_Num_CRCFltMsg_P) || (RTE_CONST_NTC_Num_CRCFltMsg_P != 314U)
#   error "Enumeration constant <NTC_Num_CRCFltMsg_P> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CRCFltMsg_P (314U)
#  define NTC_Num_CRCFltMsg_P (314U)
# endif
# if (defined RTE_CONST_NTC_Num_PgrsCntFltMsg_P) || (defined NTC_Num_PgrsCntFltMsg_P)
#  if (!defined RTE_CONST_NTC_Num_PgrsCntFltMsg_P) || (RTE_CONST_NTC_Num_PgrsCntFltMsg_P != 315U)
#   error "Enumeration constant <NTC_Num_PgrsCntFltMsg_P> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PgrsCntFltMsg_P (315U)
#  define NTC_Num_PgrsCntFltMsg_P (315U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRngFltMsg_P) || (defined NTC_Num_DataRngFltMsg_P)
#  if (!defined RTE_CONST_NTC_Num_DataRngFltMsg_P) || (RTE_CONST_NTC_Num_DataRngFltMsg_P != 316U)
#   error "Enumeration constant <NTC_Num_DataRngFltMsg_P> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRngFltMsg_P (316U)
#  define NTC_Num_DataRngFltMsg_P (316U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRateFltMsg_P) || (defined NTC_Num_DataRateFltMsg_P)
#  if (!defined RTE_CONST_NTC_Num_DataRateFltMsg_P) || (RTE_CONST_NTC_Num_DataRateFltMsg_P != 317U)
#   error "Enumeration constant <NTC_Num_DataRateFltMsg_P> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRateFltMsg_P (317U)
#  define NTC_Num_DataRateFltMsg_P (317U)
# endif
# if (defined RTE_CONST_NTC_Num_DataOtherFltMsg_P) || (defined NTC_Num_DataOtherFltMsg_P)
#  if (!defined RTE_CONST_NTC_Num_DataOtherFltMsg_P) || (RTE_CONST_NTC_Num_DataOtherFltMsg_P != 318U)
#   error "Enumeration constant <NTC_Num_DataOtherFltMsg_P> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataOtherFltMsg_P (318U)
#  define NTC_Num_DataOtherFltMsg_P (318U)
# endif
# if (defined RTE_CONST_NTC_Num_InvalidMsg_Q) || (defined NTC_Num_InvalidMsg_Q)
#  if (!defined RTE_CONST_NTC_Num_InvalidMsg_Q) || (RTE_CONST_NTC_Num_InvalidMsg_Q != 320U)
#   error "Enumeration constant <NTC_Num_InvalidMsg_Q> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_InvalidMsg_Q (320U)
#  define NTC_Num_InvalidMsg_Q (320U)
# endif
# if (defined RTE_CONST_NTC_Num_MissingMsg_Q) || (defined NTC_Num_MissingMsg_Q)
#  if (!defined RTE_CONST_NTC_Num_MissingMsg_Q) || (RTE_CONST_NTC_Num_MissingMsg_Q != 321U)
#   error "Enumeration constant <NTC_Num_MissingMsg_Q> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_MissingMsg_Q (321U)
#  define NTC_Num_MissingMsg_Q (321U)
# endif
# if (defined RTE_CONST_NTC_Num_CRCFltMsg_Q) || (defined NTC_Num_CRCFltMsg_Q)
#  if (!defined RTE_CONST_NTC_Num_CRCFltMsg_Q) || (RTE_CONST_NTC_Num_CRCFltMsg_Q != 322U)
#   error "Enumeration constant <NTC_Num_CRCFltMsg_Q> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CRCFltMsg_Q (322U)
#  define NTC_Num_CRCFltMsg_Q (322U)
# endif
# if (defined RTE_CONST_NTC_Num_PgrsCntFltMsg_Q) || (defined NTC_Num_PgrsCntFltMsg_Q)
#  if (!defined RTE_CONST_NTC_Num_PgrsCntFltMsg_Q) || (RTE_CONST_NTC_Num_PgrsCntFltMsg_Q != 323U)
#   error "Enumeration constant <NTC_Num_PgrsCntFltMsg_Q> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PgrsCntFltMsg_Q (323U)
#  define NTC_Num_PgrsCntFltMsg_Q (323U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRngFltMsg_Q) || (defined NTC_Num_DataRngFltMsg_Q)
#  if (!defined RTE_CONST_NTC_Num_DataRngFltMsg_Q) || (RTE_CONST_NTC_Num_DataRngFltMsg_Q != 324U)
#   error "Enumeration constant <NTC_Num_DataRngFltMsg_Q> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRngFltMsg_Q (324U)
#  define NTC_Num_DataRngFltMsg_Q (324U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRateFltMsg_Q) || (defined NTC_Num_DataRateFltMsg_Q)
#  if (!defined RTE_CONST_NTC_Num_DataRateFltMsg_Q) || (RTE_CONST_NTC_Num_DataRateFltMsg_Q != 325U)
#   error "Enumeration constant <NTC_Num_DataRateFltMsg_Q> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRateFltMsg_Q (325U)
#  define NTC_Num_DataRateFltMsg_Q (325U)
# endif
# if (defined RTE_CONST_NTC_Num_DataOtherFltMsg_Q) || (defined NTC_Num_DataOtherFltMsg_Q)
#  if (!defined RTE_CONST_NTC_Num_DataOtherFltMsg_Q) || (RTE_CONST_NTC_Num_DataOtherFltMsg_Q != 326U)
#   error "Enumeration constant <NTC_Num_DataOtherFltMsg_Q> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataOtherFltMsg_Q (326U)
#  define NTC_Num_DataOtherFltMsg_Q (326U)
# endif
# if (defined RTE_CONST_NTC_Num_InvalidMsg_R) || (defined NTC_Num_InvalidMsg_R)
#  if (!defined RTE_CONST_NTC_Num_InvalidMsg_R) || (RTE_CONST_NTC_Num_InvalidMsg_R != 328U)
#   error "Enumeration constant <NTC_Num_InvalidMsg_R> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_InvalidMsg_R (328U)
#  define NTC_Num_InvalidMsg_R (328U)
# endif
# if (defined RTE_CONST_NTC_Num_MissingMsg_R) || (defined NTC_Num_MissingMsg_R)
#  if (!defined RTE_CONST_NTC_Num_MissingMsg_R) || (RTE_CONST_NTC_Num_MissingMsg_R != 329U)
#   error "Enumeration constant <NTC_Num_MissingMsg_R> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_MissingMsg_R (329U)
#  define NTC_Num_MissingMsg_R (329U)
# endif
# if (defined RTE_CONST_NTC_Num_CRCFltMsg_R) || (defined NTC_Num_CRCFltMsg_R)
#  if (!defined RTE_CONST_NTC_Num_CRCFltMsg_R) || (RTE_CONST_NTC_Num_CRCFltMsg_R != 330U)
#   error "Enumeration constant <NTC_Num_CRCFltMsg_R> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CRCFltMsg_R (330U)
#  define NTC_Num_CRCFltMsg_R (330U)
# endif
# if (defined RTE_CONST_NTC_Num_PgrsCntFltMsg_R) || (defined NTC_Num_PgrsCntFltMsg_R)
#  if (!defined RTE_CONST_NTC_Num_PgrsCntFltMsg_R) || (RTE_CONST_NTC_Num_PgrsCntFltMsg_R != 331U)
#   error "Enumeration constant <NTC_Num_PgrsCntFltMsg_R> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PgrsCntFltMsg_R (331U)
#  define NTC_Num_PgrsCntFltMsg_R (331U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRngFltMsg_R) || (defined NTC_Num_DataRngFltMsg_R)
#  if (!defined RTE_CONST_NTC_Num_DataRngFltMsg_R) || (RTE_CONST_NTC_Num_DataRngFltMsg_R != 332U)
#   error "Enumeration constant <NTC_Num_DataRngFltMsg_R> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRngFltMsg_R (332U)
#  define NTC_Num_DataRngFltMsg_R (332U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRateFltMsg_R) || (defined NTC_Num_DataRateFltMsg_R)
#  if (!defined RTE_CONST_NTC_Num_DataRateFltMsg_R) || (RTE_CONST_NTC_Num_DataRateFltMsg_R != 333U)
#   error "Enumeration constant <NTC_Num_DataRateFltMsg_R> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRateFltMsg_R (333U)
#  define NTC_Num_DataRateFltMsg_R (333U)
# endif
# if (defined RTE_CONST_NTC_Num_DataOtherFltMsg_R) || (defined NTC_Num_DataOtherFltMsg_R)
#  if (!defined RTE_CONST_NTC_Num_DataOtherFltMsg_R) || (RTE_CONST_NTC_Num_DataOtherFltMsg_R != 334U)
#   error "Enumeration constant <NTC_Num_DataOtherFltMsg_R> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataOtherFltMsg_R (334U)
#  define NTC_Num_DataOtherFltMsg_R (334U)
# endif
# if (defined RTE_CONST_NTC_Num_InvalidMsg_S) || (defined NTC_Num_InvalidMsg_S)
#  if (!defined RTE_CONST_NTC_Num_InvalidMsg_S) || (RTE_CONST_NTC_Num_InvalidMsg_S != 336U)
#   error "Enumeration constant <NTC_Num_InvalidMsg_S> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_InvalidMsg_S (336U)
#  define NTC_Num_InvalidMsg_S (336U)
# endif
# if (defined RTE_CONST_NTC_Num_MissingMsg_S) || (defined NTC_Num_MissingMsg_S)
#  if (!defined RTE_CONST_NTC_Num_MissingMsg_S) || (RTE_CONST_NTC_Num_MissingMsg_S != 337U)
#   error "Enumeration constant <NTC_Num_MissingMsg_S> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_MissingMsg_S (337U)
#  define NTC_Num_MissingMsg_S (337U)
# endif
# if (defined RTE_CONST_NTC_Num_CRCFltMsg_S) || (defined NTC_Num_CRCFltMsg_S)
#  if (!defined RTE_CONST_NTC_Num_CRCFltMsg_S) || (RTE_CONST_NTC_Num_CRCFltMsg_S != 338U)
#   error "Enumeration constant <NTC_Num_CRCFltMsg_S> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CRCFltMsg_S (338U)
#  define NTC_Num_CRCFltMsg_S (338U)
# endif
# if (defined RTE_CONST_NTC_Num_PgrsCntFltMsg_S) || (defined NTC_Num_PgrsCntFltMsg_S)
#  if (!defined RTE_CONST_NTC_Num_PgrsCntFltMsg_S) || (RTE_CONST_NTC_Num_PgrsCntFltMsg_S != 339U)
#   error "Enumeration constant <NTC_Num_PgrsCntFltMsg_S> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PgrsCntFltMsg_S (339U)
#  define NTC_Num_PgrsCntFltMsg_S (339U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRngFltMsg_S) || (defined NTC_Num_DataRngFltMsg_S)
#  if (!defined RTE_CONST_NTC_Num_DataRngFltMsg_S) || (RTE_CONST_NTC_Num_DataRngFltMsg_S != 340U)
#   error "Enumeration constant <NTC_Num_DataRngFltMsg_S> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRngFltMsg_S (340U)
#  define NTC_Num_DataRngFltMsg_S (340U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRateFltMsg_S) || (defined NTC_Num_DataRateFltMsg_S)
#  if (!defined RTE_CONST_NTC_Num_DataRateFltMsg_S) || (RTE_CONST_NTC_Num_DataRateFltMsg_S != 341U)
#   error "Enumeration constant <NTC_Num_DataRateFltMsg_S> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRateFltMsg_S (341U)
#  define NTC_Num_DataRateFltMsg_S (341U)
# endif
# if (defined RTE_CONST_NTC_Num_DataOtherFltMsg_S) || (defined NTC_Num_DataOtherFltMsg_S)
#  if (!defined RTE_CONST_NTC_Num_DataOtherFltMsg_S) || (RTE_CONST_NTC_Num_DataOtherFltMsg_S != 342U)
#   error "Enumeration constant <NTC_Num_DataOtherFltMsg_S> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataOtherFltMsg_S (342U)
#  define NTC_Num_DataOtherFltMsg_S (342U)
# endif
# if (defined RTE_CONST_NTC_Num_InvalidMsg_T) || (defined NTC_Num_InvalidMsg_T)
#  if (!defined RTE_CONST_NTC_Num_InvalidMsg_T) || (RTE_CONST_NTC_Num_InvalidMsg_T != 344U)
#   error "Enumeration constant <NTC_Num_InvalidMsg_T> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_InvalidMsg_T (344U)
#  define NTC_Num_InvalidMsg_T (344U)
# endif
# if (defined RTE_CONST_NTC_Num_MissingMsg_T) || (defined NTC_Num_MissingMsg_T)
#  if (!defined RTE_CONST_NTC_Num_MissingMsg_T) || (RTE_CONST_NTC_Num_MissingMsg_T != 345U)
#   error "Enumeration constant <NTC_Num_MissingMsg_T> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_MissingMsg_T (345U)
#  define NTC_Num_MissingMsg_T (345U)
# endif
# if (defined RTE_CONST_NTC_Num_CRCFltMsg_T) || (defined NTC_Num_CRCFltMsg_T)
#  if (!defined RTE_CONST_NTC_Num_CRCFltMsg_T) || (RTE_CONST_NTC_Num_CRCFltMsg_T != 346U)
#   error "Enumeration constant <NTC_Num_CRCFltMsg_T> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CRCFltMsg_T (346U)
#  define NTC_Num_CRCFltMsg_T (346U)
# endif
# if (defined RTE_CONST_NTC_Num_PgrsCntFltMsg_T) || (defined NTC_Num_PgrsCntFltMsg_T)
#  if (!defined RTE_CONST_NTC_Num_PgrsCntFltMsg_T) || (RTE_CONST_NTC_Num_PgrsCntFltMsg_T != 347U)
#   error "Enumeration constant <NTC_Num_PgrsCntFltMsg_T> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PgrsCntFltMsg_T (347U)
#  define NTC_Num_PgrsCntFltMsg_T (347U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRngFltMsg_T) || (defined NTC_Num_DataRngFltMsg_T)
#  if (!defined RTE_CONST_NTC_Num_DataRngFltMsg_T) || (RTE_CONST_NTC_Num_DataRngFltMsg_T != 348U)
#   error "Enumeration constant <NTC_Num_DataRngFltMsg_T> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRngFltMsg_T (348U)
#  define NTC_Num_DataRngFltMsg_T (348U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRateFltMsg_T) || (defined NTC_Num_DataRateFltMsg_T)
#  if (!defined RTE_CONST_NTC_Num_DataRateFltMsg_T) || (RTE_CONST_NTC_Num_DataRateFltMsg_T != 349U)
#   error "Enumeration constant <NTC_Num_DataRateFltMsg_T> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRateFltMsg_T (349U)
#  define NTC_Num_DataRateFltMsg_T (349U)
# endif
# if (defined RTE_CONST_NTC_Num_DataOtherFltMsg_T) || (defined NTC_Num_DataOtherFltMsg_T)
#  if (!defined RTE_CONST_NTC_Num_DataOtherFltMsg_T) || (RTE_CONST_NTC_Num_DataOtherFltMsg_T != 350U)
#   error "Enumeration constant <NTC_Num_DataOtherFltMsg_T> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataOtherFltMsg_T (350U)
#  define NTC_Num_DataOtherFltMsg_T (350U)
# endif
# if (defined RTE_CONST_NTC_Num_InvalidMsg_U) || (defined NTC_Num_InvalidMsg_U)
#  if (!defined RTE_CONST_NTC_Num_InvalidMsg_U) || (RTE_CONST_NTC_Num_InvalidMsg_U != 352U)
#   error "Enumeration constant <NTC_Num_InvalidMsg_U> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_InvalidMsg_U (352U)
#  define NTC_Num_InvalidMsg_U (352U)
# endif
# if (defined RTE_CONST_NTC_Num_MissingMsg_U) || (defined NTC_Num_MissingMsg_U)
#  if (!defined RTE_CONST_NTC_Num_MissingMsg_U) || (RTE_CONST_NTC_Num_MissingMsg_U != 353U)
#   error "Enumeration constant <NTC_Num_MissingMsg_U> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_MissingMsg_U (353U)
#  define NTC_Num_MissingMsg_U (353U)
# endif
# if (defined RTE_CONST_NTC_Num_CRCFltMsg_U) || (defined NTC_Num_CRCFltMsg_U)
#  if (!defined RTE_CONST_NTC_Num_CRCFltMsg_U) || (RTE_CONST_NTC_Num_CRCFltMsg_U != 354U)
#   error "Enumeration constant <NTC_Num_CRCFltMsg_U> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CRCFltMsg_U (354U)
#  define NTC_Num_CRCFltMsg_U (354U)
# endif
# if (defined RTE_CONST_NTC_Num_PgrsCntFltMsg_U) || (defined NTC_Num_PgrsCntFltMsg_U)
#  if (!defined RTE_CONST_NTC_Num_PgrsCntFltMsg_U) || (RTE_CONST_NTC_Num_PgrsCntFltMsg_U != 355U)
#   error "Enumeration constant <NTC_Num_PgrsCntFltMsg_U> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PgrsCntFltMsg_U (355U)
#  define NTC_Num_PgrsCntFltMsg_U (355U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRngFltMsg_U) || (defined NTC_Num_DataRngFltMsg_U)
#  if (!defined RTE_CONST_NTC_Num_DataRngFltMsg_U) || (RTE_CONST_NTC_Num_DataRngFltMsg_U != 356U)
#   error "Enumeration constant <NTC_Num_DataRngFltMsg_U> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRngFltMsg_U (356U)
#  define NTC_Num_DataRngFltMsg_U (356U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRateFltMsg_U) || (defined NTC_Num_DataRateFltMsg_U)
#  if (!defined RTE_CONST_NTC_Num_DataRateFltMsg_U) || (RTE_CONST_NTC_Num_DataRateFltMsg_U != 357U)
#   error "Enumeration constant <NTC_Num_DataRateFltMsg_U> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRateFltMsg_U (357U)
#  define NTC_Num_DataRateFltMsg_U (357U)
# endif
# if (defined RTE_CONST_NTC_Num_DataOtherFltMsg_U) || (defined NTC_Num_DataOtherFltMsg_U)
#  if (!defined RTE_CONST_NTC_Num_DataOtherFltMsg_U) || (RTE_CONST_NTC_Num_DataOtherFltMsg_U != 358U)
#   error "Enumeration constant <NTC_Num_DataOtherFltMsg_U> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataOtherFltMsg_U (358U)
#  define NTC_Num_DataOtherFltMsg_U (358U)
# endif
# if (defined RTE_CONST_NTC_Num_InvalidMsg_V) || (defined NTC_Num_InvalidMsg_V)
#  if (!defined RTE_CONST_NTC_Num_InvalidMsg_V) || (RTE_CONST_NTC_Num_InvalidMsg_V != 360U)
#   error "Enumeration constant <NTC_Num_InvalidMsg_V> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_InvalidMsg_V (360U)
#  define NTC_Num_InvalidMsg_V (360U)
# endif
# if (defined RTE_CONST_NTC_Num_MissingMsg_V) || (defined NTC_Num_MissingMsg_V)
#  if (!defined RTE_CONST_NTC_Num_MissingMsg_V) || (RTE_CONST_NTC_Num_MissingMsg_V != 361U)
#   error "Enumeration constant <NTC_Num_MissingMsg_V> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_MissingMsg_V (361U)
#  define NTC_Num_MissingMsg_V (361U)
# endif
# if (defined RTE_CONST_NTC_Num_CRCFltMsg_V) || (defined NTC_Num_CRCFltMsg_V)
#  if (!defined RTE_CONST_NTC_Num_CRCFltMsg_V) || (RTE_CONST_NTC_Num_CRCFltMsg_V != 362U)
#   error "Enumeration constant <NTC_Num_CRCFltMsg_V> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CRCFltMsg_V (362U)
#  define NTC_Num_CRCFltMsg_V (362U)
# endif
# if (defined RTE_CONST_NTC_Num_PgrsCntFltMsg_V) || (defined NTC_Num_PgrsCntFltMsg_V)
#  if (!defined RTE_CONST_NTC_Num_PgrsCntFltMsg_V) || (RTE_CONST_NTC_Num_PgrsCntFltMsg_V != 363U)
#   error "Enumeration constant <NTC_Num_PgrsCntFltMsg_V> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PgrsCntFltMsg_V (363U)
#  define NTC_Num_PgrsCntFltMsg_V (363U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRngFltMsg_V) || (defined NTC_Num_DataRngFltMsg_V)
#  if (!defined RTE_CONST_NTC_Num_DataRngFltMsg_V) || (RTE_CONST_NTC_Num_DataRngFltMsg_V != 364U)
#   error "Enumeration constant <NTC_Num_DataRngFltMsg_V> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRngFltMsg_V (364U)
#  define NTC_Num_DataRngFltMsg_V (364U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRateFltMsg_V) || (defined NTC_Num_DataRateFltMsg_V)
#  if (!defined RTE_CONST_NTC_Num_DataRateFltMsg_V) || (RTE_CONST_NTC_Num_DataRateFltMsg_V != 365U)
#   error "Enumeration constant <NTC_Num_DataRateFltMsg_V> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRateFltMsg_V (365U)
#  define NTC_Num_DataRateFltMsg_V (365U)
# endif
# if (defined RTE_CONST_NTC_Num_DataOtherFltMsg_V) || (defined NTC_Num_DataOtherFltMsg_V)
#  if (!defined RTE_CONST_NTC_Num_DataOtherFltMsg_V) || (RTE_CONST_NTC_Num_DataOtherFltMsg_V != 366U)
#   error "Enumeration constant <NTC_Num_DataOtherFltMsg_V> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataOtherFltMsg_V (366U)
#  define NTC_Num_DataOtherFltMsg_V (366U)
# endif
# if (defined RTE_CONST_NTC_Num_InvalidMsg_W) || (defined NTC_Num_InvalidMsg_W)
#  if (!defined RTE_CONST_NTC_Num_InvalidMsg_W) || (RTE_CONST_NTC_Num_InvalidMsg_W != 368U)
#   error "Enumeration constant <NTC_Num_InvalidMsg_W> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_InvalidMsg_W (368U)
#  define NTC_Num_InvalidMsg_W (368U)
# endif
# if (defined RTE_CONST_NTC_Num_MissingMsg_W) || (defined NTC_Num_MissingMsg_W)
#  if (!defined RTE_CONST_NTC_Num_MissingMsg_W) || (RTE_CONST_NTC_Num_MissingMsg_W != 369U)
#   error "Enumeration constant <NTC_Num_MissingMsg_W> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_MissingMsg_W (369U)
#  define NTC_Num_MissingMsg_W (369U)
# endif
# if (defined RTE_CONST_NTC_Num_CRCFltMsg_W) || (defined NTC_Num_CRCFltMsg_W)
#  if (!defined RTE_CONST_NTC_Num_CRCFltMsg_W) || (RTE_CONST_NTC_Num_CRCFltMsg_W != 370U)
#   error "Enumeration constant <NTC_Num_CRCFltMsg_W> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CRCFltMsg_W (370U)
#  define NTC_Num_CRCFltMsg_W (370U)
# endif
# if (defined RTE_CONST_NTC_Num_PgrsCntFltMsg_W) || (defined NTC_Num_PgrsCntFltMsg_W)
#  if (!defined RTE_CONST_NTC_Num_PgrsCntFltMsg_W) || (RTE_CONST_NTC_Num_PgrsCntFltMsg_W != 371U)
#   error "Enumeration constant <NTC_Num_PgrsCntFltMsg_W> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PgrsCntFltMsg_W (371U)
#  define NTC_Num_PgrsCntFltMsg_W (371U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRngFltMsg_W) || (defined NTC_Num_DataRngFltMsg_W)
#  if (!defined RTE_CONST_NTC_Num_DataRngFltMsg_W) || (RTE_CONST_NTC_Num_DataRngFltMsg_W != 372U)
#   error "Enumeration constant <NTC_Num_DataRngFltMsg_W> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRngFltMsg_W (372U)
#  define NTC_Num_DataRngFltMsg_W (372U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRateFltMsg_W) || (defined NTC_Num_DataRateFltMsg_W)
#  if (!defined RTE_CONST_NTC_Num_DataRateFltMsg_W) || (RTE_CONST_NTC_Num_DataRateFltMsg_W != 373U)
#   error "Enumeration constant <NTC_Num_DataRateFltMsg_W> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRateFltMsg_W (373U)
#  define NTC_Num_DataRateFltMsg_W (373U)
# endif
# if (defined RTE_CONST_NTC_Num_DataOtherFltMsg_W) || (defined NTC_Num_DataOtherFltMsg_W)
#  if (!defined RTE_CONST_NTC_Num_DataOtherFltMsg_W) || (RTE_CONST_NTC_Num_DataOtherFltMsg_W != 374U)
#   error "Enumeration constant <NTC_Num_DataOtherFltMsg_W> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataOtherFltMsg_W (374U)
#  define NTC_Num_DataOtherFltMsg_W (374U)
# endif
# if (defined RTE_CONST_NTC_Num_InvalidMsg_X) || (defined NTC_Num_InvalidMsg_X)
#  if (!defined RTE_CONST_NTC_Num_InvalidMsg_X) || (RTE_CONST_NTC_Num_InvalidMsg_X != 376U)
#   error "Enumeration constant <NTC_Num_InvalidMsg_X> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_InvalidMsg_X (376U)
#  define NTC_Num_InvalidMsg_X (376U)
# endif
# if (defined RTE_CONST_NTC_Num_MissingMsg_X) || (defined NTC_Num_MissingMsg_X)
#  if (!defined RTE_CONST_NTC_Num_MissingMsg_X) || (RTE_CONST_NTC_Num_MissingMsg_X != 377U)
#   error "Enumeration constant <NTC_Num_MissingMsg_X> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_MissingMsg_X (377U)
#  define NTC_Num_MissingMsg_X (377U)
# endif
# if (defined RTE_CONST_NTC_Num_CRCFltMsg_X) || (defined NTC_Num_CRCFltMsg_X)
#  if (!defined RTE_CONST_NTC_Num_CRCFltMsg_X) || (RTE_CONST_NTC_Num_CRCFltMsg_X != 378U)
#   error "Enumeration constant <NTC_Num_CRCFltMsg_X> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CRCFltMsg_X (378U)
#  define NTC_Num_CRCFltMsg_X (378U)
# endif
# if (defined RTE_CONST_NTC_Num_PgrsCntFltMsg_X) || (defined NTC_Num_PgrsCntFltMsg_X)
#  if (!defined RTE_CONST_NTC_Num_PgrsCntFltMsg_X) || (RTE_CONST_NTC_Num_PgrsCntFltMsg_X != 379U)
#   error "Enumeration constant <NTC_Num_PgrsCntFltMsg_X> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PgrsCntFltMsg_X (379U)
#  define NTC_Num_PgrsCntFltMsg_X (379U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRngFltMsg_X) || (defined NTC_Num_DataRngFltMsg_X)
#  if (!defined RTE_CONST_NTC_Num_DataRngFltMsg_X) || (RTE_CONST_NTC_Num_DataRngFltMsg_X != 380U)
#   error "Enumeration constant <NTC_Num_DataRngFltMsg_X> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRngFltMsg_X (380U)
#  define NTC_Num_DataRngFltMsg_X (380U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRateFltMsg_X) || (defined NTC_Num_DataRateFltMsg_X)
#  if (!defined RTE_CONST_NTC_Num_DataRateFltMsg_X) || (RTE_CONST_NTC_Num_DataRateFltMsg_X != 381U)
#   error "Enumeration constant <NTC_Num_DataRateFltMsg_X> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRateFltMsg_X (381U)
#  define NTC_Num_DataRateFltMsg_X (381U)
# endif
# if (defined RTE_CONST_NTC_Num_DataOtherFltMsg_X) || (defined NTC_Num_DataOtherFltMsg_X)
#  if (!defined RTE_CONST_NTC_Num_DataOtherFltMsg_X) || (RTE_CONST_NTC_Num_DataOtherFltMsg_X != 382U)
#   error "Enumeration constant <NTC_Num_DataOtherFltMsg_X> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataOtherFltMsg_X (382U)
#  define NTC_Num_DataOtherFltMsg_X (382U)
# endif
# if (defined RTE_CONST_NTC_Num_InvalidMsg_Y) || (defined NTC_Num_InvalidMsg_Y)
#  if (!defined RTE_CONST_NTC_Num_InvalidMsg_Y) || (RTE_CONST_NTC_Num_InvalidMsg_Y != 384U)
#   error "Enumeration constant <NTC_Num_InvalidMsg_Y> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_InvalidMsg_Y (384U)
#  define NTC_Num_InvalidMsg_Y (384U)
# endif
# if (defined RTE_CONST_NTC_Num_MissingMsg_Y) || (defined NTC_Num_MissingMsg_Y)
#  if (!defined RTE_CONST_NTC_Num_MissingMsg_Y) || (RTE_CONST_NTC_Num_MissingMsg_Y != 385U)
#   error "Enumeration constant <NTC_Num_MissingMsg_Y> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_MissingMsg_Y (385U)
#  define NTC_Num_MissingMsg_Y (385U)
# endif
# if (defined RTE_CONST_NTC_Num_CRCFltMsg_Y) || (defined NTC_Num_CRCFltMsg_Y)
#  if (!defined RTE_CONST_NTC_Num_CRCFltMsg_Y) || (RTE_CONST_NTC_Num_CRCFltMsg_Y != 386U)
#   error "Enumeration constant <NTC_Num_CRCFltMsg_Y> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CRCFltMsg_Y (386U)
#  define NTC_Num_CRCFltMsg_Y (386U)
# endif
# if (defined RTE_CONST_NTC_Num_PgrsCntFltMsg_Y) || (defined NTC_Num_PgrsCntFltMsg_Y)
#  if (!defined RTE_CONST_NTC_Num_PgrsCntFltMsg_Y) || (RTE_CONST_NTC_Num_PgrsCntFltMsg_Y != 387U)
#   error "Enumeration constant <NTC_Num_PgrsCntFltMsg_Y> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PgrsCntFltMsg_Y (387U)
#  define NTC_Num_PgrsCntFltMsg_Y (387U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRngFltMsg_Y) || (defined NTC_Num_DataRngFltMsg_Y)
#  if (!defined RTE_CONST_NTC_Num_DataRngFltMsg_Y) || (RTE_CONST_NTC_Num_DataRngFltMsg_Y != 388U)
#   error "Enumeration constant <NTC_Num_DataRngFltMsg_Y> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRngFltMsg_Y (388U)
#  define NTC_Num_DataRngFltMsg_Y (388U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRateFltMsg_Y) || (defined NTC_Num_DataRateFltMsg_Y)
#  if (!defined RTE_CONST_NTC_Num_DataRateFltMsg_Y) || (RTE_CONST_NTC_Num_DataRateFltMsg_Y != 389U)
#   error "Enumeration constant <NTC_Num_DataRateFltMsg_Y> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRateFltMsg_Y (389U)
#  define NTC_Num_DataRateFltMsg_Y (389U)
# endif
# if (defined RTE_CONST_NTC_Num_DataOtherFltMsg_Y) || (defined NTC_Num_DataOtherFltMsg_Y)
#  if (!defined RTE_CONST_NTC_Num_DataOtherFltMsg_Y) || (RTE_CONST_NTC_Num_DataOtherFltMsg_Y != 390U)
#   error "Enumeration constant <NTC_Num_DataOtherFltMsg_Y> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataOtherFltMsg_Y (390U)
#  define NTC_Num_DataOtherFltMsg_Y (390U)
# endif
# if (defined RTE_CONST_NTC_Num_InvalidMsg_Z) || (defined NTC_Num_InvalidMsg_Z)
#  if (!defined RTE_CONST_NTC_Num_InvalidMsg_Z) || (RTE_CONST_NTC_Num_InvalidMsg_Z != 392U)
#   error "Enumeration constant <NTC_Num_InvalidMsg_Z> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_InvalidMsg_Z (392U)
#  define NTC_Num_InvalidMsg_Z (392U)
# endif
# if (defined RTE_CONST_NTC_Num_MissingMsg_Z) || (defined NTC_Num_MissingMsg_Z)
#  if (!defined RTE_CONST_NTC_Num_MissingMsg_Z) || (RTE_CONST_NTC_Num_MissingMsg_Z != 393U)
#   error "Enumeration constant <NTC_Num_MissingMsg_Z> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_MissingMsg_Z (393U)
#  define NTC_Num_MissingMsg_Z (393U)
# endif
# if (defined RTE_CONST_NTC_Num_CRCFltMsg_Z) || (defined NTC_Num_CRCFltMsg_Z)
#  if (!defined RTE_CONST_NTC_Num_CRCFltMsg_Z) || (RTE_CONST_NTC_Num_CRCFltMsg_Z != 394U)
#   error "Enumeration constant <NTC_Num_CRCFltMsg_Z> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CRCFltMsg_Z (394U)
#  define NTC_Num_CRCFltMsg_Z (394U)
# endif
# if (defined RTE_CONST_NTC_Num_PgrsCntFltMsg_Z) || (defined NTC_Num_PgrsCntFltMsg_Z)
#  if (!defined RTE_CONST_NTC_Num_PgrsCntFltMsg_Z) || (RTE_CONST_NTC_Num_PgrsCntFltMsg_Z != 395U)
#   error "Enumeration constant <NTC_Num_PgrsCntFltMsg_Z> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PgrsCntFltMsg_Z (395U)
#  define NTC_Num_PgrsCntFltMsg_Z (395U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRngFltMsg_Z) || (defined NTC_Num_DataRngFltMsg_Z)
#  if (!defined RTE_CONST_NTC_Num_DataRngFltMsg_Z) || (RTE_CONST_NTC_Num_DataRngFltMsg_Z != 396U)
#   error "Enumeration constant <NTC_Num_DataRngFltMsg_Z> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRngFltMsg_Z (396U)
#  define NTC_Num_DataRngFltMsg_Z (396U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRateFltMsg_Z) || (defined NTC_Num_DataRateFltMsg_Z)
#  if (!defined RTE_CONST_NTC_Num_DataRateFltMsg_Z) || (RTE_CONST_NTC_Num_DataRateFltMsg_Z != 397U)
#   error "Enumeration constant <NTC_Num_DataRateFltMsg_Z> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRateFltMsg_Z (397U)
#  define NTC_Num_DataRateFltMsg_Z (397U)
# endif
# if (defined RTE_CONST_NTC_Num_DataOtherFltMsg_Z) || (defined NTC_Num_DataOtherFltMsg_Z)
#  if (!defined RTE_CONST_NTC_Num_DataOtherFltMsg_Z) || (RTE_CONST_NTC_Num_DataOtherFltMsg_Z != 398U)
#   error "Enumeration constant <NTC_Num_DataOtherFltMsg_Z> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataOtherFltMsg_Z (398U)
#  define NTC_Num_DataOtherFltMsg_Z (398U)
# endif
# if (defined RTE_CONST_NTC_Num_InvalidMsg_AA) || (defined NTC_Num_InvalidMsg_AA)
#  if (!defined RTE_CONST_NTC_Num_InvalidMsg_AA) || (RTE_CONST_NTC_Num_InvalidMsg_AA != 400U)
#   error "Enumeration constant <NTC_Num_InvalidMsg_AA> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_InvalidMsg_AA (400U)
#  define NTC_Num_InvalidMsg_AA (400U)
# endif
# if (defined RTE_CONST_NTC_Num_MissingMsg_AA) || (defined NTC_Num_MissingMsg_AA)
#  if (!defined RTE_CONST_NTC_Num_MissingMsg_AA) || (RTE_CONST_NTC_Num_MissingMsg_AA != 401U)
#   error "Enumeration constant <NTC_Num_MissingMsg_AA> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_MissingMsg_AA (401U)
#  define NTC_Num_MissingMsg_AA (401U)
# endif
# if (defined RTE_CONST_NTC_Num_CRCFltMsg_AA) || (defined NTC_Num_CRCFltMsg_AA)
#  if (!defined RTE_CONST_NTC_Num_CRCFltMsg_AA) || (RTE_CONST_NTC_Num_CRCFltMsg_AA != 402U)
#   error "Enumeration constant <NTC_Num_CRCFltMsg_AA> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CRCFltMsg_AA (402U)
#  define NTC_Num_CRCFltMsg_AA (402U)
# endif
# if (defined RTE_CONST_NTC_Num_PgrsCntFltMsg_AA) || (defined NTC_Num_PgrsCntFltMsg_AA)
#  if (!defined RTE_CONST_NTC_Num_PgrsCntFltMsg_AA) || (RTE_CONST_NTC_Num_PgrsCntFltMsg_AA != 403U)
#   error "Enumeration constant <NTC_Num_PgrsCntFltMsg_AA> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PgrsCntFltMsg_AA (403U)
#  define NTC_Num_PgrsCntFltMsg_AA (403U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRngFltMsg_AA) || (defined NTC_Num_DataRngFltMsg_AA)
#  if (!defined RTE_CONST_NTC_Num_DataRngFltMsg_AA) || (RTE_CONST_NTC_Num_DataRngFltMsg_AA != 404U)
#   error "Enumeration constant <NTC_Num_DataRngFltMsg_AA> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRngFltMsg_AA (404U)
#  define NTC_Num_DataRngFltMsg_AA (404U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRateFltMsg_AA) || (defined NTC_Num_DataRateFltMsg_AA)
#  if (!defined RTE_CONST_NTC_Num_DataRateFltMsg_AA) || (RTE_CONST_NTC_Num_DataRateFltMsg_AA != 405U)
#   error "Enumeration constant <NTC_Num_DataRateFltMsg_AA> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRateFltMsg_AA (405U)
#  define NTC_Num_DataRateFltMsg_AA (405U)
# endif
# if (defined RTE_CONST_NTC_Num_DataOtherFltMsg_AA) || (defined NTC_Num_DataOtherFltMsg_AA)
#  if (!defined RTE_CONST_NTC_Num_DataOtherFltMsg_AA) || (RTE_CONST_NTC_Num_DataOtherFltMsg_AA != 406U)
#   error "Enumeration constant <NTC_Num_DataOtherFltMsg_AA> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataOtherFltMsg_AA (406U)
#  define NTC_Num_DataOtherFltMsg_AA (406U)
# endif
# if (defined RTE_CONST_NTC_Num_InvalidMsg_AB) || (defined NTC_Num_InvalidMsg_AB)
#  if (!defined RTE_CONST_NTC_Num_InvalidMsg_AB) || (RTE_CONST_NTC_Num_InvalidMsg_AB != 408U)
#   error "Enumeration constant <NTC_Num_InvalidMsg_AB> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_InvalidMsg_AB (408U)
#  define NTC_Num_InvalidMsg_AB (408U)
# endif
# if (defined RTE_CONST_NTC_Num_MissingMsg_AB) || (defined NTC_Num_MissingMsg_AB)
#  if (!defined RTE_CONST_NTC_Num_MissingMsg_AB) || (RTE_CONST_NTC_Num_MissingMsg_AB != 409U)
#   error "Enumeration constant <NTC_Num_MissingMsg_AB> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_MissingMsg_AB (409U)
#  define NTC_Num_MissingMsg_AB (409U)
# endif
# if (defined RTE_CONST_NTC_Num_CRCFltMsg_AB) || (defined NTC_Num_CRCFltMsg_AB)
#  if (!defined RTE_CONST_NTC_Num_CRCFltMsg_AB) || (RTE_CONST_NTC_Num_CRCFltMsg_AB != 410U)
#   error "Enumeration constant <NTC_Num_CRCFltMsg_AB> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CRCFltMsg_AB (410U)
#  define NTC_Num_CRCFltMsg_AB (410U)
# endif
# if (defined RTE_CONST_NTC_Num_PgrsCntFltMsg_AB) || (defined NTC_Num_PgrsCntFltMsg_AB)
#  if (!defined RTE_CONST_NTC_Num_PgrsCntFltMsg_AB) || (RTE_CONST_NTC_Num_PgrsCntFltMsg_AB != 411U)
#   error "Enumeration constant <NTC_Num_PgrsCntFltMsg_AB> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PgrsCntFltMsg_AB (411U)
#  define NTC_Num_PgrsCntFltMsg_AB (411U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRngFltMsg_AB) || (defined NTC_Num_DataRngFltMsg_AB)
#  if (!defined RTE_CONST_NTC_Num_DataRngFltMsg_AB) || (RTE_CONST_NTC_Num_DataRngFltMsg_AB != 412U)
#   error "Enumeration constant <NTC_Num_DataRngFltMsg_AB> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRngFltMsg_AB (412U)
#  define NTC_Num_DataRngFltMsg_AB (412U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRateFltMsg_AB) || (defined NTC_Num_DataRateFltMsg_AB)
#  if (!defined RTE_CONST_NTC_Num_DataRateFltMsg_AB) || (RTE_CONST_NTC_Num_DataRateFltMsg_AB != 413U)
#   error "Enumeration constant <NTC_Num_DataRateFltMsg_AB> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRateFltMsg_AB (413U)
#  define NTC_Num_DataRateFltMsg_AB (413U)
# endif
# if (defined RTE_CONST_NTC_Num_DataOtherFltMsg_AB) || (defined NTC_Num_DataOtherFltMsg_AB)
#  if (!defined RTE_CONST_NTC_Num_DataOtherFltMsg_AB) || (RTE_CONST_NTC_Num_DataOtherFltMsg_AB != 414U)
#   error "Enumeration constant <NTC_Num_DataOtherFltMsg_AB> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataOtherFltMsg_AB (414U)
#  define NTC_Num_DataOtherFltMsg_AB (414U)
# endif
# if (defined RTE_CONST_NTC_Num_InvalidMsg_AC) || (defined NTC_Num_InvalidMsg_AC)
#  if (!defined RTE_CONST_NTC_Num_InvalidMsg_AC) || (RTE_CONST_NTC_Num_InvalidMsg_AC != 416U)
#   error "Enumeration constant <NTC_Num_InvalidMsg_AC> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_InvalidMsg_AC (416U)
#  define NTC_Num_InvalidMsg_AC (416U)
# endif
# if (defined RTE_CONST_NTC_Num_MissingMsg_AC) || (defined NTC_Num_MissingMsg_AC)
#  if (!defined RTE_CONST_NTC_Num_MissingMsg_AC) || (RTE_CONST_NTC_Num_MissingMsg_AC != 417U)
#   error "Enumeration constant <NTC_Num_MissingMsg_AC> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_MissingMsg_AC (417U)
#  define NTC_Num_MissingMsg_AC (417U)
# endif
# if (defined RTE_CONST_NTC_Num_CRCFltMsg_AC) || (defined NTC_Num_CRCFltMsg_AC)
#  if (!defined RTE_CONST_NTC_Num_CRCFltMsg_AC) || (RTE_CONST_NTC_Num_CRCFltMsg_AC != 418U)
#   error "Enumeration constant <NTC_Num_CRCFltMsg_AC> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CRCFltMsg_AC (418U)
#  define NTC_Num_CRCFltMsg_AC (418U)
# endif
# if (defined RTE_CONST_NTC_Num_PgrsCntFltMsg_AC) || (defined NTC_Num_PgrsCntFltMsg_AC)
#  if (!defined RTE_CONST_NTC_Num_PgrsCntFltMsg_AC) || (RTE_CONST_NTC_Num_PgrsCntFltMsg_AC != 419U)
#   error "Enumeration constant <NTC_Num_PgrsCntFltMsg_AC> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PgrsCntFltMsg_AC (419U)
#  define NTC_Num_PgrsCntFltMsg_AC (419U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRngFltMsg_AC) || (defined NTC_Num_DataRngFltMsg_AC)
#  if (!defined RTE_CONST_NTC_Num_DataRngFltMsg_AC) || (RTE_CONST_NTC_Num_DataRngFltMsg_AC != 420U)
#   error "Enumeration constant <NTC_Num_DataRngFltMsg_AC> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRngFltMsg_AC (420U)
#  define NTC_Num_DataRngFltMsg_AC (420U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRateFltMsg_AC) || (defined NTC_Num_DataRateFltMsg_AC)
#  if (!defined RTE_CONST_NTC_Num_DataRateFltMsg_AC) || (RTE_CONST_NTC_Num_DataRateFltMsg_AC != 421U)
#   error "Enumeration constant <NTC_Num_DataRateFltMsg_AC> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRateFltMsg_AC (421U)
#  define NTC_Num_DataRateFltMsg_AC (421U)
# endif
# if (defined RTE_CONST_NTC_Num_DataOtherFltMsg_AC) || (defined NTC_Num_DataOtherFltMsg_AC)
#  if (!defined RTE_CONST_NTC_Num_DataOtherFltMsg_AC) || (RTE_CONST_NTC_Num_DataOtherFltMsg_AC != 422U)
#   error "Enumeration constant <NTC_Num_DataOtherFltMsg_AC> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataOtherFltMsg_AC (422U)
#  define NTC_Num_DataOtherFltMsg_AC (422U)
# endif
# if (defined RTE_CONST_NTC_Num_InvalidMsg_AD) || (defined NTC_Num_InvalidMsg_AD)
#  if (!defined RTE_CONST_NTC_Num_InvalidMsg_AD) || (RTE_CONST_NTC_Num_InvalidMsg_AD != 424U)
#   error "Enumeration constant <NTC_Num_InvalidMsg_AD> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_InvalidMsg_AD (424U)
#  define NTC_Num_InvalidMsg_AD (424U)
# endif
# if (defined RTE_CONST_NTC_Num_MissingMsg_AD) || (defined NTC_Num_MissingMsg_AD)
#  if (!defined RTE_CONST_NTC_Num_MissingMsg_AD) || (RTE_CONST_NTC_Num_MissingMsg_AD != 425U)
#   error "Enumeration constant <NTC_Num_MissingMsg_AD> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_MissingMsg_AD (425U)
#  define NTC_Num_MissingMsg_AD (425U)
# endif
# if (defined RTE_CONST_NTC_Num_CRCFltMsg_AD) || (defined NTC_Num_CRCFltMsg_AD)
#  if (!defined RTE_CONST_NTC_Num_CRCFltMsg_AD) || (RTE_CONST_NTC_Num_CRCFltMsg_AD != 426U)
#   error "Enumeration constant <NTC_Num_CRCFltMsg_AD> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CRCFltMsg_AD (426U)
#  define NTC_Num_CRCFltMsg_AD (426U)
# endif
# if (defined RTE_CONST_NTC_Num_PgrsCntFltMsg_AD) || (defined NTC_Num_PgrsCntFltMsg_AD)
#  if (!defined RTE_CONST_NTC_Num_PgrsCntFltMsg_AD) || (RTE_CONST_NTC_Num_PgrsCntFltMsg_AD != 427U)
#   error "Enumeration constant <NTC_Num_PgrsCntFltMsg_AD> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PgrsCntFltMsg_AD (427U)
#  define NTC_Num_PgrsCntFltMsg_AD (427U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRngFltMsg_AD) || (defined NTC_Num_DataRngFltMsg_AD)
#  if (!defined RTE_CONST_NTC_Num_DataRngFltMsg_AD) || (RTE_CONST_NTC_Num_DataRngFltMsg_AD != 428U)
#   error "Enumeration constant <NTC_Num_DataRngFltMsg_AD> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRngFltMsg_AD (428U)
#  define NTC_Num_DataRngFltMsg_AD (428U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRateFltMsg_AD) || (defined NTC_Num_DataRateFltMsg_AD)
#  if (!defined RTE_CONST_NTC_Num_DataRateFltMsg_AD) || (RTE_CONST_NTC_Num_DataRateFltMsg_AD != 429U)
#   error "Enumeration constant <NTC_Num_DataRateFltMsg_AD> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRateFltMsg_AD (429U)
#  define NTC_Num_DataRateFltMsg_AD (429U)
# endif
# if (defined RTE_CONST_NTC_Num_DataOtherFltMsg_AD) || (defined NTC_Num_DataOtherFltMsg_AD)
#  if (!defined RTE_CONST_NTC_Num_DataOtherFltMsg_AD) || (RTE_CONST_NTC_Num_DataOtherFltMsg_AD != 430U)
#   error "Enumeration constant <NTC_Num_DataOtherFltMsg_AD> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataOtherFltMsg_AD (430U)
#  define NTC_Num_DataOtherFltMsg_AD (430U)
# endif
# if (defined RTE_CONST_NTC_Num_InvalidMsg_AE) || (defined NTC_Num_InvalidMsg_AE)
#  if (!defined RTE_CONST_NTC_Num_InvalidMsg_AE) || (RTE_CONST_NTC_Num_InvalidMsg_AE != 432U)
#   error "Enumeration constant <NTC_Num_InvalidMsg_AE> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_InvalidMsg_AE (432U)
#  define NTC_Num_InvalidMsg_AE (432U)
# endif
# if (defined RTE_CONST_NTC_Num_MissingMsg_AE) || (defined NTC_Num_MissingMsg_AE)
#  if (!defined RTE_CONST_NTC_Num_MissingMsg_AE) || (RTE_CONST_NTC_Num_MissingMsg_AE != 433U)
#   error "Enumeration constant <NTC_Num_MissingMsg_AE> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_MissingMsg_AE (433U)
#  define NTC_Num_MissingMsg_AE (433U)
# endif
# if (defined RTE_CONST_NTC_Num_CRCFltMsg_AE) || (defined NTC_Num_CRCFltMsg_AE)
#  if (!defined RTE_CONST_NTC_Num_CRCFltMsg_AE) || (RTE_CONST_NTC_Num_CRCFltMsg_AE != 434U)
#   error "Enumeration constant <NTC_Num_CRCFltMsg_AE> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CRCFltMsg_AE (434U)
#  define NTC_Num_CRCFltMsg_AE (434U)
# endif
# if (defined RTE_CONST_NTC_Num_PgrsCntFltMsg_AE) || (defined NTC_Num_PgrsCntFltMsg_AE)
#  if (!defined RTE_CONST_NTC_Num_PgrsCntFltMsg_AE) || (RTE_CONST_NTC_Num_PgrsCntFltMsg_AE != 435U)
#   error "Enumeration constant <NTC_Num_PgrsCntFltMsg_AE> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PgrsCntFltMsg_AE (435U)
#  define NTC_Num_PgrsCntFltMsg_AE (435U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRngFltMsg_AE) || (defined NTC_Num_DataRngFltMsg_AE)
#  if (!defined RTE_CONST_NTC_Num_DataRngFltMsg_AE) || (RTE_CONST_NTC_Num_DataRngFltMsg_AE != 436U)
#   error "Enumeration constant <NTC_Num_DataRngFltMsg_AE> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRngFltMsg_AE (436U)
#  define NTC_Num_DataRngFltMsg_AE (436U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRateFltMsg_AE) || (defined NTC_Num_DataRateFltMsg_AE)
#  if (!defined RTE_CONST_NTC_Num_DataRateFltMsg_AE) || (RTE_CONST_NTC_Num_DataRateFltMsg_AE != 437U)
#   error "Enumeration constant <NTC_Num_DataRateFltMsg_AE> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRateFltMsg_AE (437U)
#  define NTC_Num_DataRateFltMsg_AE (437U)
# endif
# if (defined RTE_CONST_NTC_Num_DataOtherFltMsg_AE) || (defined NTC_Num_DataOtherFltMsg_AE)
#  if (!defined RTE_CONST_NTC_Num_DataOtherFltMsg_AE) || (RTE_CONST_NTC_Num_DataOtherFltMsg_AE != 438U)
#   error "Enumeration constant <NTC_Num_DataOtherFltMsg_AE> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataOtherFltMsg_AE (438U)
#  define NTC_Num_DataOtherFltMsg_AE (438U)
# endif
# if (defined RTE_CONST_NTC_Num_InvalidMsg_AF) || (defined NTC_Num_InvalidMsg_AF)
#  if (!defined RTE_CONST_NTC_Num_InvalidMsg_AF) || (RTE_CONST_NTC_Num_InvalidMsg_AF != 440U)
#   error "Enumeration constant <NTC_Num_InvalidMsg_AF> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_InvalidMsg_AF (440U)
#  define NTC_Num_InvalidMsg_AF (440U)
# endif
# if (defined RTE_CONST_NTC_Num_MissingMsg_AF) || (defined NTC_Num_MissingMsg_AF)
#  if (!defined RTE_CONST_NTC_Num_MissingMsg_AF) || (RTE_CONST_NTC_Num_MissingMsg_AF != 441U)
#   error "Enumeration constant <NTC_Num_MissingMsg_AF> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_MissingMsg_AF (441U)
#  define NTC_Num_MissingMsg_AF (441U)
# endif
# if (defined RTE_CONST_NTC_Num_CRCFltMsg_AF) || (defined NTC_Num_CRCFltMsg_AF)
#  if (!defined RTE_CONST_NTC_Num_CRCFltMsg_AF) || (RTE_CONST_NTC_Num_CRCFltMsg_AF != 442U)
#   error "Enumeration constant <NTC_Num_CRCFltMsg_AF> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CRCFltMsg_AF (442U)
#  define NTC_Num_CRCFltMsg_AF (442U)
# endif
# if (defined RTE_CONST_NTC_Num_PgrsCntFltMsg_AF) || (defined NTC_Num_PgrsCntFltMsg_AF)
#  if (!defined RTE_CONST_NTC_Num_PgrsCntFltMsg_AF) || (RTE_CONST_NTC_Num_PgrsCntFltMsg_AF != 443U)
#   error "Enumeration constant <NTC_Num_PgrsCntFltMsg_AF> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PgrsCntFltMsg_AF (443U)
#  define NTC_Num_PgrsCntFltMsg_AF (443U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRngFltMsg_AF) || (defined NTC_Num_DataRngFltMsg_AF)
#  if (!defined RTE_CONST_NTC_Num_DataRngFltMsg_AF) || (RTE_CONST_NTC_Num_DataRngFltMsg_AF != 444U)
#   error "Enumeration constant <NTC_Num_DataRngFltMsg_AF> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRngFltMsg_AF (444U)
#  define NTC_Num_DataRngFltMsg_AF (444U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRateFltMsg_AF) || (defined NTC_Num_DataRateFltMsg_AF)
#  if (!defined RTE_CONST_NTC_Num_DataRateFltMsg_AF) || (RTE_CONST_NTC_Num_DataRateFltMsg_AF != 445U)
#   error "Enumeration constant <NTC_Num_DataRateFltMsg_AF> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRateFltMsg_AF (445U)
#  define NTC_Num_DataRateFltMsg_AF (445U)
# endif
# if (defined RTE_CONST_NTC_Num_DataOtherFltMsg_AF) || (defined NTC_Num_DataOtherFltMsg_AF)
#  if (!defined RTE_CONST_NTC_Num_DataOtherFltMsg_AF) || (RTE_CONST_NTC_Num_DataOtherFltMsg_AF != 446U)
#   error "Enumeration constant <NTC_Num_DataOtherFltMsg_AF> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataOtherFltMsg_AF (446U)
#  define NTC_Num_DataOtherFltMsg_AF (446U)
# endif
# if (defined RTE_CONST_NTC_Num_InvalidMsg_AG) || (defined NTC_Num_InvalidMsg_AG)
#  if (!defined RTE_CONST_NTC_Num_InvalidMsg_AG) || (RTE_CONST_NTC_Num_InvalidMsg_AG != 448U)
#   error "Enumeration constant <NTC_Num_InvalidMsg_AG> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_InvalidMsg_AG (448U)
#  define NTC_Num_InvalidMsg_AG (448U)
# endif
# if (defined RTE_CONST_NTC_Num_MissingMsg_AG) || (defined NTC_Num_MissingMsg_AG)
#  if (!defined RTE_CONST_NTC_Num_MissingMsg_AG) || (RTE_CONST_NTC_Num_MissingMsg_AG != 449U)
#   error "Enumeration constant <NTC_Num_MissingMsg_AG> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_MissingMsg_AG (449U)
#  define NTC_Num_MissingMsg_AG (449U)
# endif
# if (defined RTE_CONST_NTC_Num_CRCFltMsg_AG) || (defined NTC_Num_CRCFltMsg_AG)
#  if (!defined RTE_CONST_NTC_Num_CRCFltMsg_AG) || (RTE_CONST_NTC_Num_CRCFltMsg_AG != 450U)
#   error "Enumeration constant <NTC_Num_CRCFltMsg_AG> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CRCFltMsg_AG (450U)
#  define NTC_Num_CRCFltMsg_AG (450U)
# endif
# if (defined RTE_CONST_NTC_Num_PgrsCntFltMsg_AG) || (defined NTC_Num_PgrsCntFltMsg_AG)
#  if (!defined RTE_CONST_NTC_Num_PgrsCntFltMsg_AG) || (RTE_CONST_NTC_Num_PgrsCntFltMsg_AG != 451U)
#   error "Enumeration constant <NTC_Num_PgrsCntFltMsg_AG> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PgrsCntFltMsg_AG (451U)
#  define NTC_Num_PgrsCntFltMsg_AG (451U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRngFltMsg_AG) || (defined NTC_Num_DataRngFltMsg_AG)
#  if (!defined RTE_CONST_NTC_Num_DataRngFltMsg_AG) || (RTE_CONST_NTC_Num_DataRngFltMsg_AG != 452U)
#   error "Enumeration constant <NTC_Num_DataRngFltMsg_AG> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRngFltMsg_AG (452U)
#  define NTC_Num_DataRngFltMsg_AG (452U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRateFltMsg_AG) || (defined NTC_Num_DataRateFltMsg_AG)
#  if (!defined RTE_CONST_NTC_Num_DataRateFltMsg_AG) || (RTE_CONST_NTC_Num_DataRateFltMsg_AG != 453U)
#   error "Enumeration constant <NTC_Num_DataRateFltMsg_AG> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRateFltMsg_AG (453U)
#  define NTC_Num_DataRateFltMsg_AG (453U)
# endif
# if (defined RTE_CONST_NTC_Num_DataOtherFltMsg_AG) || (defined NTC_Num_DataOtherFltMsg_AG)
#  if (!defined RTE_CONST_NTC_Num_DataOtherFltMsg_AG) || (RTE_CONST_NTC_Num_DataOtherFltMsg_AG != 454U)
#   error "Enumeration constant <NTC_Num_DataOtherFltMsg_AG> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataOtherFltMsg_AG (454U)
#  define NTC_Num_DataOtherFltMsg_AG (454U)
# endif
# if (defined RTE_CONST_NTC_Num_InvalidMsg_AH) || (defined NTC_Num_InvalidMsg_AH)
#  if (!defined RTE_CONST_NTC_Num_InvalidMsg_AH) || (RTE_CONST_NTC_Num_InvalidMsg_AH != 456U)
#   error "Enumeration constant <NTC_Num_InvalidMsg_AH> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_InvalidMsg_AH (456U)
#  define NTC_Num_InvalidMsg_AH (456U)
# endif
# if (defined RTE_CONST_NTC_Num_MissingMsg_AH) || (defined NTC_Num_MissingMsg_AH)
#  if (!defined RTE_CONST_NTC_Num_MissingMsg_AH) || (RTE_CONST_NTC_Num_MissingMsg_AH != 457U)
#   error "Enumeration constant <NTC_Num_MissingMsg_AH> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_MissingMsg_AH (457U)
#  define NTC_Num_MissingMsg_AH (457U)
# endif
# if (defined RTE_CONST_NTC_Num_CRCFltMsg_AH) || (defined NTC_Num_CRCFltMsg_AH)
#  if (!defined RTE_CONST_NTC_Num_CRCFltMsg_AH) || (RTE_CONST_NTC_Num_CRCFltMsg_AH != 458U)
#   error "Enumeration constant <NTC_Num_CRCFltMsg_AH> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CRCFltMsg_AH (458U)
#  define NTC_Num_CRCFltMsg_AH (458U)
# endif
# if (defined RTE_CONST_NTC_Num_PgrsCntFltMsg_AH) || (defined NTC_Num_PgrsCntFltMsg_AH)
#  if (!defined RTE_CONST_NTC_Num_PgrsCntFltMsg_AH) || (RTE_CONST_NTC_Num_PgrsCntFltMsg_AH != 459U)
#   error "Enumeration constant <NTC_Num_PgrsCntFltMsg_AH> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_PgrsCntFltMsg_AH (459U)
#  define NTC_Num_PgrsCntFltMsg_AH (459U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRngFltMsg_AH) || (defined NTC_Num_DataRngFltMsg_AH)
#  if (!defined RTE_CONST_NTC_Num_DataRngFltMsg_AH) || (RTE_CONST_NTC_Num_DataRngFltMsg_AH != 460U)
#   error "Enumeration constant <NTC_Num_DataRngFltMsg_AH> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRngFltMsg_AH (460U)
#  define NTC_Num_DataRngFltMsg_AH (460U)
# endif
# if (defined RTE_CONST_NTC_Num_DataRateFltMsg_AH) || (defined NTC_Num_DataRateFltMsg_AH)
#  if (!defined RTE_CONST_NTC_Num_DataRateFltMsg_AH) || (RTE_CONST_NTC_Num_DataRateFltMsg_AH != 461U)
#   error "Enumeration constant <NTC_Num_DataRateFltMsg_AH> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataRateFltMsg_AH (461U)
#  define NTC_Num_DataRateFltMsg_AH (461U)
# endif
# if (defined RTE_CONST_NTC_Num_DataOtherFltMsg_AH) || (defined NTC_Num_DataOtherFltMsg_AH)
#  if (!defined RTE_CONST_NTC_Num_DataOtherFltMsg_AH) || (RTE_CONST_NTC_Num_DataOtherFltMsg_AH != 462U)
#   error "Enumeration constant <NTC_Num_DataOtherFltMsg_AH> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DataOtherFltMsg_AH (462U)
#  define NTC_Num_DataOtherFltMsg_AH (462U)
# endif
# if (defined RTE_CONST_NTC_Num_FlexrayCommunicationError) || (defined NTC_Num_FlexrayCommunicationError)
#  if (!defined RTE_CONST_NTC_Num_FlexrayCommunicationError) || (RTE_CONST_NTC_Num_FlexrayCommunicationError != 465U)
#   error "Enumeration constant <NTC_Num_FlexrayCommunicationError> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_FlexrayCommunicationError (465U)
#  define NTC_Num_FlexrayCommunicationError (465U)
# endif
# if (defined RTE_CONST_NTC_Num_SysConsistencyVerf) || (defined NTC_Num_SysConsistencyVerf)
#  if (!defined RTE_CONST_NTC_Num_SysConsistencyVerf) || (RTE_CONST_NTC_Num_SysConsistencyVerf != 496U)
#   error "Enumeration constant <NTC_Num_SysConsistencyVerf> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_SysConsistencyVerf (496U)
#  define NTC_Num_SysConsistencyVerf (496U)
# endif
# if (defined RTE_CONST_NTC_Num_ConfigMisMatch) || (defined NTC_Num_ConfigMisMatch)
#  if (!defined RTE_CONST_NTC_Num_ConfigMisMatch) || (RTE_CONST_NTC_Num_ConfigMisMatch != 497U)
#   error "Enumeration constant <NTC_Num_ConfigMisMatch> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_ConfigMisMatch (497U)
#  define NTC_Num_ConfigMisMatch (497U)
# endif
# if (defined RTE_CONST_NTC_Num_CalNotPrgmd) || (defined NTC_Num_CalNotPrgmd)
#  if (!defined RTE_CONST_NTC_Num_CalNotPrgmd) || (RTE_CONST_NTC_Num_CalNotPrgmd != 498U)
#   error "Enumeration constant <NTC_Num_CalNotPrgmd> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_CalNotPrgmd (498U)
#  define NTC_Num_CalNotPrgmd (498U)
# endif
# if (defined RTE_CONST_NTC_Num_EOLVehTunNtPerf) || (defined NTC_Num_EOLVehTunNtPerf)
#  if (!defined RTE_CONST_NTC_Num_EOLVehTunNtPerf) || (RTE_CONST_NTC_Num_EOLVehTunNtPerf != 501U)
#   error "Enumeration constant <NTC_Num_EOLVehTunNtPerf> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_EOLVehTunNtPerf (501U)
#  define NTC_Num_EOLVehTunNtPerf (501U)
# endif
# if (defined RTE_CONST_NTC_Num_MtrSensorNotTrimmed) || (defined NTC_Num_MtrSensorNotTrimmed)
#  if (!defined RTE_CONST_NTC_Num_MtrSensorNotTrimmed) || (RTE_CONST_NTC_Num_MtrSensorNotTrimmed != 502U)
#   error "Enumeration constant <NTC_Num_MtrSensorNotTrimmed> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_MtrSensorNotTrimmed (502U)
#  define NTC_Num_MtrSensorNotTrimmed (502U)
# endif
# if (defined RTE_CONST_NTC_Num_HWASensorNotTrimmed) || (defined NTC_Num_HWASensorNotTrimmed)
#  if (!defined RTE_CONST_NTC_Num_HWASensorNotTrimmed) || (RTE_CONST_NTC_Num_HWASensorNotTrimmed != 504U)
#   error "Enumeration constant <NTC_Num_HWASensorNotTrimmed> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_HWASensorNotTrimmed (504U)
#  define NTC_Num_HWASensorNotTrimmed (504U)
# endif
# if (defined RTE_CONST_NTC_Num_HWASensorTrimNoAttempt) || (defined NTC_Num_HWASensorTrimNoAttempt)
#  if (!defined RTE_CONST_NTC_Num_HWASensorTrimNoAttempt) || (RTE_CONST_NTC_Num_HWASensorTrimNoAttempt != 505U)
#   error "Enumeration constant <NTC_Num_HWASensorTrimNoAttempt> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_HWASensorTrimNoAttempt (505U)
#  define NTC_Num_HWASensorTrimNoAttempt (505U)
# endif
# if (defined RTE_CONST_NTC_Num_TrqSensorScaleNotSet) || (defined NTC_Num_TrqSensorScaleNotSet)
#  if (!defined RTE_CONST_NTC_Num_TrqSensorScaleNotSet) || (RTE_CONST_NTC_Num_TrqSensorScaleNotSet != 506U)
#   error "Enumeration constant <NTC_Num_TrqSensorScaleNotSet> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_TrqSensorScaleNotSet (506U)
#  define NTC_Num_TrqSensorScaleNotSet (506U)
# endif
# if (defined RTE_CONST_NTC_Num_TrqSensorNotTrimmed) || (defined NTC_Num_TrqSensorNotTrimmed)
#  if (!defined RTE_CONST_NTC_Num_TrqSensorNotTrimmed) || (RTE_CONST_NTC_Num_TrqSensorNotTrimmed != 507U)
#   error "Enumeration constant <NTC_Num_TrqSensorNotTrimmed> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_TrqSensorNotTrimmed (507U)
#  define NTC_Num_TrqSensorNotTrimmed (507U)
# endif
# if (defined RTE_CONST_NTC_Num_DigTrqSensorScaleNotSet) || (defined NTC_Num_DigTrqSensorScaleNotSet)
#  if (!defined RTE_CONST_NTC_Num_DigTrqSensorScaleNotSet) || (RTE_CONST_NTC_Num_DigTrqSensorScaleNotSet != 509U)
#   error "Enumeration constant <NTC_Num_DigTrqSensorScaleNotSet> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DigTrqSensorScaleNotSet (509U)
#  define NTC_Num_DigTrqSensorScaleNotSet (509U)
# endif
# if (defined RTE_CONST_NTC_Num_DigTrqSensorNotTrimmed) || (defined NTC_Num_DigTrqSensorNotTrimmed)
#  if (!defined RTE_CONST_NTC_Num_DigTrqSensorNotTrimmed) || (RTE_CONST_NTC_Num_DigTrqSensorNotTrimmed != 510U)
#   error "Enumeration constant <NTC_Num_DigTrqSensorNotTrimmed> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_Num_DigTrqSensorNotTrimmed (510U)
#  define NTC_Num_DigTrqSensorNotTrimmed (510U)
# endif

# define Rte_TypeDef_NxtrDiagMgrStatus
typedef uint8 NxtrDiagMgrStatus;
# define NxtrDiagMgrStatus_LowerLimit (0U)
# define NxtrDiagMgrStatus_UpperLimit (255U)
# if (defined RTE_CONST_NTC_STATUS_PASSED) || (defined NTC_STATUS_PASSED)
#  if (!defined RTE_CONST_NTC_STATUS_PASSED) || (RTE_CONST_NTC_STATUS_PASSED != 0U)
#   error "Enumeration constant <NTC_STATUS_PASSED> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_STATUS_PASSED (0U)
#  define NTC_STATUS_PASSED (0U)
# endif
# if (defined RTE_CONST_NTC_STATUS_FAILED) || (defined NTC_STATUS_FAILED)
#  if (!defined RTE_CONST_NTC_STATUS_FAILED) || (RTE_CONST_NTC_STATUS_FAILED != 1U)
#   error "Enumeration constant <NTC_STATUS_FAILED> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_STATUS_FAILED (1U)
#  define NTC_STATUS_FAILED (1U)
# endif
# if (defined RTE_CONST_NTC_STATUS_PREPASSED) || (defined NTC_STATUS_PREPASSED)
#  if (!defined RTE_CONST_NTC_STATUS_PREPASSED) || (RTE_CONST_NTC_STATUS_PREPASSED != 2U)
#   error "Enumeration constant <NTC_STATUS_PREPASSED> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_STATUS_PREPASSED (2U)
#  define NTC_STATUS_PREPASSED (2U)
# endif
# if (defined RTE_CONST_NTC_STATUS_PREFAILED) || (defined NTC_STATUS_PREFAILED)
#  if (!defined RTE_CONST_NTC_STATUS_PREFAILED) || (RTE_CONST_NTC_STATUS_PREFAILED != 3U)
#   error "Enumeration constant <NTC_STATUS_PREFAILED> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_NTC_STATUS_PREFAILED (3U)
#  define NTC_STATUS_PREFAILED (3U)
# endif


# ifndef RTE_SUPPRESS_UNUSED_DATATYPES
/**********************************************************************************************************************
 * Unused Data type definitions
 *********************************************************************************************************************/

#  define Rte_TypeDef_Double
typedef float64 Double;
#  define Double_LowerLimit (-DBL_MAX)
#  define Double_UpperLimit (DBL_MAX)

#  define Rte_TypeDef_SInt32
typedef sint32 SInt32;
#  define SInt32_LowerLimit (-2147483648)
#  define SInt32_UpperLimit (2147483647)

#  define Rte_TypeDef_SInt8
typedef sint8 SInt8;
#  define SInt8_LowerLimit (-128)
#  define SInt8_UpperLimit (127)

#  define Rte_TypeDef_UInt16
typedef uint16 UInt16;
#  define UInt16_LowerLimit (0U)
#  define UInt16_UpperLimit (65535U)

#  define Rte_TypeDef_UInt32
typedef uint32 UInt32;
#  define UInt32_LowerLimit (0U)
#  define UInt32_UpperLimit (4294967295U)

#  define Rte_TypeDef_NvM_RequestResultType
typedef uint8 NvM_RequestResultType;
#  define NvM_RequestResultType_LowerLimit (0U)
#  define NvM_RequestResultType_UpperLimit (5U)
#  if (defined RTE_CONST_NVM_REQ_OK) || (defined NVM_REQ_OK)
#   if (!defined RTE_CONST_NVM_REQ_OK) || (RTE_CONST_NVM_REQ_OK != 0U)
#    error "Enumeration constant <NVM_REQ_OK> conflicts with another constant."
#   endif
#  else
#   define RTE_CONST_NVM_REQ_OK (0U)
#   define NVM_REQ_OK (0U)
#  endif
#  if (defined RTE_CONST_NVM_REQ_NOT_OK) || (defined NVM_REQ_NOT_OK)
#   if (!defined RTE_CONST_NVM_REQ_NOT_OK) || (RTE_CONST_NVM_REQ_NOT_OK != 1U)
#    error "Enumeration constant <NVM_REQ_NOT_OK> conflicts with another constant."
#   endif
#  else
#   define RTE_CONST_NVM_REQ_NOT_OK (1U)
#   define NVM_REQ_NOT_OK (1U)
#  endif
#  if (defined RTE_CONST_NVM_REQ_PENDING) || (defined NVM_REQ_PENDING)
#   if (!defined RTE_CONST_NVM_REQ_PENDING) || (RTE_CONST_NVM_REQ_PENDING != 2U)
#    error "Enumeration constant <NVM_REQ_PENDING> conflicts with another constant."
#   endif
#  else
#   define RTE_CONST_NVM_REQ_PENDING (2U)
#   define NVM_REQ_PENDING (2U)
#  endif
#  if (defined RTE_CONST_NVM_REQ_INTEGRITY_FAILED) || (defined NVM_REQ_INTEGRITY_FAILED)
#   if (!defined RTE_CONST_NVM_REQ_INTEGRITY_FAILED) || (RTE_CONST_NVM_REQ_INTEGRITY_FAILED != 3U)
#    error "Enumeration constant <NVM_REQ_INTEGRITY_FAILED> conflicts with another constant."
#   endif
#  else
#   define RTE_CONST_NVM_REQ_INTEGRITY_FAILED (3U)
#   define NVM_REQ_INTEGRITY_FAILED (3U)
#  endif
#  if (defined RTE_CONST_NVM_REQ_BLOCK_SKIPPED) || (defined NVM_REQ_BLOCK_SKIPPED)
#   if (!defined RTE_CONST_NVM_REQ_BLOCK_SKIPPED) || (RTE_CONST_NVM_REQ_BLOCK_SKIPPED != 4U)
#    error "Enumeration constant <NVM_REQ_BLOCK_SKIPPED> conflicts with another constant."
#   endif
#  else
#   define RTE_CONST_NVM_REQ_BLOCK_SKIPPED (4U)
#   define NVM_REQ_BLOCK_SKIPPED (4U)
#  endif
#  if (defined RTE_CONST_NVM_REQ_NV_INVALIDATED) || (defined NVM_REQ_NV_INVALIDATED)
#   if (!defined RTE_CONST_NVM_REQ_NV_INVALIDATED) || (RTE_CONST_NVM_REQ_NV_INVALIDATED != 5U)
#    error "Enumeration constant <NVM_REQ_NV_INVALIDATED> conflicts with another constant."
#   endif
#  else
#   define RTE_CONST_NVM_REQ_NV_INVALIDATED (5U)
#   define NVM_REQ_NV_INVALIDATED (5U)
#  endif

#  define Rte_TypeDef_NvM_DestPtr
typedef UInt8 NvM_DestPtr[65535];

# endif


/**********************************************************************************************************************
 * Constant value definitions
 *********************************************************************************************************************/

# if (defined RTE_CONST_D_FALSE_CNT_LGC) || (defined D_FALSE_CNT_LGC)
#  if (!defined RTE_CONST_D_FALSE_CNT_LGC) || (RTE_CONST_D_FALSE_CNT_LGC != FALSE)
#   error "Constant value <D_FALSE_CNT_LGC> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_D_FALSE_CNT_LGC (FALSE)
#  define D_FALSE_CNT_LGC (FALSE)
# endif

# if (defined RTE_CONST_D_ONE_ULS_F32) || (defined D_ONE_ULS_F32)
#  if (!defined RTE_CONST_D_ONE_ULS_F32) || (RTE_CONST_D_ONE_ULS_F32 != 1.0F)
#   error "Constant value <D_ONE_ULS_F32> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_D_ONE_ULS_F32 (1.0F)
#  define D_ONE_ULS_F32 (1.0F)
# endif

# if (defined RTE_CONST_D_ZERO_ULS_F32) || (defined D_ZERO_ULS_F32)
#  if (!defined RTE_CONST_D_ZERO_ULS_F32) || (RTE_CONST_D_ZERO_ULS_F32 != 0.0F)
#   error "Constant value <D_ZERO_ULS_F32> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_D_ZERO_ULS_F32 (0.0F)
#  define D_ZERO_ULS_F32 (0.0F)
# endif

# if (defined RTE_CONST_D_NEGONE_CNT_S16) || (defined D_NEGONE_CNT_S16)
#  if (!defined RTE_CONST_D_NEGONE_CNT_S16) || (RTE_CONST_D_NEGONE_CNT_S16 != -1)
#   error "Constant value <D_NEGONE_CNT_S16> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_D_NEGONE_CNT_S16 (-1)
#  define D_NEGONE_CNT_S16 (-1)
# endif



/**********************************************************************************************************************
 * Type definitions for implicit access to S/R communication
 *********************************************************************************************************************/
/* Types for Data Handles section */

typedef struct
{
  Boolean value;
} Rte_DE_Boolean;

typedef struct
{
  Float value;
} Rte_DE_Float;

typedef struct
{
  ManufModeType value;
} Rte_DE_ManufModeType;


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_Ap_ReturnFirewall
{
  /* Data Handles section */
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_AP_RETURNFIREWALL_APPL_VAR) ReturnFirewall_Per1_Defeat_Return_Svc_Cnt_lgc;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_RETURNFIREWALL_APPL_VAR) ReturnFirewall_Per1_HandwheelPosition_HwDeg_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_RETURNFIREWALL_APPL_VAR) ReturnFirewall_Per1_LimitedReturn_MtrNm_f32;
  P2VAR(Rte_DE_ManufModeType, TYPEDEF, RTE_AP_RETURNFIREWALL_APPL_VAR) ReturnFirewall_Per1_MEC_Counter_Cnt_enum;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_RETURNFIREWALL_APPL_VAR) ReturnFirewall_Per1_ReturnCmd_MtrNm_f32;
  P2VAR(Rte_DE_Float, TYPEDEF, RTE_AP_RETURNFIREWALL_APPL_VAR) ReturnFirewall_Per1_VehicleSpeed_Kph_f32;
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h"

extern CONSTP2CONST(struct Rte_CDS_Ap_ReturnFirewall, RTE_CONST, RTE_CONST) Rte_Inst_Ap_ReturnFirewall;

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h"

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1368487235
#    error "The magic number of the generated file <C:/Synergy_projects/ReturnFirewall-lz4p8n/ReturnFirewall/utp/contract/Ap_ReturnFirewall/Rte_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1368487235
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TYPE_H */
