/* Copyright (c) 2008-2013, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
enum gamma_mode_t{gamma_cool, gamma_normal, gamma_warm};
enum ce_mode_t{ce_soft, ce_normal, ce_brilliancy};
enum cabc_mode_t{cabc_on, cabc_off};
enum sharpness_mode_t{sharp_on, sharp_off};

static char r63311_mcs_protect_off[]      = {0xb0, 0x04};
static char r63311_nop_command[]          = {0x00};
static char r63311_nop_command1[]         = {0x00};
static char r63311_interface_setting[]    = {0xb3, 0x14, 0x00, 0x00,0x00,0x00,0x00};
static char r63311_dsi_control[]          = {0xb6, 0x3a, 0xd3};

static char r63311_cabc_parameter[]       = {0xb8, 0x18, 0x80, 0x18, 0x18, 0xcf, 0x1f, 0x00, 0x0c, 0x12, 0x6c, 0x11, 0x6c, 0x12, 0x0c, 0x12, 0xda, 0x6d, 0xff, 0xff, 0x10, 0x67, 0xa3, 0xdb, 0xfb, 0xff};
static char r63311_cabc_parameter1[]      = {0xb9, 0x00, 0x30, 0x10, 0x80, 0x9f, 0x1f, 0x80};
static char r63311_cabc_parameter2[]      = {0xba, 0x00, 0x30, 0x04, 0x40, 0x9f, 0x1f, 0xb7};

static char r63311_color_enhance[] = {0xca, 0x01, 0x80, 0x8D, 0xA0, 0xA0, 0x8D, 0x8D, 0x8D, 0x0A, 0x20, 0x80, 0x80, 0x12, 0x42, 0x44, 0x96, 0x73, 0xDA, 0x08, 0x08, 0x08, 0x06, 0x08, 0x04, 0x00, 0x00, 0x10, 0x10, 0x3F, 0x3F, 0x3F, 0x3F};
//static char r63311_display_setting1[]     = {0xc1, 0x84, 0x60, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00,0x00, 0x0c, 0x01, 0x58, 0x73, 0xae, 0x31, 0x20, 0x06,0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x22, 0x02, 0x02, 0x00};
//static char r63311_display_setting2[]    = {0xc2, 0x30, 0xf7, 0x80, 0x0c, 0x08, 0x00, 0x00};
//static char r63311_source_timing_setting[] = {0xc4, 0x70, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x11, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x11, 0x06};
//static char r63311_ltps_timing_setting[] = {0xc6, 0x06, 0x6d, 0x06, 0x6d, 0x06, 0x6d ,0x00, 0x00, 0x00, 0x00, 0x06, 0x6d, 0x06, 0x6d, 0x06, 0x6d, 0x15, 0x19, 0x07, 0x00, 0x01, 0x06, 0x6d, 0x06, 0x6d, 0x06, 0x6d, 0x00, 0x00, 0x00, 0x00, 0x06, 0x6d, 0x06, 0x6d, 0x06, 0x6d, 0x15, 0x19, 0x07};
//static char r63311_gamma_setting_a[]      = {0xc7, 0x00, 0x15, 0x1c, 0x24, 0x31, 0x48, 0x3d, 0x51, 0x5a, 0x62, 0x66, 0x70, 0x00, 0x15, 0x1c, 0x24, 0x31, 0x48, 0x3d, 0x51, 0x5a, 0x62, 0x66, 0x70};
//static char r63311_gamma_setting_b[]      = {0xc8, 0x00, 0x15, 0x1c, 0x24, 0x31, 0x49, 0x3d, 0x51, 0x5a, 0x62, 0x66, 0x70, 0x00, 0x15, 0x1c, 0x24, 0x31, 0x49, 0x3d, 0x51, 0x5a, 0x62, 0x66, 0x70};
//static char r63311_gamma_setting_c[]      = {0xc9, 0x00, 0x15, 0x1c, 0x24, 0x31, 0x48, 0x3c, 0x50, 0x5a, 0x62, 0x66, 0x70, 0x00, 0x15, 0x1c, 0x24, 0x31, 0x48, 0x3c, 0x50, 0x5a, 0x62, 0x66, 0x70};
static char r63311_display_setting1_dual[]     = {0xc1, 0x84, 0x60, 0x40, 0xeb, 0xff, 0x6f, 0xce, 0xff,0xff, 0x0f, 0x01, 0x58, 0x73, 0xae, 0x31, 0x20, 0xc6,0xff, 0xff, 0x1f, 0xf3, 0xff, 0x5f, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x22, 0x02, 0x02, 0x00};
static char r63311_display_setting2_dual[]    = {0xc2, 0x31, 0xf7, 0x80, 0x0c, 0x08, 0x00, 0x00};
static char r63311_source_timing_setting_dual[] = {0xc4, 0x70, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x03, 0x00, 0x0c, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x03, 0x00, 0x0c, 0x06};
static char r63311_ltps_timing_setting_dual[] = {0xc6, 0x00, 0x79, 0x00, 0x79, 0x00, 0x79 ,0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x79, 0x00, 0x79, 0x10, 0x19, 0x07, 0x00, 0x01, 0x00, 0x79, 0x00, 0x79, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x79, 0x00, 0x79, 0x10, 0x19, 0x07};
static char r63311_te_enable[]             = {0xc3, 0x01, 0x00, 0x00};
static char r63311_gamma_setting_a_dual[]      = {0XC7,0X07,0X17,0X1F,0X28,0x34,0x4B,0X40,0X51,0X5D,0X62,0X64,0X72,0X07,0X17,0X1F,0X28,0x34,0x4B,0X3F,0X51,0X5D,0X62,0X64,0X72};
static char r63311_gamma_setting_b_dual[]      = {0XC8,0X1A,0X21,0X26,0X2D,0x38,0x4C,0X40,0X51,0X5E,0X63,0X65,0X70,0X1A,0X21,0X26,0X2D,0x38,0x4C,0X40,0X52,0X5E,0X63,0X65,0X70};
static char r63311_gamma_setting_c_dual[]      = {0XC9,0X00,0X15,0X1D,0X26,0x33,0x4A,0X3F,0X51,0X5F,0X67,0X6B,0X70,0X00,0X15,0X1D,0X26,0x33,0x4A,0X3F,0X51,0X5F,0X67,0X6B,0x70};
static char r63311_panel_pin_control_dual[]    = {0xcb, 0x31, 0xfc, 0x3f, 0x8c, 0x00, 0x00, 0x00, 0x00, 0xc0};
//static char r63311_panel_set_turn[]      = {0x36, 0xc0};
static char r63311_panel_interface_control[]      = {0xcc, 0x09};
static char r63311_power_setting[]       = {0xd0, 0x00, 0x00, 0x19, 0x18, 0x99, 0x99, 0x19, 0x01, 0x89, 0x00, 0x55, 0x19, 0x99, 0x01};
static char r63311_power_setting_for_internal[]     = {0xd3, 0x1b, 0x33, 0xbb, 0xcc, 0xc4, 0x33, 0x33, 0x33, 0x00, 0x01, 0x00, 0xa0, 0xd8, 0xa0, 0x0d, 0x41, 0x33, 0x44, 0x22, 0x70, 0x02, 0x41, 0x03, 0x3d, 0xbf, 0x00};
//static char r63311_vcom_setting[]     = {0xd5, 0x06, 0x00, 0x00, 0x01, 0x33, 0x01, 0x33};
//static char r63311_vcom_setting1[]     = {0xd5, 0x06, 0x00, 0x00, 0x01, 0x33, 0x01, 0x33};
static char r63311_vcom_setting_dual[]     = {0xd5, 0x06, 0x00, 0x00, 0x01, 0x29, 0x01, 0x29};
static char r63311_vcom_setting1_dual[]     = {0xd5, 0x06, 0x00, 0x00, 0x01, 0x29, 0x01, 0x29};
//static char r63311_vcom_setting2[]     = {0xd5, 0x06, 0x00, 0x00, 0x01, 0x33, 0x01, 0x33};
//static char r63311_vcom_setting3[]     = {0xd5, 0x06, 0x00, 0x00, 0x01, 0x33, 0x01, 0x33};
static char r63311_dimming_function[]    = {0xce, 0x00, 0x01, 0x00, 0xc1, 0x00, 0x0e, 0x14};
static char r63311_enable_pwm[]         = {0x53, 0x2C};

static char r63311_cabc_function[]     = {0x55, 0x03};

//static char r63311_backlight_val[]     = {0x51, 0xff, 0xff};
static char r63311_exit_sleep_mode[]   = {0x11};
static char r63311_display_on[]        = {0x29};


static char r63311_vcom_setting4[]     = {0xd5, 0x06, 0x00, 0x00, 0x00, 0x48, 0x00, 0x48};
static char r63311_vcom_setting5[]     = {0xd5, 0x06, 0x00, 0x00, 0x00, 0x48, 0x00, 0x48};
//static char r63311_backlight_val[]         = {0x51, 0xb0};
static char r63311_set_display_off[]   = {0x28};
static char r63311_enter_sleep_mode[]   = {0x10};
static char r63311_deep_standby_in[]      = {0xb1, 0x01};
static struct dsi_cmd_desc dsi_r63311_on_cmds[] = {
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_mcs_protect_off)}, r63311_mcs_protect_off},
	{{DTYPE_DCS_WRITE, 0, 0, 0, 1, sizeof(r63311_nop_command)}, r63311_nop_command},
	{{DTYPE_DCS_WRITE, 0, 0, 0, 1, sizeof(r63311_nop_command1)}, r63311_nop_command1},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_interface_setting)}, r63311_interface_setting},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_dsi_control)}, r63311_dsi_control},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_cabc_parameter)}, r63311_cabc_parameter},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_cabc_parameter1)}, r63311_cabc_parameter1},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_cabc_parameter2)}, r63311_cabc_parameter2},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_color_enhance)}, r63311_color_enhance},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_display_setting1_dual)}, r63311_display_setting1_dual},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_display_setting2_dual)}, r63311_display_setting2_dual},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_te_enable)}, r63311_te_enable},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_source_timing_setting_dual)}, r63311_source_timing_setting_dual},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_ltps_timing_setting_dual)}, r63311_ltps_timing_setting_dual},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_gamma_setting_a_dual)}, r63311_gamma_setting_a_dual},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_gamma_setting_b_dual)}, r63311_gamma_setting_b_dual},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_gamma_setting_c_dual)}, r63311_gamma_setting_c_dual},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_panel_pin_control_dual)}, r63311_panel_pin_control_dual},
	//{{DTYPE_DCS_WRITE1, 1, 0, 0, 1, sizeof(r63311_panel_set_turn)}, r63311_panel_set_turn},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_panel_interface_control)}, r63311_panel_interface_control},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_power_setting)}, r63311_power_setting},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_power_setting_for_internal)}, r63311_power_setting_for_internal},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_vcom_setting_dual)}, r63311_vcom_setting_dual},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_vcom_setting1_dual)}, r63311_vcom_setting1_dual},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 1, sizeof(r63311_dimming_function)}, r63311_dimming_function},
	//{{DTYPE_DCS_LWRITE, 1, 0, 0, 1, sizeof(r63311_backlight_val)}, r63311_backlight_val},
	{{DTYPE_DCS_LWRITE, 1, 0, 0, 1, sizeof(r63311_enable_pwm)}, r63311_enable_pwm},
	{{DTYPE_DCS_LWRITE, 1, 0, 0, 1, sizeof(r63311_cabc_function)}, r63311_cabc_function},
	//{{DTYPE_DCS_WRITE, 1, 0, 0, 120, sizeof(r63311_display_on)}, r63311_display_on},
	//{{DTYPE_DCS_WRITE, 1, 0, 0, 120, sizeof(r63311_exit_sleep_mode)}, r63311_exit_sleep_mode}
};
static struct dsi_cmd_desc dsi_r63311_display_on[] = {
	{{DTYPE_DCS_WRITE, 1, 0, 0, 120, sizeof(r63311_display_on)}, r63311_display_on},
	{{DTYPE_DCS_WRITE, 1, 0, 0, 120, sizeof(r63311_exit_sleep_mode)}, r63311_exit_sleep_mode}
};
static struct dsi_cmd_desc dsi_r63311_off_cmds[] = {
    	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_vcom_setting4)}, r63311_vcom_setting4},
    	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_vcom_setting5)}, r63311_vcom_setting5},
    	{{DTYPE_DCS_WRITE, 1, 0, 0, 120, sizeof(r63311_set_display_off)}, r63311_set_display_off},
    	{{DTYPE_DCS_WRITE, 0, 0, 0, 1, sizeof(r63311_enter_sleep_mode)}, r63311_enter_sleep_mode},
    	{{DTYPE_GEN_LWRITE, 1, 0, 0, 1, sizeof(r63311_deep_standby_in)}, r63311_deep_standby_in}
};

static char r63311_gamma_setting_a_cool[] = {0xC7, 0X24, 0x2A, 0x29, 0x35, 0x3C, 0X50, 0X43, 0x54, 0x5F, 0x6E, 0x6F, 0x72, 0X24, 0x2A, 0x29, 0x35, 0x3C, 0X50, 0X43, 0x54, 0X5D, 0x6E, 0x6F, 0x72};										
static char r63311_gamma_setting_b_cool[] = {0xC8, 0X28, 0x2C, 0x2F, 0X35, 0x3E, 0X51, 0x44, 0X54, 0x5F, 0x68, 0x6B, 0X70, 0X28, 0x2C, 0x2F, 0X35, 0x3E, 0X51, 0X42, 0X54, 0x5F, 0x68, 0x6B, 0X70};										
static char r63311_gamma_setting_c_cool[] = {0xC9, 0X00, 0x0F, 0x1A, 0X2C, 0x37, 0X4E, 0X42, 0x53, 0x5F, 0X68, 0x6B, 0x70, 0X00, 0x0F, 0x1A, 0X2C, 0x37, 0X4E, 0X42, 0x53, 0x5F, 0X68, 0x6B, 0x70};
static char r63311_gamma_setting_a_warm[] = {0XC7, 0X00, 0X1C, 0X23, 0X2B, 0x38, 0x4D, 0X41, 0X50, 0X5C, 0X69, 0X6F, 0X72, 0X00, 0X1C, 0X23, 0X2B, 0x38, 0x4D, 0X41, 0X50, 0X5C, 0X69, 0X6F, 0X72};
static char r63311_gamma_setting_b_warm[] = {0XC8, 0X2A, 0X2E, 0X31, 0X36, 0x3F, 0x50, 0X42, 0X51, 0X5E, 0X68, 0X6B, 0X70, 0X2A, 0X2E, 0X31, 0X36, 0x3F, 0x50, 0X43, 0X52, 0X5E, 0X68, 0X6B, 0X70};
static char r63311_gamma_setting_c_warm[] = {0XC9, 0X27, 0X2B, 0X2E, 0X33, 0x3D, 0x4F, 0X42, 0X51, 0X5F, 0X67, 0X6B, 0X70, 0X27, 0X2B, 0X2E, 0X33, 0x3D, 0x4F, 0X42, 0X51, 0X5F, 0X67, 0X6B, 0x70};
static char r63311_ce_soft[] = {0xca, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x08, 0x20, 0x80, 0x80, 0x0A, 0x4A, 0x37, 0xA0, 0x55, 0xF8, 0x0C, 0x0C, 0x20, 0x10, 0x3F, 0x3F, 0x00, 0x00, 0x10, 0x10, 0x3F, 0x3F, 0x3F, 0x3F};
static char r63311_ce_normal[] = {0xca, 0x01,0x80,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x10,0x20,0x80,0x80,0x12,0x42,0x44,0x96,0x73,0xDA,0x08,0x08,0x0C,0x06,0x0C,0x0C,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63311_ce_brilliancy[] = {0xca, 0x01,0x80,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0x20,0x20,0x00,0x80,0x12,0x42,0x44,0x96,0x73,0xDA,0x08,0x08,0x0C,0x06,0x0C,0x0C,0x00,0x00,0x10,0x10,0x3F,0x3F,0x3F,0x3F};
static char r63311_sharpness_setting[] = {0xdd, 0x11, 0x93};
static char r63311_sharpness_off[] = {0xdd, 0x00, 0x00};
static char r63311_cabc_off[] = {0x55, 0x00};
static char r63311_enable_pwm_off[]         = {0x53, 0x24};

static struct dsi_cmd_desc dsi_r63311_gamma_warm[] = {
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_mcs_protect_off)}, r63311_mcs_protect_off},
	{{DTYPE_DCS_WRITE, 0, 0, 0, 1, sizeof(r63311_nop_command)}, r63311_nop_command},
	{{DTYPE_DCS_WRITE, 0, 0, 0, 1, sizeof(r63311_nop_command1)}, r63311_nop_command1},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_gamma_setting_a_warm)}, r63311_gamma_setting_a_warm},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_gamma_setting_b_warm)}, r63311_gamma_setting_b_warm},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 1, sizeof(r63311_gamma_setting_c_warm)}, r63311_gamma_setting_c_warm},
};

static struct dsi_cmd_desc dsi_r63311_gamma_normal[] = {
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_mcs_protect_off)}, r63311_mcs_protect_off},
	{{DTYPE_DCS_WRITE, 0, 0, 0, 1, sizeof(r63311_nop_command)}, r63311_nop_command},
	{{DTYPE_DCS_WRITE, 0, 0, 0, 1, sizeof(r63311_nop_command1)}, r63311_nop_command1},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_gamma_setting_a_dual)}, r63311_gamma_setting_a_dual},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_gamma_setting_b_dual)}, r63311_gamma_setting_b_dual},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 1, sizeof(r63311_gamma_setting_c_dual)}, r63311_gamma_setting_c_dual},
};

static struct dsi_cmd_desc dsi_r63311_gamma_cool[] = {
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_mcs_protect_off)}, r63311_mcs_protect_off},
	{{DTYPE_DCS_WRITE, 0, 0, 0, 1, sizeof(r63311_nop_command)}, r63311_nop_command},
	{{DTYPE_DCS_WRITE, 0, 0, 0, 1, sizeof(r63311_nop_command1)}, r63311_nop_command1},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_gamma_setting_a_cool)}, r63311_gamma_setting_a_cool},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 1, sizeof(r63311_gamma_setting_b_cool)}, r63311_gamma_setting_b_cool},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 1, sizeof(r63311_gamma_setting_c_cool)}, r63311_gamma_setting_c_cool},
};

static struct dsi_cmd_desc dsi_r63311_ce_soft[] = {
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 1, sizeof(r63311_ce_soft)}, r63311_ce_soft},
};

static struct dsi_cmd_desc dsi_r63311_ce_normal[] = {
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 1, sizeof(r63311_ce_normal)}, r63311_ce_normal},
};

static struct dsi_cmd_desc dsi_r63311_ce_brilliancy[] = {
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 1, sizeof(r63311_ce_brilliancy)}, r63311_ce_brilliancy},
};

static struct dsi_cmd_desc dsi_r63311_sharpness_setting[] = {
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 1, sizeof(r63311_sharpness_setting)}, r63311_sharpness_setting},
};

static struct dsi_cmd_desc dsi_r63311_sharpness_off[] = {
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 1, sizeof(r63311_sharpness_off)}, r63311_sharpness_off},
};

static struct dsi_cmd_desc dsi_r63311_cabc_off[] = {
	{{DTYPE_DCS_LWRITE, 1, 0, 0, 1, sizeof(r63311_cabc_off)}, r63311_cabc_off},
};
static struct dsi_cmd_desc dsi_r63311_cabc_setting[] = {
	{{DTYPE_DCS_LWRITE, 1, 0, 0, 1, sizeof(r63311_cabc_function)}, r63311_cabc_function},
};

static struct dsi_cmd_desc dsi_r63311_vcom_final_setting[] = {
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 10, sizeof(r63311_vcom_setting4)}, r63311_vcom_setting4},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 10, sizeof(r63311_vcom_setting5)}, r63311_vcom_setting5},
};

static struct dsi_cmd_desc dsi_r63311_vcom_final_setting_on[] = {
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 10, sizeof(r63311_vcom_setting_dual)}, r63311_vcom_setting_dual},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 10, sizeof(r63311_vcom_setting1_dual)}, r63311_vcom_setting1_dual},
};

static struct dsi_cmd_desc dsi_r63311_enable_pwm_on[] = {
	{{DTYPE_DCS_LWRITE, 1, 0, 0, 1, sizeof(r63311_enable_pwm)}, r63311_enable_pwm},
};
static struct dsi_cmd_desc dsi_r63311_enable_pwm_off[] = {
	{{DTYPE_DCS_LWRITE, 1, 0, 0, 1, sizeof(r63311_enable_pwm_off)}, r63311_enable_pwm_off},
};
