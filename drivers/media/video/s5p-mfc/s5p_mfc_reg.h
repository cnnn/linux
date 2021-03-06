/*
 * linux/drivers/media/video/s5p-mfc/s5p_mfc_reg.h
 *
 * Copyright (c) 2010 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __S5P_MFC_REG_H_
#define __S5P_MFC_REG_H_ __FILE__

#define MFC_SYS_SW_RESET_ADDR		S5P_FIMV_SW_RESET
#define MFC_SYS_SW_RESET_MASK		0x3FF
#define MFC_SYS_SW_RESET_SHFT		0x0
#define MFC_SYS_R2H_INT_ADDR		S5P_FIMV_RISC_HOST_INT
#define MFC_SYS_R2H_INT_MASK		0x1
#define MFC_SYS_R2H_INT_SHFT		0x0
#define MFC_SYS_H2R_CMD_ADDR		S5P_FIMV_HOST2RISC_CMD
#define MFC_SYS_H2R_ARG1_ADDR		S5P_FIMV_HOST2RISC_ARG1
#define MFC_SYS_CODEC_TYPE_ADDR		S5P_FIMV_HOST2RISC_ARG1
#define MFC_SYS_INST_ID_ADDR		S5P_FIMV_HOST2RISC_ARG1
#define MFC_SYS_FW_MEM_SIZE_ADDR	S5P_FIMV_HOST2RISC_ARG1
#define MFC_SYS_H2R_ARG2_ADDR		S5P_FIMV_HOST2RISC_ARG2
#define MFC_SYS_CRC_GEN_EN_ADDR		S5P_FIMV_HOST2RISC_ARG2
#define MFC_SYS_CRC_GEN_EN_MASK		0x1
#define MFC_SYS_CRC_GEN_EN_SHFT		0x1F
#define MFC_SYS_ENC_PIXEL_CACHE_ADDR	S5P_FIMV_HOST2RISC_ARG2
#define MFC_SYS_ENC_PIXEL_CACHE_MASK	0x2
#define MFC_SYS_ENC_PIXEL_CACHE_SHFT	0x0
#define MFC_SYS_DEC_PIXEL_CACHE_ADDR	S5P_FIMV_HOST2RISC_ARG2
#define MFC_SYS_DEC_PIXEL_CACHE_MASK	0x2
#define MFC_SYS_DEC_PIXEL_CACHE_SHFT	0x0
#define MFC_SYS_H2R_ARG3_ADDR		S5P_FIMV_HOST2RISC_ARG3

#define MFC_SYS_H2R_ARG4_ADDR		S5P_FIMV_HOST2RISC_ARG4

#define MFC_SYS_FW_VER_YEAR_ADDR	S5P_FIMV_FW_VERSION
#define MFC_SYS_FW_VER_YEAR_MASK	0xFF
#define MFC_SYS_FW_VER_YEAR_SHFT	16
#define MFC_SYS_FW_VER_MONTH_ADDR	S5P_FIMV_FW_VERSION
#define MFC_SYS_FW_VER_MONTH_MASK	0xFF
#define MFC_SYS_FW_VER_MONTH_SHFT	8
#define MFC_SYS_FW_VER_DATE_ADDR	S5P_FIMV_FW_VERSION
#define MFC_SYS_FW_VER_DATE_MASK	0xFF
#define MFC_SYS_FW_VER_DATE_SHFT	0

#define MFC_DEC_DISPLAY_Y_ADR_ADDR	S5P_FIMV_SI_DISPLAY_Y_ADR
#define MFC_DEC_DISPLAY_Y_ADR_MASK	0xFFFFFFFF
#define MFC_DEC_DISPLAY_Y_ADR_SHFT	S5P_FIMV_MEM_OFFSET
#define MFC_DEC_DISPLAY_C_ADR_ADDR	S5P_FIMV_SI_DISPLAY_C_ADR
#define MFC_DEC_DISPLAY_C_ADR_MASK	0xFFFFFFFF
#define MFC_DEC_DISPLAY_C_ADR_SHFT	S5P_FIMV_MEM_OFFSET

#define MFC_DEC_DISPLAY_STATUS_ADDR	MFC_SI_DISPLAY_STATUS
#define MFC_DEC_DISPLAY_STATUS_MASK	0x7
#define MFC_DEC_DISPLAY_STATUS_SHFT	0x0
#define MFC_DEC_DISPLAY_INTERACE_ADDR	MFC_SI_DISPLAY_STATUS
#define MFC_DEC_DISPLAY_INTERACE_MASK	0x1
#define MFC_DEC_DISPLAY_INTERACE_SHFT	0x3
#define MFC_DEC_DISPLAY_RES_CHG_ADDR	MFC_SI_DISPLAY_STATUS
#define MFC_DEC_DISPLAY_RES_CHG_MASK	0x3
#define MFC_DEC_DISPLAY_RES_CHG_SHFT	0x4

#define MFC_DEC_DECODE_FRAME_TYPE_ADDR	S5P_FIMV_DECODE_FRAME_TYPE
#define MFC_DEC_DECODE_FRAME_TYPE_MASK	0x7
#define MFC_DEC_DECODE_FRAME_TYPE_SHFT	0

#define MFC_DEC_DECODE_STATUS_ADDR	MFC_SI_DECODE_STATUS
#define MFC_DEC_DECODE_STATUS_MASK	0x7
#define MFC_DEC_DECODE_STATUS_SHFT	0x0
#define MFC_DEC_DECODE_INTERACE_ADDR	MFC_SI_DECODE_STATUS
#define MFC_DEC_DECODE_INTERACE_MASK	0x1
#define MFC_DEC_DECODE_INTERACE_SHFT	0x3
#define MFC_DEC_DECODE_NUM_CRC_ADDR	MFC_SI_DECODE_STATUS
#define MFC_DEC_DECODE_NUM_CRC_MASK	0x1
#define MFC_DEC_DECODE_NUM_CRC_SHFT	0x4
#define MFC_DEC_DECODE_GEN_CRC_ADDR	MFC_SI_DECODE_STATUS
#define MFC_DEC_DECODE_GEN_CRC_MASK	0x1
#define MFC_DEC_DECODE_GEN_CRC_SHFT	0x5

#define MFC_ENC_LEVEL_ADDR	MFC_ENC_PROFILE
#define MFC_ENC_LEVEL_MASK	0xFF
#define MFC_ENC_LEVEL_SHFT	0x8
#define MFC_ENC_PROFILE_ADDR	MFC_ENC_PROFILE
#define MFC_ENC_PROFILE_MASK	0x3
#define MFC_ENC_PROFILE_SHFT	0x0

#define _MFC_SET_REG(target, val)	s5p_mfc_write_reg(val, MFC_##target##_ADDR)
#define MFC_SET_REG(target, val, shadow)					\
	do {									\
		shadow = s5p_mfc_read_reg(MFC_##target##_ADDR);			\
		shadow &= ~(MFC_##target##_MASK << MFC_##target##_SHFT);	\
		shadow |= ((val & MFC_##target##_MASK) << MFC_##target##_SHFT);	\
		s5p_mfc_write_reg(shadow, MFC_##target##_ADDR);			\
	} while (0)

#define _MFC_GET_REG(target)	s5p_mfc_read_reg(MFC_##target##_ADDR)
#define MFC_GET_REG(target)						\
	((s5p_mfc_read_reg(MFC_##target##_ADDR) >> MFC_##target##_SHFT)	\
	& MFC_##target##_MASK)

#define MFC_GET_ADR(target)						\
	(s5p_mfc_read_reg(MFC_##target##_ADR_ADDR) << MFC_##target##_ADR_SHFT)

void s5p_mfc_init_reg(void __iomem *base);
void s5p_mfc_write_reg(unsigned int data, unsigned int offset);
unsigned int s5p_mfc_read_reg(unsigned int offset);
#endif /* __S5P_MFC_REG_H_ */
