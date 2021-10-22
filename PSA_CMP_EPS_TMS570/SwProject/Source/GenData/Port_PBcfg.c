/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2011 by Vctr Informatik GmbH.                                                  All rights reserved.
 * 
 *                This software is copyright protected and proprietary to Vctr Informatik GmbH.
 *                Vctr Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vctr Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  T_Port_PBcfg.c
 *      Project:  DrvPort_Tms570Tigio01Asr
 *       Module:  DrvPort
 *    Generator:  EAD
 *
 *  Description:  This module implements a driver in ANSI C programming language to centralize the
 *                configuration of ports and pins which are used by more than one driver module.
 *                With this driver you can:
 *                - Configure all port pins
 *                - Initialize the configuration
 *                - Refresh the configuration (EMC purposes)
 *                - Switch the port pin configuration during runtime
 *  
 *********************************************************************************************************************/

/**********************************************************************************************************************
  
    Project:    EPS.ecuc
    Generated:  2014-07-16 10:20 am
    Licensee:   Nxtr Automotive Corporation (2502600608)
 
    This file is generated by DaVinci Configurator Pro - DAVINCICFG.EXE V4.0.67.0.
    Do not modify this file, otherwise the software may behave in unexpected way.
    
 *********************************************************************************************************************/

#define PORT_PBCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Port.h"

/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/
#define PORT_CFG_C_MAJOR_VERSION    (1)
#define PORT_CFG_C_MINOR_VERSION    (2)
#define PORT_CFG_C_PATCH_VERSION    (0)

/*  Version checking  */
#if (   (PORT_SW_MAJOR_VERSION != (1)) \
     || (PORT_SW_MINOR_VERSION != (1)))
  #error "Version numbers of Port_PBcfg.c and Port.h are inconsistent!"
#endif

#if (   (PORT_CFG_MAJOR_VERSION != (1)) \
     || (PORT_CFG_MINOR_VERSION != (2)))
  #error "Version numbers of Port_PBcfg.c and Port_Cfg.h are inconsistent!"
#endif



/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 **********************************************************************************************************************/

/*<PORT_MUX_BASE_ADDR>*/
#define PORT_BASE_ADDR_PINMUX_0  ((Port_RegisterPtrType)(0xFFFFEB10u))
#define PORT_BASE_ADDR_PINMUX_1  ((Port_RegisterPtrType)(0xFFFFEB14u))
#define PORT_BASE_ADDR_PINMUX_2  ((Port_RegisterPtrType)(0xFFFFEB18u))
#define PORT_BASE_ADDR_PINMUX_3  ((Port_RegisterPtrType)(0xFFFFEB1Cu))
#define PORT_BASE_ADDR_PINMUX_4  ((Port_RegisterPtrType)(0xFFFFEB20u))
#define PORT_BASE_ADDR_PINMUX_5  ((Port_RegisterPtrType)(0xFFFFEB24u))
#define PORT_BASE_ADDR_PINMUX_6  ((Port_RegisterPtrType)(0xFFFFEB28u))
#define PORT_BASE_ADDR_PINMUX_7  ((Port_RegisterPtrType)(0xFFFFEB2Cu))
#define PORT_BASE_ADDR_PINMUX_8  ((Port_RegisterPtrType)(0xFFFFEB30u))
#define PORT_BASE_ADDR_PINMUX_9  ((Port_RegisterPtrType)(0xFFFFEB34u))
#define PORT_BASE_ADDR_PINMUX_10  ((Port_RegisterPtrType)(0xFFFFEB38u))
#define PORT_BASE_ADDR_PINMUX_11  ((Port_RegisterPtrType)(0xFFFFEB3Cu))
#define PORT_BASE_ADDR_PINMUX_12  ((Port_RegisterPtrType)(0xFFFFEB40u))
#define PORT_BASE_ADDR_PINMUX_13  ((Port_RegisterPtrType)(0xFFFFEB44u))
#define PORT_BASE_ADDR_PINMUX_14  ((Port_RegisterPtrType)(0xFFFFEB48u))
#define PORT_BASE_ADDR_PINMUX_15  ((Port_RegisterPtrType)(0xFFFFEB4Cu))
#define PORT_BASE_ADDR_PINMUX_16  ((Port_RegisterPtrType)(0xFFFFEB50u))
#define PORT_BASE_ADDR_PINMUX_17  ((Port_RegisterPtrType)(0xFFFFEB54u))
#define PORT_BASE_ADDR_PINMUX_18  ((Port_RegisterPtrType)(0xFFFFEB58u))
#define PORT_BASE_ADDR_PINMUX_19  ((Port_RegisterPtrType)(0xFFFFEB5Cu))
#define PORT_BASE_ADDR_PINMUX_20  ((Port_RegisterPtrType)(0xFFFFEB60u))
#define PORT_BASE_ADDR_PINMUX_21  ((Port_RegisterPtrType)(0xFFFFEB64u))
#define PORT_BASE_ADDR_PINMUX_22  ((Port_RegisterPtrType)(0xFFFFEB68u))
#define PORT_BASE_ADDR_PINMUX_23  ((Port_RegisterPtrType)(0xFFFFEB6Cu))
#define PORT_BASE_ADDR_PINMUX_24  ((Port_RegisterPtrType)(0xFFFFEB70u))
#define PORT_BASE_ADDR_PINMUX_25  ((Port_RegisterPtrType)(0xFFFFEB74u))
#define PORT_BASE_ADDR_PINMUX_26  ((Port_RegisterPtrType)(0xFFFFEB78u))
#define PORT_BASE_ADDR_PINMUX_27  ((Port_RegisterPtrType)(0xFFFFEB7Cu))
#define PORT_BASE_ADDR_PINMUX_28  ((Port_RegisterPtrType)(0xFFFFEB80u))
#define PORT_BASE_ADDR_PINMUX_29  ((Port_RegisterPtrType)(0xFFFFEB84u))
#define PORT_BASE_ADDR_PINMUX_30  ((Port_RegisterPtrType)(0xFFFFEB88u))
/* NXTR MANUAL EDIT FOR EPWM MODULE */
#define PORT_BASE_ADDR_PINMUX_31  ((Port_RegisterPtrType)(0xFFFFEB8Cu))
#define PORT_BASE_ADDR_PINMUX_35  ((Port_RegisterPtrType)(0xFFFFEB9Cu))
#define PORT_BASE_ADDR_PINMUX_37  ((Port_RegisterPtrType)(0xFFFFEBA4u))
#define PORT_BASE_ADDR_PINMUX_38  ((Port_RegisterPtrType)(0xFFFFEBA8u))
/*</PORT_MUX_BASE_ADDR>*/

/*<PORT_BCM_BASE_ADDR1>*/
#define PORT_BASE_ADDR_BCM_KICK_REG0       ((Port_RegisterPtrType)(0xFFFFEA38u))
/*</PORT_BCM_BASE_ADDR1>*/

/*<PORT_BCM_BASE_ADDR2>*/
#define PORT_BASE_ADDR_BCM_KICK_REG1       ((Port_RegisterPtrType)(0xFFFFEA3Cu))
/*</PORT_BCM_BASE_ADDR2>*/

/*<PORT_BASE_ADDR>*/
#define PORT_BASE_ADDR_GIOA      ((Port_RegisterPtrType)(0xFFF7BC30u))
#define PORT_BASE_ADDR_GIOB      ((Port_RegisterPtrType)(0xFFF7BC50u))
#define PORT_BASE_ADDR_CAN1      ((Port_RegisterPtrType)(0xFFF7DDE0u))
#define PORT_BASE_ADDR_CAN2      ((Port_RegisterPtrType)(0xFFF7DFE0u))
#define PORT_BASE_ADDR_CAN3      ((Port_RegisterPtrType)(0xFFF7E1E0u))
#define PORT_BASE_ADDR_LIN      ((Port_RegisterPtrType)(0xFFF7E43Cu))
#define PORT_BASE_ADDR_SCI      ((Port_RegisterPtrType)(0xFFF7E53Cu))
#define PORT_BASE_ADDR_IIC      ((Port_RegisterPtrType)(0xFFF7D448u))
#define PORT_BASE_ADDR_SPI1      ((Port_RegisterPtrType)(0xFFF7F414u))
#define PORT_BASE_ADDR_SPI2      ((Port_RegisterPtrType)(0xFFF7F614u))
#define PORT_BASE_ADDR_SPI3      ((Port_RegisterPtrType)(0xFFF7F814u))
#define PORT_BASE_ADDR_SPI4      ((Port_RegisterPtrType)(0xFFF7FA14u))
#define PORT_BASE_ADDR_SPI5      ((Port_RegisterPtrType)(0xFFF7FC14u))
#define PORT_BASE_ADDR_NHET1      ((Port_RegisterPtrType)(0xFFF7B848u))
#define PORT_BASE_ADDR_NHET2      ((Port_RegisterPtrType)(0xFFF7B948u))
#define PORT_BASE_ADDR_SYS      ((Port_RegisterPtrType)(0xFFFFFF00u))
#define PORT_BASE_ADDR_ADC1      ((Port_RegisterPtrType)(0xFFF7C0F8u))
#define PORT_BASE_ADDR_ADC2      ((Port_RegisterPtrType)(0xFFF7C2F8u))
#define PORT_BASE_ADDR_RTP      ((Port_RegisterPtrType)(0xFFFFFA34u))
/*</PORT_BASE_ADDR>*/



/**********************************************************************************************************************
 *  GLOBAL DATA
 **********************************************************************************************************************/

/*<PORT_DEFAULT_SETTINGS>*/
/*</PORT_DEFAULT_SETTINGS>*/


/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 **********************************************************************************************************************/

#define PORT_START_SEC_PBCODE
#include "MemMap.h" /* PRQA S 5087 *//* MD_MSR_19.1 */

/*<PORT_INIT_FUNC>*/
FUNC(void, PORT_PBCODE) Port_InitPortRegs0( void ) /* PRQA S 3408 *//* MD_PORT_8.8 */
{
    /* ------------- Configuration of multiplexer -----------------------------------------------*/
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_BCM_KICK_REG0->Mux.GnrlRg_u32, 0x83e70b13u, OS_MEM_AREA_IOMM);    /* Unlock MMR Registers */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_BCM_KICK_REG1->Mux.GnrlRg_u32, 0x95a4f1e0u, OS_MEM_AREA_IOMM);     /* Unlock MMR Registers */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_0->Mux.GnrlRg_u32, (uint32)(0x02020000u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_0 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_1->Mux.GnrlRg_u32, (uint32)(0x01010400u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_1 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_2->Mux.GnrlRg_u32, (uint32)(0x04010101u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_2 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */ /* NXTR MANUAL EDIT FOR EPWM MODULE */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_3->Mux.GnrlRg_u32, (uint32)(0x01040001u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_3 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */ /* NXTR MANUAL EDIT FOR EPWM MODULE */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_4->Mux.GnrlRg_u32, (uint32)(0x10100104u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_4 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */ /* NXTR MANUAL EDIT FOR EPWM MODULE */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_5->Mux.GnrlRg_u32, (uint32)(0x01080404u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_5 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */ /* NXTR MANUAL EDIT FOR EPWM MODULE */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_6->Mux.GnrlRg_u32, (uint32)(0x01010110u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_6 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */ /* NXTR MANUAL EDIT FOR EPWM MODULE */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_7->Mux.GnrlRg_u32, (uint32)(0x01010101u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_7 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_8->Mux.GnrlRg_u32, (uint32)(0x01010101u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_8 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_9->Mux.GnrlRg_u32, (uint32)(0x01010101u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_9 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_10->Mux.GnrlRg_u32, (uint32)(0x01010101u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_10 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_11->Mux.GnrlRg_u32, (uint32)(0x01010101u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_11 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_12->Mux.GnrlRg_u32, (uint32)(0x01010101u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_12 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_13->Mux.GnrlRg_u32, (uint32)(0x01010101u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_13 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_14->Mux.GnrlRg_u32, (uint32)(0x01010101u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_14 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_15->Mux.GnrlRg_u32, (uint32)(0x01010101u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_15 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_16->Mux.GnrlRg_u32, (uint32)(0x01010101u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_16 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_17->Mux.GnrlRg_u32, (uint32)(0x01010101u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_17 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_18->Mux.GnrlRg_u32, (uint32)(0x00010001u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_18 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_19->Mux.GnrlRg_u32, (uint32)(0x01010101u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_19 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_20->Mux.GnrlRg_u32, (uint32)(0x01010101u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_20 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_21->Mux.GnrlRg_u32, (uint32)(0x01010001u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_21 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_22->Mux.GnrlRg_u32, (uint32)(0x01010101u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_22 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_23->Mux.GnrlRg_u32, (uint32)(0x00000001u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_23 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_24->Mux.GnrlRg_u32, (uint32)(0x00000000u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_24 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_25->Mux.GnrlRg_u32, (uint32)(0x00000000u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_25 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_26->Mux.GnrlRg_u32, (uint32)(0x01010000u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_26 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_27->Mux.GnrlRg_u32, (uint32)(0x01010101u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_27 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_28->Mux.GnrlRg_u32, (uint32)(0x01010101u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_28 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_29->Mux.GnrlRg_u32, (uint32)(0x00000101u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_29 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_30->Mux.GnrlRg_u32, (uint32)(0x00000202u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_30 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */ /* NXTR MANUAL EDIT FOR EPWM MODULE */
	PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_31->Mux.GnrlRg_u32, (uint32)(0x02020101u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_31 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */ /* NXTR MANUAL EDIT FOR EPWM MODULE */
	PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_35->Mux.GnrlRg_u32, (uint32)(0x00010101u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_35 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */ /* NXTR MANUAL EDIT FOR EPWM MODULE */
	PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_37->Mux.GnrlRg_u32, (uint32)(0x01010102u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_37 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */ /* NXTR MANUAL EDIT FOR EPWM MODULE */
	PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_PINMUX_38->Mux.GnrlRg_u32, (uint32)(0x01000001u), OS_MEM_AREA_IOMM);    /* Configuration of PINMUX_38 Register */ /* PRQA S 303 *//* MD_PORT_11.3 */ /* NXTR MANUAL EDIT FOR EPWM MODULE */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_BCM_KICK_REG0->Mux.GnrlRg_u32, (uint32)(0xffffffffu), OS_MEM_AREA_IOMM);    /* Lock MMR Registers */ /* PRQA S 303 *//* MD_PORT_11.3 */
    /* ------------- Configuration of ports used for general IO ---------------------------------*/
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_SPI3->Reg.PullSelect_u32, (uint32)(0x00000F3Fu), PORT_MEM_AREA_DUMMY);    /* Configuration of MBSPI 3 Pull Select Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_SPI3->Reg.PullDisable_u32, (uint32)(0x00000000u), PORT_MEM_AREA_DUMMY);    /* Configuration of MBSPI 3 Pull Disable Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_SPI3->Reg.OpenDrain_u32, (uint32)(0x00000000u), PORT_MEM_AREA_DUMMY);    /* Configuration of MBSPI 3 Open Drain Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_SPI3->Reg.Function_u32, (uint32)(0x00000F3Du), PORT_MEM_AREA_DUMMY);    /* Configuration of MBSPI 3 Function Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_SPI3->Reg.DataOut_u32,(uint32)(0x00000000u), PORT_MEM_AREA_DUMMY);    /* Configuration of MBSPI 3 Data Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_SPI3->Reg.Direction_u32, (uint32)(0x00000603u), PORT_MEM_AREA_DUMMY);    /* Configuration of MBSPI 3 Direction Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_SPI5->Reg.PullSelect_u32, (uint32)(0x0E0E0E0Fu), PORT_MEM_AREA_DUMMY);    /* Configuration of MBSPI 5 Pull Select Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_SPI5->Reg.PullDisable_u32, (uint32)(0x00000000u), PORT_MEM_AREA_DUMMY);    /* Configuration of MBSPI 5 Pull Disable Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_SPI5->Reg.OpenDrain_u32, (uint32)(0x00000000u), PORT_MEM_AREA_DUMMY);    /* Configuration of MBSPI 5 Open Drain Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_SPI5->Reg.Function_u32, (uint32)(0x0E0E0F0Fu), PORT_MEM_AREA_DUMMY);    /* Configuration of MBSPI 5 Function Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_SPI5->Reg.DataOut_u32,(uint32)(0x00000000u), PORT_MEM_AREA_DUMMY);    /* Configuration of MBSPI 5 Data Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_SPI5->Reg.Direction_u32, (uint32)(0x00000601u), PORT_MEM_AREA_DUMMY);    /* Configuration of MBSPI 5 Direction Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_NHET1->Reg.PullSelect_u32, (uint32)(0x00000000u), PORT_MEM_AREA_DUMMY);    /* Configuration of NHET1 Pull Select Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_NHET1->Reg.PullDisable_u32, (uint32)(0x00000000u), PORT_MEM_AREA_DUMMY);    /* Configuration of NHET1 Pull Disable Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_NHET1->Reg.OpenDrain_u32, (uint32)(0x40001000u), PORT_MEM_AREA_DUMMY);    /* Configuration of NHET1 Open Drain Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_NHET1->Reg.DataOut_u32,(uint32)(0x00100000u), PORT_MEM_AREA_DUMMY);    /* Configuration of NHET1 Data Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_NHET1->Reg.Direction_u32, (uint32)(0x4015D000u), PORT_MEM_AREA_DUMMY);    /* Configuration of NHET1 Direction Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_NHET2->Reg.PullSelect_u32, (uint32)(0x00010000u), PORT_MEM_AREA_DUMMY);    /* Configuration of NHET2 Pull Select Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_NHET2->Reg.PullDisable_u32, (uint32)(0x00000000u), PORT_MEM_AREA_DUMMY);    /* Configuration of NHET2 Pull Disable Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_NHET2->Reg.OpenDrain_u32, (uint32)(0x00000000u), PORT_MEM_AREA_DUMMY);    /* Configuration of NHET2 Open Drain Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_NHET2->Reg.DataOut_u32,(uint32)(0x00000000u), PORT_MEM_AREA_DUMMY);    /* Configuration of NHET2 Data Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_NHET2->Reg.Direction_u32, (uint32)(0x00000000u), PORT_MEM_AREA_DUMMY);    /* Configuration of NHET2 Direction Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_ADC1->Reg.PullSelect_u32, (uint32)(0x00000000u), PORT_MEM_AREA_DUMMY);    /* Configuration of MibADC 1 Pull Select Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_ADC1->Reg.PullDisable_u32, (uint32)(0x00000000u), PORT_MEM_AREA_DUMMY);    /* Configuration of MibADC 1 Pull Disable Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_ADC1->Reg.OpenDrain_u32, (uint32)(0x00000000u), PORT_MEM_AREA_DUMMY);    /* Configuration of MibADC 1 Open Drain Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_ADC1->AltReg.DataOut_u32, (uint32)(0x00000000u), PORT_MEM_AREA_DUMMY);    /* Configuration of MibADC 1 Data Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_INIT((uint32)&PORT_BASE_ADDR_ADC1->Reg.Direction_u32, (uint32)(0x00000000u), PORT_MEM_AREA_DUMMY);    /* Configuration of MibADC 1 Direction Register */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_CAN3->Can.IoCtrl_0_u32, (uint32)(0x00040004u), OS_MEM_AREA_CAN3);    /* Configuration of CAN 3 IO Ctrl 0 */ /* PRQA S 303 *//* MD_PORT_11.3 */
    PORT_WRITE_REGISTER_32BIT_SUPERVISOR_INIT((uint32)&PORT_BASE_ADDR_CAN3->Can.IoCtrl_1_u32, (uint32)(0x00040004u), OS_MEM_AREA_CAN3);    /* Configuration of CAN 3 IO Ctrl 1 */ /* PRQA S 303 *//* MD_PORT_11.3 */
    /* ------------- Configuration of port register default settings ----------------------------*/
    return;
}
/*</PORT_INIT_FUNC>*/

#define PORT_STOP_SEC_PBCODE
#include "MemMap.h" /* PRQA S 5087 *//* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL DATA
 **********************************************************************************************************************/

#define PORT_START_SEC_PBCFG
#include "MemMap.h" /* PRQA S 5087 *//* MD_MSR_19.1 */

/*<PORT_REFRESHFUNC>*/
/*</PORT_REFRESHFUNC>*/

/*<PORT_PINCHANNELCONFIG>*/
static CONST( uint32, PORT_PBCFG ) Port_PinChannelConfig0_at[32] =
{

    /* ----------------- Configuration of pin channels ----------------
    *
    *          | Lower 20-Bits of Base Addr | Mem Area Idx | Pin Number |
    *          31                           12             6            0 
    *
    *  Note: The following channels can be accessed by a symbolic name.
    *        This channel-names have to be created and its values
    *        represent the index of the following table.
    * ----------------------------------------------------------------  */
     (0x7E1DC8C2u)
    ,(0x7E1E08C2u)
    ,(0x7F814009u)
    ,(0x7F814000u)
    ,(0x7F814001u)
    ,(0x7F81400Au)
    ,(0x7F81400Bu)
    ,(0x7FC14009u)
    ,(0x7FC14000u)
    ,(0x7FC1400Au)
    ,(0x7FC1400Bu)
    ,(0x7B848000u)
    ,(0x7B848002u)
    ,(0x7B848004u)
    ,(0x7B848005u)
    ,(0x7B848008u)
    ,(0x7B84800Au)
    ,(0x7B84800Cu)
    ,(0x7B84800Eu)
    ,(0x7B84800Fu)
    ,(0x7B848010u)
    ,(0x7B848012u)
    ,(0x7B848014u)
    ,(0x7B848016u)
    ,(0x7B848018u)
    ,(0x7B84801Au)
    ,(0x7B84801Cu)
    ,(0x7B84801Eu)
    ,(0x7B948008u)
    ,(0x7B94800Au)
    ,(0x7B948012u)
    ,(0x7C0F8000u)
};
/*</PORT_PINCHANNELCONFIG>*/

/*<PORT_MEM_AREA_ASSIGNMENT>*/
CONST( uint16, PORT_PBCFG ) Port_MemoryAreas_at[4] =
{
      PORT_MEM_AREA_DUMMY
    ,OS_MEM_AREA_CAN1
    ,OS_MEM_AREA_CAN2
    ,OS_MEM_AREA_CAN3
};
/*</PORT_MEM_AREA_ASSIGNMENT>*/

#define PORT_STOP_SEC_PBCFG
#include "MemMap.h" /* PRQA S 5087 *//* MD_MSR_19.1 */

#define PORT_START_SEC_PBCFG_ROOT
#include "MemMap.h" /* PRQA S 5087 *//* MD_MSR_19.1 */

/*<PORT_CONFIGURATION>*/
CONST( Port_ConfigType, PORT_PBCFG) Port_Runtime =
{
     Port_InitPortRegs0
    ,Port_PinChannelConfig0_at
    ,(uint8)32u
};
/*</PORT_CONFIGURATION>*/

#define PORT_STOP_SEC_PBCFG_ROOT
#include "MemMap.h" /* PRQA S 5087 *//* MD_MSR_19.1 */

/* module specific MISRA deviations:

   MD_PORT_8.8:
     Reason: The pointer of function is only used within the configuration of the module.
             A direct call is not intended.
     Risk: Function label can not found during linking
     Prevention: Ensure that the label of the function is only used after the function is defined.

   MD_PORT_11.3:
     Reason: Assignment of an register address to configuration structure.
     Risk: Impact on portability. 
     Prevention: There are no requirements on portability to a driver. Cast is done directly at
                 usage.

*/

/**********************************************************************************************************************
 *  END OF FILE: Port_PBcfg.c                                                                                         *
 **********************************************************************************************************************/

