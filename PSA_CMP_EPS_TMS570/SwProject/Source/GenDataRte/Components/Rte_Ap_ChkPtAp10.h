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
 *          File:  Components/Rte_Ap_ChkPtAp10.h
 *     Workspace:  C:/SynergyProjects/PSA_BMPV_EPS_TMS570-nzx5jd/PSA_BMPV_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nxtr  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_CHKPTAP10_H
# define _RTE_AP_CHKPTAP10_H

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


# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/

# define RTE_STOP_SEC_CODE
# include "MemMap.h"


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_WDGM_APPL_CODE
#  include "MemMap.h"
FUNC(Std_ReturnType, RTE_WDGM_APPL_CODE) WdgM_CheckpointReached(WdgM_SupervisedEntityIdType parg0, WdgM_CheckpointIdType parg1);
#  define RTE_STOP_SEC_WDGM_APPL_CODE
#  include "MemMap.h"

#  define Rte_Call_ChkPtAp10_100msEnd_CP_CheckpointReached() (WdgM_CheckpointReached((WdgM_SupervisedEntityIdType)12, (WdgM_CheckpointIdType)1))
#  define Rte_Call_ChkPtAp10_100msStart_CP_CheckpointReached() (WdgM_CheckpointReached((WdgM_SupervisedEntityIdType)12, (WdgM_CheckpointIdType)0))
#  define Rte_Call_ChkPtAp10_10msaEnd_CP_CheckpointReached() (WdgM_CheckpointReached((WdgM_SupervisedEntityIdType)7, (WdgM_CheckpointIdType)1))
#  define Rte_Call_ChkPtAp10_10msaStart_CP_CheckpointReached() (WdgM_CheckpointReached((WdgM_SupervisedEntityIdType)7, (WdgM_CheckpointIdType)0))
#  define Rte_Call_ChkPtAp10_10msbEnd_CP_CheckpointReached() (WdgM_CheckpointReached((WdgM_SupervisedEntityIdType)9, (WdgM_CheckpointIdType)1))
#  define Rte_Call_ChkPtAp10_10msbStart_CP_CheckpointReached() (WdgM_CheckpointReached((WdgM_SupervisedEntityIdType)9, (WdgM_CheckpointIdType)0))
#  define Rte_Call_ChkPtAp10_2msEnd_CP_CheckpointReached() (WdgM_CheckpointReached((WdgM_SupervisedEntityIdType)1, (WdgM_CheckpointIdType)1))
#  define Rte_Call_ChkPtAp10_2msStart_CP_CheckpointReached() (WdgM_CheckpointReached((WdgM_SupervisedEntityIdType)1, (WdgM_CheckpointIdType)0))
#  define Rte_Call_ChkPtAp10_4msEnd_CP_CheckpointReached() (WdgM_CheckpointReached((WdgM_SupervisedEntityIdType)5, (WdgM_CheckpointIdType)1))
#  define Rte_Call_ChkPtAp10_4msStart_CP_CheckpointReached() (WdgM_CheckpointReached((WdgM_SupervisedEntityIdType)5, (WdgM_CheckpointIdType)0))


# endif /* !defined(RTE_CORE) */


# define RTE_START_SEC_AP_CHKPTAP10_APPL_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

FUNC(void, RTE_AP_CHKPTAP10_APPL_CODE) ChkPtAp10_100msEnd_Per(void);

FUNC(void, RTE_AP_CHKPTAP10_APPL_CODE) ChkPtAp10_100msStart_Per(void);

FUNC(void, RTE_AP_CHKPTAP10_APPL_CODE) ChkPtAp10_10msaEnd_Per(void);

FUNC(void, RTE_AP_CHKPTAP10_APPL_CODE) ChkPtAp10_10msaStart_Per(void);

FUNC(void, RTE_AP_CHKPTAP10_APPL_CODE) ChkPtAp10_10msbEnd_Per(void);

FUNC(void, RTE_AP_CHKPTAP10_APPL_CODE) ChkPtAp10_10msbStart_Per(void);

FUNC(void, RTE_AP_CHKPTAP10_APPL_CODE) ChkPtAp10_2msEnd_Per(void);

FUNC(void, RTE_AP_CHKPTAP10_APPL_CODE) ChkPtAp10_2msStart_Per(void);

FUNC(void, RTE_AP_CHKPTAP10_APPL_CODE) ChkPtAp10_4msEnd_Per(void);

FUNC(void, RTE_AP_CHKPTAP10_APPL_CODE) ChkPtAp10_4msStart_Per(void);

# define RTE_STOP_SEC_AP_CHKPTAP10_APPL_CODE
# include "MemMap.h"


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_WdgM_CheckpointReached_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */


#endif /* _RTE_AP_CHKPTAP10_H */
