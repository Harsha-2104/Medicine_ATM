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



void setup_scr_Digestive_scrn(lv_ui *ui)
{
	//Write codes Digestive_scrn
	ui->Digestive_scrn = lv_obj_create(NULL);
	lv_obj_set_size(ui->Digestive_scrn, 1280, 720);
	lv_obj_set_scrollbar_mode(ui->Digestive_scrn, LV_SCROLLBAR_MODE_OFF);

	//Write style for Digestive_scrn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Digestive_scrn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Digestive_scrn, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Digestive_scrn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->Digestive_scrn, &_Background_1280x720, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->Digestive_scrn, 148, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_recolor_opa(ui->Digestive_scrn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Digestive_scrn_Bot_Title
	ui->Digestive_scrn_Bot_Title = lv_label_create(ui->Digestive_scrn);
	lv_label_set_text(ui->Digestive_scrn_Bot_Title, "Diagnostic Chatbot\n");
	lv_label_set_long_mode(ui->Digestive_scrn_Bot_Title, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Digestive_scrn_Bot_Title, 435, 50);
	lv_obj_set_size(ui->Digestive_scrn_Bot_Title, 426, 52);

	//Write style for Digestive_scrn_Bot_Title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Digestive_scrn_Bot_Title, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Digestive_scrn_Bot_Title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Digestive_scrn_Bot_Title, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Digestive_scrn_Bot_Title, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Digestive_scrn_Bot_Title, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Digestive_scrn_Bot_Title, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Digestive_scrn_Bot_Title, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Digestive_scrn_Bot_Title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Digestive_scrn_Bot_Title, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Digestive_scrn_Bot_Title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Digestive_scrn_Bot_Title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Digestive_scrn_Bot_Title, 183, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Digestive_scrn_Bot_Title, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Digestive_scrn_Bot_Title, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Digestive_scrn_Bot_Title, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Digestive_scrn_Bot_Title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Digestive_scrn_Bot_Title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Digestive_scrn_Bot_Title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Digestive_scrn_Bot_Title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Digestive_scrn_Question
	ui->Digestive_scrn_Question = lv_label_create(ui->Digestive_scrn);
	lv_label_set_text(ui->Digestive_scrn_Question, "Which button describes your symptom more precisely?");
	lv_label_set_long_mode(ui->Digestive_scrn_Question, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Digestive_scrn_Question, 90, 139);
	lv_obj_set_size(ui->Digestive_scrn_Question, 1100, 504);

	//Write style for Digestive_scrn_Question, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Digestive_scrn_Question, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Digestive_scrn_Question, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Digestive_scrn_Question, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Digestive_scrn_Question, &lv_font_PottiSreeramuluRegular_35, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Digestive_scrn_Question, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Digestive_scrn_Question, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Digestive_scrn_Question, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Digestive_scrn_Question, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Digestive_scrn_Question, 103, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Digestive_scrn_Question, lv_color_hex(0xc5fdd3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Digestive_scrn_Question, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Digestive_scrn_Question, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Digestive_scrn_Question, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Digestive_scrn_Question, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Digestive_scrn_Question, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Digestive_scrn_Question, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Digestive_scrn_sneezing_btn
	ui->Digestive_scrn_sneezing_btn = lv_btn_create(ui->Digestive_scrn);
	ui->Digestive_scrn_sneezing_btn_label = lv_label_create(ui->Digestive_scrn_sneezing_btn);
	lv_label_set_text(ui->Digestive_scrn_sneezing_btn_label, "Acidity/ Heartburn/ Indigestion or Gas\n");
	lv_label_set_long_mode(ui->Digestive_scrn_sneezing_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Digestive_scrn_sneezing_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Digestive_scrn_sneezing_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Digestive_scrn_sneezing_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->Digestive_scrn_sneezing_btn, 390, 295);
	lv_obj_set_size(ui->Digestive_scrn_sneezing_btn, 475, 53);

	//Write style for Digestive_scrn_sneezing_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Digestive_scrn_sneezing_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Digestive_scrn_sneezing_btn, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Digestive_scrn_sneezing_btn, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Digestive_scrn_sneezing_btn, lv_color_hex(0x061c2e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_main_stop(ui->Digestive_scrn_sneezing_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_stop(ui->Digestive_scrn_sneezing_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Digestive_scrn_sneezing_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Digestive_scrn_sneezing_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Digestive_scrn_sneezing_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Digestive_scrn_sneezing_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Digestive_scrn_sneezing_btn, &lv_font_PottiSreeramuluRegular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Digestive_scrn_sneezing_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Digestive_scrn_sneezing_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Digestive_scrn_sore_throat_btn
	ui->Digestive_scrn_sore_throat_btn = lv_btn_create(ui->Digestive_scrn);
	ui->Digestive_scrn_sore_throat_btn_label = lv_label_create(ui->Digestive_scrn_sore_throat_btn);
	lv_label_set_text(ui->Digestive_scrn_sore_throat_btn_label, "Diarrhea/ Loose Motions\n");
	lv_label_set_long_mode(ui->Digestive_scrn_sore_throat_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Digestive_scrn_sore_throat_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Digestive_scrn_sore_throat_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Digestive_scrn_sore_throat_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->Digestive_scrn_sore_throat_btn, 393, 385);
	lv_obj_set_size(ui->Digestive_scrn_sore_throat_btn, 475, 53);

	//Write style for Digestive_scrn_sore_throat_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Digestive_scrn_sore_throat_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Digestive_scrn_sore_throat_btn, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Digestive_scrn_sore_throat_btn, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Digestive_scrn_sore_throat_btn, lv_color_hex(0x061c2e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_main_stop(ui->Digestive_scrn_sore_throat_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_stop(ui->Digestive_scrn_sore_throat_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Digestive_scrn_sore_throat_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Digestive_scrn_sore_throat_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Digestive_scrn_sore_throat_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Digestive_scrn_sore_throat_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Digestive_scrn_sore_throat_btn, &lv_font_PottiSreeramuluRegular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Digestive_scrn_sore_throat_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Digestive_scrn_sore_throat_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Digestive_scrn_Fever_btn
	ui->Digestive_scrn_Fever_btn = lv_btn_create(ui->Digestive_scrn);
	ui->Digestive_scrn_Fever_btn_label = lv_label_create(ui->Digestive_scrn_Fever_btn);
	lv_label_set_text(ui->Digestive_scrn_Fever_btn_label, "Any other issue\n");
	lv_label_set_long_mode(ui->Digestive_scrn_Fever_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Digestive_scrn_Fever_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Digestive_scrn_Fever_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Digestive_scrn_Fever_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->Digestive_scrn_Fever_btn, 390, 474);
	lv_obj_set_size(ui->Digestive_scrn_Fever_btn, 475, 53);

	//Write style for Digestive_scrn_Fever_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Digestive_scrn_Fever_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Digestive_scrn_Fever_btn, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Digestive_scrn_Fever_btn, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Digestive_scrn_Fever_btn, lv_color_hex(0x061c2e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_main_stop(ui->Digestive_scrn_Fever_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_stop(ui->Digestive_scrn_Fever_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Digestive_scrn_Fever_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Digestive_scrn_Fever_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Digestive_scrn_Fever_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Digestive_scrn_Fever_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Digestive_scrn_Fever_btn, &lv_font_PottiSreeramuluRegular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Digestive_scrn_Fever_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Digestive_scrn_Fever_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Digestive_scrn_Purchase_scrn_btn
	ui->Digestive_scrn_Purchase_scrn_btn = lv_btn_create(ui->Digestive_scrn);
	ui->Digestive_scrn_Purchase_scrn_btn_label = lv_label_create(ui->Digestive_scrn_Purchase_scrn_btn);
	lv_label_set_text(ui->Digestive_scrn_Purchase_scrn_btn_label, "Back to Purchase");
	lv_label_set_long_mode(ui->Digestive_scrn_Purchase_scrn_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Digestive_scrn_Purchase_scrn_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Digestive_scrn_Purchase_scrn_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Digestive_scrn_Purchase_scrn_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->Digestive_scrn_Purchase_scrn_btn, 97, 558);
	lv_obj_set_size(ui->Digestive_scrn_Purchase_scrn_btn, 256, 75);

	//Write style for Digestive_scrn_Purchase_scrn_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Digestive_scrn_Purchase_scrn_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Digestive_scrn_Purchase_scrn_btn, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Digestive_scrn_Purchase_scrn_btn, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Digestive_scrn_Purchase_scrn_btn, lv_color_hex(0x0a1721), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_main_stop(ui->Digestive_scrn_Purchase_scrn_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_stop(ui->Digestive_scrn_Purchase_scrn_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Digestive_scrn_Purchase_scrn_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Digestive_scrn_Purchase_scrn_btn, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Digestive_scrn_Purchase_scrn_btn, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Digestive_scrn_Purchase_scrn_btn, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Digestive_scrn_Purchase_scrn_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Digestive_scrn_Purchase_scrn_btn, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Digestive_scrn_Purchase_scrn_btn, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Digestive_scrn_Purchase_scrn_btn, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Digestive_scrn_Purchase_scrn_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Digestive_scrn_Purchase_scrn_btn, &lv_font_PottiSreeramuluRegular_35, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Digestive_scrn_Purchase_scrn_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Digestive_scrn_Purchase_scrn_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Digestive_scrn_Alert_msg
	ui->Digestive_scrn_Alert_msg = lv_label_create(ui->Digestive_scrn);
	lv_label_set_text(ui->Digestive_scrn_Alert_msg, "NOTE : I cannot diagnose serious conditions. Proceed only if your symptoms are mild.");
	lv_label_set_long_mode(ui->Digestive_scrn_Alert_msg, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Digestive_scrn_Alert_msg, 4, 646);
	lv_obj_set_size(ui->Digestive_scrn_Alert_msg, 1273, 74);

	//Write style for Digestive_scrn_Alert_msg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Digestive_scrn_Alert_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Digestive_scrn_Alert_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Digestive_scrn_Alert_msg, lv_color_hex(0xff6500), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Digestive_scrn_Alert_msg, &lv_font_PottiSreeramuluRegular_23, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Digestive_scrn_Alert_msg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Digestive_scrn_Alert_msg, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Digestive_scrn_Alert_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Digestive_scrn_Alert_msg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Digestive_scrn_Alert_msg, 213, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Digestive_scrn_Alert_msg, lv_color_hex(0x0d0000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Digestive_scrn_Alert_msg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Digestive_scrn_Alert_msg, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Digestive_scrn_Alert_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Digestive_scrn_Alert_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Digestive_scrn_Alert_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Digestive_scrn_Alert_msg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of Digestive_scrn.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->Digestive_scrn);

	//Init events for screen.
	events_init_Digestive_scrn(ui);
}
