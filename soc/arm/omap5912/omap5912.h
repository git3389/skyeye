/*
	omap5912.h - definitions of "omap5912" machine  for skyeye
	Copyright (C) 2004 Skyeye Develop Group
	for help please send mail to <skyeye-developer@lists.gro.clinux.org>

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

*/
/*
 * 02/25/2008  	initial version
 *
 *
 * */

#ifndef __OMAP5912_H_
#define __OMAP5912_H_
#ifndef u32
#define u32 uint32_t
#endif
typedef enum omap_ioreg
{
	MPU_L2_ITR = 0xFFFE0000,
	MPU_L2_MIR = 0xFFFE0004,
	MPU_L2_SIR_IRQ = 0xFFFE0010,
	MPU_L2_SIR_FIQ = 0xFFFE0014,
	MPU_L2_CONTROL = 0xFFFE0018,
	MPU_L2_ILR0 = 0xFFFE001C,
	MPU_L2_ILR1 = 0xFFFE0020,
	MPU_L2_ILR2 = 0xFFFE0024,
	MPU_L2_ILR3 = 0xFFFE0028,
	MPU_L2_ILR4 = 0xFFFE002C,
	MPU_L2_ILR5 = 0xFFFE0030,
	MPU_L2_ILR6 = 0xFFFE0034,
	MPU_L2_ILR7 = 0xFFFE0038,
	MPU_L2_ILR8 = 0xFFFE003C,
	MPU_L2_ILR9 = 0xFFFE0040,
	MPU_L2_ILR10 = 0xFFFE0044,
	MPU_L2_ILR11 = 0xFFFE0048,
	MPU_L2_ILR12 = 0xFFFE004C,
	MPU_L2_ILR13 = 0xFFFE0050,
	MPU_L2_ILR14 = 0xFFFE0054,
	MPU_L2_ILR15 = 0xFFFE0058,
	MPU_L2_ILR16 = 0xFFFE005C,
	MPU_L2_ILR17 = 0xFFFE0060,
	MPU_L2_ILR18 = 0xFFFE0064,
	MPU_L2_ILR19 = 0xFFFE0068,
	MPU_L2_ILR20 = 0xFFFE006C,
	MPU_L2_ILR21 = 0xFFFE0070,
	MPU_L2_ILR22 = 0xFFFE0074,
	MPU_L2_ILR23 = 0xFFFE0078,
	MPU_L2_ILR24 = 0xFFFE007C,
	MPU_L2_ILR25 = 0xFFFE0080,
	MPU_L2_ILR26 = 0xFFFE0084,
	MPU_L2_ILR27 = 0xFFFE0088,
	MPU_L2_ILR28 = 0xFFFE008C,
	MPU_L2_ILR29 = 0xFFFE0090,
	MPU_L2_ILR30 = 0xFFFE0094,
	MPU_L2_ILR31 = 0xFFFE0098,

	MPU_L2_ISR = 0xFFFE009C,
	MPU_L2_STATUS = 0xFFFE00A0,
	MPU_L2_OCP_CFG = 0xFFFE00A4,
	MPU_L2_INTH_REV = 0xFFFE00A8,

	MPU_L2_ITR_S1 = 0xFFFE0100,
	MPU_L2_MIR_S1 = 0xFFFE0104,
	MPU_L2_SIR_IRQ_S1 = 0xFFFE0110,
	MPU_L2_SIR_FIQ_S1 = 0xFFFE0114,
	MPU_L2_CONTROL_S1 = 0xFFFE0118,
MPU_L2_ILR0_S1	=0xFFFE011C,
MPU_L2_ILR1_S1	=0xFFFE0120,
MPU_L2_ILR2_S1	=0xFFFE0124,
MPU_L2_ILR3_S1	=0xFFFE0128,
MPU_L2_ILR4_S1	=0xFFFE012C,
MPU_L2_ILR5_S1	=0xFFFE0130,
MPU_L2_ILR6_S1	=0xFFFE0134,
MPU_L2_ILR7_S1	=0xFFFE0138,
MPU_L2_ILR8_S1	=0xFFFE013C,
MPU_L2_ILR9_S1	=0xFFFE0140,
MPU_L2_ILR10_S1	=0xFFFE0144,
MPU_L2_ILR11_S1	=0xFFFE0148,
MPU_L2_ILR12_S1	=0xFFFE014C,
MPU_L2_ILR13_S1	=0xFFFE0150,
MPU_L2_ILR14_S1	=0xFFFE0154,
MPU_L2_ILR15_S1	=0xFFFE0158,
MPU_L2_ILR16_S1	=0xFFFE015C,
MPU_L2_ILR17_S1	=0xFFFE0160,
MPU_L2_ILR18_S1	=0xFFFE0164,
MPU_L2_ILR19_S1	=0xFFFE0168,
MPU_L2_ILR20_S1	=0xFFFE016C,
MPU_L2_ILR21_S1	=0xFFFE0170,
MPU_L2_ILR22_S1	=0xFFFE0174,
MPU_L2_ILR23_S1	=0xFFFE0178,
MPU_L2_ILR24_S1	=0xFFFE017C,
MPU_L2_ILR25_S1	=0xFFFE0180,
MPU_L2_ILR26_S1	=0xFFFE0184,
MPU_L2_ILR27_S1	=0xFFFE0188,
MPU_L2_ILR28_S1	=0xFFFE018C,
MPU_L2_ILR29_S1	=0xFFFE0190,
MPU_L2_ILR30_S1	=0xFFFE0194,
MPU_L2_ILR31_S1	=0xFFFE0198,
/*mpu l2 set3 */

	MPU_L2_ITR_S2 = 0xFFFE0200,
	MPU_L2_MIR_S2 = 0xFFFE0204,
	MPU_L2_SIR_IRQ_S2 = 0xFFFE0210,
	MPU_L2_SIR_FIQ_S2 = 0xFFFE0214,
	MPU_L2_CONTROL_S2 = 0xFFFE0218,
MPU_L2_ILR0_S2	=0xFFFE021C,
MPU_L2_ILR1_S2	=0xFFFE0220,
MPU_L2_ILR2_S2	=0xFFFE0224,
MPU_L2_ILR3_S2	=0xFFFE0228,
MPU_L2_ILR4_S2	=0xFFFE022C,
MPU_L2_ILR5_S2	=0xFFFE0230,
MPU_L2_ILR6_S2	=0xFFFE0234,
MPU_L2_ILR7_S2	=0xFFFE0238,
MPU_L2_ILR8_S2	=0xFFFE023C,
MPU_L2_ILR9_S2	=0xFFFE0240,
MPU_L2_ILR10_S2	=0xFFFE0244,
MPU_L2_ILR11_S2	=0xFFFE0248,
MPU_L2_ILR12_S2	=0xFFFE024C,
MPU_L2_ILR13_S2	=0xFFFE0250,
MPU_L2_ILR14_S2	=0xFFFE0254,
MPU_L2_ILR15_S2	=0xFFFE0258,
MPU_L2_ILR16_S2	=0xFFFE025C,
MPU_L2_ILR17_S2	=0xFFFE0260,
MPU_L2_ILR18_S2	=0xFFFE0264,
MPU_L2_ILR19_S2	=0xFFFE0268,
MPU_L2_ILR20_S2	=0xFFFE026C,
MPU_L2_ILR21_S2	=0xFFFE0270,
MPU_L2_ILR22_S2	=0xFFFE0274,
MPU_L2_ILR23_S2	=0xFFFE0278,
MPU_L2_ILR24_S2	=0xFFFE027C,
MPU_L2_ILR25_S2	=0xFFFE0280,
MPU_L2_ILR26_S2	=0xFFFE0284,
MPU_L2_ILR27_S2	=0xFFFE0288,
MPU_L2_ILR28_S2	=0xFFFE028C,
MPU_L2_ILR29_S2	=0xFFFE0290,
MPU_L2_ILR30_S2	=0xFFFE0294,
MPU_L2_ILR31_S2	=0xFFFE0298,

/*mpu l2 set4 */
	MPU_L2_ITR_S3 = 0xFFFE0300,
	MPU_L2_MIR_S3 = 0xFFFE0304,
	MPU_L2_SIR_IRQ_S3 = 0xFFFE0310,
	MPU_L2_SIR_FIQ_S3 = 0xFFFE0314,
	MPU_L2_CONTROL_S3 = 0xFFFE0318,
MPU_L2_ILR0_S3	=0xFFFE031C,
MPU_L2_ILR1_S3	=0xFFFE0320,
MPU_L2_ILR2_S3	=0xFFFE0324,
MPU_L2_ILR3_S3	=0xFFFE0328,
MPU_L2_ILR4_S3	=0xFFFE032C,
MPU_L2_ILR5_S3	=0xFFFE0330,
MPU_L2_ILR6_S3	=0xFFFE0334,
MPU_L2_ILR7_S3	=0xFFFE0338,
MPU_L2_ILR8_S3	=0xFFFE033C,
MPU_L2_ILR9_S3	=0xFFFE0340,
MPU_L2_ILR10_S3	=0xFFFE0344,
MPU_L2_ILR11_S3	=0xFFFE0348,
MPU_L2_ILR12_S3	=0xFFFE034C,
MPU_L2_ILR13_S3	=0xFFFE0350,
MPU_L2_ILR14_S3	=0xFFFE0354,
MPU_L2_ILR15_S3	=0xFFFE0358,
MPU_L2_ILR16_S3	=0xFFFE035C,
MPU_L2_ILR17_S3	=0xFFFE0360,
MPU_L2_ILR18_S3	=0xFFFE0364,
MPU_L2_ILR19_S3	=0xFFFE0368,
MPU_L2_ILR20_S3	=0xFFFE036C,
MPU_L2_ILR21_S3	=0xFFFE0370,
MPU_L2_ILR22_S3	=0xFFFE0374,
MPU_L2_ILR23_S3	=0xFFFE0378,
MPU_L2_ILR24_S3	=0xFFFE037C,
MPU_L2_ILR25_S3	=0xFFFE0380,
MPU_L2_ILR26_S3	=0xFFFE0384,
MPU_L2_ILR27_S3	=0xFFFE0388,
MPU_L2_ILR28_S3	=0xFFFE038C,
MPU_L2_ILR29_S3	=0xFFFE0390,
MPU_L2_ILR30_S3	=0xFFFE0394,
MPU_L2_ILR31_S3	=0xFFFE0398,

	/*interrupt level 1*/
	MPU_L1_ITR = 0xFFFECB00,
	MPU_L1_MIR = 0xFFFECB04,
	MPU_L1_SIR_IRQ_CODE = 0xFFFECB10,
	MPU_L1_SIR_FIQ_CODE = 0xFFFECB14,
	MPU_L1_CONTROL = 0xFFFECB18,
	MPU_L1_ILR0 = 0xFFFECB1C,
	MPU_L1_ILR1 = 0xFFFECB20,
	MPU_L1_ILR2 = 0xFFFECB24,
	MPU_L1_ILR3 = 0xFFFECB28,
	MPU_L1_ILR4 = 0xFFFECB2C,
	MPU_L1_ILR5 = 0xFFFE0030,
	MPU_L1_ILR6 = 0xFFFECB34,
	MPU_L1_ILR7 = 0xFFFECB38,
	MPU_L1_ILR8 = 0xFFFECB3C,
	MPU_L1_ILR9 = 0xFFFECB40,
	MPU_L1_ILR10 = 0xFFFECB44,
	MPU_L1_ILR11 = 0xFFFECB48,
	MPU_L1_ILR12 = 0xFFFECB4C,
	MPU_L1_ILR13 = 0xFFFECB50,
	MPU_L1_ILR14 = 0xFFFECB54,
	MPU_L1_ILR15 = 0xFFFECB58,
	MPU_L1_ILR16 = 0xFFFECB5C,
	MPU_L1_ILR17 = 0xFFFECB60,
	MPU_L1_ILR18 = 0xFFFECB64,
	MPU_L1_ILR19 = 0xFFFECB68,
	MPU_L1_ILR20 = 0xFFFECB6C,
	MPU_L1_ILR21 = 0xFFFECB70,
	MPU_L1_ILR22 = 0xFFFECB74,
	MPU_L1_ILR23 = 0xFFFECB78,
	MPU_L1_ILR24 = 0xFFFECB7C,
	MPU_L1_ILR25 = 0xFFFECB80,
	MPU_L1_ILR26 = 0xFFFECB84,
	MPU_L1_ILR27 = 0xFFFECB88,
	MPU_L1_ILR28 = 0xFFFECB8C,
	MPU_L1_ILR29 = 0xFFFECB90,
	MPU_L1_ILR30 = 0xFFFECB94,
	MPU_L1_ILR31 = 0xFFFECB98,
	MPU_L1_ISR = 0xFFFECB9C,
	MPU_L1_ENHANCEED_CNTL = 0xFFFECBA0,
	/** gpio register*/
	GPIO1_REVISION	= 0xFFFBE400,
	GPIO1_SYSCONFIG	= 0xFFFBE410,
	GPIO1_SYSSTATUS	= 0xFFFBE414,
	GPIO1_IRQSTATUS1 = 0xFFFBE418,
	GPIO1_IRQENABLE1 = 0xFFFBE41C,
	GPIO1_IRQSTATUS2 = 0xFFFBE420,
	GPIO1_IRQENABLE2 = 0xFFFBE424,
	GPIO1_WAKEUPENABLE = 0xFFFBE428,
	GPIO1_DATAIN	= 0xFFFBE42C,
	GPIO1_DATAOUT	= 0xFFFBE430,
	GPIO1_DIRECTION	= 0xFFFBE434,
	GPIO1_EDGE_CTRL1 = 0xFFFBE438,
	GPIO1_EDGE_CTRL2 = 0xFFFBE43C,
	GPIO1_CLEAR_IRQENABLE1 = 0xFFFBE49C,
	GPIO1_CLEAR_IRQENABLE2 = 0xFFFBE4A4,
	GPIO1_CLEAR_WAKEUPENA = 0xFFFBE4A8,
	GPIO1_CLEAR_DATAOUT = 0xFFFBE4B0,
	GPIO1_SET_IRQENABLE1 = 0xFFFBE4DC,
	GPIO1_SET_IRQENABLE2 = 0xFFFBE4E4,
	GPIO1_SET_WAKEUPENA = 0xFFFBE4E8,
	GPIO1_SET_DATAOUT = 0xFFFBE4F0,

	GPIO2_REVISION	= 0xFFFBEC00,
	GPIO2_SYSCONFIG	= 0xFFFBEC10,
	GPIO2_SYSSTATUS	= 0xFFFBEC14,
	GPIO2_IRQSTATUS1 = 0xFFFBEC18,
	GPIO2_IRQENABLE1 = 0xFFFBEC1C,
	GPIO2_IRQSTATUS2 = 0xFFFBEC20,
	GPIO2_IRQENABLE2 = 0xFFFBEC24,
	GPIO2_WAKEUPENABLE = 0xFFFBEC28,
	GPIO2_DATAIN	= 0xFFFBEC2C,
	GPIO2_DATAOUT	= 0xFFFBEC30,
	GPIO2_DIRECTION	= 0xFFFBEC34,
	GPIO2_EDGE_CTRL1 = 0xFFFBEC38,
	GPIO2_EDGE_CTRL2 = 0xFFFBEC3C,
	GPIO2_CLEAR_IRQENABLE1 = 0xFFFBEC9C,
	GPIO2_CLEAR_IRQENABLE2 = 0xFFFBECA4,
	GPIO2_CLEAR_WAKEUPENA = 0xFFFBECA8,
	GPIO2_CLEAR_DATAOUT = 0xFFFBECB0,
	GPIO2_SET_IRQENABLE1 = 0xFFFBECDC,
	GPIO2_SET_IRQENABLE2 = 0xFFFBECE4,
	GPIO2_SET_WAKEUPENA = 0xFFFBECE8,
	GPIO2_SET_DATAOUT = 0xFFFBECF0,

	GPIO3_REVISION	= 0xFFFBB400,
	GPIO3_SYSCONFIG	= 0xFFFBB410,
	GPIO3_SYSSTATUS	= 0xFFFBB414,
	GPIO3_IRQSTATUS1 = 0xFFFBB418,
	GPIO3_IRQENABLE1 = 0xFFFBB41C,
	GPIO3_IRQSTATUS2 = 0xFFFBB420,
	GPIO3_IRQENABLE2 = 0xFFFBB424,
	GPIO3_WAKEUPENABLE = 0xFFFBB428,
	GPIO3_DATAIN	= 0xFFFBB42C,
	GPIO3_DATAOUT	= 0xFFFBB430,
	GPIO3_DIRECTION	= 0xFFFBB434,
	GPIO3_EDGE_CTRL1 = 0xFFFBB438,
	GPIO3_EDGE_CTRL2 = 0xFFFBB43C,
	GPIO3_CLEAR_IRQENABLE1 = 0xFFFBB49C,
	GPIO3_CLEAR_IRQENABLE2 = 0xFFFBB4A4,
	GPIO3_CLEAR_WAKEUPENA = 0xFFFBB4A8,
	GPIO3_CLEAR_DATAOUT = 0xFFFBB4B0,
	GPIO3_SET_IRQENABLE1 = 0xFFFBB4DC,
	GPIO3_SET_IRQENABLE2 = 0xFFFBB4E4,
	GPIO3_SET_WAKEUPENA = 0xFFFBB4E8,
	GPIO3_SET_DATAOUT = 0xFFFBB4F0,

	GPIO4_REVISION	= 0xFFFBBC00,
	GPIO4_SYSCONFIG	= 0xFFFBBC10,
	GPIO4_SYSTATUS	= 0xFFFBBC14,
	GPIO4_IRQSTATUS1 = 0xFFFBBC18,
	GPIO4_IRQENABLE1 = 0xFFFBBC1C,
	GPIO4_IRQSTATUS2 = 0xFFFBBC20,
	GPIO4_IRQENABLE2 = 0xFFFBBC24,
	GPIO4_WAKEUPENABLE = 0xFFFBBC28,
	GPIO4_DATAIN	= 0xFFFBBC2C,
	GPIO4_DATAOUT	= 0xFFFBBC30,
	GPIO4_DIRECTION	= 0xFFFBBC34,
	GPIO4_EDGE_CTRL1 = 0xFFFBBC38,
	GPIO4_EDGE_CTRL2 = 0xFFFBBC3C,
	GPIO4_CLEAR_IRQENABLE1 = 0xFFFBBC9C,
	GPIO4_CLEAR_IRQENABLE2 = 0xFFFBBCA4,
	GPIO4_CLEAR_WAKEUPENA = 0xFFFBBCA8,
	GPIO4_CLEAR_DATAOUT = 0xFFFBBCB0,
	GPIO4_SET_IRQENABLE1 = 0xFFFBBCDC,
	GPIO4_SET_IRQENABLE2 = 0xFFFBBCE4,
	GPIO4_SET_WAKEUPENA = 0xFFFBBCE8,
	GPIO4_SET_DATAOUT = 0xFFFBBCF0,

	/* os timer register*/
	OS_TIMER_TICK_VAL = 0xFFFB9000,
	OS_TIMER_TICK_CNTR = 0xFFFB9004,
	OS_TIMER_CTRL = 0xFFFB9008,

	/**mpu timer*/
	MPU_CNTL_TIMER1 = 0xFFFEC500,
	MPU_LOAD_TIMER1 = 0xFFFEC504,
	MPU_READ_TIMER1 = 0xFFFEC508,

	MPU_CNTL_TIMER2 = 0xFFFEC600,
	MPU_LOAD_TIMER2 = 0xFFFEC604,
	MPU_READ_TIMER2 = 0xFFFEC608,

	MPU_CNTL_TIMER3 = 0xFFFEC700,
	MPU_LOAD_TIMER3 = 0xFFFEC704,
	MPU_READ_TIMER3 = 0xFFFEC708,

	/* syncronized timer 32k read 16bit*/
	TIMER_32K_SYNCHRONIZED = 0xFFFBC410,

	/** uart register*/

	UART1_THR = 0xFFFB0000,
	UART1_IIR = 0xFFFB0008,
	UART1_LSR = 0xFFFB0014,
#if 0
	UART1_RHR = 0xFFFB0000,
	UART1_THR = 0xFFFB0000,
	UART1_DLL = 0xFFFB0000,
	UART1_IER = 0xFFFB0004,
	UART1_DLH = 0xFFFB0004,
	UART1_IIR = 0xFFFB0008,
	UART1_FCR = 0xFFFB0008,
	UART1_EFR = 0xFFFB0008,
	UART1_LCR = 0xFFFB000C,
	UART1_MCR = 0xFFFB0010,
	UART1_XON1 = 0xFFFB0010,
	UART1_LSR = 0xFFFB0014,
	UART1_XON2 = 0xFFFB0014,
	UART1_MSR = 0xFFFB0018,
	UART1_TCR = 0xFFFB0018,
	UART1_XOFF1 = 0xFFFB0018,
	UART1_SPR = 0xFFFB001C,
	UART1_TLR = 0xFFFB001C,
	UART1_XOFF2 = 0xFFFB001C,
	UART1_MDR1 = 0xFFFB0020,
	UART1_MDR2 = 0xFFFB0024,
	UART1_SFLSR = 0xFFFB0028,
	UART1_TXFLL = 0xFFFB0028,
	UART1_RESUME = 0xFFFB002C,
	UART1_TXFLH = 0xFFFB002C,
	UART1_SFREGL = 0xFFFB0030,
	UART1_RXFLL = 0xFFFB0030,
	UART1_SFREGH = 0xFFFB0034,
	UART1_RXFLH = 0xFFFB0034,
	UART1_UASR = 0xFFFB0038,
	UART1_BLR = 0xFFFB0038,
	UART1_ACREG = 0xFFFB003C,
	UART1_SCR = 0xFFFB0040,
	UART1_SSR = 0xFFFB0044,
	UART1_EBLR = 0xFFFB0048,
	UART1_MVR = 0xFFFB0050,
	UART1_SYSC = 0xFFFB0054,
	UART1_SYSS = 0xFFFB0058,
	UART1_WER = 0xFFFB005C,
#endif

	ULPD_CLOCK_CTRL	= 0xFFFE0830,
	SOFT_REQ_REG = 0xFFFE0834,
	SOFT_REQ_REG2 = 0xFFFE0880,
	MOD_CONF_CTRL_0 = 0xFFFE1080,
	FUNC_MUX_CTRL_10= 0xFFFE1098,
	PULL_DWN_CTRL_4	= 0xFFFE10AC,
	EMIFS_CS1_CONFIG = 0xFFFECC14,
	DIE_ID_LSB = 0xFFFE1800,
	DIE_ID_MSB = 0xFFFE1804,
	PROD_ID_REG0 = 0xFFFE2000,
	PROD_ID_REG1 = 0xFFFE2004,
	ARM_CKCTL = 0xFFFECE00,
	ARM_IDLECT1 = 0xFFFECE04,
	ARM_IDLECT2 = 0xFFFECE08,
	ARM_RSTCT1 = 0xFFFECE10,
	ARM_RSTCT2 = 0xFFFECE14,
	ARM_SYSST = 0xFFFECE18,
	DPLL1_CTL_REG = 0xFFFECF00
} omap_ioreg_t;

#define REGW(addr)	(*(volatile unsigned int *)(addr))
/********************************************
* Memory Controller Registers
********************************************/
#define NOR_FLASH		(0x0C000000)
#define SDRAM_EXTERNAL		(0x10000000)
#define FRAME_BUFFER		(0x20000000)
#define TI_CAMERA_IF		(0x3007D800)
#define OMAP5912_PERIPHERALS	(0xFFFB0000)
/********************************************
* LCD Controller Registers
********************************************/

/********************************************
* GPIO Controller Registers
********************************************/
#define GPIO1_REVISION		(0xFFFBE400)
#define GPIO1_SYSCONFIG		(0xFFFBE410)
#define GPIO1_SYSSTATUS		(0xFFFBE414)
#define GPIO1_IRQSTATUS1	(0xFFFBE418)
#define GPIO1_IRQENABLE1	(0xFFFBE41C)
#define GPIO1_IRQSTATUS2	(0xFFFBE420)
#define GPIO1_IRQENABLE2	(0xFFFBE424)
#define GPIO1_WAKEUPENABLE	(0xFFFBE428)
#define GPIO1_DATAIN		(0xFFFBE42C)
#define GPIO1_DATAOUT		(0xFFFBE430)
#define GPIO1_DIRECTION		(0xFFFBE434)
#define GPIO1_EDGE_CTRL1	(0xFFFBE438)
#define GPIO1_EDGE_CTRL2	(0xFFFBE43C)
#define GPIO1_CLEAR_IRQENABLE1	(0xFFFBE49C)
#define GPIO1_CLEAR_IRQENABLE2	(0xFFFBE4A4)
#define GPIO1_CLEAR_WAKEUPENA	(0xFFFBE4A8)
#define GPIO1_CLEAR_DATAOUT	(0xFFFBE4B0)
#define GPIO1_SET_IRQENABLE1	(0xFFFBE4DC)
#define GPIO1_SET_IRQENABLE2	(0xFFFBE4E4)
#define GPIO1_SET_WAKEUPENA	(0xFFFBE4E8)
#define GPIO1_SET_DATAOUT	(0xFFFBE4F0)

#define GPIO2_REVISION		(0xFFFBEC00)
#define GPIO2_SYSCONFIG		(0xFFFBEC10)
#define GPIO2_SYSSTATUS		(0xFFFBEC14)
#define GPIO2_IRQSTATUS1	(0xFFFBEC18)
#define GPIO2_IRQENABLE1	(0xFFFBEC1C)
#define GPIO2_IRQSTATUS2	(0xFFFBEC20)
#define GPIO2_IRQENABLE2	(0xFFFBEC24)
#define GPIO2_WAKEUPENABLE	(0xFFFBEC28)
#define GPIO2_DATAIN		(0xFFFBEC2C)
#define GPIO2_DATAOUT		(0xFFFBEC30)
#define GPIO2_DIRECTION		(0xFFFBEC34)
#define GPIO2_EDGE_CTRL1	(0xFFFBEC38)
#define GPIO2_EDGE_CTRL2	(0xFFFBEC3C)
#define GPIO2_CLEAR_IRQENABLE1	(0xFFFBEC9C)
#define GPIO2_CLEAR_IRQENABLE2	(0xFFFBECA4)
#define GPIO2_CLEAR_WAKEUPENA	(0xFFFBECA8)
#define GPIO2_CLEAR_DATAOUT	(0xFFFBECB0)
#define GPIO2_SET_IRQENABLE1	(0xFFFBECDC)
#define GPIO2_SET_IRQENABLE2	(0xFFFBECE4)
#define GPIO2_SET_WAKEUPENA	(0xFFFBECE8)
#define GPIO2_SET_DATAOUT	(0xFFFBECF0)

#define GPIO3_REVISION		(0xFFFBB400)
#define GPIO3_SYSCONFIG		(0xFFFBB410)
#define GPIO3_SYSSTATUS		(0xFFFBB414)
#define GPIO3_IRQSTATUS1	(0xFFFBB418)
#define GPIO3_IRQENABLE1	(0xFFFBB41C)
#define GPIO3_IRQSTATUS2	(0xFFFBB420)
#define GPIO3_IRQENABLE2	(0xFFFBB424)
#define GPIO3_WAKEUPENABLE	(0xFFFBB428)
#define GPIO3_DATAIN		(0xFFFBB42C)
#define GPIO3_DATAOUT		(0xFFFBB430)
#define GPIO3_DIRECTION		(0xFFFBB434)
#define GPIO3_EDGE_CTRL1	(0xFFFBB438)
#define GPIO3_EDGE_CTRL2	(0xFFFBB43C)
#define GPIO3_CLEAR_IRQENABLE1	(0xFFFBB49C)
#define GPIO3_CLEAR_IRQENABLE2	(0xFFFBB4A4)
#define GPIO3_CLEAR_WAKEUPENA	(0xFFFBB4A8)
#define GPIO3_CLEAR_DATAOUT	(0xFFFBB4B0)
#define GPIO3_SET_IRQENABLE1	(0xFFFBB4DC)
#define GPIO3_SET_IRQENABLE2	(0xFFFBB4E4)
#define GPIO3_SET_WAKEUPENA	(0xFFFBB4E8)
#define GPIO3_SET_DATAOUT	(0xFFFBB4F0)

#define GPIO4_REVISION		(0xFFFBBC00)
#define GPIO4_SYSCONFIG		(0xFFFBBC10)
#define GPIO4_SYSSTATUS		(0xFFFBBC14)
#define GPIO4_IRQSTATUS1	(0xFFFBBC18)
#define GPIO4_IRQENABLE1	(0xFFFBBC1C)
#define GPIO4_IRQSTATUS2	(0xFFFBBC20)
#define GPIO4_IRQENABLE2	(0xFFFBBC24)
#define GPIO4_WAKEUPENABLE	(0xFFFBBC28)
#define GPIO4_DATAIN		(0xFFFBBC2C)
#define GPIO4_DATAOUT		(0xFFFBBC30)
#define GPIO4_DIRECTION		(0xFFFBBC34)
#define GPIO4_EDGE_CTRL1	(0xFFFBBC38)
#define GPIO4_EDGE_CTRL2	(0xFFFBBC3C)
#define GPIO4_CLEAR_IRQENABLE1	(0xFFFBBC9C)
#define GPIO4_CLEAR_IRQENABLE2	(0xFFFBBCA4)
#define GPIO4_CLEAR_WAKEUPENA	(0xFFFBBCA8)
#define GPIO4_CLEAR_DATAOUT	(0xFFFBBCB0)
#define GPIO4_SET_IRQENABLE1	(0xFFFBBCDC)
#define GPIO4_SET_IRQENABLE2	(0xFFFBBCE4)
#define GPIO4_SET_WAKEUPENA	(0xFFFBBCE8)
#define GPIO4_SET_DATAOUT	(0xFFFBBCF0)

/********************************************
* Clock and Power Management Registers
********************************************/

/********************************************
* UART Control Registers
********************************************/
#define UART1_RHR	(0xFFFB0000)
#define UART1_THR	(0xFFFB0000)
#define UART1_DLL	(0xFFFB0000)
#define UART1_IER	(0xFFFB0004)
#define UART1_DLH	(0xFFFB0004)
#define UART1_IIR	(0xFFFB0008)
#define UART1_FCR	(0xFFFB0008)
#define UART1_EFR	(0xFFFB0008)
#define UART1_LCR	(0xFFFB000C)
#define UART1_MCR	(0xFFFB0010)
#define UART1_XON1	(0xFFFB0010)
#define UART1_LSR	(0xFFFB0014)
#define UART1_XON2	(0xFFFB0014)
#define UART1_MSR	(0xFFFB0018)
#define UART1_TCR	(0xFFFB0018)
#define UART1_XOFF1	(0xFFFB0018)
#define UART1_SPR	(0xFFFB001C)
#define UART1_TLR	(0xFFFB001C)
#define UART1_XOFF2	(0xFFFB001C)
#define UART1_MDR1	(0xFFFB0020)
#define UART1_MDR2	(0xFFFB0024)
#define UART1_SFLSR	(0xFFFB0028)
#define UART1_TXFLL	(0xFFFB0028)
#define UART1_RESUME	(0xFFFB002C)
#define UART1_TXFLH	(0xFFFB002C)
#define UART1_SFREGL	(0xFFFB0030)
#define UART1_RXFLL	(0xFFFB0030)
#define UART1_SFREGH	(0xFFFB0034)
#define UART1_RXFLH	(0xFFFB0034)
#define UART1_UASR	(0xFFFB0038)
#define UART1_BLR	(0xFFFB0038)
#define UART1_ACREG	(0xFFFB003C)
#define UART1_SCR	(0xFFFB0040)
#define UART1_SSR	(0xFFFB0044)
#define UART1_EBLR	(0xFFFB0048)
#define UART1_MVR	(0xFFFB0050)
#define UART1_SYSC	(0xFFFB0054)
#define UART1_SYSS	(0xFFFB0058)
#define UART1_WER	(0xFFFB005C)

#define UART2_RHR	(0xFFFB0800)
#define UART2_THR	(0xFFFB0800)
#define UART2_DLL	(0xFFFB0800)
#define UART2_IER	(0xFFFB0804)
#define UART2_DLH	(0xFFFB0804)
#define UART2_IIR	(0xFFFB0808)
#define UART2_FCR	(0xFFFB0808)
#define UART2_EFR	(0xFFFB0808)
#define UART2_LCR	(0xFFFB080C)
#define UART2_MCR	(0xFFFB0810)
#define UART2_XON1	(0xFFFB0810)
#define UART2_LSR	(0xFFFB0814)
#define UART2_XON2	(0xFFFB0814)
#define UART2_MSR	(0xFFFB0818)
#define UART2_TCR	(0xFFFB0818)
#define UART2_XOFF1	(0xFFFB0818)
#define UART2_SPR	(0xFFFB081C)
#define UART2_TLR	(0xFFFB081C)
#define UART2_XOFF2	(0xFFFB081C)
#define UART2_MDR1	(0xFFFB0820)
#define UART2_MDR2	(0xFFFB0824)
#define UART2_SFLSR	(0xFFFB0828)
#define UART2_TXFLL	(0xFFFB0828)
#define UART2_RESUME	(0xFFFB082C)
#define UART2_TXFLH	(0xFFFB082C)
#define UART2_SFREGL	(0xFFFB0830)
#define UART2_RXFLL	(0xFFFB0830)
#define UART2_SFREGH	(0xFFFB0834)
#define UART2_RXFLH	(0xFFFB0834)
#define UART2_UASR	(0xFFFB0838)
#define UART2_BLR	(0xFFFB0838)
#define UART2_ACREG	(0xFFFB083C)
#define UART2_SCR	(0xFFFB0840)
#define UART2_SSR	(0xFFFB0844)
#define UART2_EBLR	(0xFFFB0848)
#define UART2_MVR	(0xFFFB0850)
#define UART2_SYSC	(0xFFFB0854)
#define UART2_SYSS	(0xFFFB0858)
#define UART2_WER	(0xFFFB085C)

/**************************************/
/* MPU Level 2 Interrupt Handler Registers */
/**************************************/
#define MPU_L2_ITR	(0xFFFE0000)
#define MPU_L2_MIR	(0xFFFE0004)
#define MPU_L2_SIR_IRQ	(0xFFFE0010)
#define MPU_L2_SIR_FIQ	(0xFFFE0014)
#define MPU_L2_CONTROL	(0xFFFE0018)
#define MPU_L2_ILR0	(0xFFFE001C)
#define MPU_L2_ILR1	(0xFFFE0020)
#define MPU_L2_ILR2	(0xFFFE0024)
#define MPU_L2_ILR3	(0xFFFE0028)
#define MPU_L2_ILR4	(0xFFFE002C)
#define MPU_L2_ILR5	(0xFFFE0030)
#define MPU_L2_ILR6	(0xFFFE0034)
#define MPU_L2_ILR7	(0xFFFE0038)
#define MPU_L2_ILR8	(0xFFFE003C)
#define MPU_L2_ILR9	(0xFFFE0040)
#define MPU_L2_ILR10	(0xFFFE0044)
#define MPU_L2_ILR11	(0xFFFE0048)
#define MPU_L2_ILR12	(0xFFFE004C)
#define MPU_L2_ILR13	(0xFFFE0050)
#define MPU_L2_ILR14	(0xFFFE0054)
#define MPU_L2_ILR15	(0xFFFE0058)
#define MPU_L2_ILR16	(0xFFFE005C)
#define MPU_L2_ILR17	(0xFFFE0060)
#define MPU_L2_ILR18	(0xFFFE0064)
#define MPU_L2_ILR19	(0xFFFE0068)
#define MPU_L2_ILR20	(0xFFFE006C)
#define MPU_L2_ILR21	(0xFFFE0070)
#define MPU_L2_ILR22	(0xFFFE0074)
#define MPU_L2_ILR23	(0xFFFE0078)
#define MPU_L2_ILR24	(0xFFFE007C)
#define MPU_L2_ILR25	(0xFFFE0080)
#define MPU_L2_ILR26	(0xFFFE0084)
#define MPU_L2_ILR27	(0xFFFE0088)
#define MPU_L2_ILR28	(0xFFFE008C)
#define MPU_L2_ILR29	(0xFFFE0090)
#define MPU_L2_ILR30	(0xFFFE0094)
#define MPU_L2_ILR31	(0xFFFE0098)
#define MPU_L2_ISR	(0xFFFE009C)
#define MPU_L2_STATUS	(0xFFFE00A0)
#define MPU_L2_OCP_CFG	(0xFFFE00A4)
#define MPU_L2_INTH_REV	(0xFFFE00A8)
/*mpu l2 set2 */

#define MPU_L2_ILR0_S1	(0xFFFE011C)
#define MPU_L2_ILR1_S1	(0xFFFE0120)
#define MPU_L2_ILR2_S1	(0xFFFE0124)
#define MPU_L2_ILR3_S1	(0xFFFE0128)
#define MPU_L2_ILR4_S1	(0xFFFE012C)
#define MPU_L2_ILR5_S1	(0xFFFE0130)
#define MPU_L2_ILR6_S1	(0xFFFE0134)
#define MPU_L2_ILR7_S1	(0xFFFE0138)
#define MPU_L2_ILR8_S1	(0xFFFE013C)
#define MPU_L2_ILR9_S1	(0xFFFE0140)
#define MPU_L2_ILR10_S1	(0xFFFE0144)
#define MPU_L2_ILR11_S1	(0xFFFE0148)
#define MPU_L2_ILR12_S1	(0xFFFE014C)
#define MPU_L2_ILR13_S1	(0xFFFE0150)
#define MPU_L2_ILR14_S1	(0xFFFE0154)
#define MPU_L2_ILR15_S1	(0xFFFE0158)
#define MPU_L2_ILR16_S1	(0xFFFE015C)
#define MPU_L2_ILR17_S1	(0xFFFE0160)
#define MPU_L2_ILR18_S1	(0xFFFE0164)
#define MPU_L2_ILR19_S1	(0xFFFE0168)
#define MPU_L2_ILR20_S1	(0xFFFE016C)
#define MPU_L2_ILR21_S1	(0xFFFE0170)
#define MPU_L2_ILR22_S1	(0xFFFE0174)
#define MPU_L2_ILR23_S1	(0xFFFE0178)
#define MPU_L2_ILR24_S1	(0xFFFE017C)
#define MPU_L2_ILR25_S1	(0xFFFE0180)
#define MPU_L2_ILR26_S1	(0xFFFE0184)
#define MPU_L2_ILR27_S1	(0xFFFE0188)
#define MPU_L2_ILR28_S1	(0xFFFE018C)
#define MPU_L2_ILR29_S1	(0xFFFE0190)
#define MPU_L2_ILR30_S1	(0xFFFE0194)
#define MPU_L2_ILR31_S1	(0xFFFE0198)
/*mpu l2 set3 */
#define MPU_L2_ILR0_S2	(0xFFFE021C)
#define MPU_L2_ILR1_S2	(0xFFFE0220)
#define MPU_L2_ILR2_S2	(0xFFFE0224)
#define MPU_L2_ILR3_S2	(0xFFFE0228)
#define MPU_L2_ILR4_S2	(0xFFFE022C)
#define MPU_L2_ILR5_S2	(0xFFFE0230)
#define MPU_L2_ILR6_S2	(0xFFFE0234)
#define MPU_L2_ILR7_S2	(0xFFFE0238)
#define MPU_L2_ILR8_S2	(0xFFFE023C)
#define MPU_L2_ILR9_S2	(0xFFFE0240)
#define MPU_L2_ILR10_S2	(0xFFFE0244)
#define MPU_L2_ILR11_S2	(0xFFFE0248)
#define MPU_L2_ILR12_S2	(0xFFFE024C)
#define MPU_L2_ILR13_S2	(0xFFFE0250)
#define MPU_L2_ILR14_S2	(0xFFFE0254)
#define MPU_L2_ILR15_S2	(0xFFFE0258)
#define MPU_L2_ILR16_S2	(0xFFFE025C)
#define MPU_L2_ILR17_S2	(0xFFFE0260)
#define MPU_L2_ILR18_S2	(0xFFFE0264)
#define MPU_L2_ILR19_S2	(0xFFFE0268)
#define MPU_L2_ILR20_S2	(0xFFFE026C)
#define MPU_L2_ILR21_S2	(0xFFFE0270)
#define MPU_L2_ILR22_S2	(0xFFFE0274)
#define MPU_L2_ILR23_S2	(0xFFFE0278)
#define MPU_L2_ILR24_S2	(0xFFFE027C)
#define MPU_L2_ILR25_S2	(0xFFFE0280)
#define MPU_L2_ILR26_S2	(0xFFFE0284)
#define MPU_L2_ILR27_S2	(0xFFFE0288)
#define MPU_L2_ILR28_S2	(0xFFFE028C)
#define MPU_L2_ILR29_S2	(0xFFFE0290)
#define MPU_L2_ILR30_S2	(0xFFFE0294)
#define MPU_L2_ILR31_S2	(0xFFFE0298)

/*mpu l2 set4 */
#define MPU_L2_ILR0_S3	(0xFFFE031C)
#define MPU_L2_ILR1_S3	(0xFFFE0320)
#define MPU_L2_ILR2_S3	(0xFFFE0324)
#define MPU_L2_ILR3_S3	(0xFFFE0328)
#define MPU_L2_ILR4_S3	(0xFFFE032C)
#define MPU_L2_ILR5_S3	(0xFFFE0330)
#define MPU_L2_ILR6_S3	(0xFFFE0334)
#define MPU_L2_ILR7_S3	(0xFFFE0338)
#define MPU_L2_ILR8_S3	(0xFFFE033C)
#define MPU_L2_ILR9_S3	(0xFFFE0340)
#define MPU_L2_ILR10_S3	(0xFFFE0344)
#define MPU_L2_ILR11_S3	(0xFFFE0348)
#define MPU_L2_ILR12_S3	(0xFFFE034C)
#define MPU_L2_ILR13_S3	(0xFFFE0350)
#define MPU_L2_ILR14_S3	(0xFFFE0354)
#define MPU_L2_ILR15_S3	(0xFFFE0358)
#define MPU_L2_ILR16_S3	(0xFFFE035C)
#define MPU_L2_ILR17_S3	(0xFFFE0360)
#define MPU_L2_ILR18_S3	(0xFFFE0364)
#define MPU_L2_ILR19_S3	(0xFFFE0368)
#define MPU_L2_ILR20_S3	(0xFFFE036C)
#define MPU_L2_ILR21_S3	(0xFFFE0370)
#define MPU_L2_ILR22_S3	(0xFFFE0374)
#define MPU_L2_ILR23_S3	(0xFFFE0378)
#define MPU_L2_ILR24_S3	(0xFFFE037C)
#define MPU_L2_ILR25_S3	(0xFFFE0380)
#define MPU_L2_ILR26_S3	(0xFFFE0384)
#define MPU_L2_ILR27_S3	(0xFFFE0388)
#define MPU_L2_ILR28_S3	(0xFFFE038C)
#define MPU_L2_ILR29_S3	(0xFFFE0390)
#define MPU_L2_ILR30_S3	(0xFFFE0394)
#define MPU_L2_ILR31_S3	(0xFFFE0398)

/**************************************/
/* MPU Level 1 Interrupt Handler Registers */
/**************************************/
#define MPU_L1_ITR	(0xFFFECB00)
#define MPU_L1_MIR	(0xFFFECB04)
#define MPU_L1_SIR_IRQ_CODE	(0xFFFECB10)
#define MPU_L1_SIR_FIQ_CODE	(0xFFFECB14)
#define MPU_L1_CONTROL	(0xFFFECB18)
#define MPU_L1_ILR0	(0xFFFECB1C)
#define MPU_L1_ILR1	(0xFFFECB20)
#define MPU_L1_ILR2	(0xFFFECB24)
#define MPU_L1_ILR3	(0xFFFECB28)
#define MPU_L1_ILR4	(0xFFFECB2C)
#define MPU_L1_ILR5	(0xFFFE0030)
#define MPU_L1_ILR6	(0xFFFECB34)
#define MPU_L1_ILR7	(0xFFFECB38)
#define MPU_L1_ILR8	(0xFFFECB3C)
#define MPU_L1_ILR9	(0xFFFECB40)
#define MPU_L1_ILR10	(0xFFFECB44)
#define MPU_L1_ILR11	(0xFFFECB48)
#define MPU_L1_ILR12	(0xFFFECB4C)
#define MPU_L1_ILR13	(0xFFFECB50)
#define MPU_L1_ILR14	(0xFFFECB54)
#define MPU_L1_ILR15	(0xFFFECB58)
#define MPU_L1_ILR16	(0xFFFECB5C)
#define MPU_L1_ILR17	(0xFFFECB60)
#define MPU_L1_ILR18	(0xFFFECB64)
#define MPU_L1_ILR19	(0xFFFECB68)
#define MPU_L1_ILR20	(0xFFFECB6C)
#define MPU_L1_ILR21	(0xFFFECB70)
#define MPU_L1_ILR22	(0xFFFECB74)
#define MPU_L1_ILR23	(0xFFFECB78)
#define MPU_L1_ILR24	(0xFFFECB7C)
#define MPU_L1_ILR25	(0xFFFECB80)
#define MPU_L1_ILR26	(0xFFFECB84)
#define MPU_L1_ILR27	(0xFFFECB88)
#define MPU_L1_ILR28	(0xFFFECB8C)
#define MPU_L1_ILR29	(0xFFFECB90)
#define MPU_L1_ILR30	(0xFFFECB94)
#define MPU_L1_ILR31	(0xFFFECB98)
#define MPU_L1_ISR	(0xFFFECB9C)
#define MPU_L1_ENHANCEED_CNTL	(0xFFFECBA0)

/*********************/
/* RTC Registers     */
/*********************/
#define SECONDS_REG	(0xFFFB4800)
#define MINUTES_REG	(0xFFFB4804)
#define HOURS_REG	(0xFFFB4808)
#define DAYS_REG	(0XFFFB480C)
#define MONTH_REG	(0xFFFB4810)
#define YEAR_REG	(0xFFFB4814)
#define WEEK_REG	(0xFFFB4818)

#define ALARM_SECONDS_REG	(0xFFFB4820)
#define ALARM_MINUTES_REG	(0xFFFB4824)
#define ALARM_HOURS_REG		(0xFFFB4828)
#define ALARM_DAYS_REG		(0XFFFB482C)
#define ALARM_MONTH_REG		(0xFFFB4830)
#define ALARM_YEAR_REG		(0xFFFB4834)

#define RTC_CTRL_REG		(0xFFFB4840)
#define RTC_STATUS_REG		(0xFFFB4844)
#define RTC_INTERRUPTS_REG	(0xFFFB4848)
#define RTC_COMP_LSB_REG	(0xFFFB484C)
#define RTC_COMP_MSB_REG	(0xFFFB4850)
#define RTC_OSC_REG		(0xFFFB4854)

/***************************/
/* WatchDog Timer Registers     */
/***************************/
#define MPU_WDT_CNTL_TIMER	(0xFFFEC800)
#define MPU_WDT_LOAD_TIMER	(0xFFFEC804)
#define MPU_WDT_READ_TIMER	(0xFFFEC804)
#define MPU_WDT_TIMER_TIMER	(0xFFFEC808)
/***************************/
/*MPU Timer Registers     */
/***************************/
#define MPU_CNTL_TIMER1		(0xFFFEC500)
#define MPU_LOAD_TIMER1		(0xFFFEC504)
#define MPU_READ_TIMER1		(0xFFFEC508)

#define MPU_CNTL_TIMER2		(0xFFFEC600)
#define MPU_LOAD_TIMER2		(0xFFFEC604)
#define MPU_READ_TIMER2		(0xFFFEC608)

#define MPU_CNTL_TIMER3		(0xFFFEC700)
#define MPU_LOAD_TIMER3		(0xFFFEC704)
#define MPU_READ_TIMER3		(0xFFFEC708)
/***************************/
/* Genearal purpose Timer Registers     */
/***************************/
#define GPTMR1_TIDR		(0xFFFB1400)
#define GPTMR1_TIOCP_CFG	(0xFFFB1410)
#define GPTMR1_TISTAT		(0xFFFB1414)
#define GPTMR1_TISR		(0xFFFB1418)
#define GPTMR1_TIER		(0xFFFB141C)
#define GPTMR1_TWER		(0xFFFB1420)
#define GPTMR1_TCLR		(0xFFFB1424)
#define GPTMR1_TCRR		(0xFFFB1428)
#define GPTMR1_TLDR		(0xFFFB142C)
#define GPTMR1_TTGR		(0xFFFB1430)
#define GPTMR1_TWPS		(0xFFFB1434)
#define GPTMR1_TMAR		(0xFFFB1438)
#define GPTMR1_TSICR		(0xFFFB1440)

#define GPTMR2_TIDR		(0xFFFB1C00)
#define GPTMR2_TIOCP_CFG	(0xFFFB1C10)
#define GPTMR2_TISTAT		(0xFFFB1C14)
#define GPTMR2_TISR		(0xFFFB1C18)
#define GPTMR2_TIER		(0xFFFB1C1C)
#define GPTMR2_TWER		(0xFFFB1C20)
#define GPTMR2_TCLR		(0xFFFB1C24)
#define GPTMR2_TCRR		(0xFFFB1C28)
#define GPTMR2_TLDR		(0xFFFB1C2C)
#define GPTMR2_TTGR		(0xFFFB1C30)
#define GPTMR2_TWPS		(0xFFFB1C34)
#define GPTMR2_TMAR		(0xFFFB1C38)
#define GPTMR2_TSICR		(0xFFFB1C40)

#define GPTMR3_TIDR		(0xFFFB2400)
#define GPTMR3_TIOCP_CFG	(0xFFFB2410)
#define GPTMR3_TISTAT		(0xFFFB2414)
#define GPTMR3_TISR		(0xFFFB2418)
#define GPTMR3_TIER		(0xFFFB241C)
#define GPTMR3_TWER		(0xFFFB2420)
#define GPTMR3_TCLR		(0xFFFB2424)
#define GPTMR3_TCRR		(0xFFFB2428)
#define GPTMR3_TLDR		(0xFFFB242C)
#define GPTMR3_TTGR		(0xFFFB2430)
#define GPTMR3_TWPS		(0xFFFB2434)
#define GPTMR3_TMAR		(0xFFFB2438)
#define GPTMR3_TSICR		(0xFFFB2440)

#define GPTMR4_TIDR		(0xFFFB2C00)
#define GPTMR4_TIOCP_CFG	(0xFFFB2C10)
#define GPTMR4_TISTAT		(0xFFFB2C14)
#define GPTMR4_TISR		(0xFFFB2C18)
#define GPTMR4_TIER		(0xFFFB2C1C)
#define GPTMR4_TWER		(0xFFFB2C20)
#define GPTMR4_TCLR		(0xFFFB2C24)
#define GPTMR4_TCRR		(0xFFFB2C28)
#define GPTMR4_TLDR		(0xFFFB2C2C)
#define GPTMR4_TTGR		(0xFFFB2C30)
#define GPTMR4_TWPS		(0xFFFB2C34)
#define GPTMR4_TMAR		(0xFFFB2C38)
#define GPTMR4_TSICR		(0xFFFB2C40)

#define GPTMR5_TIDR		(0xFFFB3400)
#define GPTMR5_TIOCP_CFG	(0xFFFB3410)
#define GPTMR5_TISTAT		(0xFFFB3414)
#define GPTMR5_TISR		(0xFFFB3418)
#define GPTMR5_TIER		(0xFFFB341C)
#define GPTMR5_TWER		(0xFFFB3420)
#define GPTMR5_TCLR		(0xFFFB3424)
#define GPTMR5_TCRR		(0xFFFB3428)
#define GPTMR5_TLDR		(0xFFFB342C)
#define GPTMR5_TTGR		(0xFFFB3430)
#define GPTMR5_TWPS		(0xFFFB3434)
#define GPTMR5_TMAR		(0xFFFB3438)
#define GPTMR5_TSICR		(0xFFFB3440)

#define GPTMR6_TIDR		(0xFFFB3C00)
#define GPTMR6_TIOCP_CFG	(0xFFFB3C10)
#define GPTMR6_TISTAT		(0xFFFB3C14)
#define GPTMR6_TISR		(0xFFFB3C18)
#define GPTMR6_TIER		(0xFFFB3C1C)
#define GPTMR6_TWER		(0xFFFB3C20)
#define GPTMR6_TCLR		(0xFFFB3C24)
#define GPTMR6_TCRR		(0xFFFB3C28)
#define GPTMR6_TLDR		(0xFFFB3C2C)
#define GPTMR6_TTGR		(0xFFFB3C30)
#define GPTMR6_TWPS		(0xFFFB3C34)
#define GPTMR6_TMAR		(0xFFFB3C38)
#define GPTMR6_TSICR		(0xFFFB3C40)

#define GPTMR7_TIDR		(0xFFFB7400)
#define GPTMR7_TIOCP_CFG	(0xFFFB7410)
#define GPTMR7_TISTAT		(0xFFFB7414)
#define GPTMR7_TISR		(0xFFFB7418)
#define GPTMR7_TIER		(0xFFFB741C)
#define GPTMR7_TWER		(0xFFFB7420)
#define GPTMR7_TCLR		(0xFFFB7424)
#define GPTMR7_TCRR		(0xFFFB7428)
#define GPTMR7_TLDR		(0xFFFB742C)
#define GPTMR7_TTGR		(0xFFFB7430)
#define GPTMR7_TWPS		(0xFFFB7434)
#define GPTMR7_TMAR		(0xFFFB7438)
#define GPTMR7_TSICR		(0xFFFB7440)

#define GPTMR8_TIDR		(0xFFFBD400)
#define GPTMR8_TIOCP_CFG	(0xFFFBD410)
#define GPTMR8_TISTAT		(0xFFFBD414)
#define GPTMR8_TISR		(0xFFFBD418)
#define GPTMR8_TIER		(0xFFFBD41C)
#define GPTMR8_TWER		(0xFFFBD420)
#define GPTMR8_TCLR		(0xFFFBD424)
#define GPTMR8_TCRR		(0xFFFBD428)
#define GPTMR8_TLDR		(0xFFFBD42C)
#define GPTMR8_TTGR		(0xFFFBD430)
#define GPTMR8_TWPS		(0xFFFBD434)
#define GPTMR8_TMAR		(0xFFFBD438)
#define GPTMR8_TSICR		(0xFFFBD440)

#define SYNC_CNT_REV		(0xFFFBD400)
#define K_SYNC_CNT_CR		(0xFFFBD410)

#define OS_TIMER_TICK_VAL	(0xFFFB9000)
#define OS_TIMER_TICK_CNTR	(0xFFFB9004)
#define OS_TIMER_CTRL		(0xFFFB9008)

#define TIMER_32K_SYNCHRONIZED 	(0xFFFBC410)
/** mpu configure register*/
#define ULPD_CLOCK_CTRL		(0xFFFE0830)
#define SOFT_REQ_REG		(0xFFFE0834)
#define SOFT_REQ_REG2		(0xFFFE0880)
#define MOD_CONF_CTRL_0 	(0xFFFE1080)
#define FUNC_MUX_CTRL_10	(0xFFFE1098)
#define PULL_DWN_CTRL_4		(0xFFFE10AC)
#define EMIFS_CS1_CONFIG	(0xFFFECC14)
#define DIE_ID_LSB		(0xFFFE1800)
#define DIE_ID_MSB		(0xFFFE1804)
#define PROD_ID_REG0		(0xFFFE2000)
#define PROD_ID_REG1		(0xFFFE2004)
#define ARM_CKCTL 		(0xFFFECE00)
#define	ARM_IDLECT1  		(0xFFFECE04)
#define	ARM_IDLECT2  		(0xFFFECE08)
#define ARM_RSTCT1		(0xFFFECE10)
#define ARM_RSTCT2		(0xFFFECE14)
#define ARM_SYSST		(0xFFFECE18)
#define DPLL1_CTL_REG		(0xFFFECF00)

struct omap5912_mpu_cfg
{
	u32 ulpd_clock_ctrl;
	u32 soft_req_reg;
	u32 soft_req_reg2;
	u32 mod_conf_ctrl_0;
	u32 func_mux_ctrl_10;
	u32 pull_dwn_ctrl_4;
	u32 emifs_cs1_config;
	u32 die_id_lsb;
	u32 die_id_msb;
	u32 prod_id_reg0;
	u32 prod_id_reg1;
	u32 arm_ckctl;
	u32 arm_idlect1;
	u32 arm_idlect2;
	u32 arm_rstct1;
	u32 arm_rstct2;
	u32 arm_sysst;
	u32 dpll1_ctl_reg;
};

struct omap5912x_gp_timer_io
{
	u32 tidr;
	u32 tiocp_cfg;
	u32 tistat;
	u32 tisr;
	u32 tier;
	u32 twer;
	u32 tclr;
	u32 tcrr;
	u32 tldr;
	u32 ttgr;
	u32 twps;
	u32 tmar;
	u32 tsicr;
};

struct omap5912_os_timer
{
	u32 os_timer_tick_val;
	u32 os_timer_tick_cntr;
	u32 os_timer_ctrl;
};

struct omap5912_mpu_timer
{
	u32 mpu_cntl_timer[3];
	u32 mpu_load_timer[3];
	u32 mpu_read_timer[3];

};
struct omap5912_uart
{
	u32 rhr;
	u32 thr;
	u32 dll;
	u32 ier;
	u32 dlh;
	u32 iir;
	u32 fcr;
	u32 efr;
	u32 lcr;
	u32 mcr;
	u32 xon1;
	u32 lsr;
	u32 xon2;
	u32 msr;
	u32 tcr;
	u32 xoff1;
	u32 spr;
	u32 tlr;
	u32 xoff2;
	u32 mdr1;
	u32 mdr2;
	u32 sflsr;
	u32 txfll;
	u32 resume;
	u32 txflh;
	u32 sfregl;
	u32 rxfll;
	u32 sfregh;
	u32 rxflh;
	u32 uasr;
	u32 blr;
	u32 acreg;
	u32 scr;
	u32 ssr;
	u32 eblr;
	u32 mvr;
	u32 sysc;
	u32 syss;
	u32 wer;
};

struct omap5912_ic
{
	/*interrupt level 2*/
	u32 mpu_l2_itr;
	u32 mpu_l2_mir;
	u32 mpu_l2_sir_irq;
	u32 mpu_l2_sir_fiq;
	u32 mpu_l2_control;
	u32 mpu_l2_ilr[32];
	u32 mpu_l2_ilr_s1[32];
	u32 mpu_l2_ilr_s2[32];
	u32 mpu_l2_ilr_s3[32];

	u32 mpu_l2_isr;
	u32 mpu_l2_status;
	u32 mpu_l2_ocp_cfg;
	u32 mpu_l2_inth_rev;

	u32 mpu_l2_itr_s1;
	u32 mpu_l2_mir_s1;
	u32 mpu_l2_sir_irq_s1;
	u32 mpu_l2_sir_fiq_s1;
	u32 mpu_l2_control_s1;

	u32 mpu_l2_itr_s2;
	u32 mpu_l2_mir_s2;
	u32 mpu_l2_sir_irq_s2;
	u32 mpu_l2_sir_fiq_s2;
	u32 mpu_l2_control_s2;

	u32 mpu_l2_itr_s3;
	u32 mpu_l2_mir_s3;
	u32 mpu_l2_sir_irq_s3;
	u32 mpu_l2_sir_fiq_s3;
	u32 mpu_l2_control_s3;

	/*interrupt level 1*/
	u32 mpu_l1_itr;
	u32 mpu_l1_mir;
	u32 mpu_l1_sir_irq_code;
	u32 mpu_l1_sir_fiq_code;
	u32 mpu_l1_ilr[32];
	u32 mpu_l1_control;
	u32 mpu_l1_isr;
	u32 mpu_l1_enhanceed_cntl;

};

struct omap5912_gpio
{
	u32 gpio_reversion;
	u32 gpio_sysconfig;
	u32 gpio_sysstatus;
	u32 gpio_irqstatus1;
	u32 gpio_irqenable1;
	u32 gpio_irqstatus2;
	u32 gpio_irqenable2;
	u32 gpio_wakeupenable;
	u32 gpio_datain;
	u32 gpio_dataout;
	u32 gpio_direction;
	u32 gpio_edge_ctrl1;
	u32 gpio_edge_ctrl2;
	u32 gpio_clear_irqenable1;
	u32 gpio_clear_irqenable2;
	u32 gpio_clear_wakeupena;
	u32 gpio_clear_dataout;
	u32 gpio_set_irqenable1;
	u32 gpio_set_irqenable2;
	u32 gpio_set_wakeupena;
	u32 gpio_set_dataout;
};
struct omap5912_io_t
{
	struct omap5912_mpu_timer timer;
	struct omap5912_os_timer os_timer;
	struct omap5912_uart	uart;
	struct omap5912_ic	ic;
	struct omap5912_gpio	gpio[4];
	struct omap5912_mpu_cfg mpu_cfg;
	u32 timer_32k_synchronized;

};

void
omap5912_mach_init (void *state, machine_config_t *mc);
#endif /* __OMAP5912_H_ */