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



void setup_scr_Pay_cmplt_scrn(lv_ui *ui)
{
	//Write codes Pay_cmplt_scrn
	ui->Pay_cmplt_scrn = lv_obj_create(NULL);
	lv_obj_set_size(ui->Pay_cmplt_scrn, 1280, 720);
	lv_obj_set_scrollbar_mode(ui->Pay_cmplt_scrn, LV_SCROLLBAR_MODE_OFF);

	//Write style for Pay_cmplt_scrn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Pay_cmplt_scrn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Pay_cmplt_scrn, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Pay_cmplt_scrn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Pay_cmplt_scrn_label_1
	ui->Pay_cmplt_scrn_label_1 = lv_label_create(ui->Pay_cmplt_scrn);
	lv_label_set_text(ui->Pay_cmplt_scrn_label_1, "Your Transaction is Successful");
	lv_label_set_long_mode(ui->Pay_cmplt_scrn_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Pay_cmplt_scrn_label_1, 433, 144);
	lv_obj_set_size(ui->Pay_cmplt_scrn_label_1, 434, 36);

	//Write style for Pay_cmplt_scrn_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Pay_cmplt_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Pay_cmplt_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Pay_cmplt_scrn_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Pay_cmplt_scrn_label_1, &lv_font_PottiSreeramuluRegular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Pay_cmplt_scrn_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Pay_cmplt_scrn_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Pay_cmplt_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Pay_cmplt_scrn_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Pay_cmplt_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Pay_cmplt_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Pay_cmplt_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Pay_cmplt_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Pay_cmplt_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Pay_cmplt_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Pay_cmplt_scrn_im_tick
	ui->Pay_cmplt_scrn_im_tick = lv_img_create(ui->Pay_cmplt_scrn);
	lv_obj_add_flag(ui->Pay_cmplt_scrn_im_tick, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Pay_cmplt_scrn_im_tick, &_Tick_alpha_268x256);
	lv_img_set_pivot(ui->Pay_cmplt_scrn_im_tick, 50,50);
	lv_img_set_angle(ui->Pay_cmplt_scrn_im_tick, 0);
	lv_obj_set_pos(ui->Pay_cmplt_scrn_im_tick, 513, 197);
	lv_obj_set_size(ui->Pay_cmplt_scrn_im_tick, 268, 256);

	//Write style for Pay_cmplt_scrn_im_tick, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Pay_cmplt_scrn_im_tick, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Pay_cmplt_scrn_im_tick, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Pay_cmplt_scrn_im_tick, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Pay_cmplt_scrn_im_tick, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Pay_cmplt_scrn_label_2
	ui->Pay_cmplt_scrn_label_2 = lv_label_create(ui->Pay_cmplt_scrn);
	lv_label_set_text(ui->Pay_cmplt_scrn_label_2, "Please Collect Your Medicines Below\n" LV_SYMBOL_DOWN "\n" LV_SYMBOL_DOWN "\n" LV_SYMBOL_DOWN "\n");
	lv_label_set_long_mode(ui->Pay_cmplt_scrn_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Pay_cmplt_scrn_label_2, 417, 498);
	lv_obj_set_size(ui->Pay_cmplt_scrn_label_2, 470, 131);

	//Write style for Pay_cmplt_scrn_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Pay_cmplt_scrn_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Pay_cmplt_scrn_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Pay_cmplt_scrn_label_2, lv_color_hex(0x14ff00), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Pay_cmplt_scrn_label_2, &lv_font_PottiSreeramuluRegular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Pay_cmplt_scrn_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Pay_cmplt_scrn_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Pay_cmplt_scrn_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Pay_cmplt_scrn_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Pay_cmplt_scrn_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Pay_cmplt_scrn_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Pay_cmplt_scrn_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Pay_cmplt_scrn_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Pay_cmplt_scrn_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Pay_cmplt_scrn_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of Pay_cmplt_scrn.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->Pay_cmplt_scrn);

	//Init events for screen.
	events_init_Pay_cmplt_scrn(ui);
}
