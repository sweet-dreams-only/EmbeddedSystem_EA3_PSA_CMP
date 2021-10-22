/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2010 by Vctr Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vctr Informatik GmbH.
 *                Vctr Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vctr Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_Type.h
 *     Workspace:  C:/Users/nz2999/Documents/Synergy/ccm_wa/ses_dev_ea3/PSADMQ/PSADMQ/autosar
 *     SW-C Type:  Ap_PSADMQ
 *  Generated at:  Wed Sep  6 13:48:14 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 2.17.2
 *       License:  License CBD1010122 valid for CBD1010122 Nxtr  GM MSR_SLP3_BSW_RTE_wGMLAN TexasInstruments TMS570 Texas Instruments
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

# define Rte_TypeDef_UInt16
typedef uint16 UInt16;
# define UInt16_LowerLimit ((UInt16)0u)
# define UInt16_UpperLimit ((UInt16)65535u)

# define Rte_TypeDef_PsaTunModSt_Cnt_enum
typedef uint8 PsaTunModSt_Cnt_enum;
# define PsaTunModSt_Cnt_enum_LowerLimit ((PsaTunModSt_Cnt_enum)0u)
# define PsaTunModSt_Cnt_enum_UpperLimit ((PsaTunModSt_Cnt_enum)3u)
# if (defined RTE_CONST_PSATUNMODST_NORM) || (defined PSATUNMODST_NORM)
#  if (!defined RTE_CONST_PSATUNMODST_NORM) || (RTE_CONST_PSATUNMODST_NORM != 0u)
#   error "Enumeration constant <PSATUNMODST_NORM> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_PSATUNMODST_NORM (0u)
#  define PSATUNMODST_NORM ((PsaTunModSt_Cnt_enum)0u)
# endif
# if (defined RTE_CONST_PSATUNMODST_SPORT) || (defined PSATUNMODST_SPORT)
#  if (!defined RTE_CONST_PSATUNMODST_SPORT) || (RTE_CONST_PSATUNMODST_SPORT != 1u)
#   error "Enumeration constant <PSATUNMODST_SPORT> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_PSATUNMODST_SPORT (1u)
#  define PSATUNMODST_SPORT ((PsaTunModSt_Cnt_enum)1u)
# endif
# if (defined RTE_CONST_PSATUNMODST_TUN) || (defined PSATUNMODST_TUN)
#  if (!defined RTE_CONST_PSATUNMODST_TUN) || (RTE_CONST_PSATUNMODST_TUN != 2u)
#   error "Enumeration constant <PSATUNMODST_TUN> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_PSATUNMODST_TUN (2u)
#  define PSATUNMODST_TUN ((PsaTunModSt_Cnt_enum)2u)
# endif
# if (defined RTE_CONST_PSATUNMODST_FAILD) || (defined PSATUNMODST_FAILD)
#  if (!defined RTE_CONST_PSATUNMODST_FAILD) || (RTE_CONST_PSATUNMODST_FAILD != 3u)
#   error "Enumeration constant <PSATUNMODST_FAILD> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_PSATUNMODST_FAILD (3u)
#  define PSATUNMODST_FAILD ((PsaTunModSt_Cnt_enum)3u)
# endif


# ifndef RTE_SUPPRESS_UNUSED_DATATYPES
/**********************************************************************************************************************
 * Unused Data type definitions
 *********************************************************************************************************************/

#  define Rte_TypeDef_Double
typedef float64 Double;
#  define Double_LowerLimit ((Double)-DBL_MAX)
#  define Double_UpperLimit ((Double)DBL_MAX)

#  define Rte_TypeDef_Float
typedef float32 Float;
#  define Float_LowerLimit ((Float)-FLT_MAX)
#  define Float_UpperLimit ((Float)FLT_MAX)

#  define Rte_TypeDef_SInt16
typedef sint16 SInt16;
#  define SInt16_LowerLimit ((SInt16)-32768)
#  define SInt16_UpperLimit ((SInt16)32767)

#  define Rte_TypeDef_SInt32
typedef sint32 SInt32;
#  define SInt32_LowerLimit ((SInt32)-2147483648)
#  define SInt32_UpperLimit ((SInt32)2147483647)

#  define Rte_TypeDef_SInt4
typedef sint8 SInt4;
#  define SInt4_LowerLimit ((SInt4)-8)
#  define SInt4_UpperLimit ((SInt4)7)

#  define Rte_TypeDef_SInt8
typedef sint8 SInt8;
#  define SInt8_LowerLimit ((SInt8)-128)
#  define SInt8_UpperLimit ((SInt8)127)

#  define Rte_TypeDef_UInt32
typedef uint32 UInt32;
#  define UInt32_LowerLimit ((UInt32)0u)
#  define UInt32_UpperLimit ((UInt32)4294967295u)

#  define Rte_TypeDef_UInt4
typedef uint8 UInt4;
#  define UInt4_LowerLimit ((UInt4)0u)
#  define UInt4_UpperLimit ((UInt4)15u)

#  define Rte_TypeDef_UInt8
typedef uint8 UInt8;
#  define UInt8_LowerLimit ((UInt8)0u)
#  define UInt8_UpperLimit ((UInt8)255u)

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
#  define D_FALSE_CNT_LGC ((Boolean)FALSE)
# endif

# if (defined RTE_CONST_D_PSATUNMODSTINIT_CNT_ENUM) || (defined D_PSATUNMODSTINIT_CNT_ENUM)
#  if (!defined RTE_CONST_D_PSATUNMODSTINIT_CNT_ENUM) || (RTE_CONST_D_PSATUNMODSTINIT_CNT_ENUM != 0u)
#   error "Constant value <D_PSATUNMODSTINIT_CNT_ENUM> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_D_PSATUNMODSTINIT_CNT_ENUM (0u)
#  define D_PSATUNMODSTINIT_CNT_ENUM ((PsaTunModSt_Cnt_enum)0u)
# endif

# if (defined RTE_CONST_D_ZERO_CNT_U16) || (defined D_ZERO_CNT_U16)
#  if (!defined RTE_CONST_D_ZERO_CNT_U16) || (RTE_CONST_D_ZERO_CNT_U16 != 0u)
#   error "Constant value <D_ZERO_CNT_U16> conflicts with another constant."
#  endif
# else
#  define RTE_CONST_D_ZERO_CNT_U16 (0u)
#  define D_ZERO_CNT_U16 ((UInt16)0u)
# endif



/**********************************************************************************************************************
 * Type definitions for implicit access to S/R communication
 *********************************************************************************************************************/
/* Types for Data Handles section */

typedef struct
{
  PsaTunModSt_Cnt_enum value;
} Rte_DE_PsaTunModSt_Cnt_enum;

typedef struct
{
  Boolean value;
} Rte_DE_Boolean;

typedef struct
{
  UInt16 value;
} Rte_DE_UInt16;


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_Ap_PSADMQ
{
  /* Data Handles section */
  P2VAR(Rte_DE_UInt16, TYPEDEF, RTE_AP_PSADMQ_APPL_VAR) PSADMQ_Per1_DesiredTunPers_Cnt_u16;
  P2VAR(Rte_DE_PsaTunModSt_Cnt_enum, TYPEDEF, RTE_AP_PSADMQ_APPL_VAR) PSADMQ_Per1_MultiModSwt_Cnt_enum;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_AP_PSADMQ_APPL_VAR) PSADMQ_Per1_MultiModeSelected_Cnt_lgc;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_AP_PSADMQ_APPL_VAR) PSADMQ_Per1_PersSelnInpVld_Cnt_lgc;
  P2VAR(Rte_DE_PsaTunModSt_Cnt_enum, TYPEDEF, RTE_AP_PSADMQ_APPL_VAR) PSADMQ_Per1_TunModSt_Cnt_enum;
  P2VAR(Rte_DE_Boolean, TYPEDEF, RTE_AP_PSADMQ_APPL_VAR) PSADMQ_Per1_TunReqGranted_Cnt_lgc;
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h"

extern CONSTP2CONST(struct Rte_CDS_Ap_PSADMQ, RTE_CONST, RTE_CONST) Rte_Inst_Ap_PSADMQ;

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h"

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1504706710
#    error "The magic number of the generated file <C:/Users/nz2999/Documents/Synergy/ccm_wa/ses_dev_ea3/PSADMQ/PSADMQ/tools/contract/Ap_PSADMQ/Rte_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1504706710
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TYPE_H */
