/* -----------------------------------------------------------------------------
  Filename:    appdescdev.c
  Description: Implementation for development tests with CANdesc.
                
                Manufacturer: PSA
                EcuDocFile:   C:\git\Application\PSA_CMP_EPS_TMS570\Tools\AsrProject\Config\System\PSA_BMPV.cdd
                Variant:      CommonDiagnostics

  Generated by CANdelaGen, Mon Apr 09 15:25:55 2018
 
 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2012 by Vctr Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vctr Informatik 
  GmbH.
  
  Vctr Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vctr Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
    &&&~ Includes
 ----------------------------------------------------------------------------- */

/* Physical layer specific API */
#include "v_inc.h"
/* Check if CCL is available and take into account its configuration */
#if defined (VGEN_ENABLE_CCL)
# include "ccl_cfg.h"
#endif

/* Check if CCLcom is available and take into account its configuration */
#if defined (VGEN_ENABLE_CCLCOM)
# include "cclcom_cfg.h"
#endif

/* Make all CANdesc specific typedefs available */
#include "desc.h"
/* Include the implementation prototypes for prototype checks */
#include "appdesc.h"



