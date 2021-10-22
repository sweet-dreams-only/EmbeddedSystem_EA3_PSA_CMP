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
 *          File:  Rte_Compiler_Cfg.h
 *     Workspace:  C:/Components/PSA_CMP/PSA_CMP_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nxtr  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  RTE Compiler Abstraction header file
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_COMPILER_CFG_H
# define _RTE_COMPILER_CFG_H


/**********************************************************************************************************************
 * RTE specific defines
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_CODE
 *********************************************************************************************************************/

/* used for code */
# define RTE_CODE

/* used for all global or static variables that are not initialized by the startup code of the compiler */
# define RTE_VAR_NOINIT

/* used for global or static variables that are initialized with zero by the startup code of the compiler or in Rte_InitMemory */
# define RTE_VAR_ZERO_INIT

/* used for global or static variables that are initialized by the startup code of the compiler or in Rte_InitMemory */
# define RTE_VAR_INIT

/* used for global or static constants */
# define RTE_CONST

/* used for references on application data (variables or constants */
# define RTE_APPL_DATA

/* used for references on application variables */
# define RTE_APPL_VAR

/* used for references on application functions */
# define RTE_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * SW-C specific defines
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_ABSHWPOS_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_ABSHWPOS_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_ABSHWPOS_APPL_DATA

/* used for references on application functions */
# define RTE_AP_ABSHWPOS_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_ACTIVEPULL_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_ACTIVEPULL_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_ACTIVEPULL_APPL_DATA

/* used for references on application functions */
# define RTE_AP_ACTIVEPULL_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_APXCP_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_APXCP_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_APXCP_APPL_DATA

/* used for references on application functions */
# define RTE_AP_APXCP_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_ASSIST_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_ASSIST_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_ASSIST_APPL_DATA

/* used for references on application functions */
# define RTE_AP_ASSIST_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_ASSISTFIREWALL_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_ASSISTFIREWALL_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_ASSISTFIREWALL_APPL_DATA

/* used for references on application functions */
# define RTE_AP_ASSISTFIREWALL_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_ASTLMT_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_ASTLMT_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_ASTLMT_APPL_DATA

/* used for references on application functions */
# define RTE_AP_ASTLMT_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_AVGFRICLRN_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_AVGFRICLRN_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_AVGFRICLRN_APPL_DATA

/* used for references on application functions */
# define RTE_AP_AVGFRICLRN_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_BVDIAG_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_BVDIAG_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_BVDIAG_APPL_DATA

/* used for references on application functions */
# define RTE_AP_BVDIAG_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_BATTERYVOLTAGE_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_BATTERYVOLTAGE_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_BATTERYVOLTAGE_APPL_DATA

/* used for references on application functions */
# define RTE_AP_BATTERYVOLTAGE_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_CHKPTAP10_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_CHKPTAP10_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_CHKPTAP10_APPL_DATA

/* used for references on application functions */
# define RTE_AP_CHKPTAP10_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_CHKPTAP11_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_CHKPTAP11_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_CHKPTAP11_APPL_DATA

/* used for references on application functions */
# define RTE_AP_CHKPTAP11_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_CHKPTAP6_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_CHKPTAP6_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_CHKPTAP6_APPL_DATA

/* used for references on application functions */
# define RTE_AP_CHKPTAP6_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_CHKPTAP9_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_CHKPTAP9_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_CHKPTAP9_APPL_DATA

/* used for references on application functions */
# define RTE_AP_CHKPTAP9_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_COMPLERR_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_COMPLERR_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_COMPLERR_APPL_DATA

/* used for references on application functions */
# define RTE_AP_COMPLERR_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_CTRLPOLARITYBRSHLSS_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_CTRLPOLARITYBRSHLSS_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_CTRLPOLARITYBRSHLSS_APPL_DATA

/* used for references on application functions */
# define RTE_AP_CTRLPOLARITYBRSHLSS_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_CURRCMD_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_CURRCMD_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_CURRCMD_APPL_DATA

/* used for references on application functions */
# define RTE_AP_CURRCMD_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_CURRPARAMCOMP_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_CURRPARAMCOMP_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_CURRPARAMCOMP_APPL_DATA

/* used for references on application functions */
# define RTE_AP_CURRPARAMCOMP_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_CUSTBATTDIAG_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_CUSTBATTDIAG_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_CUSTBATTDIAG_APPL_DATA

/* used for references on application functions */
# define RTE_AP_CUSTBATTDIAG_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_DAMPING_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_DAMPING_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_DAMPING_APPL_DATA

/* used for references on application functions */
# define RTE_AP_DAMPING_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_DAMPINGFIREWALL_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_DAMPINGFIREWALL_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_DAMPINGFIREWALL_APPL_DATA

/* used for references on application functions */
# define RTE_AP_DAMPINGFIREWALL_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_DEMIF_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_DEMIF_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_DEMIF_APPL_DATA

/* used for references on application functions */
# define RTE_AP_DEMIF_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_DIAGMGR10_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_DIAGMGR10_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_DIAGMGR10_APPL_DATA

/* used for references on application functions */
# define RTE_AP_DIAGMGR10_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_DIAGMGR11_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_DIAGMGR11_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_DIAGMGR11_APPL_DATA

/* used for references on application functions */
# define RTE_AP_DIAGMGR11_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_DIAGMGR6_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_DIAGMGR6_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_DIAGMGR6_APPL_DATA

/* used for references on application functions */
# define RTE_AP_DIAGMGR6_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_DIAGMGR9_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_DIAGMGR9_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_DIAGMGR9_APPL_DATA

/* used for references on application functions */
# define RTE_AP_DIAGMGR9_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_DIAGSVC_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_DIAGSVC_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_DIAGSVC_APPL_DATA

/* used for references on application functions */
# define RTE_AP_DIAGSVC_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_DIGPHSREASDIAG_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_DIGPHSREASDIAG_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_DIGPHSREASDIAG_APPL_DATA

/* used for references on application functions */
# define RTE_AP_DIGPHSREASDIAG_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_EOTACTUATORMNG_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_EOTACTUATORMNG_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_EOTACTUATORMNG_APPL_DATA

/* used for references on application functions */
# define RTE_AP_EOTACTUATORMNG_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_ELEPWR_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_ELEPWR_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_ELEPWR_APPL_DATA

/* used for references on application functions */
# define RTE_AP_ELEPWR_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_ETDMPFW_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_ETDMPFW_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_ETDMPFW_APPL_DATA

/* used for references on application functions */
# define RTE_AP_ETDMPFW_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_FAULTLOG_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_FAULTLOG_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_FAULTLOG_APPL_DATA

/* used for references on application functions */
# define RTE_AP_FAULTLOG_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_FLTINJECTION_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_FLTINJECTION_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_FLTINJECTION_APPL_DATA

/* used for references on application functions */
# define RTE_AP_FLTINJECTION_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_FRQDEPDMPNINRTCMP_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_FRQDEPDMPNINRTCMP_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_FRQDEPDMPNINRTCMP_APPL_DATA

/* used for references on application functions */
# define RTE_AP_FRQDEPDMPNINRTCMP_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_HOWDETECT_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_HOWDETECT_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_HOWDETECT_APPL_DATA

/* used for references on application functions */
# define RTE_AP_HOWDETECT_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_HILOADSTALL_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_HILOADSTALL_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_HILOADSTALL_APPL_DATA

/* used for references on application functions */
# define RTE_AP_HILOADSTALL_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_HIGHFREQASSIST_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_HIGHFREQASSIST_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_HIGHFREQASSIST_APPL_DATA

/* used for references on application functions */
# define RTE_AP_HIGHFREQASSIST_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_HWPWUP_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_HWPWUP_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_HWPWUP_APPL_DATA

/* used for references on application functions */
# define RTE_AP_HWPWUP_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_HYSTCOMP_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_HYSTCOMP_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_HYSTCOMP_APPL_DATA

/* used for references on application functions */
# define RTE_AP_HYSTCOMP_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_LMTCOD_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_LMTCOD_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_LMTCOD_APPL_DATA

/* used for references on application functions */
# define RTE_AP_LMTCOD_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_LOAMGR_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_LOAMGR_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_LOAMGR_APPL_DATA

/* used for references on application functions */
# define RTE_AP_LOAMGR_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_LRNEOT_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_LRNEOT_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_LRNEOT_APPL_DATA

/* used for references on application functions */
# define RTE_AP_LRNEOT_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_MTRTEMPEST_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_MTRTEMPEST_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_MTRTEMPEST_APPL_DATA

/* used for references on application functions */
# define RTE_AP_MTRTEMPEST_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_PICURRCNTRL_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_PICURRCNTRL_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_PICURRCNTRL_APPL_DATA

/* used for references on application functions */
# define RTE_AP_PICURRCNTRL_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_PSADMQ_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_PSADMQ_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_PSADMQ_APPL_DATA

/* used for references on application functions */
# define RTE_AP_PSADMQ_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_PSADSG_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_PSADSG_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_PSADSG_APPL_DATA

/* used for references on application functions */
# define RTE_AP_PSADSG_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_PSASH_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_PSASH_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_PSASH_APPL_DATA

/* used for references on application functions */
# define RTE_AP_PSASH_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_PSATA_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_PSATA_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_PSATA_APPL_DATA

/* used for references on application functions */
# define RTE_AP_PSATA_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_PEAKCURREST_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_PEAKCURREST_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_PEAKCURREST_APPL_DATA

/* used for references on application functions */
# define RTE_AP_PEAKCURREST_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_POSSERVO_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_POSSERVO_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_POSSERVO_APPL_DATA

/* used for references on application functions */
# define RTE_AP_POSSERVO_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_PSAAGARBN_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_PSAAGARBN_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_PSAAGARBN_APPL_DATA

/* used for references on application functions */
# define RTE_AP_PSAAGARBN_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_PWRLMTFUNCCR_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_PWRLMTFUNCCR_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_PWRLMTFUNCCR_APPL_DATA

/* used for references on application functions */
# define RTE_AP_PWRLMTFUNCCR_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_QUADDET_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_QUADDET_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_QUADDET_APPL_DATA

/* used for references on application functions */
# define RTE_AP_QUADDET_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_RETURN_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_RETURN_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_RETURN_APPL_DATA

/* used for references on application functions */
# define RTE_AP_RETURN_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_RETURNFIREWALL_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_RETURNFIREWALL_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_RETURNFIREWALL_APPL_DATA

/* used for references on application functions */
# define RTE_AP_RETURNFIREWALL_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_SIGNLCONDN_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_SIGNLCONDN_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_SIGNLCONDN_APPL_DATA

/* used for references on application functions */
# define RTE_AP_SIGNLCONDN_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_SRLCOMINPUT_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_SRLCOMINPUT_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_SRLCOMINPUT_APPL_DATA

/* used for references on application functions */
# define RTE_AP_SRLCOMINPUT_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_SRLCOMOUTPUT_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_SRLCOMOUTPUT_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_SRLCOMOUTPUT_APPL_DATA

/* used for references on application functions */
# define RTE_AP_SRLCOMOUTPUT_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_STOPCTRL_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_STOPCTRL_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_STOPCTRL_APPL_DATA

/* used for references on application functions */
# define RTE_AP_STOPCTRL_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_STAMD_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_STAMD_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_STAMD_APPL_DATA

/* used for references on application functions */
# define RTE_AP_STAMD_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_STAMD11_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_STAMD11_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_STAMD11_APPL_DATA

/* used for references on application functions */
# define RTE_AP_STAMD11_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_STAMD6_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_STAMD6_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_STAMD6_APPL_DATA

/* used for references on application functions */
# define RTE_AP_STAMD6_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_STAMD9_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_STAMD9_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_STAMD9_APPL_DATA

/* used for references on application functions */
# define RTE_AP_STAMD9_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_STABILITYCOMP_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_STABILITYCOMP_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_STABILITYCOMP_APPL_DATA

/* used for references on application functions */
# define RTE_AP_STABILITYCOMP_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_STABILITYCOMP2_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_STABILITYCOMP2_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_STABILITYCOMP2_APPL_DATA

/* used for references on application functions */
# define RTE_AP_STABILITYCOMP2_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_SWEEP_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_SWEEP_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_SWEEP_APPL_DATA

/* used for references on application functions */
# define RTE_AP_SWEEP_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_SWEEP2_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_SWEEP2_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_SWEEP2_APPL_DATA

/* used for references on application functions */
# define RTE_AP_SWEEP2_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_THRMLDUTYCYCLE_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_THRMLDUTYCYCLE_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_THRMLDUTYCYCLE_APPL_DATA

/* used for references on application functions */
# define RTE_AP_THRMLDUTYCYCLE_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_TQRSDG_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_TQRSDG_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_TQRSDG_APPL_DATA

/* used for references on application functions */
# define RTE_AP_TQRSDG_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_TRANLDAMPG_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_TRANLDAMPG_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_TRANLDAMPG_APPL_DATA

/* used for references on application functions */
# define RTE_AP_TRANLDAMPG_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_TRQCANC_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_TRQCANC_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_TRQCANC_APPL_DATA

/* used for references on application functions */
# define RTE_AP_TRQCANC_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_TRQCMDSCL_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_TRQCMDSCL_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_TRQCMDSCL_APPL_DATA

/* used for references on application functions */
# define RTE_AP_TRQCMDSCL_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_TRQLOA_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_TRQLOA_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_TRQLOA_APPL_DATA

/* used for references on application functions */
# define RTE_AP_TRQLOA_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_TUNINGSELAUTH_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_TUNINGSELAUTH_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_TUNINGSELAUTH_APPL_DATA

/* used for references on application functions */
# define RTE_AP_TUNINGSELAUTH_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_VEHDYN_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_VEHDYN_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_VEHDYN_APPL_DATA

/* used for references on application functions */
# define RTE_AP_VEHDYN_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_VEHPWRMD_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_VEHPWRMD_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_VEHPWRMD_APPL_DATA

/* used for references on application functions */
# define RTE_AP_VEHPWRMD_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_VEHSPDLMT_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_VEHSPDLMT_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_VEHSPDLMT_APPL_DATA

/* used for references on application functions */
# define RTE_AP_VEHSPDLMT_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_AP_EPWM2_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_AP_EPWM2_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_EPWM2_APPL_DATA

/* used for references on application functions */
# define RTE_AP_EPWM2_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_CDD_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_CDD_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_CDD_APPL_DATA

/* used for references on application functions */
# define RTE_CDD_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_CD_NHET1CFGANDUSE_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_CD_NHET1CFGANDUSE_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_CD_NHET1CFGANDUSE_APPL_DATA

/* used for references on application functions */
# define RTE_CD_NHET1CFGANDUSE_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_CD_PHASEABCFDBKMEAS_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_CD_PHASEABCFDBKMEAS_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_CD_PHASEABCFDBKMEAS_APPL_DATA

/* used for references on application functions */
# define RTE_CD_PHASEABCFDBKMEAS_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_CD_SRLCOMDRIVER_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_CD_SRLCOMDRIVER_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_CD_SRLCOMDRIVER_APPL_DATA

/* used for references on application functions */
# define RTE_CD_SRLCOMDRIVER_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_CD_UDIAG_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_CD_UDIAG_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_CD_UDIAG_APPL_DATA

/* used for references on application functions */
# define RTE_CD_UDIAG_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_DEM_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_DEM_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_DEM_APPL_DATA

/* used for references on application functions */
# define RTE_DEM_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_IOHWAB10_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_IOHWAB10_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_IOHWAB10_APPL_DATA

/* used for references on application functions */
# define RTE_IOHWAB10_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_IOHWAB9_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_IOHWAB9_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_IOHWAB9_APPL_DATA

/* used for references on application functions */
# define RTE_IOHWAB9_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_IOHWABSTRACTION_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_IOHWABSTRACTION_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_IOHWABSTRACTION_APPL_DATA

/* used for references on application functions */
# define RTE_IOHWABSTRACTION_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_NXTRLIBS_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_NXTRLIBS_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_NXTRLIBS_APPL_DATA

/* used for references on application functions */
# define RTE_NXTRLIBS_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_NTWRAP_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_NTWRAP_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_NTWRAP_APPL_DATA

/* used for references on application functions */
# define RTE_NTWRAP_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_NVMPROXY_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_NVMPROXY_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_NVMPROXY_APPL_DATA

/* used for references on application functions */
# define RTE_NVMPROXY_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_RTEERRATA10_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_RTEERRATA10_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_RTEERRATA10_APPL_DATA

/* used for references on application functions */
# define RTE_RTEERRATA10_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_RTEERRATA11_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_RTEERRATA11_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_RTEERRATA11_APPL_DATA

/* used for references on application functions */
# define RTE_RTEERRATA11_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_RTEERRATA6_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_RTEERRATA6_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_RTEERRATA6_APPL_DATA

/* used for references on application functions */
# define RTE_RTEERRATA6_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_RTEERRATA9_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_RTEERRATA9_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_RTEERRATA9_APPL_DATA

/* used for references on application functions */
# define RTE_RTEERRATA9_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_SA_BKCPPC_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_SA_BKCPPC_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_SA_BKCPPC_APPL_DATA

/* used for references on application functions */
# define RTE_SA_BKCPPC_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_SA_CDDINTERFACE10_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_SA_CDDINTERFACE10_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_SA_CDDINTERFACE10_APPL_DATA

/* used for references on application functions */
# define RTE_SA_CDDINTERFACE10_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_SA_CDDINTERFACE11_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_SA_CDDINTERFACE11_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_SA_CDDINTERFACE11_APPL_DATA

/* used for references on application functions */
# define RTE_SA_CDDINTERFACE11_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_SA_CDDINTERFACE6_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_SA_CDDINTERFACE6_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_SA_CDDINTERFACE6_APPL_DATA

/* used for references on application functions */
# define RTE_SA_CDDINTERFACE6_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_SA_CDDINTERFACE9_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_SA_CDDINTERFACE9_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_SA_CDDINTERFACE9_APPL_DATA

/* used for references on application functions */
# define RTE_SA_CDDINTERFACE9_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_SA_CMMTRCURR_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_SA_CMMTRCURR_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_SA_CMMTRCURR_APPL_DATA

/* used for references on application functions */
# define RTE_SA_CMMTRCURR_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_SA_CTRLTEMP_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_SA_CTRLTEMP_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_SA_CTRLTEMP_APPL_DATA

/* used for references on application functions */
# define RTE_SA_CTRLTEMP_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_SA_DIGMSB_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_SA_DIGMSB_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_SA_DIGMSB_APPL_DATA

/* used for references on application functions */
# define RTE_SA_DIGMSB_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_SA_HWTQARBN_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_SA_HWTQARBN_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_SA_HWTQARBN_APPL_DATA

/* used for references on application functions */
# define RTE_SA_HWTQARBN_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_SA_HWTQCORRLN_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_SA_HWTQCORRLN_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_SA_HWTQCORRLN_APPL_DATA

/* used for references on application functions */
# define RTE_SA_HWTQCORRLN_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_SA_MTRDRVDIAG_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_SA_MTRDRVDIAG_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_SA_MTRDRVDIAG_APPL_DATA

/* used for references on application functions */
# define RTE_SA_MTRDRVDIAG_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_SA_MTRVEL_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_SA_MTRVEL_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_SA_MTRVEL_APPL_DATA

/* used for references on application functions */
# define RTE_SA_MTRVEL_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_SA_MTRVEL2_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_SA_MTRVEL2_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_SA_MTRVEL2_APPL_DATA

/* used for references on application functions */
# define RTE_SA_MTRVEL2_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_SA_MTRVEL3_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_SA_MTRVEL3_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_SA_MTRVEL3_APPL_DATA

/* used for references on application functions */
# define RTE_SA_MTRVEL3_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_SA_OVRVOLTMON_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_SA_OVRVOLTMON_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_SA_OVRVOLTMON_APPL_DATA

/* used for references on application functions */
# define RTE_SA_OVRVOLTMON_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_SA_SHTDNMECH_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_SA_SHTDNMECH_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_SA_SHTDNMECH_APPL_DATA

/* used for references on application functions */
# define RTE_SA_SHTDNMECH_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_SA_TMPRLMON_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_SA_TMPRLMON_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_SA_TMPRLMON_APPL_DATA

/* used for references on application functions */
# define RTE_SA_TMPRLMON_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_SA_TMPRLMON2_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_SA_TMPRLMON2_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_SA_TMPRLMON2_APPL_DATA

/* used for references on application functions */
# define RTE_SA_TMPRLMON2_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_WDGM_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_WDGM_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_WDGM_APPL_DATA

/* used for references on application functions */
# define RTE_WDGM_APPL_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * Per-Instance Memory specific defines
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_VAR_DEFAULT_RTE_Ap_10_PIM_GROUP
 *********************************************************************************************************************/

# define RTE_VAR_DEFAULT_RTE_Ap_10_PIM_GROUP

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_VAR_DEFAULT_RTE_Ap_11_PIM_GROUP
 *********************************************************************************************************************/

# define RTE_VAR_DEFAULT_RTE_Ap_11_PIM_GROUP

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_VAR_DEFAULT_RTE_Ap_6_PIM_GROUP
 *********************************************************************************************************************/

# define RTE_VAR_DEFAULT_RTE_Ap_6_PIM_GROUP

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_VAR_DEFAULT_RTE_Ap_9_PIM_GROUP
 *********************************************************************************************************************/

# define RTE_VAR_DEFAULT_RTE_Ap_9_PIM_GROUP

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/



#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:RTE_SA_DIGHWTRQSENT_APPL)  ***********/

/* used for references on application variables */
# define RTE_SA_DIGHWTRQSENT_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_SA_DIGHWTRQSENT_APPL_DATA

/* used for references on application functions */
# define RTE_SA_DIGHWTRQSENT_APPL_CODE

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:RTE_AP_POLARITY_APPL)  ***************/

/* used for references on application variables */
# define RTE_AP_POLARITY_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_POLARITY_APPL_DATA

/* used for references on application functions */
# define RTE_AP_POLARITY_APPL_CODE

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:RTE_AP_CTRLDDISSHTDN_APPL)  **********/

/* used for references on application variables */
# define RTE_AP_CTRLDDISSHTDN_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_CTRLDDISSHTDN_APPL_DATA

/* used for references on application functions */
# define RTE_AP_CTRLDDISSHTDN_APPL_CODE

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:RTE_CD_NHET1_APPL)  ******************/

/* used for references on application variables */
# define RTE_CD_NHET1_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_CD_NHET1_APPL_DATA

/* used for references on application functions */
# define RTE_CD_NHET1_APPL_CODE

/***  End of saved code  ************************************************************************************/
#endif


#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:RTE_AP_GSOD_APPL)  *******************/

/* used for references on application variables */
# define RTE_AP_GSOD_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_GSOD_APPL_DATA

/* used for references on application functions */
# define RTE_AP_GSOD_APPL_CODE

/***  End of saved code  ************************************************************************************/
#endif


#if 0
/***  Start of saved code (symbol: compiler abstraction implementation:RTE_AP_GCCDIAG_APPL)  ****************/

/* used for references on application variables */
# define RTE_AP_GCCDIAG_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_AP_GCCDIAG_APPL_DATA

/* used for references on application functions */
# define RTE_AP_GCCDIAG_APPL_CODE

/***  End of saved code  ************************************************************************************/
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


#endif /* _RTE_COMPILER_CFG_H */
