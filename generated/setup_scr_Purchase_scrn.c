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



void setup_scr_Purchase_scrn(lv_ui *ui)
{
	//Write codes Purchase_scrn
	ui->Purchase_scrn = lv_obj_create(NULL);
	lv_obj_set_size(ui->Purchase_scrn, 1280, 720);
	lv_obj_set_scrollbar_mode(ui->Purchase_scrn, LV_SCROLLBAR_MODE_OFF);

	//Write style for Purchase_scrn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Purchase_scrn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Purchase_scrn, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Purchase_scrn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->Purchase_scrn, &_Background_1280x720, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->Purchase_scrn, 178, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_recolor(ui->Purchase_scrn, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_recolor_opa(ui->Purchase_scrn, 61, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Purchase_scrn_Text_box
	ui->Purchase_scrn_Text_box = lv_label_create(ui->Purchase_scrn);
	lv_label_set_text(ui->Purchase_scrn_Text_box, "");
	lv_label_set_long_mode(ui->Purchase_scrn_Text_box, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Purchase_scrn_Text_box, 75, 87);
	lv_obj_set_size(ui->Purchase_scrn_Text_box, 1130, 577);

	//Write style for Purchase_scrn_Text_box, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Purchase_scrn_Text_box, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Purchase_scrn_Text_box, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Purchase_scrn_Text_box, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Purchase_scrn_Text_box, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Purchase_scrn_Text_box, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Purchase_scrn_Text_box, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Purchase_scrn_Text_box, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Purchase_scrn_Text_box, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Purchase_scrn_Text_box, 169, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Purchase_scrn_Text_box, lv_color_hex(0xc5fdd3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Purchase_scrn_Text_box, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Purchase_scrn_Text_box, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Purchase_scrn_Text_box, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Purchase_scrn_Text_box, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Purchase_scrn_Text_box, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Purchase_scrn_Text_box, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Purchase_scrn_label_str
	ui->Purchase_scrn_label_str = lv_label_create(ui->Purchase_scrn);
	lv_label_set_text(ui->Purchase_scrn_label_str, "\n\n\n\n\n\n\n\nItems = 2\nTotal = 52");
	lv_label_set_long_mode(ui->Purchase_scrn_label_str, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Purchase_scrn_label_str, 410, 140);
	lv_obj_set_size(ui->Purchase_scrn_label_str, 182, 335);

	//Write style for Purchase_scrn_label_str, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Purchase_scrn_label_str, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Purchase_scrn_label_str, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Purchase_scrn_label_str, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Purchase_scrn_label_str, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Purchase_scrn_label_str, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Purchase_scrn_label_str, lv_color_hex(0x211300), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Purchase_scrn_label_str, &lv_font_PottiSreeramuluRegular_25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Purchase_scrn_label_str, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Purchase_scrn_label_str, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Purchase_scrn_label_str, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Purchase_scrn_label_str, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Purchase_scrn_label_str, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Purchase_scrn_label_str, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Purchase_scrn_label_str, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Purchase_scrn_label_str, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Purchase_scrn_label_str, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Purchase_scrn_label_str, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Purchase_scrn_label_det
	ui->Purchase_scrn_label_det = lv_label_create(ui->Purchase_scrn);
	lv_label_set_text(ui->Purchase_scrn_label_det, "\n\n\n\n\n\n\n\nItems = 1\nTotal = 125");
	lv_label_set_long_mode(ui->Purchase_scrn_label_det, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Purchase_scrn_label_det, 150, 140);
	lv_obj_set_size(ui->Purchase_scrn_label_det, 182, 335);

	//Write style for Purchase_scrn_label_det, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Purchase_scrn_label_det, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Purchase_scrn_label_det, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Purchase_scrn_label_det, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Purchase_scrn_label_det, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Purchase_scrn_label_det, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Purchase_scrn_label_det, lv_color_hex(0x211300), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Purchase_scrn_label_det, &lv_font_PottiSreeramuluRegular_25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Purchase_scrn_label_det, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Purchase_scrn_label_det, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Purchase_scrn_label_det, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Purchase_scrn_label_det, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Purchase_scrn_label_det, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Purchase_scrn_label_det, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Purchase_scrn_label_det, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Purchase_scrn_label_det, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Purchase_scrn_label_det, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Purchase_scrn_label_det, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Purchase_scrn_Title
	ui->Purchase_scrn_Title = lv_label_create(ui->Purchase_scrn);
	lv_label_set_text(ui->Purchase_scrn_Title, "Your Cart\n");
	lv_label_set_long_mode(ui->Purchase_scrn_Title, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Purchase_scrn_Title, 426, 24);
	lv_obj_set_size(ui->Purchase_scrn_Title, 426, 52);

	//Write style for Purchase_scrn_Title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Purchase_scrn_Title, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Purchase_scrn_Title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Purchase_scrn_Title, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Purchase_scrn_Title, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Purchase_scrn_Title, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Purchase_scrn_Title, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Purchase_scrn_Title, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Purchase_scrn_Title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Purchase_scrn_Title, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Purchase_scrn_Title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Purchase_scrn_Title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Purchase_scrn_Title, 183, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Purchase_scrn_Title, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Purchase_scrn_Title, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Purchase_scrn_Title, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Purchase_scrn_Title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Purchase_scrn_Title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Purchase_scrn_Title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Purchase_scrn_Title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Purchase_scrn_im_det
	ui->Purchase_scrn_im_det = lv_img_create(ui->Purchase_scrn);
	lv_obj_add_flag(ui->Purchase_scrn_im_det, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Purchase_scrn_im_det, &_Dettol_alpha_101x166);
	lv_img_set_pivot(ui->Purchase_scrn_im_det, 50,50);
	lv_img_set_angle(ui->Purchase_scrn_im_det, 0);
	lv_obj_set_pos(ui->Purchase_scrn_im_det, 190, 151);
	lv_obj_set_size(ui->Purchase_scrn_im_det, 101, 166);

	//Write style for Purchase_scrn_im_det, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Purchase_scrn_im_det, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Purchase_scrn_im_det, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Purchase_scrn_im_det, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Purchase_scrn_im_det, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Purchase_scrn_Del_det_btn
	ui->Purchase_scrn_Del_det_btn = lv_btn_create(ui->Purchase_scrn);
	ui->Purchase_scrn_Del_det_btn_label = lv_label_create(ui->Purchase_scrn_Del_det_btn);
	lv_label_set_text(ui->Purchase_scrn_Del_det_btn_label, "" LV_SYMBOL_TRASH " ");
	lv_label_set_long_mode(ui->Purchase_scrn_Del_det_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Purchase_scrn_Del_det_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Purchase_scrn_Del_det_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Purchase_scrn_Del_det_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->Purchase_scrn_Del_det_btn, 196, 409);
	lv_obj_set_size(ui->Purchase_scrn_Del_det_btn, 96, 45);

	//Write style for Purchase_scrn_Del_det_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Purchase_scrn_Del_det_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Purchase_scrn_Del_det_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Purchase_scrn_Del_det_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Purchase_scrn_Del_det_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Purchase_scrn_Del_det_btn, lv_color_hex(0xea0202), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Purchase_scrn_Del_det_btn, &lv_font_PottiSreeramuluRegular_25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Purchase_scrn_Del_det_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Purchase_scrn_Del_det_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Purchase_scrn_im_str
	ui->Purchase_scrn_im_str = lv_img_create(ui->Purchase_scrn);
	lv_obj_add_flag(ui->Purchase_scrn_im_str, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Purchase_scrn_im_str, &_Strepsils_alpha_101x166);
	lv_img_set_pivot(ui->Purchase_scrn_im_str, 50,50);
	lv_img_set_angle(ui->Purchase_scrn_im_str, 0);
	lv_obj_set_pos(ui->Purchase_scrn_im_str, 448, 151);
	lv_obj_set_size(ui->Purchase_scrn_im_str, 101, 166);

	//Write style for Purchase_scrn_im_str, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Purchase_scrn_im_str, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Purchase_scrn_im_str, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Purchase_scrn_im_str, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Purchase_scrn_im_str, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Purchase_scrn_Del_str_btn
	ui->Purchase_scrn_Del_str_btn = lv_btn_create(ui->Purchase_scrn);
	ui->Purchase_scrn_Del_str_btn_label = lv_label_create(ui->Purchase_scrn_Del_str_btn);
	lv_label_set_text(ui->Purchase_scrn_Del_str_btn_label, "" LV_SYMBOL_TRASH " ");
	lv_label_set_long_mode(ui->Purchase_scrn_Del_str_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Purchase_scrn_Del_str_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Purchase_scrn_Del_str_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Purchase_scrn_Del_str_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->Purchase_scrn_Del_str_btn, 455, 409);
	lv_obj_set_size(ui->Purchase_scrn_Del_str_btn, 96, 45);

	//Write style for Purchase_scrn_Del_str_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Purchase_scrn_Del_str_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Purchase_scrn_Del_str_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Purchase_scrn_Del_str_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Purchase_scrn_Del_str_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Purchase_scrn_Del_str_btn, lv_color_hex(0xea0202), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Purchase_scrn_Del_str_btn, &lv_font_PottiSreeramuluRegular_25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Purchase_scrn_Del_str_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Purchase_scrn_Del_str_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Purchase_scrn_label_cal
	ui->Purchase_scrn_label_cal = lv_label_create(ui->Purchase_scrn);
	lv_label_set_text(ui->Purchase_scrn_label_cal, "\n\n\n\n\n\n\n\nItems = 1\nTotal = 28");
	lv_label_set_long_mode(ui->Purchase_scrn_label_cal, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Purchase_scrn_label_cal, 671, 140);
	lv_obj_set_size(ui->Purchase_scrn_label_cal, 182, 335);

	//Write style for Purchase_scrn_label_cal, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Purchase_scrn_label_cal, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Purchase_scrn_label_cal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Purchase_scrn_label_cal, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Purchase_scrn_label_cal, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Purchase_scrn_label_cal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Purchase_scrn_label_cal, lv_color_hex(0x211300), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Purchase_scrn_label_cal, &lv_font_PottiSreeramuluRegular_25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Purchase_scrn_label_cal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Purchase_scrn_label_cal, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Purchase_scrn_label_cal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Purchase_scrn_label_cal, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Purchase_scrn_label_cal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Purchase_scrn_label_cal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Purchase_scrn_label_cal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Purchase_scrn_label_cal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Purchase_scrn_label_cal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Purchase_scrn_label_cal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Purchase_scrn_im_cal
	ui->Purchase_scrn_im_cal = lv_img_create(ui->Purchase_scrn);
	lv_obj_add_flag(ui->Purchase_scrn_im_cal, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Purchase_scrn_im_cal, &_Calpol_paracetamol_alpha_101x166);
	lv_img_set_pivot(ui->Purchase_scrn_im_cal, 50,50);
	lv_img_set_angle(ui->Purchase_scrn_im_cal, 0);
	lv_obj_set_pos(ui->Purchase_scrn_im_cal, 712, 151);
	lv_obj_set_size(ui->Purchase_scrn_im_cal, 101, 166);

	//Write style for Purchase_scrn_im_cal, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Purchase_scrn_im_cal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Purchase_scrn_im_cal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Purchase_scrn_im_cal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Purchase_scrn_im_cal, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Purchase_scrn_Del_cal_btn
	ui->Purchase_scrn_Del_cal_btn = lv_btn_create(ui->Purchase_scrn);
	ui->Purchase_scrn_Del_cal_btn_label = lv_label_create(ui->Purchase_scrn_Del_cal_btn);
	lv_label_set_text(ui->Purchase_scrn_Del_cal_btn_label, "" LV_SYMBOL_TRASH " ");
	lv_label_set_long_mode(ui->Purchase_scrn_Del_cal_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Purchase_scrn_Del_cal_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Purchase_scrn_Del_cal_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Purchase_scrn_Del_cal_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->Purchase_scrn_Del_cal_btn, 715, 409);
	lv_obj_set_size(ui->Purchase_scrn_Del_cal_btn, 96, 45);

	//Write style for Purchase_scrn_Del_cal_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Purchase_scrn_Del_cal_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Purchase_scrn_Del_cal_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Purchase_scrn_Del_cal_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Purchase_scrn_Del_cal_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Purchase_scrn_Del_cal_btn, lv_color_hex(0xea0202), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Purchase_scrn_Del_cal_btn, &lv_font_PottiSreeramuluRegular_25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Purchase_scrn_Del_cal_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Purchase_scrn_Del_cal_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Purchase_scrn_Cancel_pay_btn
	ui->Purchase_scrn_Cancel_pay_btn = lv_btn_create(ui->Purchase_scrn);
	ui->Purchase_scrn_Cancel_pay_btn_label = lv_label_create(ui->Purchase_scrn_Cancel_pay_btn);
	lv_label_set_text(ui->Purchase_scrn_Cancel_pay_btn_label, "CANCEL");
	lv_label_set_long_mode(ui->Purchase_scrn_Cancel_pay_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Purchase_scrn_Cancel_pay_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Purchase_scrn_Cancel_pay_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Purchase_scrn_Cancel_pay_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->Purchase_scrn_Cancel_pay_btn, 100, 539);
	lv_obj_set_size(ui->Purchase_scrn_Cancel_pay_btn, 235, 106);

	//Write style for Purchase_scrn_Cancel_pay_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Purchase_scrn_Cancel_pay_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Purchase_scrn_Cancel_pay_btn, lv_color_hex(0xff0027), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Purchase_scrn_Cancel_pay_btn, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Purchase_scrn_Cancel_pay_btn, lv_color_hex(0x500619), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_main_stop(ui->Purchase_scrn_Cancel_pay_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_stop(ui->Purchase_scrn_Cancel_pay_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Purchase_scrn_Cancel_pay_btn, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Purchase_scrn_Cancel_pay_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Purchase_scrn_Cancel_pay_btn, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Purchase_scrn_Cancel_pay_btn, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Purchase_scrn_Cancel_pay_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Purchase_scrn_Cancel_pay_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Purchase_scrn_Cancel_pay_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Purchase_scrn_Cancel_pay_btn, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Purchase_scrn_Cancel_pay_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Purchase_scrn_Cancel_pay_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Purchase_scrn_Pay_btn
	ui->Purchase_scrn_Pay_btn = lv_btn_create(ui->Purchase_scrn);
	ui->Purchase_scrn_Pay_btn_label = lv_label_create(ui->Purchase_scrn_Pay_btn);
	lv_label_set_text(ui->Purchase_scrn_Pay_btn_label, "PAY");
	lv_label_set_long_mode(ui->Purchase_scrn_Pay_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Purchase_scrn_Pay_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Purchase_scrn_Pay_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Purchase_scrn_Pay_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->Purchase_scrn_Pay_btn, 942, 539);
	lv_obj_set_size(ui->Purchase_scrn_Pay_btn, 235, 106);

	//Write style for Purchase_scrn_Pay_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Purchase_scrn_Pay_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Purchase_scrn_Pay_btn, lv_color_hex(0x00ff32), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Purchase_scrn_Pay_btn, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Purchase_scrn_Pay_btn, lv_color_hex(0x003712), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_main_stop(ui->Purchase_scrn_Pay_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_stop(ui->Purchase_scrn_Pay_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Purchase_scrn_Pay_btn, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Purchase_scrn_Pay_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Purchase_scrn_Pay_btn, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Purchase_scrn_Pay_btn, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Purchase_scrn_Pay_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Purchase_scrn_Pay_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Purchase_scrn_Pay_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Purchase_scrn_Pay_btn, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Purchase_scrn_Pay_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Purchase_scrn_Pay_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of Purchase_scrn.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->Purchase_scrn);

	//Init events for screen.
	events_init_Purchase_scrn(ui);
}
