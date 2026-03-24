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



void setup_scr_Home_scrn(lv_ui *ui)
{
	//Write codes Home_scrn
	ui->Home_scrn = lv_obj_create(NULL);
	lv_obj_set_size(ui->Home_scrn, 1280, 720);
	lv_obj_set_scrollbar_mode(ui->Home_scrn, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_scrn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Home_scrn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_scrn, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_scrn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->Home_scrn, &_Background_1280x720, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->Home_scrn, 178, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_recolor(ui->Home_scrn, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_recolor_opa(ui->Home_scrn, 61, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_scrn_Title
	ui->Home_scrn_Title = lv_label_create(ui->Home_scrn);
	lv_label_set_text(ui->Home_scrn_Title, "Welcome to Medical ATM  ");
	lv_label_set_long_mode(ui->Home_scrn_Title, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_scrn_Title, 17, 72);
	lv_obj_set_size(ui->Home_scrn_Title, 1250, 90);

	//Write style for Home_scrn_Title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_scrn_Title, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Home_scrn_Title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Home_scrn_Title, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Home_scrn_Title, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_scrn_Title, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_scrn_Title, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_scrn_Title, &lv_font_PottiSreeramuluRegular_45, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_scrn_Title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_scrn_Title, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_scrn_Title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_scrn_Title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_scrn_Title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_scrn_Title, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_scrn_Title, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_scrn_Title, 23, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_scrn_Title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_scrn_Title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_scrn_Title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_scrn_Title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_scrn_Eng_btn
	ui->Home_scrn_Eng_btn = lv_btn_create(ui->Home_scrn);
	ui->Home_scrn_Eng_btn_label = lv_label_create(ui->Home_scrn_Eng_btn);
	lv_label_set_text(ui->Home_scrn_Eng_btn_label, "Enter");
	lv_label_set_long_mode(ui->Home_scrn_Eng_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Home_scrn_Eng_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Home_scrn_Eng_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Home_scrn_Eng_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->Home_scrn_Eng_btn, 395, 332);
	lv_obj_set_size(ui->Home_scrn_Eng_btn, 522, 100);

	//Write style for Home_scrn_Eng_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Home_scrn_Eng_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_scrn_Eng_btn, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_scrn_Eng_btn, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Home_scrn_Eng_btn, lv_color_hex(0x061c2e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_main_stop(ui->Home_scrn_Eng_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_stop(ui->Home_scrn_Eng_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Home_scrn_Eng_btn, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Home_scrn_Eng_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Home_scrn_Eng_btn, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Home_scrn_Eng_btn, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_scrn_Eng_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_scrn_Eng_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_scrn_Eng_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_scrn_Eng_btn, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_scrn_Eng_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_scrn_Eng_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of Home_scrn.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->Home_scrn);

	//Init events for screen.
	events_init_Home_scrn(ui);
}
