/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2016 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_CIS_2X5_SET_A_H
#define FIMC_IS_CIS_2X5_SET_A_H

#include "fimc-is-cis.h"
#include "fimc-is-cis-2x5.h"

/* Reference : S5K2X5SP13_EVT1_Ver_1.2 (non-3DHDR) */

/* 2x5_EVT1 Global Setting */
const u32 sensor_2x5_setfile_A_Global[] =
{
	0xFCFC, 0x4000, 0x02,
	0x6018, 0x0001, 0x02,
	0x6000, 0x0005, 0x02,
	0x7002, 0x0008, 0x02,
	0x70CA, 0x4CA6, 0x02,
	0x7004, 0x1964, 0x02,
	0x6014, 0x0001, 0x02,
	I2C_MODE_DELAY, 10000, 0x00,
	0x6214, 0xE9F0, 0x02,
	0x6218, 0xE150, 0x02,
	0x0136, 0x1A00, 0x02,
	0xFCFC, 0x2000, 0x02,
	0x117C, 0x0200, 0x02,
	0x119C, 0x0001, 0x02,
	0x11A6, 0x28C0, 0x02,
	0x125A, 0x0700, 0x02,
	0x1318, 0x0303, 0x02,
	0x136C, 0x0046, 0x02,
	0x137C, 0x003A, 0x02,
	0x13D0, 0x003F, 0x02,
	0x1458, 0x0316, 0x02,
	0x14B0, 0x00CC, 0x02,
	0x15CC, 0x0000, 0x02,
	0x17F4, 0x8080, 0x02,
	0x17F8, 0x8091, 0x02,
	0x17FC, 0x8093, 0x02,
	0x1800, 0x80A4, 0x02,
	0x1804, 0x80A6, 0x02,
	0x1808, 0x80B7, 0x02,
	0x180C, 0x82F8, 0x02,
	0x1810, 0x8309, 0x02,
	0x1814, 0x830B, 0x02,
	0x1818, 0x831C, 0x02,
	0x181C, 0x831E, 0x02,
	0x1820, 0x832F, 0x02,
	0x1A0E, 0x090F, 0x02,
	0x1A10, 0x0103, 0x02,
	0x1A18, 0x0000, 0x02,
	0x1A1A, 0x0280, 0x02,
	0x1A1C, 0x4408, 0x02,
	0x1A20, 0x0096, 0x02,
	0x1A22, 0x1FE9, 0x02,
	0x1D00, 0x00AE, 0x02,
	0x1E6E, 0x0000, 0x02,
	0x204A, 0x0000, 0x02,
	0x2312, 0x0201, 0x02,
	0x23B0, 0x0201, 0x02,
	0x23B4, 0x0102, 0x02,
	0x2508, 0x0002, 0x02,
	0x38DA, 0x0001, 0x02,
	0x4FB0, 0x0100, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0110, 0x1002, 0x02,
	0x0114, 0x0300, 0x02,
	0x021E, 0x0000, 0x02,
	0x0300, 0x0003, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0003, 0x02,
	0x0306, 0x00A6, 0x02,
	0x0308, 0x0008, 0x02,
	0x030A, 0x0001, 0x02,
	0x030C, 0x0001, 0x02,
	0x030E, 0x0004, 0x02,
	0x0310, 0x0142, 0x02,
	0x0312, 0x0000, 0x02,
	0x0402, 0x1010, 0x02,
	0x0404, 0x1000, 0x02,
	0x080A, 0x0100, 0x02,
	0x0B00, 0x0100, 0x02,
	0x0B06, 0x0101, 0x02,
	0x0D00, 0x0000, 0x02,
	0x0D02, 0x0001, 0x02,
	0x0FE8, 0x28C0, 0x02,
	0x0FEA, 0x2240, 0x02,
	0xF474, 0x0000, 0x02,
};

/* 0. 2x5_EVT1-26Mhz A6.2FD 2880x2156 2093MHz 30fps */
const u32 sensor_2x5_setfile_A_2880x2156_30fps[] =
{
	0xFCFC, 0x2000, 0x02,
	0x10E0, 0x2ED7, 0x02,
	0x10E2, 0x2DB4, 0x02,
	0x11A0, 0x0000, 0x02,
	0x11C0, 0x0000, 0x02,
	0x11C2, 0x0200, 0x02,
	0x11C6, 0x0200, 0x02,
	0x11CA, 0x0000, 0x02,
	0x11CC, 0x0000, 0x02,
	0x11CE, 0x0000, 0x02,
	0x11D0, 0x0000, 0x02,
	0x11D2, 0x0000, 0x02,
	0x11D4, 0x0000, 0x02,
	0x123C, 0x1212, 0x02,
	0x129E, 0x0100, 0x02,
	0x2CF0, 0x0300, 0x02,
	0x2E9C, 0x0000, 0x02,
	0x2EB6, 0x0101, 0x02,
	0x3746, 0x0037, 0x02,
	0x374A, 0x0001, 0x02,
	0x3752, 0x0005, 0x02,
	0x3756, 0x0000, 0x02,
	0x3762, 0x0000, 0x02,
	0x376E, 0x0005, 0x02,
	0x39D6, 0x0064, 0x02,
	0x39DA, 0x0032, 0x02,
	0x40E8, 0x0909, 0x02,
	0x40EA, 0x0909, 0x02,
	0x40EC, 0x0909, 0x02,
	0x410C, 0x0404, 0x02,
	0x410E, 0x0404, 0x02,
	0x4110, 0x0404, 0x02,
	0x4130, 0x3131, 0x02,
	0x4132, 0x3131, 0x02,
	0x4134, 0x3131, 0x02,
	0x465A, 0x0812, 0x02,
	0x465C, 0x1212, 0x02,
	0x465E, 0x1212, 0x02,
	0x4660, 0x1200, 0x02,
	0x46E2, 0x3535, 0x02,
	0x46E4, 0x3535, 0x02,
	0x46E6, 0x3535, 0x02,
	0x46EA, 0x2035, 0x02,
	0x46EC, 0x3535, 0x02,
	0x46EE, 0x3535, 0x02,
	0x46F0, 0x3501, 0x02,
	0x46F4, 0xC8C8, 0x02,
	0x46F6, 0xC8C8, 0x02,
	0x46F8, 0xC8C8, 0x02,
	0x46FC, 0x20C8, 0x02,
	0x46FE, 0xC8C8, 0x02,
	0x4700, 0xC8C8, 0x02,
	0x4706, 0x8585, 0x02,
	0x4708, 0x8585, 0x02,
	0x470A, 0x8585, 0x02,
	0x470E, 0x2085, 0x02,
	0x4710, 0x8585, 0x02,
	0x4712, 0x8585, 0x02,
	0x4714, 0x8501, 0x02,
	0x4718, 0x8585, 0x02,
	0x471A, 0x8585, 0x02,
	0x471C, 0x8585, 0x02,
	0x4720, 0x2032, 0x02,
	0x4722, 0x3232, 0x02,
	0x4724, 0x3232, 0x02,
	0x4726, 0x3201, 0x02,
	0x472A, 0x3232, 0x02,
	0x472C, 0x3232, 0x02,
	0x472E, 0x3232, 0x02,
	0x4732, 0x2021, 0x02,
	0x4734, 0x2121, 0x02,
	0x4736, 0x2121, 0x02,
	0x4738, 0x2101, 0x02,
	0x473C, 0x2121, 0x02,
	0x473E, 0x2121, 0x02,
	0x4740, 0x2121, 0x02,
	0x4744, 0x2021, 0x02,
	0x4746, 0x2121, 0x02,
	0x4748, 0x2121, 0x02,
	0x474A, 0x21FF, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0340, 0x0DB0, 0x02,
	0x0342, 0x239F, 0x02,
	0x0344, 0x0008, 0x02,
	0x0346, 0x0008, 0x02,
	0x0348, 0x1687, 0x02,
	0x034A, 0x10E7, 0x02,
	0x034C, 0x0B40, 0x02,
	0x034E, 0x086C, 0x02,
	0x0350, 0x0000, 0x02,
	0x0352, 0x0002, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0002, 0x02,
	0x0386, 0x0002, 0x02,
	0x0400, 0x2010, 0x02,
	0x0900, 0x0112, 0x02,
	0x0902, 0x0001, 0x02,
	0x0B08, 0x0000, 0x02,
	0xF466, 0x07FB, 0x02,
	0xF468, 0x2000, 0x02,
	0x6214, 0xE9F0, 0x02,
	0x6218, 0xE9F0, 0x02,
};

/* 1. 2x5_EVT1-26Mhz A7.2FD 2880x1620 2093MHz 30fps */
const u32 sensor_2x5_setfile_A_2880x1620_30fps[] = 
{
	0xFCFC, 0x2000, 0x02,
	0x10E0, 0x2ED7, 0x02,
	0x10E2, 0x2DB4, 0x02,
	0x11A0, 0x0000, 0x02,
	0x11C0, 0x0000, 0x02,
	0x11C2, 0x0200, 0x02,
	0x11C6, 0x0200, 0x02,
	0x11CA, 0x0000, 0x02,
	0x11CC, 0x0000, 0x02,
	0x11CE, 0x0000, 0x02,
	0x11D0, 0x0000, 0x02,
	0x11D2, 0x0000, 0x02,
	0x11D4, 0x0000, 0x02,
	0x123C, 0x1212, 0x02,
	0x129E, 0x0100, 0x02,
	0x2CF0, 0x0300, 0x02,
	0x2E9C, 0x0000, 0x02,
	0x2EB6, 0x0101, 0x02,
	0x3746, 0x0037, 0x02,
	0x374A, 0x0001, 0x02,
	0x3752, 0x0005, 0x02,
	0x3756, 0x0000, 0x02,
	0x3762, 0x0000, 0x02,
	0x376E, 0x0005, 0x02,
	0x39D6, 0x0064, 0x02,
	0x39DA, 0x0032, 0x02,
	0x40E8, 0x0909, 0x02,
	0x40EA, 0x0909, 0x02,
	0x40EC, 0x0909, 0x02,
	0x410C, 0x0404, 0x02,
	0x410E, 0x0404, 0x02,
	0x4110, 0x0404, 0x02,
	0x4130, 0x3131, 0x02,
	0x4132, 0x3131, 0x02,
	0x4134, 0x3131, 0x02,
	0x465A, 0x0812, 0x02,
	0x465C, 0x1212, 0x02,
	0x465E, 0x1212, 0x02,
	0x4660, 0x1200, 0x02,
	0x46E2, 0x3535, 0x02,
	0x46E4, 0x3535, 0x02,
	0x46E6, 0x3535, 0x02,
	0x46EA, 0x2035, 0x02,
	0x46EC, 0x3535, 0x02,
	0x46EE, 0x3535, 0x02,
	0x46F0, 0x3501, 0x02,
	0x46F4, 0xC8C8, 0x02,
	0x46F6, 0xC8C8, 0x02,
	0x46F8, 0xC8C8, 0x02,
	0x46FC, 0x20C8, 0x02,
	0x46FE, 0xC8C8, 0x02,
	0x4700, 0xC8C8, 0x02,
	0x4706, 0x8585, 0x02,
	0x4708, 0x8585, 0x02,
	0x470A, 0x8585, 0x02,
	0x470E, 0x2085, 0x02,
	0x4710, 0x8585, 0x02,
	0x4712, 0x8585, 0x02,
	0x4714, 0x8501, 0x02,
	0x4718, 0x8585, 0x02,
	0x471A, 0x8585, 0x02,
	0x471C, 0x8585, 0x02,
	0x4720, 0x2032, 0x02,
	0x4722, 0x3232, 0x02,
	0x4724, 0x3232, 0x02,
	0x4726, 0x3201, 0x02,
	0x472A, 0x3232, 0x02,
	0x472C, 0x3232, 0x02,
	0x472E, 0x3232, 0x02,
	0x4732, 0x2021, 0x02,
	0x4734, 0x2121, 0x02,
	0x4736, 0x2121, 0x02,
	0x4738, 0x2101, 0x02,
	0x473C, 0x2121, 0x02,
	0x473E, 0x2121, 0x02,
	0x4740, 0x2121, 0x02,
	0x4744, 0x2021, 0x02,
	0x4746, 0x2121, 0x02,
	0x4748, 0x2121, 0x02,
	0x474A, 0x21FF, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0340, 0x0A48, 0x02,
	0x0342, 0x2F6D, 0x02,
	0x0344, 0x0008, 0x02,
	0x0346, 0x0220, 0x02,
	0x0348, 0x1687, 0x02,
	0x034A, 0x0ECF, 0x02,
	0x034C, 0x0B40, 0x02,
	0x034E, 0x0654, 0x02,
	0x0350, 0x0000, 0x02,
	0x0352, 0x0002, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0002, 0x02,
	0x0386, 0x0002, 0x02,
	0x0400, 0x2010, 0x02,
	0x0900, 0x0112, 0x02,
	0x0902, 0x0001, 0x02,
	0x0B08, 0x0000, 0x02,
	0xF466, 0x07FB, 0x02,
	0xF468, 0x2000, 0x02,
	0x6214, 0xE9F0, 0x02,
	0x6218, 0xE9F0, 0x02,
};

/* 2. 2x5_EVT1-26Mhz A10.2FD 2880x1332 2093MHz 30fps */
const u32 sensor_2x5_setfile_A_2880x1332_30fps[] =
{
	0xFCFC, 0x2000, 0x02,
	0x10E0, 0x2ED7, 0x02,
	0x10E2, 0x2DB4, 0x02,
	0x11A0, 0x0000, 0x02,
	0x11C0, 0x0000, 0x02,
	0x11C2, 0x0200, 0x02,
	0x11C6, 0x0200, 0x02,
	0x11CA, 0x0000, 0x02,
	0x11CC, 0x0000, 0x02,
	0x11CE, 0x0000, 0x02,
	0x11D0, 0x0000, 0x02,
	0x11D2, 0x0000, 0x02,
	0x11D4, 0x0000, 0x02,
	0x123C, 0x1212, 0x02,
	0x129E, 0x0100, 0x02,
	0x2CF0, 0x0300, 0x02,
	0x2E9C, 0x0000, 0x02,
	0x2EB6, 0x0101, 0x02,
	0x3746, 0x0037, 0x02,
	0x374A, 0x0001, 0x02,
	0x3752, 0x0005, 0x02,
	0x3756, 0x0000, 0x02,
	0x3762, 0x0000, 0x02,
	0x376E, 0x0005, 0x02,
	0x39D6, 0x0064, 0x02,
	0x39DA, 0x0032, 0x02,
	0x40E8, 0x0909, 0x02,
	0x40EA, 0x0909, 0x02,
	0x40EC, 0x0909, 0x02,
	0x410C, 0x0404, 0x02,
	0x410E, 0x0404, 0x02,
	0x4110, 0x0404, 0x02,
	0x4130, 0x3131, 0x02,
	0x4132, 0x3131, 0x02,
	0x4134, 0x3131, 0x02,
	0x465A, 0x0812, 0x02,
	0x465C, 0x1212, 0x02,
	0x465E, 0x1212, 0x02,
	0x4660, 0x1200, 0x02,
	0x46E2, 0x3535, 0x02,
	0x46E4, 0x3535, 0x02,
	0x46E6, 0x3535, 0x02,
	0x46EA, 0x2035, 0x02,
	0x46EC, 0x3535, 0x02,
	0x46EE, 0x3535, 0x02,
	0x46F0, 0x3501, 0x02,
	0x46F4, 0xC8C8, 0x02,
	0x46F6, 0xC8C8, 0x02,
	0x46F8, 0xC8C8, 0x02,
	0x46FC, 0x20C8, 0x02,
	0x46FE, 0xC8C8, 0x02,
	0x4700, 0xC8C8, 0x02,
	0x4706, 0x8585, 0x02,
	0x4708, 0x8585, 0x02,
	0x470A, 0x8585, 0x02,
	0x470E, 0x2085, 0x02,
	0x4710, 0x8585, 0x02,
	0x4712, 0x8585, 0x02,
	0x4714, 0x8501, 0x02,
	0x4718, 0x8585, 0x02,
	0x471A, 0x8585, 0x02,
	0x471C, 0x8585, 0x02,
	0x4720, 0x2032, 0x02,
	0x4722, 0x3232, 0x02,
	0x4724, 0x3232, 0x02,
	0x4726, 0x3201, 0x02,
	0x472A, 0x3232, 0x02,
	0x472C, 0x3232, 0x02,
	0x472E, 0x3232, 0x02,
	0x4732, 0x2021, 0x02,
	0x4734, 0x2121, 0x02,
	0x4736, 0x2121, 0x02,
	0x4738, 0x2101, 0x02,
	0x473C, 0x2121, 0x02,
	0x473E, 0x2121, 0x02,
	0x4740, 0x2121, 0x02,
	0x4744, 0x2021, 0x02,
	0x4746, 0x2121, 0x02,
	0x4748, 0x2121, 0x02,
	0x474A, 0x21FF, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0340, 0x0874, 0x02,
	0x0342, 0x39AE, 0x02,
	0x0344, 0x0008, 0x02,
	0x0346, 0x0340, 0x02,
	0x0348, 0x1687, 0x02,
	0x034A, 0x0DAF, 0x02,
	0x034C, 0x0B40, 0x02,
	0x034E, 0x0534, 0x02,
	0x0350, 0x0000, 0x02,
	0x0352, 0x0002, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0002, 0x02,
	0x0386, 0x0002, 0x02,
	0x0400, 0x2010, 0x02,
	0x0900, 0x0112, 0x02,
	0x0902, 0x0001, 0x02,
	0x0B08, 0x0000, 0x02,
	0xF466, 0x07FB, 0x02,
	0xF468, 0x2000, 0x02,
	0x6214, 0xE9F0, 0x02,
	0x6218, 0xE9F0, 0x02,
};

/* 3. 2x5_EVT1-26Mhz A9.2FD 2156x2156 2093MHz 30fps */
const u32 sensor_2x5_setfile_A_2156x2156_30fps[] =
{
	0xFCFC, 0x2000, 0x02,
	0x10E0, 0x2ED7, 0x02,
	0x10E2, 0x2DB4, 0x02,
	0x11A0, 0x0000, 0x02,
	0x11C0, 0x0000, 0x02,
	0x11C2, 0x0200, 0x02,
	0x11C6, 0x0200, 0x02,
	0x11CA, 0x0000, 0x02,
	0x11CC, 0x0000, 0x02,
	0x11CE, 0x0000, 0x02,
	0x11D0, 0x0000, 0x02,
	0x11D2, 0x0000, 0x02,
	0x11D4, 0x0000, 0x02,
	0x123C, 0x1212, 0x02,
	0x129E, 0x0100, 0x02,
	0x2CF0, 0x0300, 0x02,
	0x2E9C, 0x0000, 0x02,
	0x2EB6, 0x0101, 0x02,
	0x3746, 0x0037, 0x02,
	0x374A, 0x0001, 0x02,
	0x3752, 0x0005, 0x02,
	0x3756, 0x0000, 0x02,
	0x3762, 0x0000, 0x02,
	0x376E, 0x0005, 0x02,
	0x39D6, 0x0064, 0x02,
	0x39DA, 0x0032, 0x02,
	0x40E8, 0x0909, 0x02,
	0x40EA, 0x0909, 0x02,
	0x40EC, 0x0909, 0x02,
	0x410C, 0x0404, 0x02,
	0x410E, 0x0404, 0x02,
	0x4110, 0x0404, 0x02,
	0x4130, 0x3131, 0x02,
	0x4132, 0x3131, 0x02,
	0x4134, 0x3131, 0x02,
	0x465A, 0x0812, 0x02,
	0x465C, 0x1212, 0x02,
	0x465E, 0x1212, 0x02,
	0x4660, 0x1200, 0x02,
	0x46E2, 0x3535, 0x02,
	0x46E4, 0x3535, 0x02,
	0x46E6, 0x3535, 0x02,
	0x46EA, 0x2035, 0x02,
	0x46EC, 0x3535, 0x02,
	0x46EE, 0x3535, 0x02,
	0x46F0, 0x3501, 0x02,
	0x46F4, 0xC8C8, 0x02,
	0x46F6, 0xC8C8, 0x02,
	0x46F8, 0xC8C8, 0x02,
	0x46FC, 0x20C8, 0x02,
	0x46FE, 0xC8C8, 0x02,
	0x4700, 0xC8C8, 0x02,
	0x4706, 0x8585, 0x02,
	0x4708, 0x8585, 0x02,
	0x470A, 0x8585, 0x02,
	0x470E, 0x2085, 0x02,
	0x4710, 0x8585, 0x02,
	0x4712, 0x8585, 0x02,
	0x4714, 0x8501, 0x02,
	0x4718, 0x8585, 0x02,
	0x471A, 0x8585, 0x02,
	0x471C, 0x8585, 0x02,
	0x4720, 0x2032, 0x02,
	0x4722, 0x3232, 0x02,
	0x4724, 0x3232, 0x02,
	0x4726, 0x3201, 0x02,
	0x472A, 0x3232, 0x02,
	0x472C, 0x3232, 0x02,
	0x472E, 0x3232, 0x02,
	0x4732, 0x2021, 0x02,
	0x4734, 0x2121, 0x02,
	0x4736, 0x2121, 0x02,
	0x4738, 0x2101, 0x02,
	0x473C, 0x2121, 0x02,
	0x473E, 0x2121, 0x02,
	0x4740, 0x2121, 0x02,
	0x4744, 0x2021, 0x02,
	0x4746, 0x2121, 0x02,
	0x4748, 0x2121, 0x02,
	0x474A, 0x21FF, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0340, 0x0DB0, 0x02,
	0x0342, 0x239F, 0x02,
	0x0344, 0x02D8, 0x02,
	0x0346, 0x0008, 0x02,
	0x0348, 0x13B7, 0x02,
	0x034A, 0x10E7, 0x02,
	0x034C, 0x086C, 0x02,
	0x034E, 0x086C, 0x02,
	0x0350, 0x0002, 0x02,
	0x0352, 0x0002, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0002, 0x02,
	0x0386, 0x0002, 0x02,
	0x0400, 0x2010, 0x02,
	0x0900, 0x0112, 0x02,
	0x0902, 0x0001, 0x02,
	0x0B08, 0x0000, 0x02,
	0xF466, 0x07FB, 0x02,
	0xF468, 0x2000, 0x02,
	0x6214, 0xE9F0, 0x02,
	0x6218, 0xE9F0, 0x02,
};

/* 4. 2x5_EVT1-26Mhz A12.4FD 2880x2156 2093MHz 100fps */
const u32 sensor_2x5_setfile_A_2880x2156_100fps[] = 
{
	0xFCFC, 0x2000, 0x02,
	0x10E0, 0x2ED7, 0x02,
	0x10E2, 0x2DB4, 0x02,
	0x11A0, 0x0000, 0x02,
	0x11C0, 0x0000, 0x02,
	0x11C2, 0x0200, 0x02,
	0x11C6, 0x0200, 0x02,
	0x11CA, 0x0000, 0x02,
	0x11CC, 0x0000, 0x02,
	0x11CE, 0x0000, 0x02,
	0x11D0, 0x0000, 0x02,
	0x11D2, 0x0000, 0x02,
	0x11D4, 0x0000, 0x02,
	0x123C, 0x1212, 0x02,
	0x129E, 0x0101, 0x02,
	0x2CF0, 0x0300, 0x02,
	0x2E9C, 0x0002, 0x02,
	0x2EB6, 0x0101, 0x02,
	0x3746, 0x0037, 0x02,
	0x374A, 0x0001, 0x02,
	0x3752, 0x0005, 0x02,
	0x3756, 0x0000, 0x02,
	0x3762, 0x0000, 0x02,
	0x376E, 0x0005, 0x02,
	0x39D6, 0x0064, 0x02,
	0x39DA, 0x0032, 0x02,
	0x40E8, 0x0909, 0x02,
	0x40EA, 0x0909, 0x02,
	0x40EC, 0x0909, 0x02,
	0x410C, 0x0404, 0x02,
	0x410E, 0x0404, 0x02,
	0x4110, 0x0404, 0x02,
	0x4130, 0x3131, 0x02,
	0x4132, 0x3131, 0x02,
	0x4134, 0x3131, 0x02,
	0x465A, 0x0812, 0x02,
	0x465C, 0x1212, 0x02,
	0x465E, 0x1212, 0x02,
	0x4660, 0x1200, 0x02,
	0x46E2, 0x3535, 0x02,
	0x46E4, 0x3535, 0x02,
	0x46E6, 0x3535, 0x02,
	0x46EA, 0x2035, 0x02,
	0x46EC, 0x3535, 0x02,
	0x46EE, 0x3535, 0x02,
	0x46F0, 0x3501, 0x02,
	0x46F4, 0xC8C8, 0x02,
	0x46F6, 0xC8C8, 0x02,
	0x46F8, 0xC8C8, 0x02,
	0x46FC, 0x20C8, 0x02,
	0x46FE, 0xC8C8, 0x02,
	0x4700, 0xC8C8, 0x02,
	0x4706, 0x8585, 0x02,
	0x4708, 0x8585, 0x02,
	0x470A, 0x8585, 0x02,
	0x470E, 0x2085, 0x02,
	0x4710, 0x8585, 0x02,
	0x4712, 0x8585, 0x02,
	0x4714, 0x8501, 0x02,
	0x4718, 0x8585, 0x02,
	0x471A, 0x8585, 0x02,
	0x471C, 0x8585, 0x02,
	0x4720, 0x2032, 0x02,
	0x4722, 0x3232, 0x02,
	0x4724, 0x3232, 0x02,
	0x4726, 0x3201, 0x02,
	0x472A, 0x3232, 0x02,
	0x472C, 0x3232, 0x02,
	0x472E, 0x3232, 0x02,
	0x4732, 0x2021, 0x02,
	0x4734, 0x2121, 0x02,
	0x4736, 0x2121, 0x02,
	0x4738, 0x2101, 0x02,
	0x473C, 0x2121, 0x02,
	0x473E, 0x2121, 0x02,
	0x4740, 0x2121, 0x02,
	0x4744, 0x2021, 0x02,
	0x4746, 0x2121, 0x02,
	0x4748, 0x2121, 0x02,
	0x474A, 0x21FF, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0340, 0x096E, 0x02,
	0x0342, 0x0F80, 0x02,
	0x0344, 0x0008, 0x02,
	0x0346, 0x0008, 0x02,
	0x0348, 0x1687, 0x02,
	0x034A, 0x10E7, 0x02,
	0x034C, 0x0B40, 0x02,
	0x034E, 0x086C, 0x02,
	0x0350, 0x0000, 0x02,
	0x0352, 0x0002, 0x02,
	0x0380, 0x0002, 0x02,
	0x0382, 0x0002, 0x02,
	0x0384, 0x0002, 0x02,
	0x0386, 0x0002, 0x02,
	0x0400, 0x1010, 0x02,
	0x0900, 0x0122, 0x02,
	0x0902, 0x0001, 0x02,
	0x0B08, 0x0000, 0x02,
	0xF466, 0x07FB, 0x02,
	0xF468, 0x2000, 0x02,
	0x6214, 0xE9F0, 0x02,
	0x6218, 0xE9F0, 0x02,
};

/* 5. 2x5_EVT1-26Mhz A1.FULL 5760x4312 2093MHz 30fps */
const u32 sensor_2x5_setfile_A_5760x4312_30fps[] =
{
	0xFCFC, 0x2000, 0x02,
	0x10E0, 0x28D2, 0x02,
	0x10E2, 0x27F1, 0x02,
	0x11A0, 0x0001, 0x02,
	0x11C0, 0x0100, 0x02,
	0x11C2, 0x007F, 0x02,
	0x11C6, 0x0080, 0x02,
	0x11CA, 0x004B, 0x02,
	0x11CC, 0x066B, 0x02,
	0x11CE, 0xF466, 0x02,
	0x11D0, 0xA000, 0x02,
	0x11D2, 0x4000, 0x02,
	0x11D4, 0xF468, 0x02,
	0x123C, 0x1230, 0x02,
	0x129E, 0x0100, 0x02,
	0x2CF0, 0x0200, 0x02,
	0x2E9C, 0x0000, 0x02,
	0x2EB6, 0x0000, 0x02,
	0x3746, 0x0038, 0x02,
	0x374A, 0x0000, 0x02,
	0x3752, 0x0006, 0x02,
	0x3756, 0x0000, 0x02,
	0x3762, 0x0000, 0x02,
	0x376E, 0x0000, 0x02,
	0x39D6, 0x0035, 0x02,
	0x39DA, 0x0028, 0x02,
	0x40E8, 0x0A0A, 0x02,
	0x40EA, 0x0A0A, 0x02,
	0x40EC, 0x0A0A, 0x02,
	0x410C, 0x0505, 0x02,
	0x410E, 0x0505, 0x02,
	0x4110, 0x0505, 0x02,
	0x4130, 0x3232, 0x02,
	0x4132, 0x3232, 0x02,
	0x4134, 0x3232, 0x02,
	0x465A, 0x0813, 0x02,
	0x465C, 0x1313, 0x02,
	0x465E, 0x1313, 0x02,
	0x4660, 0x1300, 0x02,
	0x46E2, 0x7878, 0x02,
	0x46E4, 0x5E42, 0x02,
	0x46E6, 0x3636, 0x02,
	0x46EA, 0x2078, 0x02,
	0x46EC, 0x785E, 0x02,
	0x46EE, 0x4236, 0x02,
	0x46F0, 0x3601, 0x02,
	0x46F4, 0x5A5A, 0x02,
	0x46F6, 0x7896, 0x02,
	0x46F8, 0xB4B4, 0x02,
	0x46FC, 0x2064, 0x02,
	0x46FE, 0x6485, 0x02,
	0x4700, 0xA7C8, 0x02,
	0x4706, 0x5353, 0x02,
	0x4708, 0x708B, 0x02,
	0x470A, 0xA7A7, 0x02,
	0x470E, 0x2053, 0x02,
	0x4710, 0x5370, 0x02,
	0x4712, 0x8BA7, 0x02,
	0x4714, 0xA701, 0x02,
	0x4718, 0x6464, 0x02,
	0x471A, 0x86A7, 0x02,
	0x471C, 0xC8C8, 0x02,
	0x4720, 0x2014, 0x02,
	0x4722, 0x141B, 0x02,
	0x4724, 0x2128, 0x02,
	0x4726, 0x2801, 0x02,
	0x472A, 0x1414, 0x02,
	0x472C, 0x1B21, 0x02,
	0x472E, 0x2828, 0x02,
	0x4732, 0x201B, 0x02,
	0x4734, 0x1B23, 0x02,
	0x4736, 0x2D36, 0x02,
	0x4738, 0x3601, 0x02,
	0x473C, 0x3C3C, 0x02,
	0x473E, 0x5064, 0x02,
	0x4740, 0x7878, 0x02,
	0x4744, 0x203C, 0x02,
	0x4746, 0x3C50, 0x02,
	0x4748, 0x6478, 0x02,
	0x474A, 0x78FF, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0340, 0x1184, 0x02,
	0x0342, 0x1BD8, 0x02,
	0x0344, 0x0004, 0x02,
	0x0346, 0x0008, 0x02,
	0x0348, 0x168B, 0x02,
	0x034A, 0x10E7, 0x02,
	0x034C, 0x1680, 0x02,
	0x034E, 0x10D8, 0x02,
	0x0350, 0x0004, 0x02,
	0x0352, 0x0004, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x1010, 0x02,
	0x0900, 0x0011, 0x02,
	0x0902, 0x0000, 0x02,
	0x0B08, 0x0001, 0x02,
	0xF466, 0x004B, 0x02,
	0xF468, 0xA000, 0x02,
	0x6214, 0xE9F0, 0x02,
	0x6218, 0xE9F0, 0x02,
};

/* 6. 2x5_EVT1-26Mhz A2.FULL 5760x3240 2093MHz 30fps */
const u32 sensor_2x5_setfile_A_5760x3240_30fps[] =
{
	0xFCFC, 0x2000, 0x02,
	0x10E0, 0x28D2, 0x02,
	0x10E2, 0x27F1, 0x02,
	0x11A0, 0x0001, 0x02,
	0x11C0, 0x0100, 0x02,
	0x11C2, 0x007F, 0x02,
	0x11C6, 0x0080, 0x02,
	0x11CA, 0x004B, 0x02,
	0x11CC, 0x066B, 0x02,
	0x11CE, 0xF466, 0x02,
	0x11D0, 0xA000, 0x02,
	0x11D2, 0x4000, 0x02,
	0x11D4, 0xF468, 0x02,
	0x123C, 0x1230, 0x02,
	0x129E, 0x0100, 0x02,
	0x2CF0, 0x0200, 0x02,
	0x2E9C, 0x0000, 0x02,
	0x2EB6, 0x0000, 0x02,
	0x3746, 0x0038, 0x02,
	0x374A, 0x0000, 0x02,
	0x3752, 0x0006, 0x02,
	0x3756, 0x0000, 0x02,
	0x3762, 0x0000, 0x02,
	0x376E, 0x0000, 0x02,
	0x39D6, 0x0035, 0x02,
	0x39DA, 0x0028, 0x02,
	0x40E8, 0x0A0A, 0x02,
	0x40EA, 0x0A0A, 0x02,
	0x40EC, 0x0A0A, 0x02,
	0x410C, 0x0505, 0x02,
	0x410E, 0x0505, 0x02,
	0x4110, 0x0505, 0x02,
	0x4130, 0x3232, 0x02,
	0x4132, 0x3232, 0x02,
	0x4134, 0x3232, 0x02,
	0x465A, 0x0813, 0x02,
	0x465C, 0x1313, 0x02,
	0x465E, 0x1313, 0x02,
	0x4660, 0x1300, 0x02,
	0x46E2, 0x7878, 0x02,
	0x46E4, 0x5E42, 0x02,
	0x46E6, 0x3636, 0x02,
	0x46EA, 0x2078, 0x02,
	0x46EC, 0x785E, 0x02,
	0x46EE, 0x4236, 0x02,
	0x46F0, 0x3601, 0x02,
	0x46F4, 0x5A5A, 0x02,
	0x46F6, 0x7896, 0x02,
	0x46F8, 0xB4B4, 0x02,
	0x46FC, 0x2064, 0x02,
	0x46FE, 0x6485, 0x02,
	0x4700, 0xA7C8, 0x02,
	0x4706, 0x5353, 0x02,
	0x4708, 0x708B, 0x02,
	0x470A, 0xA7A7, 0x02,
	0x470E, 0x2053, 0x02,
	0x4710, 0x5370, 0x02,
	0x4712, 0x8BA7, 0x02,
	0x4714, 0xA701, 0x02,
	0x4718, 0x6464, 0x02,
	0x471A, 0x86A7, 0x02,
	0x471C, 0xC8C8, 0x02,
	0x4720, 0x2014, 0x02,
	0x4722, 0x141B, 0x02,
	0x4724, 0x2128, 0x02,
	0x4726, 0x2801, 0x02,
	0x472A, 0x1414, 0x02,
	0x472C, 0x1B21, 0x02,
	0x472E, 0x2828, 0x02,
	0x4732, 0x201B, 0x02,
	0x4734, 0x1B23, 0x02,
	0x4736, 0x2D36, 0x02,
	0x4738, 0x3601, 0x02,
	0x473C, 0x3C3C, 0x02,
	0x473E, 0x5064, 0x02,
	0x4740, 0x7878, 0x02,
	0x4744, 0x203C, 0x02,
	0x4746, 0x3C50, 0x02,
	0x4748, 0x6478, 0x02,
	0x474A, 0x78FF, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0340, 0x1184, 0x02,
	0x0342, 0x1BD8, 0x02,
	0x0344, 0x0004, 0x02,
	0x0346, 0x0220, 0x02,
	0x0348, 0x168B, 0x02,
	0x034A, 0x0ECF, 0x02,
	0x034C, 0x1680, 0x02,
	0x034E, 0x0CA8, 0x02,
	0x0350, 0x0004, 0x02,
	0x0352, 0x0004, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x1010, 0x02,
	0x0900, 0x0011, 0x02,
	0x0902, 0x0000, 0x02,
	0x0B08, 0x0001, 0x02,
	0xF466, 0x004B, 0x02,
	0xF468, 0xA000, 0x02,
	0x6214, 0xE9F0, 0x02,
	0x6218, 0xE9F0, 0x02,
};

/* 7. 2x5_EVT1-26Mhz A5.FULL 5760x2664 2093MHz 30fps */
const u32 sensor_2x5_setfile_A_5760x2664_30fps[] =
{
	0xFCFC, 0x2000, 0x02,
	0x10E0, 0x28D2, 0x02,
	0x10E2, 0x27F1, 0x02,
	0x11A0, 0x0001, 0x02,
	0x11C0, 0x0100, 0x02,
	0x11C2, 0x007F, 0x02,
	0x11C6, 0x0080, 0x02,
	0x11CA, 0x004B, 0x02,
	0x11CC, 0x066B, 0x02,
	0x11CE, 0xF466, 0x02,
	0x11D0, 0xA000, 0x02,
	0x11D2, 0x4000, 0x02,
	0x11D4, 0xF468, 0x02,
	0x123C, 0x1230, 0x02,
	0x129E, 0x0100, 0x02,
	0x2CF0, 0x0200, 0x02,
	0x2E9C, 0x0000, 0x02,
	0x2EB6, 0x0000, 0x02,
	0x3746, 0x0038, 0x02,
	0x374A, 0x0000, 0x02,
	0x3752, 0x0006, 0x02,
	0x3756, 0x0000, 0x02,
	0x3762, 0x0000, 0x02,
	0x376E, 0x0000, 0x02,
	0x39D6, 0x0035, 0x02,
	0x39DA, 0x0028, 0x02,
	0x40E8, 0x0A0A, 0x02,
	0x40EA, 0x0A0A, 0x02,
	0x40EC, 0x0A0A, 0x02,
	0x410C, 0x0505, 0x02,
	0x410E, 0x0505, 0x02,
	0x4110, 0x0505, 0x02,
	0x4130, 0x3232, 0x02,
	0x4132, 0x3232, 0x02,
	0x4134, 0x3232, 0x02,
	0x465A, 0x0813, 0x02,
	0x465C, 0x1313, 0x02,
	0x465E, 0x1313, 0x02,
	0x4660, 0x1300, 0x02,
	0x46E2, 0x7878, 0x02,
	0x46E4, 0x5E42, 0x02,
	0x46E6, 0x3636, 0x02,
	0x46EA, 0x2078, 0x02,
	0x46EC, 0x785E, 0x02,
	0x46EE, 0x4236, 0x02,
	0x46F0, 0x3601, 0x02,
	0x46F4, 0x5A5A, 0x02,
	0x46F6, 0x7896, 0x02,
	0x46F8, 0xB4B4, 0x02,
	0x46FC, 0x2064, 0x02,
	0x46FE, 0x6485, 0x02,
	0x4700, 0xA7C8, 0x02,
	0x4706, 0x5353, 0x02,
	0x4708, 0x708B, 0x02,
	0x470A, 0xA7A7, 0x02,
	0x470E, 0x2053, 0x02,
	0x4710, 0x5370, 0x02,
	0x4712, 0x8BA7, 0x02,
	0x4714, 0xA701, 0x02,
	0x4718, 0x6464, 0x02,
	0x471A, 0x86A7, 0x02,
	0x471C, 0xC8C8, 0x02,
	0x4720, 0x2014, 0x02,
	0x4722, 0x141B, 0x02,
	0x4724, 0x2128, 0x02,
	0x4726, 0x2801, 0x02,
	0x472A, 0x1414, 0x02,
	0x472C, 0x1B21, 0x02,
	0x472E, 0x2828, 0x02,
	0x4732, 0x201B, 0x02,
	0x4734, 0x1B23, 0x02,
	0x4736, 0x2D36, 0x02,
	0x4738, 0x3601, 0x02,
	0x473C, 0x3C3C, 0x02,
	0x473E, 0x5064, 0x02,
	0x4740, 0x7878, 0x02,
	0x4744, 0x203C, 0x02,
	0x4746, 0x3C50, 0x02,
	0x4748, 0x6478, 0x02,
	0x474A, 0x78FF, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0340, 0x10EA, 0x02,
	0x0342, 0x1CD5, 0x02,
	0x0344, 0x0004, 0x02,
	0x0346, 0x0340, 0x02,
	0x0348, 0x168B, 0x02,
	0x034A, 0x0DAF, 0x02,
	0x034C, 0x1680, 0x02,
	0x034E, 0x0A68, 0x02,
	0x0350, 0x0004, 0x02,
	0x0352, 0x0004, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x1010, 0x02,
	0x0900, 0x0011, 0x02,
	0x0902, 0x0000, 0x02,
	0x0B08, 0x0001, 0x02,
	0xF466, 0x004B, 0x02,
	0xF468, 0xA000, 0x02,
	0x6214, 0xE9F0, 0x02,
	0x6218, 0xE9F0, 0x02,
};

/* 8. 2x5_EVT1-26Mhz A4.FULL 4312x4312 2093MHz 30fps */
const u32 sensor_2x5_setfile_A_4312x4312_30fps[] =
{
	0xFCFC, 0x2000, 0x02,
	0x10E0, 0x28D2, 0x02,
	0x10E2, 0x27F1, 0x02,
	0x11A0, 0x0001, 0x02,
	0x11C0, 0x0100, 0x02,
	0x11C2, 0x007F, 0x02,
	0x11C6, 0x0080, 0x02,
	0x11CA, 0x004B, 0x02,
	0x11CC, 0x066B, 0x02,
	0x11CE, 0xF466, 0x02,
	0x11D0, 0xA000, 0x02,
	0x11D2, 0x4000, 0x02,
	0x11D4, 0xF468, 0x02,
	0x123C, 0x1230, 0x02,
	0x129E, 0x0100, 0x02,
	0x2CF0, 0x0200, 0x02,
	0x2E9C, 0x0000, 0x02,
	0x2EB6, 0x0000, 0x02,
	0x3746, 0x0038, 0x02,
	0x374A, 0x0000, 0x02,
	0x3752, 0x0006, 0x02,
	0x3756, 0x0000, 0x02,
	0x3762, 0x0000, 0x02,
	0x376E, 0x0000, 0x02,
	0x39D6, 0x0035, 0x02,
	0x39DA, 0x0028, 0x02,
	0x40E8, 0x0A0A, 0x02,
	0x40EA, 0x0A0A, 0x02,
	0x40EC, 0x0A0A, 0x02,
	0x410C, 0x0505, 0x02,
	0x410E, 0x0505, 0x02,
	0x4110, 0x0505, 0x02,
	0x4130, 0x3232, 0x02,
	0x4132, 0x3232, 0x02,
	0x4134, 0x3232, 0x02,
	0x465A, 0x0813, 0x02,
	0x465C, 0x1313, 0x02,
	0x465E, 0x1313, 0x02,
	0x4660, 0x1300, 0x02,
	0x46E2, 0x7878, 0x02,
	0x46E4, 0x5E42, 0x02,
	0x46E6, 0x3636, 0x02,
	0x46EA, 0x2078, 0x02,
	0x46EC, 0x785E, 0x02,
	0x46EE, 0x4236, 0x02,
	0x46F0, 0x3601, 0x02,
	0x46F4, 0x5A5A, 0x02,
	0x46F6, 0x7896, 0x02,
	0x46F8, 0xB4B4, 0x02,
	0x46FC, 0x2064, 0x02,
	0x46FE, 0x6485, 0x02,
	0x4700, 0xA7C8, 0x02,
	0x4706, 0x5353, 0x02,
	0x4708, 0x708B, 0x02,
	0x470A, 0xA7A7, 0x02,
	0x470E, 0x2053, 0x02,
	0x4710, 0x5370, 0x02,
	0x4712, 0x8BA7, 0x02,
	0x4714, 0xA701, 0x02,
	0x4718, 0x6464, 0x02,
	0x471A, 0x86A7, 0x02,
	0x471C, 0xC8C8, 0x02,
	0x4720, 0x2014, 0x02,
	0x4722, 0x141B, 0x02,
	0x4724, 0x2128, 0x02,
	0x4726, 0x2801, 0x02,
	0x472A, 0x1414, 0x02,
	0x472C, 0x1B21, 0x02,
	0x472E, 0x2828, 0x02,
	0x4732, 0x201B, 0x02,
	0x4734, 0x1B23, 0x02,
	0x4736, 0x2D36, 0x02,
	0x4738, 0x3601, 0x02,
	0x473C, 0x3C3C, 0x02,
	0x473E, 0x5064, 0x02,
	0x4740, 0x7878, 0x02,
	0x4744, 0x203C, 0x02,
	0x4746, 0x3C50, 0x02,
	0x4748, 0x6478, 0x02,
	0x474A, 0x78FF, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0340, 0x1184, 0x02,
	0x0342, 0x1BD8, 0x02,
	0x0344, 0x02D8, 0x02,
	0x0346, 0x0008, 0x02,
	0x0348, 0x13B7, 0x02,
	0x034A, 0x10E7, 0x02,
	0x034C, 0x10D8, 0x02,
	0x034E, 0x10D8, 0x02,
	0x0350, 0x0004, 0x02,
	0x0352, 0x0004, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x1010, 0x02,
	0x0900, 0x0011, 0x02,
	0x0902, 0x0000, 0x02,
	0x0B08, 0x0001, 0x02,
	0xF466, 0x004B, 0x02,
	0xF468, 0xA000, 0x02,
	0x6214, 0xE9F0, 0x02,
	0x6218, 0xE9F0, 0x02,
};

/* 2X5_EVT1 Pre Calibration */
const u32 sensor_2x5_setfile_A_pre_cal[] =
{
	0x0B00, 0x0000, 0x02,
	0xFCFC, 0x2000, 0x02,
	0x2CF8, 0x1344, 0x02,
	0x2CF6, 0x18C0, 0x02,
	0x2CFA, 0x0120, 0x02,
	0x2CFC, 0x0132, 0x02,
	0x2D72, 0x1388, 0x02,
	0x2D02, 0x0003, 0x02,
	0x2D04, 0x0004, 0x02,
	0x2CFE, 0x0040, 0x02,
	0x2D00, 0x0038, 0x02,
	0x2D42, 0x01D0, 0x02,
	0x2D40, 0x0100, 0x02,
	0x2D70, 0x0410, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x6226, 0x0001, 0x02,
	0xFCFC, 0x2000, 0x02,
	0x2D8E, 0x123D, 0x02,
};

/* 2X5_EVT1 After Calibration */
const u32 sensor_2x5_setfile_A_post_cal[] =
{
	0xFCFC, 0x4000, 0x02,
	0x0100, 0x0000, 0x02,
	0x0FE8, 0x1000, 0x02,
	0xFCFC, 0x2000, 0x02,
	0x2D86, 0x1000, 0x02,
	0x2D88, 0x2000, 0x02,
	0x2D8A, 0x5000, 0x02,
	0x2D8C, 0x6000, 0x02,
	0x1EF0, 0x0101, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0B00, 0x0100, 0x02,
	0x6000, 0x0085, 0x02,
	I2C_MODE_DELAY, 10000, 0x00,
};

/* 0. 2x5_EVT1-26Mhz A6.2FD 2880x2156 2093MHz 30fps */
const struct sensor_pll_info_compact sensor_2x5_pllinfo_A_2880x2156_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2093000000, /* mipi_datarate */
	959000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0DB0, /* frame_length_lines	(0x0340) */
	0x239F, /* line_length_pck		(0x0342) */
};

/* 1. 2x5_EVT1-26Mhz A7.2FD 2880x1620 2093MHz 30fps */
const struct sensor_pll_info_compact sensor_2x5_pllinfo_A_2880x1620_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2093000000, /* mipi_datarate */
	959000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0A48, /* frame_length_lines	(0x0340) */
	0x2F6D, /* line_length_pck		(0x0342) */
};

/* 2. 2x5_EVT1-26Mhz A10.2FD 2880x1332 2093MHz 30fps */
const struct sensor_pll_info_compact sensor_2x5_pllinfo_A_2880x1332_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2093000000, /* mipi_datarate */
	959000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0874, /* frame_length_lines	(0x0340) */
	0x39AE, /* line_length_pck		(0x0342) */
};

/* 3. 2x5_EVT1-26Mhz A9.2FD 2156x2156 2093MHz 30fps */
const struct sensor_pll_info_compact sensor_2x5_pllinfo_A_2156x2156_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2093000000, /* mipi_datarate */
	959000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0DB0, /* frame_length_lines	(0x0340) */
	0x239F, /* line_length_pck		(0x0342) */
};

/* 4. 2x5_EVT1-26Mhz A12.4FD 2880x2156 2093MHz 100fps */
const struct sensor_pll_info_compact sensor_2x5_pllinfo_A_2880x2156_100fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2093000000, /* mipi_datarate */
	959000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x096E, /* frame_length_lines	(0x0340) */
	0x0F80, /* line_length_pck		(0x0342) */
};

/* 5. 2x5_EVT1-26Mhz A1.FULL 5760x4312 2093MHz 30fps */
const struct sensor_pll_info_compact sensor_2x5_pllinfo_A_5760x4312_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2093000000, /* mipi_datarate */
	959000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x1184, /* frame_length_lines	(0x0340) */
	0x1BD8, /* line_length_pck		(0x0342) */
};

/* 6. 2x5_EVT1-26Mhz A2.FULL 5760x3240 2093MHz 30fps */
const struct sensor_pll_info_compact sensor_2x5_pllinfo_A_5760x3240_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2093000000, /* mipi_datarate */
	959000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x1184, /* frame_length_lines	(0x0340) */
	0x1BD8, /* line_length_pck		(0x0342) */
};

/* 7. 2x5_EVT1-26Mhz A5.FULL 5760x2664 2093MHz 30fps */
const struct sensor_pll_info_compact sensor_2x5_pllinfo_A_5760x2664_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2093000000, /* mipi_datarate */
	959000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x10EA, /* frame_length_lines	(0x0340) */
	0x1CD5, /* line_length_pck		(0x0342) */
};

/* 8. 2x5_EVT1-26Mhz A4.FULL 4312x4312 2093MHz 30fps */
const struct sensor_pll_info_compact sensor_2x5_pllinfo_A_4312x4312_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	2093000000, /* mipi_datarate */
	959000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x1184, /* frame_length_lines	(0x0340) */
	0x1BD8, /* line_length_pck		(0x0342) */
};

static const u32 *sensor_2x5_setfiles_A[] = {
	/* 16x12 margin */
	sensor_2x5_setfile_A_2880x2156_30fps,
	sensor_2x5_setfile_A_2880x1620_30fps,
	sensor_2x5_setfile_A_2880x1332_30fps,
	sensor_2x5_setfile_A_2156x2156_30fps,
	sensor_2x5_setfile_A_2880x2156_100fps,
	sensor_2x5_setfile_A_5760x4312_30fps,
	sensor_2x5_setfile_A_5760x3240_30fps,
	sensor_2x5_setfile_A_5760x2664_30fps,
	sensor_2x5_setfile_A_4312x4312_30fps,
};

static const u32 sensor_2x5_setfile_A_sizes[] = {
	/* 16x12 margin */
	ARRAY_SIZE(sensor_2x5_setfile_A_2880x2156_30fps),
	ARRAY_SIZE(sensor_2x5_setfile_A_2880x1620_30fps),
	ARRAY_SIZE(sensor_2x5_setfile_A_2880x1332_30fps),
	ARRAY_SIZE(sensor_2x5_setfile_A_2156x2156_30fps),
	ARRAY_SIZE(sensor_2x5_setfile_A_2880x2156_100fps),
	ARRAY_SIZE(sensor_2x5_setfile_A_5760x4312_30fps),
	ARRAY_SIZE(sensor_2x5_setfile_A_5760x3240_30fps),
	ARRAY_SIZE(sensor_2x5_setfile_A_5760x2664_30fps),
	ARRAY_SIZE(sensor_2x5_setfile_A_4312x4312_30fps),
};

static const struct sensor_pll_info_compact *sensor_2x5_pllinfos_A[] =
{
	/* 16x12 margin */
	&sensor_2x5_pllinfo_A_2880x2156_30fps,
	&sensor_2x5_pllinfo_A_2880x1620_30fps,
	&sensor_2x5_pllinfo_A_2880x1332_30fps,
	&sensor_2x5_pllinfo_A_2156x2156_30fps,
	&sensor_2x5_pllinfo_A_2880x2156_100fps,
	&sensor_2x5_pllinfo_A_5760x4312_30fps,
	&sensor_2x5_pllinfo_A_5760x3240_30fps,
	&sensor_2x5_pllinfo_A_5760x2664_30fps,
	&sensor_2x5_pllinfo_A_4312x4312_30fps,
};

#endif
