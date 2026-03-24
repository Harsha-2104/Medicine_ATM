/*
* Copyright 2026 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_Load_anim_scrn(lv_ui *ui)
{
	//Write codes Load_anim_scrn
	ui->Load_anim_scrn = lv_obj_create(NULL);
	lv_obj_set_size(ui->Load_anim_scrn, 1280, 720);
	lv_obj_set_scrollbar_mode(ui->Load_anim_scrn, LV_SCROLLBAR_MODE_OFF);

	//Write style for Load_anim_scrn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Load_anim_scrn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Load_anim_scrn, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Load_anim_scrn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Load_anim_scrn_spinner_1
	ui->Load_anim_scrn_spinner_1 = lv_spinner_create(ui->Load_anim_scrn, 1000, 60);
	lv_obj_set_pos(ui->Load_anim_scrn_spinner_1, 510, 180);
	lv_obj_set_size(ui->Load_anim_scrn_spinner_1, 258, 274);

	//Write style for Load_anim_scrn_spinner_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_pad_top(ui->Load_anim_scrn_spinner_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Load_anim_scrn_spinner_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Load_anim_scrn_spinner_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Load_anim_scrn_spinner_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Load_anim_scrn_spinner_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_width(ui->Load_anim_scrn_spinner_1, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->Load_anim_scrn_spinner_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->Load_anim_scrn_spinner_1, lv_color_hex(0xd5d6de), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Load_anim_scrn_spinner_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Load_anim_scrn_spinner_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_arc_width(ui->Load_anim_scrn_spinner_1, 12, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->Load_anim_scrn_spinner_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->Load_anim_scrn_spinner_1, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write codes Load_anim_scrn_label_1
	ui->Load_anim_scrn_label_1 = lv_label_create(ui->Load_anim_scrn);
	lv_label_set_text(ui->Load_anim_scrn_label_1, "Please wait.....");
	lv_label_set_long_mode(ui->Load_anim_scrn_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Load_anim_scrn_label_1, 517, 491);
	lv_obj_set_size(ui->Load_anim_scrn_label_1, 269, 35);

	//Write style for Load_anim_scrn_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Load_anim_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Load_anim_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Load_anim_scrn_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Load_anim_scrn_label_1, &lv_font_PottiSreeramuluRegular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Load_anim_scrn_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Load_anim_scrn_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Load_anim_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Load_anim_scrn_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Load_anim_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Load_anim_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Load_anim_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Load_anim_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Load_anim_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Load_anim_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of Load_anim_scrn.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->Load_anim_scrn);

}
