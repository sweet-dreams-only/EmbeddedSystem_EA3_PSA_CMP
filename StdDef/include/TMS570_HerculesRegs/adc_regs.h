/*****************************************************************************
* Copyright 2014, 2017 Nxtr
* Nxtr Confidential
*
* Module File Name  : adc_regs.h
* Module Description: ADC (Analog To Digital Converter) Peripheral Registers
* Product           : Gen II Plus - EA3.0
* Author            : Lucas Wendling
*****************************************************************************/
/*---------------------------------------------------------------------------
* Version Control:
* Date Created:      Tue May 31 09:10:25 2011 % 
* %version:          EA3#5 %
* %derived_by:       rzk04c %
*---------------------------------------------------------------------------*/
/*****************************************************************************

CHANGE HISTORY:

 Date      Rev      Author         Change Description              SCR #
-------   -------  --------  -----------------------------------  ----------
06/24/14   3        KMC 	 QAC cleanup                               10551 
05/11/17   4        AJM 	 Champion part registers added         EA3#15416
06/06/17   5        AJM 	 Added dummy register at 0x018C        EA3#16213 
******************************************************************************/

#ifndef ADC_REGS_H
#define ADC_REGS_H

/*****************************************************************************
* Include files
*****************************************************************************/
#include "Std_Types.h"

typedef volatile struct adcctrlregs
{
    uint32 RSTCR;              /**< 0x0000: Reset control register                            */
    uint32 OPMODECR;           /**< 0x0004: Operating mode control register                   */
    uint32 CLOCKCR;            /**< 0x0008: Clock control register                            */
    uint32 CALCR;              /**< 0x000C: Calibration control register                      */
    uint32 GxMODECR[3U];       /**< 0x0010,0x0014,0x0018: Group 0-2 mode control register     */
    uint32 G0SRC;              /**< 0x001C: Group 0 trigger source control register           */
    uint32 G1SRC;              /**< 0x0020: Group 1 trigger source control register           */
    uint32 G2SRC;              /**< 0x0024: Group 2 trigger source control register           */
    uint32 GxINTENA[3U];       /**< 0x0028,0x002C,0x0030: Group 0-2 interrupt enable register */
    uint32 GxINTFLG[3U];       /**< 0x0034,0x0038,0x003C: Group 0-2 interrupt flag register   */
    uint32 GxINTCR[3U];        /**< 0x0040-0x0048: Group 0-2 interrupt threshold register     */
    uint32 G0DMACR;            /**< 0x004C: Group 0 DMA control register                      */
    uint32 G1DMACR;            /**< 0x0050: Group 1 DMA control register                      */
    uint32 G2DMACR;            /**< 0x0054: Group 2 DMA control register                      */
    uint32 BNDCR;              /**< 0x0058: Buffer boundary control register                  */
    uint32 BUFINIT : 16U;      /**< 0x005C: Buffer initialization register                    */
    uint32 BNDEND  : 16U;      /**< 0x005C: Buffer boundary end register                      */
    uint32 G0SAMP;             /**< 0x0060: Group 0 sample window register                    */
    uint32 G1SAMP;             /**< 0x0064: Group 1 sample window register                    */
    uint32 G2SAMP;             /**< 0x0068: Group 2 sample window register                    */
    uint32 GxSR[3U];           /**< 0x006C-0x0074: Group 0-2 status register                  */ /* Nxtr change to define G0SR, G1SR, and G2SR as an array for Adc driver design efficiency */
    uint32 GxSEL[3U];          /**< 0x0078-0x007C: Group 0-2 channel select register          */
    uint32 CALR;               /**< 0x0084: Calibration register                              */
    uint32 SMSTATE;            /**< 0x0088: State machine state register                      */
    uint32 LASTCONV;           /**< 0x008C: Last conversion register                          */
    struct
    {
        uint32 BUF0;           /**< 0x0090,0x00B0,0x00D0: Group 0-2 result buffer 1 register  */
        uint32 BUF1;           /**< 0x0094,0x00B4,0x00D4: Group 0-2 result buffer 1 register  */
        uint32 BUF2;           /**< 0x0098,0x00B8,0x00D8: Group 0-2 result buffer 2 register  */
        uint32 BUF3;           /**< 0x009C,0x00BC,0x00DC: Group 0-2 result buffer 3 register  */
        uint32 BUF4;           /**< 0x00A0,0x00C0,0x00E0: Group 0-2 result buffer 4 register  */
        uint32 BUF5;           /**< 0x00A4,0x00C4,0x00E4: Group 0-2 result buffer 5 register  */
        uint32 BUF6;           /**< 0x00A8,0x00C8,0x00E8: Group 0-2 result buffer 6 register  */
        uint32 BUF7;           /**< 0x00AC,0x00CC,0x00EC: Group 0-2 result buffer 7 register  */
    } GxBUF[3U];
    uint32 G0EMUBUFFER;        /**< 0x00F0: Group 0 emulation result buffer                   */
    uint32 G1EMUBUFFER;        /**< 0x00F4: Group 1 emulation result buffer                   */
    uint32 G2EMUBUFFER;        /**< 0x00F8: Group 2 emulation result buffer                   */
    uint32 EVTDIR;             /**< 0x00FC: Event pin direction register                      */
    uint32 EVTOUT;             /**< 0x0100: Event pin digital output register                 */
    uint32 EVTIN;              /**< 0x0104: Event pin digital input register                  */
    uint32 EVTSET;             /**< 0x0108: Event pin set register                            */
    uint32 EVTCLR;             /**< 0x010C: Event pin clear register                          */
    uint32 EVTPDR;             /**< 0x0110: Event pin open drain register                     */
    uint32 EVTDIS;             /**< 0x0114: Event pin pull disable register                   */
    uint32 EVTPSEL;            /**< 0x0118: Event pin pull select register                    */
    uint32 G0SAMPDISEN;        /**< 0x011C: Group 0 sample discharge register                 */
    uint32 G1SAMPDISEN;        /**< 0x0120: Group 1 sample discharge register                 */
    uint32 G2SAMPDISEN;        /**< 0x0124: Group 2 sample discharge register                 */
    uint32 MAGINTCR1;          /**< 0x0128: Magnitude interrupt control register 1            */
    uint32 MAGINT1MASK;        /**< 0x012C: Magnitude interrupt mask register 1               */
    uint32 MAGINTCR2;          /**< 0x0130: Magnitude interrupt control register 2            */
    uint32 MAGINT2MASK;        /**< 0x0134: Magnitude interrupt mask register 2               */
    uint32 MAGINTCR3;          /**< 0x0138: Magnitude interrupt control register 3            */
    uint32 MAGINT3MASK;        /**< 0x013C: Magnitude interrupt mask register 3               */
    uint32 MAGINTCR4;          /**< 0x0140: Magnitude interrupt control register 4            */
    uint32 MAGINT4MASK;        /**< 0x0144: Magnitude interrupt mask register 4               */
    uint32 MAGINTCR5;          /**< 0x0148: Magnitude interrupt control register 5            */
    uint32 MAGINT5MASK;        /**< 0x014C: Magnitude interrupt mask register 5               */
    uint32 MAGINTCR6;          /**< 0x0150: Magnitude interrupt control register 6            */
    uint32 MAGINT6MASK;        /**< 0x0154: Magnitude interrupt mask register 6               */
    uint32 MAGTHRINTENASET;    /**< 0x0158: Magnitude interrupt set register                  */
    uint32 MAGTHRINTENACLR;    /**< 0x015C: Magnitude interrupt clear register                */
    uint32 MAGTHRINTFLG;       /**< 0x0160: Magnitude interrupt flag register                 */
    uint32 MAGTHRINTOFFSET;    /**< 0x0164: Magnitude interrupt offset register               */
    uint32 GxFIFORESETCR[3U];  /**< 0x0168,0x016C,0x0170: Group 0-2 fifo reset register       */
    uint32 G0RAMADDR;          /**< 0x0174: Group 0 RAM pointer register                      */
    uint32 G1RAMADDR;          /**< 0x0178: Group 1 RAM pointer register                      */
    uint32 G2RAMADDR;          /**< 0x017C: Group 2 RAM pointer register                      */
    uint32 PARCR;              /**< 0x0180: Parity control register                           */
    uint32 PARADDR;            /**< 0x0184: Parity error address register                     */
    uint32 PWRUPDLYCTRL;       /**< 0x0188: Power-Up Delay Control Register                  */
    uint32 :32;                /**< 0x018C: Dummy Register                                     */
    uint32 EVCHNSELMODECTRL;   /**< 0x0190: Event Group Channel Selection Mode Control Register*/
    uint32 G1CHNSELMODECTRL;   /**< 0x0194: Group1 Channel Selection Mode Control Register     */
    uint32 G2CHNSELMODECTRL;   /**< 0x0198: Group2 Channel Selection Mode Control Register     */
    uint32 EVCURRCOUNT;        /**< 0x019C: Event Group Current Count Register                 */
    uint32 EVMAXCOUNT;         /**< 0x01A0: Event Group Max Count Register                     */
    uint32 G1CURRCOUNT;        /**< 0x01A4: Group1 Current Count Register                      */
    uint32 G1MAXCOUNT;         /**< 0x01A8: Group1 Max Count Register                          */
    uint32 G2CURRCOUNT;        /**< 0x01AC: Group2 Current Count Register                      */
    uint32 G2MAXCOUNT;         /**< 0x01B0: Group2 Max Count Register                          */
} adcctrlregs_t;


typedef volatile struct adclutregs
{
    uint32 EVGLUT[32U];       /**< 0x0000 - 0x007C: Event Group Look up tabel                  */
    uint32 G1LUT[32U];        /**< 0x0080 - 0x00FC: Group1 Look up tabel                       */
    uint32 G2LUT[32U];        /**< 0x0100 - 0x017C: Group2 Group Look up tabel                 */
}adclutregs_t;

#define adcREG1 ((adcctrlregs_t *)0xFFF7C000UL)
#define adcREG2 ((adcctrlregs_t *)0xFFF7C200UL)
#define adcLUTREG2 ((adclutregs_t *)0xFF3A2000UL)

#endif
