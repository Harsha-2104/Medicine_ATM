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



void setup_scr_Acidity_reme_scrn(lv_ui *ui)
{
	//Write codes Acidity_reme_scrn
	ui->Acidity_reme_scrn = lv_obj_create(NULL);
	lv_obj_set_size(ui->Acidity_reme_scrn, 1280, 720);
	lv_obj_set_scrollbar_mode(ui->Acidity_reme_scrn, LV_SCROLLBAR_MODE_OFF);

	//Write style for Acidity_reme_scrn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Acidity_reme_scrn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Acidity_reme_scrn, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Acidity_reme_scrn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->Acidity_reme_scrn, &_Background_1280x720, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->Acidity_reme_scrn, 148, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_recolor_opa(ui->Acidity_reme_scrn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Acidity_reme_scrn_Bot_Title
	ui->Acidity_reme_scrn_Bot_Title = lv_label_create(ui->Acidity_reme_scrn);
	lv_label_set_text(ui->Acidity_reme_scrn_Bot_Title, "Diagnostic Chatbot\n");
	lv_label_set_long_mode(ui->Acidity_reme_scrn_Bot_Title, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Acidity_reme_scrn_Bot_Title, 435, 50);
	lv_obj_set_size(ui->Acidity_reme_scrn_Bot_Title, 426, 52);

	//Write style for Acidity_reme_scrn_Bot_Title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Acidity_reme_scrn_Bot_Title, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Acidity_reme_scrn_Bot_Title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Acidity_reme_scrn_Bot_Title, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Acidity_reme_scrn_Bot_Title, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Acidity_reme_scrn_Bot_Title, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Acidity_reme_scrn_Bot_Title, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Acidity_reme_scrn_Bot_Title, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Acidity_reme_scrn_Bot_Title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Acidity_reme_scrn_Bot_Title, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Acidity_reme_scrn_Bot_Title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Acidity_reme_scrn_Bot_Title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Acidity_reme_scrn_Bot_Title, 183, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Acidity_reme_scrn_Bot_Title, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Acidity_reme_scrn_Bot_Title, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Acidity_reme_scrn_Bot_Title, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Acidity_reme_scrn_Bot_Title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Acidity_reme_scrn_Bot_Title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Acidity_reme_scrn_Bot_Title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Acidity_reme_scrn_Bot_Title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Acidity_reme_scrn_Question
	ui->Acidity_reme_scrn_Question = lv_label_create(ui->Acidity_reme_scrn);
	lv_label_set_text(ui->Acidity_reme_scrn_Question, "                          If You are  having a Acidity, Heartburn, Indigestion, or Gas : \n\n  You are suggested to use : \n\n\n  Available medications are: ");
	lv_label_set_long_mode(ui->Acidity_reme_scrn_Question, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Acidity_reme_scrn_Question, 90, 139);
	lv_obj_set_size(ui->Acidity_reme_scrn_Question, 1100, 513);

	//Write style for Acidity_reme_scrn_Question, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Acidity_reme_scrn_Question, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Acidity_reme_scrn_Question, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Acidity_reme_scrn_Question, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Acidity_reme_scrn_Question, &lv_font_PottiSreeramuluRegular_31, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Acidity_reme_scrn_Question, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Acidity_reme_scrn_Question, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Acidity_reme_scrn_Question, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Acidity_reme_scrn_Question, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Acidity_reme_scrn_Question, 103, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Acidity_reme_scrn_Question, lv_color_hex(0xc5fdd3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Acidity_reme_scrn_Question, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Acidity_reme_scrn_Question, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Acidity_reme_scrn_Question, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Acidity_reme_scrn_Question, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Acidity_reme_scrn_Question, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Acidity_reme_scrn_Question, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Acidity_reme_scrn_label_1
	ui->Acidity_reme_scrn_label_1 = lv_label_create(ui->Acidity_reme_scrn);
	lv_label_set_text(ui->Acidity_reme_scrn_label_1, "Antacids");
	lv_label_set_long_mode(ui->Acidity_reme_scrn_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Acidity_reme_scrn_label_1, 455, 205);
	lv_obj_set_size(ui->Acidity_reme_scrn_label_1, 378, 47);

	//Write style for Acidity_reme_scrn_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Acidity_reme_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Acidity_reme_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Acidity_reme_scrn_label_1, lv_color_hex(0xc30909), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Acidity_reme_scrn_label_1, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Acidity_reme_scrn_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Acidity_reme_scrn_label_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Acidity_reme_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Acidity_reme_scrn_label_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Acidity_reme_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Acidity_reme_scrn_label_1, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Acidity_reme_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Acidity_reme_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Acidity_reme_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Acidity_reme_scrn_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Acidity_reme_scrn_img_2
	ui->Acidity_reme_scrn_img_2 = lv_img_create(ui->Acidity_reme_scrn);
	lv_obj_add_flag(ui->Acidity_reme_scrn_img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Acidity_reme_scrn_img_2, &_Rantac_alpha_170x150);
	lv_img_set_pivot(ui->Acidity_reme_scrn_img_2, 50,50);
	lv_img_set_angle(ui->Acidity_reme_scrn_img_2, 0);
	lv_obj_set_pos(ui->Acidity_reme_scrn_img_2, 713, 363);
	lv_obj_set_size(ui->Acidity_reme_scrn_img_2, 170, 150);

	//Write style for Acidity_reme_scrn_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Acidity_reme_scrn_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Acidity_reme_scrn_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Acidity_reme_scrn_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Acidity_reme_scrn_img_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Acidity_reme_scrn_label_4
	ui->Acidity_reme_scrn_label_4 = lv_label_create(ui->Acidity_reme_scrn);
	lv_label_set_text(ui->Acidity_reme_scrn_label_4, "" LV_SYMBOL_RIGHT "  Rantac\n");
	lv_label_set_long_mode(ui->Acidity_reme_scrn_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Acidity_reme_scrn_label_4, 903, 420);
	lv_obj_set_size(ui->Acidity_reme_scrn_label_4, 240, 47);

	//Write style for Acidity_reme_scrn_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Acidity_reme_scrn_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Acidity_reme_scrn_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Acidity_reme_scrn_label_4, lv_color_hex(0xc30909), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Acidity_reme_scrn_label_4, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Acidity_reme_scrn_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Acidity_reme_scrn_label_4, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Acidity_reme_scrn_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Acidity_reme_scrn_label_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Acidity_reme_scrn_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Acidity_reme_scrn_label_4, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Acidity_reme_scrn_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Acidity_reme_scrn_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Acidity_reme_scrn_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Acidity_reme_scrn_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Acidity_reme_scrn_Purchase_scrn_btn
	ui->Acidity_reme_scrn_Purchase_scrn_btn = lv_btn_create(ui->Acidity_reme_scrn);
	ui->Acidity_reme_scrn_Purchase_scrn_btn_label = lv_label_create(ui->Acidity_reme_scrn_Purchase_scrn_btn);
	lv_label_set_text(ui->Acidity_reme_scrn_Purchase_scrn_btn_label, "Back to Purchase");
	lv_label_set_long_mode(ui->Acidity_reme_scrn_Purchase_scrn_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Acidity_reme_scrn_Purchase_scrn_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Acidity_reme_scrn_Purchase_scrn_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Acidity_reme_scrn_Purchase_scrn_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->Acidity_reme_scrn_Purchase_scrn_btn, 97, 568);
	lv_obj_set_size(ui->Acidity_reme_scrn_Purchase_scrn_btn, 256, 75);

	//Write style for Acidity_reme_scrn_Purchase_scrn_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Acidity_reme_scrn_Purchase_scrn_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Acidity_reme_scrn_Purchase_scrn_btn, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Acidity_reme_scrn_Purchase_scrn_btn, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Acidity_reme_scrn_Purchase_scrn_btn, lv_color_hex(0x0a1721), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_main_stop(ui->Acidity_reme_scrn_Purchase_scrn_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_stop(ui->Acidity_reme_scrn_Purchase_scrn_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Acidity_reme_scrn_Purchase_scrn_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Acidity_reme_scrn_Purchase_scrn_btn, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Acidity_reme_scrn_Purchase_scrn_btn, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Acidity_reme_scrn_Purchase_scrn_btn, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Acidity_reme_scrn_Purchase_scrn_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Acidity_reme_scrn_Purchase_scrn_btn, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Acidity_reme_scrn_Purchase_scrn_btn, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Acidity_reme_scrn_Purchase_scrn_btn, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Acidity_reme_scrn_Purchase_scrn_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Acidity_reme_scrn_Purchase_scrn_btn, &lv_font_PottiSreeramuluRegular_35, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Acidity_reme_scrn_Purchase_scrn_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Acidity_reme_scrn_Purchase_scrn_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Acidity_reme_scrn_img_3
	ui->Acidity_reme_scrn_img_3 = lv_img_create(ui->Acidity_reme_scrn);
	lv_obj_add_flag(ui->Acidity_reme_scrn_img_3, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Acidity_reme_scrn_img_3, &_Gelusil_MPS_alpha_257x140);
	lv_img_set_pivot(ui->Acidity_reme_scrn_img_3, 50,50);
	lv_img_set_angle(ui->Acidity_reme_scrn_img_3, 0);
	lv_obj_set_pos(ui->Acidity_reme_scrn_img_3, 216, 363);
	lv_obj_set_size(ui->Acidity_reme_scrn_img_3, 257, 140);

	//Write style for Acidity_reme_scrn_img_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Acidity_reme_scrn_img_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Acidity_reme_scrn_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Acidity_reme_scrn_img_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Acidity_reme_scrn_img_3, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Acidity_reme_scrn_label_5
	ui->Acidity_reme_scrn_label_5 = lv_label_create(ui->Acidity_reme_scrn);
	lv_label_set_text(ui->Acidity_reme_scrn_label_5, "" LV_SYMBOL_RIGHT " Gelusil\n\n\n");
	lv_label_set_long_mode(ui->Acidity_reme_scrn_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Acidity_reme_scrn_label_5, 492, 420);
	lv_obj_set_size(ui->Acidity_reme_scrn_label_5, 171, 41);

	//Write style for Acidity_reme_scrn_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Acidity_reme_scrn_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Acidity_reme_scrn_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Acidity_reme_scrn_label_5, lv_color_hex(0xc30909), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Acidity_reme_scrn_label_5, &lv_font_Acme_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Acidity_reme_scrn_label_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Acidity_reme_scrn_label_5, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Acidity_reme_scrn_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Acidity_reme_scrn_label_5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Acidity_reme_scrn_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Acidity_reme_scrn_label_5, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Acidity_reme_scrn_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Acidity_reme_scrn_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Acidity_reme_scrn_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Acidity_reme_scrn_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Acidity_reme_scrn_Alert_msg
	ui->Acidity_reme_scrn_Alert_msg = lv_label_create(ui->Acidity_reme_scrn);
	lv_label_set_text(ui->Acidity_reme_scrn_Alert_msg, "NOTE : I cannot diagnose serious conditions. Proceed only if your symptoms are mild.");
	lv_label_set_long_mode(ui->Acidity_reme_scrn_Alert_msg, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Acidity_reme_scrn_Alert_msg, 2, 658);
	lv_obj_set_size(ui->Acidity_reme_scrn_Alert_msg, 1274, 63);

	//Write style for Acidity_reme_scrn_Alert_msg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Acidity_reme_scrn_Alert_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Acidity_reme_scrn_Alert_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Acidity_reme_scrn_Alert_msg, lv_color_hex(0xff6500), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Acidity_reme_scrn_Alert_msg, &lv_font_PottiSreeramuluRegular_23, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Acidity_reme_scrn_Alert_msg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Acidity_reme_scrn_Alert_msg, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Acidity_reme_scrn_Alert_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Acidity_reme_scrn_Alert_msg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Acidity_reme_scrn_Alert_msg, 213, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Acidity_reme_scrn_Alert_msg, lv_color_hex(0x0d0000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Acidity_reme_scrn_Alert_msg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Acidity_reme_scrn_Alert_msg, 23, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Acidity_reme_scrn_Alert_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Acidity_reme_scrn_Alert_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Acidity_reme_scrn_Alert_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Acidity_reme_scrn_Alert_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of Acidity_reme_scrn.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->Acidity_reme_scrn);

	//Init events for screen.
	events_init_Acidity_reme_scrn(ui);
}
