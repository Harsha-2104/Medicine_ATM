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



void setup_scr_Cough_reme_scrn(lv_ui *ui)
{
	//Write codes Cough_reme_scrn
	ui->Cough_reme_scrn = lv_obj_create(NULL);
	lv_obj_set_size(ui->Cough_reme_scrn, 1280, 720);
	lv_obj_set_scrollbar_mode(ui->Cough_reme_scrn, LV_SCROLLBAR_MODE_OFF);

	//Write style for Cough_reme_scrn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Cough_reme_scrn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Cough_reme_scrn, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Cough_reme_scrn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->Cough_reme_scrn, &_Background_1280x720, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->Cough_reme_scrn, 148, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_recolor_opa(ui->Cough_reme_scrn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Cough_reme_scrn_Bot_Title
	ui->Cough_reme_scrn_Bot_Title = lv_label_create(ui->Cough_reme_scrn);
	lv_label_set_text(ui->Cough_reme_scrn_Bot_Title, "Diagnostic Chatbot\n");
	lv_label_set_long_mode(ui->Cough_reme_scrn_Bot_Title, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Cough_reme_scrn_Bot_Title, 435, 50);
	lv_obj_set_size(ui->Cough_reme_scrn_Bot_Title, 426, 52);

	//Write style for Cough_reme_scrn_Bot_Title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Cough_reme_scrn_Bot_Title, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Cough_reme_scrn_Bot_Title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Cough_reme_scrn_Bot_Title, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Cough_reme_scrn_Bot_Title, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Cough_reme_scrn_Bot_Title, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Cough_reme_scrn_Bot_Title, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Cough_reme_scrn_Bot_Title, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Cough_reme_scrn_Bot_Title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Cough_reme_scrn_Bot_Title, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Cough_reme_scrn_Bot_Title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Cough_reme_scrn_Bot_Title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Cough_reme_scrn_Bot_Title, 183, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Cough_reme_scrn_Bot_Title, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Cough_reme_scrn_Bot_Title, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Cough_reme_scrn_Bot_Title, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Cough_reme_scrn_Bot_Title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Cough_reme_scrn_Bot_Title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Cough_reme_scrn_Bot_Title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Cough_reme_scrn_Bot_Title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Cough_reme_scrn_Question
	ui->Cough_reme_scrn_Question = lv_label_create(ui->Cough_reme_scrn);
	lv_label_set_text(ui->Cough_reme_scrn_Question, "                          If Your cough is Dry and has no phlem/Mucus : \n\n  You are suggested to use : \n\n                          If Your cough is wet and has phlem/Mucus : \n\n  You are suggested to use: \n\n\n  Available medications for both are: ");
	lv_label_set_long_mode(ui->Cough_reme_scrn_Question, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Cough_reme_scrn_Question, 90, 139);
	lv_obj_set_size(ui->Cough_reme_scrn_Question, 1100, 513);

	//Write style for Cough_reme_scrn_Question, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Cough_reme_scrn_Question, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Cough_reme_scrn_Question, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Cough_reme_scrn_Question, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Cough_reme_scrn_Question, &lv_font_PottiSreeramuluRegular_31, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Cough_reme_scrn_Question, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Cough_reme_scrn_Question, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Cough_reme_scrn_Question, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Cough_reme_scrn_Question, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Cough_reme_scrn_Question, 103, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Cough_reme_scrn_Question, lv_color_hex(0xc5fdd3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Cough_reme_scrn_Question, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Cough_reme_scrn_Question, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Cough_reme_scrn_Question, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Cough_reme_scrn_Question, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Cough_reme_scrn_Question, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Cough_reme_scrn_Question, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Cough_reme_scrn_label_1
	ui->Cough_reme_scrn_label_1 = lv_label_create(ui->Cough_reme_scrn);
	lv_label_set_text(ui->Cough_reme_scrn_label_1, "Cough Suppressants");
	lv_label_set_long_mode(ui->Cough_reme_scrn_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Cough_reme_scrn_label_1, 455, 202);
	lv_obj_set_size(ui->Cough_reme_scrn_label_1, 303, 46);

	//Write style for Cough_reme_scrn_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Cough_reme_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Cough_reme_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Cough_reme_scrn_label_1, lv_color_hex(0xc30909), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Cough_reme_scrn_label_1, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Cough_reme_scrn_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Cough_reme_scrn_label_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Cough_reme_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Cough_reme_scrn_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Cough_reme_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Cough_reme_scrn_label_1, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Cough_reme_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Cough_reme_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Cough_reme_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Cough_reme_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Cough_reme_scrn_label_2
	ui->Cough_reme_scrn_label_2 = lv_label_create(ui->Cough_reme_scrn);
	lv_label_set_text(ui->Cough_reme_scrn_label_2, "Expectorants to loosen mucus");
	lv_label_set_long_mode(ui->Cough_reme_scrn_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Cough_reme_scrn_label_2, 455, 326);
	lv_obj_set_size(ui->Cough_reme_scrn_label_2, 422, 51);

	//Write style for Cough_reme_scrn_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Cough_reme_scrn_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Cough_reme_scrn_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Cough_reme_scrn_label_2, lv_color_hex(0xc30909), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Cough_reme_scrn_label_2, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Cough_reme_scrn_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Cough_reme_scrn_label_2, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Cough_reme_scrn_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Cough_reme_scrn_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Cough_reme_scrn_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Cough_reme_scrn_label_2, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Cough_reme_scrn_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Cough_reme_scrn_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Cough_reme_scrn_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Cough_reme_scrn_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Cough_reme_scrn_img_1
	ui->Cough_reme_scrn_img_1 = lv_img_create(ui->Cough_reme_scrn);
	lv_obj_add_flag(ui->Cough_reme_scrn_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Cough_reme_scrn_img_1, &_Benadryl_alpha_62x131);
	lv_img_set_pivot(ui->Cough_reme_scrn_img_1, 50,50);
	lv_img_set_angle(ui->Cough_reme_scrn_img_1, 0);
	lv_obj_set_pos(ui->Cough_reme_scrn_img_1, 399, 479);
	lv_obj_set_size(ui->Cough_reme_scrn_img_1, 62, 131);

	//Write style for Cough_reme_scrn_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Cough_reme_scrn_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Cough_reme_scrn_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Cough_reme_scrn_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Cough_reme_scrn_img_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Cough_reme_scrn_img_2
	ui->Cough_reme_scrn_img_2 = lv_img_create(ui->Cough_reme_scrn);
	lv_obj_add_flag(ui->Cough_reme_scrn_img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Cough_reme_scrn_img_2, &_himalaya_koflet_cough_syrup_alpha_140x145);
	lv_img_set_pivot(ui->Cough_reme_scrn_img_2, 50,50);
	lv_img_set_angle(ui->Cough_reme_scrn_img_2, 0);
	lv_obj_set_pos(ui->Cough_reme_scrn_img_2, 736, 479);
	lv_obj_set_size(ui->Cough_reme_scrn_img_2, 140, 145);

	//Write style for Cough_reme_scrn_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Cough_reme_scrn_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Cough_reme_scrn_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Cough_reme_scrn_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Cough_reme_scrn_img_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Cough_reme_scrn_label_3
	ui->Cough_reme_scrn_label_3 = lv_label_create(ui->Cough_reme_scrn);
	lv_label_set_text(ui->Cough_reme_scrn_label_3, "" LV_SYMBOL_RIGHT "  Benedryl");
	lv_label_set_long_mode(ui->Cough_reme_scrn_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Cough_reme_scrn_label_3, 476, 527);
	lv_obj_set_size(ui->Cough_reme_scrn_label_3, 171, 41);

	//Write style for Cough_reme_scrn_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Cough_reme_scrn_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Cough_reme_scrn_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Cough_reme_scrn_label_3, lv_color_hex(0xc30909), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Cough_reme_scrn_label_3, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Cough_reme_scrn_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Cough_reme_scrn_label_3, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Cough_reme_scrn_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Cough_reme_scrn_label_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Cough_reme_scrn_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Cough_reme_scrn_label_3, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Cough_reme_scrn_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Cough_reme_scrn_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Cough_reme_scrn_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Cough_reme_scrn_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Cough_reme_scrn_label_4
	ui->Cough_reme_scrn_label_4 = lv_label_create(ui->Cough_reme_scrn);
	lv_label_set_text(ui->Cough_reme_scrn_label_4, "" LV_SYMBOL_RIGHT "  Himalaya Koflet");
	lv_label_set_long_mode(ui->Cough_reme_scrn_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Cough_reme_scrn_label_4, 887, 534);
	lv_obj_set_size(ui->Cough_reme_scrn_label_4, 240, 47);

	//Write style for Cough_reme_scrn_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Cough_reme_scrn_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Cough_reme_scrn_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Cough_reme_scrn_label_4, lv_color_hex(0xc30909), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Cough_reme_scrn_label_4, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Cough_reme_scrn_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Cough_reme_scrn_label_4, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Cough_reme_scrn_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Cough_reme_scrn_label_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Cough_reme_scrn_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Cough_reme_scrn_label_4, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Cough_reme_scrn_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Cough_reme_scrn_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Cough_reme_scrn_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Cough_reme_scrn_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Cough_reme_scrn_Purchase_scrn_btn
	ui->Cough_reme_scrn_Purchase_scrn_btn = lv_btn_create(ui->Cough_reme_scrn);
	ui->Cough_reme_scrn_Purchase_scrn_btn_label = lv_label_create(ui->Cough_reme_scrn_Purchase_scrn_btn);
	lv_label_set_text(ui->Cough_reme_scrn_Purchase_scrn_btn_label, "Back to Purchase");
	lv_label_set_long_mode(ui->Cough_reme_scrn_Purchase_scrn_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Cough_reme_scrn_Purchase_scrn_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Cough_reme_scrn_Purchase_scrn_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Cough_reme_scrn_Purchase_scrn_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->Cough_reme_scrn_Purchase_scrn_btn, 97, 568);
	lv_obj_set_size(ui->Cough_reme_scrn_Purchase_scrn_btn, 256, 75);

	//Write style for Cough_reme_scrn_Purchase_scrn_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Cough_reme_scrn_Purchase_scrn_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Cough_reme_scrn_Purchase_scrn_btn, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Cough_reme_scrn_Purchase_scrn_btn, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Cough_reme_scrn_Purchase_scrn_btn, lv_color_hex(0x0a1721), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_main_stop(ui->Cough_reme_scrn_Purchase_scrn_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_stop(ui->Cough_reme_scrn_Purchase_scrn_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Cough_reme_scrn_Purchase_scrn_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Cough_reme_scrn_Purchase_scrn_btn, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Cough_reme_scrn_Purchase_scrn_btn, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Cough_reme_scrn_Purchase_scrn_btn, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Cough_reme_scrn_Purchase_scrn_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Cough_reme_scrn_Purchase_scrn_btn, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Cough_reme_scrn_Purchase_scrn_btn, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Cough_reme_scrn_Purchase_scrn_btn, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Cough_reme_scrn_Purchase_scrn_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Cough_reme_scrn_Purchase_scrn_btn, &lv_font_PottiSreeramuluRegular_35, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Cough_reme_scrn_Purchase_scrn_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Cough_reme_scrn_Purchase_scrn_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Cough_reme_scrn_Alert_msg
	ui->Cough_reme_scrn_Alert_msg = lv_label_create(ui->Cough_reme_scrn);
	lv_label_set_text(ui->Cough_reme_scrn_Alert_msg, "NOTE : I cannot diagnose serious conditions. Proceed only if your symptoms are mild.");
	lv_label_set_long_mode(ui->Cough_reme_scrn_Alert_msg, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Cough_reme_scrn_Alert_msg, 2, 658);
	lv_obj_set_size(ui->Cough_reme_scrn_Alert_msg, 1274, 63);

	//Write style for Cough_reme_scrn_Alert_msg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Cough_reme_scrn_Alert_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Cough_reme_scrn_Alert_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Cough_reme_scrn_Alert_msg, lv_color_hex(0xff6500), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Cough_reme_scrn_Alert_msg, &lv_font_PottiSreeramuluRegular_23, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Cough_reme_scrn_Alert_msg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Cough_reme_scrn_Alert_msg, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Cough_reme_scrn_Alert_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Cough_reme_scrn_Alert_msg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Cough_reme_scrn_Alert_msg, 213, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Cough_reme_scrn_Alert_msg, lv_color_hex(0x0d0000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Cough_reme_scrn_Alert_msg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Cough_reme_scrn_Alert_msg, 23, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Cough_reme_scrn_Alert_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Cough_reme_scrn_Alert_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Cough_reme_scrn_Alert_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Cough_reme_scrn_Alert_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of Cough_reme_scrn.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->Cough_reme_scrn);

	//Init events for screen.
	events_init_Cough_reme_scrn(ui);
}
