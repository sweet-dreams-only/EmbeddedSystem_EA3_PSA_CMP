/*****************************************************************************
* Copyright 2012 Nxtr Automotive, All Rights Reserved.
* Nxtr Confidential
*
* Module File Name  : Template_BatteryVoltage_Cfg.h
* Module Description: Battery Voltage configuration
* Product           : Gen II Plus - EA3.0
* Author            : Bobby O'Steen
*****************************************************************************/
/*---------------------------------------------------------------------------
* Version Control:
* Date Created:      Wed Jan 01 18:03:04 2014
* %version:          1 %
* %derived_by:       nzx5jd %
* %date_modified:    Wed Feb 26 16:28:37 2014 %
*---------------------------------------------------------------------------*/

#ifndef BATTERYVOLTAGE_CFG_H
#define BATTERYVOLTAGE_CFG_H



/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#include "Ap_DiagMgr.h"


#define BATTERYVOLTAGE_REPORTERRORSTATUS(event, param, status)		NxtrDiagMgr9_ReportNTCStatus(event, param, status)

#endif
