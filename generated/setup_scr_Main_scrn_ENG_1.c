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



void setup_scr_Main_scrn_ENG_1(lv_ui *ui)
{
	//Write codes Main_scrn_ENG_1
	ui->Main_scrn_ENG_1 = lv_obj_create(NULL);
	lv_obj_set_size(ui->Main_scrn_ENG_1, 1280, 720);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_1, LV_SCROLLBAR_MODE_ON);

	//Write style for Main_scrn_ENG_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->Main_scrn_ENG_1, &_Background_1280x720, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->Main_scrn_ENG_1, 178, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_recolor(ui->Main_scrn_ENG_1, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_recolor_opa(ui->Main_scrn_ENG_1, 61, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Main_menu
	ui->Main_scrn_ENG_1_Main_menu = lv_menu_create(ui->Main_scrn_ENG_1);

	//Create sidebar page for menu Main_scrn_ENG_1_Main_menu
	ui->Main_scrn_ENG_1_Main_menu_sidebar_page = lv_menu_page_create(ui->Main_scrn_ENG_1_Main_menu, "Medicines List");
	lv_menu_set_sidebar_page(ui->Main_scrn_ENG_1_Main_menu, ui->Main_scrn_ENG_1_Main_menu_sidebar_page);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_1_Main_menu_sidebar_page, LV_SCROLLBAR_MODE_OFF);

	//Create subpage for Main_scrn_ENG_1_Main_menu
	ui->Main_scrn_ENG_1_Main_menu_subpage_1 = lv_menu_page_create(ui->Main_scrn_ENG_1_Main_menu, NULL);
	ui->Main_scrn_ENG_1_Main_menu_cont_1 = lv_menu_cont_create(ui->Main_scrn_ENG_1_Main_menu_sidebar_page);
	ui->Main_scrn_ENG_1_Main_menu_label_1 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_cont_1);
	lv_label_set_text(ui->Main_scrn_ENG_1_Main_menu_label_1, "Benedryl");
	lv_obj_set_size(ui->Main_scrn_ENG_1_Main_menu_label_1, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_1_Main_menu_subpage_1, LV_SCROLLBAR_MODE_OFF);
	lv_menu_set_load_page_event(ui->Main_scrn_ENG_1_Main_menu, ui->Main_scrn_ENG_1_Main_menu_cont_1, ui->Main_scrn_ENG_1_Main_menu_subpage_1);

	//Create subpage for Main_scrn_ENG_1_Main_menu
	ui->Main_scrn_ENG_1_Main_menu_subpage_2 = lv_menu_page_create(ui->Main_scrn_ENG_1_Main_menu, NULL);
	ui->Main_scrn_ENG_1_Main_menu_cont_2 = lv_menu_cont_create(ui->Main_scrn_ENG_1_Main_menu_sidebar_page);
	ui->Main_scrn_ENG_1_Main_menu_label_2 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_cont_2);
	lv_label_set_text(ui->Main_scrn_ENG_1_Main_menu_label_2, "Calpol_paracetamol");
	lv_obj_set_size(ui->Main_scrn_ENG_1_Main_menu_label_2, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_1_Main_menu_subpage_2, LV_SCROLLBAR_MODE_OFF);
	lv_menu_set_load_page_event(ui->Main_scrn_ENG_1_Main_menu, ui->Main_scrn_ENG_1_Main_menu_cont_2, ui->Main_scrn_ENG_1_Main_menu_subpage_2);

	//Create subpage for Main_scrn_ENG_1_Main_menu
	ui->Main_scrn_ENG_1_Main_menu_subpage_3 = lv_menu_page_create(ui->Main_scrn_ENG_1_Main_menu, NULL);
	ui->Main_scrn_ENG_1_Main_menu_cont_3 = lv_menu_cont_create(ui->Main_scrn_ENG_1_Main_menu_sidebar_page);
	ui->Main_scrn_ENG_1_Main_menu_label_3 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_cont_3);
	lv_label_set_text(ui->Main_scrn_ENG_1_Main_menu_label_3, "Candid_powder");
	lv_obj_set_size(ui->Main_scrn_ENG_1_Main_menu_label_3, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_1_Main_menu_subpage_3, LV_SCROLLBAR_MODE_OFF);
	lv_menu_set_load_page_event(ui->Main_scrn_ENG_1_Main_menu, ui->Main_scrn_ENG_1_Main_menu_cont_3, ui->Main_scrn_ENG_1_Main_menu_subpage_3);

	//Create subpage for Main_scrn_ENG_1_Main_menu
	ui->Main_scrn_ENG_1_Main_menu_subpage_4 = lv_menu_page_create(ui->Main_scrn_ENG_1_Main_menu, NULL);
	ui->Main_scrn_ENG_1_Main_menu_cont_4 = lv_menu_cont_create(ui->Main_scrn_ENG_1_Main_menu_sidebar_page);
	ui->Main_scrn_ENG_1_Main_menu_label_4 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_cont_4);
	lv_label_set_text(ui->Main_scrn_ENG_1_Main_menu_label_4, "Cipla_cheston_cold");
	lv_obj_set_size(ui->Main_scrn_ENG_1_Main_menu_label_4, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_1_Main_menu_subpage_4, LV_SCROLLBAR_MODE_OFF);
	lv_menu_set_load_page_event(ui->Main_scrn_ENG_1_Main_menu, ui->Main_scrn_ENG_1_Main_menu_cont_4, ui->Main_scrn_ENG_1_Main_menu_subpage_4);

	//Create subpage for Main_scrn_ENG_1_Main_menu
	ui->Main_scrn_ENG_1_Main_menu_subpage_5 = lv_menu_page_create(ui->Main_scrn_ENG_1_Main_menu, NULL);
	ui->Main_scrn_ENG_1_Main_menu_cont_5 = lv_menu_cont_create(ui->Main_scrn_ENG_1_Main_menu_sidebar_page);
	ui->Main_scrn_ENG_1_Main_menu_label_5 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_cont_5);
	lv_label_set_text(ui->Main_scrn_ENG_1_Main_menu_label_5, "Clocip");
	lv_obj_set_size(ui->Main_scrn_ENG_1_Main_menu_label_5, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_1_Main_menu_subpage_5, LV_SCROLLBAR_MODE_OFF);
	lv_menu_set_load_page_event(ui->Main_scrn_ENG_1_Main_menu, ui->Main_scrn_ENG_1_Main_menu_cont_5, ui->Main_scrn_ENG_1_Main_menu_subpage_5);

	//Create subpage for Main_scrn_ENG_1_Main_menu
	ui->Main_scrn_ENG_1_Main_menu_subpage_6 = lv_menu_page_create(ui->Main_scrn_ENG_1_Main_menu, NULL);
	ui->Main_scrn_ENG_1_Main_menu_cont_6 = lv_menu_cont_create(ui->Main_scrn_ENG_1_Main_menu_sidebar_page);
	ui->Main_scrn_ENG_1_Main_menu_label_6 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_cont_6);
	lv_label_set_text(ui->Main_scrn_ENG_1_Main_menu_label_6, "Cofsils");
	lv_obj_set_size(ui->Main_scrn_ENG_1_Main_menu_label_6, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_1_Main_menu_subpage_6, LV_SCROLLBAR_MODE_OFF);
	lv_menu_set_load_page_event(ui->Main_scrn_ENG_1_Main_menu, ui->Main_scrn_ENG_1_Main_menu_cont_6, ui->Main_scrn_ENG_1_Main_menu_subpage_6);

	//Create subpage for Main_scrn_ENG_1_Main_menu
	ui->Main_scrn_ENG_1_Main_menu_subpage_7 = lv_menu_page_create(ui->Main_scrn_ENG_1_Main_menu, NULL);
	ui->Main_scrn_ENG_1_Main_menu_cont_7 = lv_menu_cont_create(ui->Main_scrn_ENG_1_Main_menu_sidebar_page);
	ui->Main_scrn_ENG_1_Main_menu_label_7 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_cont_7);
	lv_label_set_text(ui->Main_scrn_ENG_1_Main_menu_label_7, "Omnigel");
	lv_obj_set_size(ui->Main_scrn_ENG_1_Main_menu_label_7, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_1_Main_menu_subpage_7, LV_SCROLLBAR_MODE_OFF);
	lv_menu_set_load_page_event(ui->Main_scrn_ENG_1_Main_menu, ui->Main_scrn_ENG_1_Main_menu_cont_7, ui->Main_scrn_ENG_1_Main_menu_subpage_7);
	lv_event_send(ui->Main_scrn_ENG_1_Main_menu_cont_1, LV_EVENT_CLICKED, NULL);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Main_menu, 21, 15);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Main_menu, 1236, 525);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_1_Main_menu, LV_SCROLLBAR_MODE_OFF);

	//Write style for Main_scrn_ENG_1_Main_menu, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Main_menu, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Main_menu, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Main_menu, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Main_menu, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Main_menu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_1_Main_menu_extra_sidebar_page_main_default
	static lv_style_t style_Main_scrn_ENG_1_Main_menu_extra_sidebar_page_main_default;
	ui_init_style(&style_Main_scrn_ENG_1_Main_menu_extra_sidebar_page_main_default);
	
	lv_style_set_bg_opa(&style_Main_scrn_ENG_1_Main_menu_extra_sidebar_page_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_1_Main_menu_extra_sidebar_page_main_default, lv_color_hex(0xf2f2f2));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_1_Main_menu_extra_sidebar_page_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_radius(&style_Main_scrn_ENG_1_Main_menu_extra_sidebar_page_main_default, 0);
	lv_obj_add_style(ui->Main_scrn_ENG_1_Main_menu_sidebar_page, &style_Main_scrn_ENG_1_Main_menu_extra_sidebar_page_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_default
	static lv_style_t style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_default;
	ui_init_style(&style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_default);
	
	lv_style_set_text_color(&style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_default, lv_color_hex(0x000000));
	lv_style_set_text_font(&style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_default, &lv_font_Alatsi_Regular_18);
	lv_style_set_text_opa(&style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_default, 255);
	lv_style_set_text_align(&style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_top(&style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_default, 6);
	lv_style_set_pad_bottom(&style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_default, 7);
	lv_obj_add_style(ui->Main_scrn_ENG_1_Main_menu_cont_7, &style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->Main_scrn_ENG_1_Main_menu_cont_6, &style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->Main_scrn_ENG_1_Main_menu_cont_5, &style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->Main_scrn_ENG_1_Main_menu_cont_4, &style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->Main_scrn_ENG_1_Main_menu_cont_3, &style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->Main_scrn_ENG_1_Main_menu_cont_2, &style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->Main_scrn_ENG_1_Main_menu_cont_1, &style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_CHECKED for &style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_checked
	static lv_style_t style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_checked;
	ui_init_style(&style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_checked);
	
	lv_style_set_text_color(&style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_checked, lv_color_hex(0x000000));
	lv_style_set_text_font(&style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_checked, &lv_font_Alatsi_Regular_20);
	lv_style_set_text_opa(&style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_checked, 255);
	lv_style_set_text_align(&style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_border_width(&style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_checked, 2);
	lv_style_set_border_opa(&style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_checked, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_checked, lv_color_hex(0x000000));
	lv_style_set_border_side(&style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_checked, LV_BORDER_SIDE_BOTTOM);
	lv_style_set_radius(&style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_checked, 2);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_checked, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_checked, lv_color_hex(0xd2d2d2));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_checked, LV_GRAD_DIR_HOR);
	lv_style_set_bg_grad_color(&style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_checked, lv_color_hex(0xffffff));
	lv_style_set_bg_main_stop(&style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_checked, 0);
	lv_style_set_bg_grad_stop(&style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_checked, 255);
	lv_obj_add_style(ui->Main_scrn_ENG_1_Main_menu_cont_7, &style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_add_style(ui->Main_scrn_ENG_1_Main_menu_cont_6, &style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_add_style(ui->Main_scrn_ENG_1_Main_menu_cont_5, &style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_add_style(ui->Main_scrn_ENG_1_Main_menu_cont_4, &style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_add_style(ui->Main_scrn_ENG_1_Main_menu_cont_3, &style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_add_style(ui->Main_scrn_ENG_1_Main_menu_cont_2, &style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_add_style(ui->Main_scrn_ENG_1_Main_menu_cont_1, &style_Main_scrn_ENG_1_Main_menu_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_1_Main_menu_extra_main_title_main_default
	static lv_style_t style_Main_scrn_ENG_1_Main_menu_extra_main_title_main_default;
	ui_init_style(&style_Main_scrn_ENG_1_Main_menu_extra_main_title_main_default);
	
	lv_style_set_text_color(&style_Main_scrn_ENG_1_Main_menu_extra_main_title_main_default, lv_color_hex(0x3f4657));
	lv_style_set_text_font(&style_Main_scrn_ENG_1_Main_menu_extra_main_title_main_default, &lv_font_Alatsi_Regular_25);
	lv_style_set_text_opa(&style_Main_scrn_ENG_1_Main_menu_extra_main_title_main_default, 255);
	lv_style_set_text_align(&style_Main_scrn_ENG_1_Main_menu_extra_main_title_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_1_Main_menu_extra_main_title_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_1_Main_menu_extra_main_title_main_default, lv_color_hex(0xd0d0d0));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_1_Main_menu_extra_main_title_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_pad_top(&style_Main_scrn_ENG_1_Main_menu_extra_main_title_main_default, 7);
	lv_style_set_pad_bottom(&style_Main_scrn_ENG_1_Main_menu_extra_main_title_main_default, 7);
	lv_menu_t * Main_scrn_ENG_1_Main_menu_menu= (lv_menu_t *)ui->Main_scrn_ENG_1_Main_menu;
	lv_obj_t * Main_scrn_ENG_1_Main_menu_title = Main_scrn_ENG_1_Main_menu_menu->sidebar_header_title;
	lv_obj_set_size(Main_scrn_ENG_1_Main_menu_title, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_add_style(lv_menu_get_sidebar_header(ui->Main_scrn_ENG_1_Main_menu), &style_Main_scrn_ENG_1_Main_menu_extra_main_title_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes Main_scrn_ENG_1_Space_ben_1
	ui->Main_scrn_ENG_1_Space_ben_1 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_1);
	lv_label_set_text(ui->Main_scrn_ENG_1_Space_ben_1, "\n\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Space_ben_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Space_ben_1, 590, 20);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Space_ben_1, 88, 43);

	//Write style for Main_scrn_ENG_1_Space_ben_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Space_ben_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Space_ben_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Space_ben_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Space_ben_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Space_ben_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Space_ben_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Space_ben_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Space_ben_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Space_ben_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Space_ben_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Space_ben_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Space_ben_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Space_ben_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Space_ben_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Qua_li_ben
	ui->Main_scrn_ENG_1_Qua_li_ben = lv_dropdown_create(ui->Main_scrn_ENG_1_Main_menu_subpage_1);
	lv_dropdown_set_options(ui->Main_scrn_ENG_1_Qua_li_ben, "0\n1\n2\n3\n4\n5");
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Qua_li_ben, 353, 43);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Qua_li_ben, 156, 48);

	//Write style for Main_scrn_ENG_1_Qua_li_ben, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Qua_li_ben, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Qua_li_ben, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Qua_li_ben, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Qua_li_ben, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Qua_li_ben, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Qua_li_ben, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Qua_li_ben, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Qua_li_ben, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Qua_li_ben, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Qua_li_ben, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Qua_li_ben, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Qua_li_ben, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Qua_li_ben, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Qua_li_ben, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Qua_li_ben, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Main_scrn_ENG_1_Qua_li_ben, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Qua_li_ben, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Qua_li_ben, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Qua_li_ben, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Qua_li_ben, 1, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Qua_li_ben, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Qua_li_ben, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Qua_li_ben, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Qua_li_ben, 8, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Qua_li_ben, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Qua_li_ben, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Qua_li_ben, 3, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Qua_li_ben, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Qua_li_ben, lv_color_hex(0x3bae90), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Qua_li_ben, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Qua_li_ben, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for Main_scrn_ENG_1_Qua_li_ben, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Qua_li_ben, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Qua_li_ben, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Qua_li_ben, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Qua_li_ben, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Qua_li_ben, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Qua_li_ben, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Qua_li_ben, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Qua_li_ben, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Qua_li_ben, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Qua_li_ben, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Qua_li_ben, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Qua_li_ben, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Qua_li_ben, lv_color_hex(0x3bcba6), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Qua_li_ben, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Qua_li_ben, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style state: LV_STATE_CHECKED for &style_Main_scrn_ENG_1_Qua_li_ben_extra_list_selected_checked
	static lv_style_t style_Main_scrn_ENG_1_Qua_li_ben_extra_list_selected_checked;
	ui_init_style(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_selected_checked);
	
	lv_style_set_border_width(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_selected_checked, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_selected_checked, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_selected_checked, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_selected_checked, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_selected_checked, lv_color_hex(0x00a1b5));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_selected_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_1_Qua_li_ben), &style_Main_scrn_ENG_1_Qua_li_ben_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_1_Qua_li_ben_extra_list_main_default
	static lv_style_t style_Main_scrn_ENG_1_Qua_li_ben_extra_list_main_default;
	ui_init_style(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_main_default);
	
	lv_style_set_max_height(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_main_default, 90);
	lv_style_set_text_color(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_main_default, &lv_font_montserratMedium_14);
	lv_style_set_text_opa(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_main_default, 255);
	lv_style_set_border_width(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_main_default, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_main_default, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_main_default, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_main_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_main_default, lv_color_hex(0x53a1d9));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_1_Qua_li_ben), &style_Main_scrn_ENG_1_Qua_li_ben_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_1_Qua_li_ben_extra_list_scrollbar_default
	static lv_style_t style_Main_scrn_ENG_1_Qua_li_ben_extra_list_scrollbar_default;
	ui_init_style(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_scrollbar_default);
	
	lv_style_set_radius(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_scrollbar_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_scrollbar_default, lv_color_hex(0x62b062));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_1_Qua_li_ben_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_1_Qua_li_ben), &style_Main_scrn_ENG_1_Qua_li_ben_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Space_ben_2
	ui->Main_scrn_ENG_1_Space_ben_2 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_1);
	lv_label_set_text(ui->Main_scrn_ENG_1_Space_ben_2, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Space_ben_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Space_ben_2, 606, 38);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Space_ben_2, 88, 43);

	//Write style for Main_scrn_ENG_1_Space_ben_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Space_ben_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Space_ben_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Space_ben_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Space_ben_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Space_ben_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Space_ben_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Space_ben_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Space_ben_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Space_ben_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Space_ben_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Space_ben_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Space_ben_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Space_ben_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Space_ben_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_im_ben
	ui->Main_scrn_ENG_1_im_ben = lv_img_create(ui->Main_scrn_ENG_1_Main_menu_subpage_1);
	lv_obj_add_flag(ui->Main_scrn_ENG_1_im_ben, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Main_scrn_ENG_1_im_ben, &_Benadryl_alpha_120x240);
	lv_img_set_pivot(ui->Main_scrn_ENG_1_im_ben, 250,100);
	lv_img_set_angle(ui->Main_scrn_ENG_1_im_ben, 0);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_im_ben, 377, 44);
	lv_obj_set_size(ui->Main_scrn_ENG_1_im_ben, 120, 240);

	//Write style for Main_scrn_ENG_1_im_ben, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Main_scrn_ENG_1_im_ben, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Main_scrn_ENG_1_im_ben, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_im_ben, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Main_scrn_ENG_1_im_ben, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Space_ben_3
	ui->Main_scrn_ENG_1_Space_ben_3 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_1);
	lv_label_set_text(ui->Main_scrn_ENG_1_Space_ben_3, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Space_ben_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Space_ben_3, 597, 55);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Space_ben_3, 97, 30);

	//Write style for Main_scrn_ENG_1_Space_ben_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Space_ben_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Space_ben_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Space_ben_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Space_ben_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Space_ben_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Space_ben_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Space_ben_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Space_ben_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Space_ben_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Space_ben_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Space_ben_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Space_ben_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Space_ben_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Space_ben_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Price_ben
	ui->Main_scrn_ENG_1_Price_ben = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_1);
	lv_label_set_text(ui->Main_scrn_ENG_1_Price_ben, "₹75");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Price_ben, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Price_ben, 352, 414);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Price_ben, 160, 80);

	//Write style for Main_scrn_ENG_1_Price_ben, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Price_ben, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Price_ben, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Price_ben, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Price_ben, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Price_ben, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Price_ben, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Price_ben, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Price_ben, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Price_ben, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Price_ben, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Price_ben, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Price_ben, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Price_ben, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Price_ben, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Price_ben, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Price_ben, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Price_ben, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Price_ben, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Price_ben, 0, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes Main_scrn_ENG_1_Space_cal_1
	ui->Main_scrn_ENG_1_Space_cal_1 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_2);
	lv_label_set_text(ui->Main_scrn_ENG_1_Space_cal_1, "\n\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Space_cal_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Space_cal_1, 593, 34);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Space_cal_1, 88, 43);

	//Write style for Main_scrn_ENG_1_Space_cal_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Space_cal_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Space_cal_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Space_cal_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Space_cal_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Space_cal_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Space_cal_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Space_cal_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Space_cal_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Space_cal_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Space_cal_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Space_cal_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Space_cal_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Space_cal_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Space_cal_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Qua_li_cal
	ui->Main_scrn_ENG_1_Qua_li_cal = lv_dropdown_create(ui->Main_scrn_ENG_1_Main_menu_subpage_2);
	lv_dropdown_set_options(ui->Main_scrn_ENG_1_Qua_li_cal, "0\n1\n2\n3\n4\n5");
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Qua_li_cal, 412, 72);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Qua_li_cal, 156, 48);

	//Write style for Main_scrn_ENG_1_Qua_li_cal, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Qua_li_cal, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Qua_li_cal, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Qua_li_cal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Qua_li_cal, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Qua_li_cal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Qua_li_cal, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Qua_li_cal, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Qua_li_cal, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Qua_li_cal, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Qua_li_cal, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Qua_li_cal, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Qua_li_cal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Qua_li_cal, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Qua_li_cal, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Qua_li_cal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Main_scrn_ENG_1_Qua_li_cal, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Qua_li_cal, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Qua_li_cal, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Qua_li_cal, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Qua_li_cal, 1, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Qua_li_cal, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Qua_li_cal, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Qua_li_cal, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Qua_li_cal, 8, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Qua_li_cal, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Qua_li_cal, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Qua_li_cal, 3, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Qua_li_cal, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Qua_li_cal, lv_color_hex(0x3bae90), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Qua_li_cal, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Qua_li_cal, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for Main_scrn_ENG_1_Qua_li_cal, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Qua_li_cal, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Qua_li_cal, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Qua_li_cal, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Qua_li_cal, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Qua_li_cal, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Qua_li_cal, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Qua_li_cal, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Qua_li_cal, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Qua_li_cal, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Qua_li_cal, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Qua_li_cal, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Qua_li_cal, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Qua_li_cal, lv_color_hex(0x3bcba6), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Qua_li_cal, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Qua_li_cal, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style state: LV_STATE_CHECKED for &style_Main_scrn_ENG_1_Qua_li_cal_extra_list_selected_checked
	static lv_style_t style_Main_scrn_ENG_1_Qua_li_cal_extra_list_selected_checked;
	ui_init_style(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_selected_checked);
	
	lv_style_set_border_width(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_selected_checked, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_selected_checked, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_selected_checked, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_selected_checked, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_selected_checked, lv_color_hex(0x00a1b5));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_selected_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_1_Qua_li_cal), &style_Main_scrn_ENG_1_Qua_li_cal_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_1_Qua_li_cal_extra_list_main_default
	static lv_style_t style_Main_scrn_ENG_1_Qua_li_cal_extra_list_main_default;
	ui_init_style(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_main_default);
	
	lv_style_set_max_height(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_main_default, 90);
	lv_style_set_text_color(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_main_default, &lv_font_montserratMedium_14);
	lv_style_set_text_opa(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_main_default, 255);
	lv_style_set_border_width(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_main_default, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_main_default, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_main_default, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_main_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_main_default, lv_color_hex(0x53a1d9));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_1_Qua_li_cal), &style_Main_scrn_ENG_1_Qua_li_cal_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_1_Qua_li_cal_extra_list_scrollbar_default
	static lv_style_t style_Main_scrn_ENG_1_Qua_li_cal_extra_list_scrollbar_default;
	ui_init_style(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_scrollbar_default);
	
	lv_style_set_radius(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_scrollbar_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_scrollbar_default, lv_color_hex(0x62b062));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_1_Qua_li_cal_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_1_Qua_li_cal), &style_Main_scrn_ENG_1_Qua_li_cal_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Space_cal_2
	ui->Main_scrn_ENG_1_Space_cal_2 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_2);
	lv_label_set_text(ui->Main_scrn_ENG_1_Space_cal_2, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Space_cal_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Space_cal_2, 642, 45);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Space_cal_2, 88, 43);

	//Write style for Main_scrn_ENG_1_Space_cal_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Space_cal_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Space_cal_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Space_cal_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Space_cal_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Space_cal_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Space_cal_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Space_cal_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Space_cal_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Space_cal_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Space_cal_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Space_cal_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Space_cal_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Space_cal_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Space_cal_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_im_cal
	ui->Main_scrn_ENG_1_im_cal = lv_img_create(ui->Main_scrn_ENG_1_Main_menu_subpage_2);
	lv_obj_add_flag(ui->Main_scrn_ENG_1_im_cal, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Main_scrn_ENG_1_im_cal, &_Calpol_paracetamol_alpha_303x240);
	lv_img_set_pivot(ui->Main_scrn_ENG_1_im_cal, 250,100);
	lv_img_set_angle(ui->Main_scrn_ENG_1_im_cal, 0);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_im_cal, 265, 75);
	lv_obj_set_size(ui->Main_scrn_ENG_1_im_cal, 303, 240);

	//Write style for Main_scrn_ENG_1_im_cal, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Main_scrn_ENG_1_im_cal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Main_scrn_ENG_1_im_cal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_im_cal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Main_scrn_ENG_1_im_cal, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Space_cal_3
	ui->Main_scrn_ENG_1_Space_cal_3 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_2);
	lv_label_set_text(ui->Main_scrn_ENG_1_Space_cal_3, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Space_cal_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Space_cal_3, 614, 51);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Space_cal_3, 110, 31);

	//Write style for Main_scrn_ENG_1_Space_cal_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Space_cal_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Space_cal_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Space_cal_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Space_cal_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Space_cal_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Space_cal_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Space_cal_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Space_cal_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Space_cal_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Space_cal_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Space_cal_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Space_cal_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Space_cal_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Space_cal_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Price_cal
	ui->Main_scrn_ENG_1_Price_cal = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_2);
	lv_label_set_text(ui->Main_scrn_ENG_1_Price_cal, "₹28\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Price_cal, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Price_cal, 352, 414);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Price_cal, 160, 80);

	//Write style for Main_scrn_ENG_1_Price_cal, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Price_cal, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Price_cal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Price_cal, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Price_cal, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Price_cal, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Price_cal, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Price_cal, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Price_cal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Price_cal, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Price_cal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Price_cal, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Price_cal, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Price_cal, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Price_cal, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Price_cal, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Price_cal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Price_cal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Price_cal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Price_cal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes Main_scrn_ENG_1_Space_can_1
	ui->Main_scrn_ENG_1_Space_can_1 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_3);
	lv_label_set_text(ui->Main_scrn_ENG_1_Space_can_1, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Space_can_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Space_can_1, 650, 66);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Space_can_1, 88, 43);

	//Write style for Main_scrn_ENG_1_Space_can_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Space_can_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Space_can_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Space_can_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Space_can_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Space_can_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Space_can_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Space_can_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Space_can_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Space_can_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Space_can_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Space_can_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Space_can_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Space_can_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Space_can_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Qua_li_can
	ui->Main_scrn_ENG_1_Qua_li_can = lv_dropdown_create(ui->Main_scrn_ENG_1_Main_menu_subpage_3);
	lv_dropdown_set_options(ui->Main_scrn_ENG_1_Qua_li_can, "0\n1\n2\n3\n4\n5");
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Qua_li_can, 424, 65);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Qua_li_can, 156, 48);

	//Write style for Main_scrn_ENG_1_Qua_li_can, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Qua_li_can, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Qua_li_can, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Qua_li_can, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Qua_li_can, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Qua_li_can, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Qua_li_can, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Qua_li_can, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Qua_li_can, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Qua_li_can, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Qua_li_can, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Qua_li_can, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Qua_li_can, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Qua_li_can, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Qua_li_can, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Qua_li_can, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Main_scrn_ENG_1_Qua_li_can, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Qua_li_can, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Qua_li_can, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Qua_li_can, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Qua_li_can, 1, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Qua_li_can, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Qua_li_can, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Qua_li_can, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Qua_li_can, 8, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Qua_li_can, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Qua_li_can, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Qua_li_can, 3, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Qua_li_can, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Qua_li_can, lv_color_hex(0x3bae90), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Qua_li_can, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Qua_li_can, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for Main_scrn_ENG_1_Qua_li_can, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Qua_li_can, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Qua_li_can, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Qua_li_can, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Qua_li_can, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Qua_li_can, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Qua_li_can, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Qua_li_can, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Qua_li_can, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Qua_li_can, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Qua_li_can, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Qua_li_can, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Qua_li_can, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Qua_li_can, lv_color_hex(0x3bcba6), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Qua_li_can, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Qua_li_can, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style state: LV_STATE_CHECKED for &style_Main_scrn_ENG_1_Qua_li_can_extra_list_selected_checked
	static lv_style_t style_Main_scrn_ENG_1_Qua_li_can_extra_list_selected_checked;
	ui_init_style(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_selected_checked);
	
	lv_style_set_border_width(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_selected_checked, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_selected_checked, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_selected_checked, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_selected_checked, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_selected_checked, lv_color_hex(0x00a1b5));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_selected_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_1_Qua_li_can), &style_Main_scrn_ENG_1_Qua_li_can_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_1_Qua_li_can_extra_list_main_default
	static lv_style_t style_Main_scrn_ENG_1_Qua_li_can_extra_list_main_default;
	ui_init_style(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_main_default);
	
	lv_style_set_max_height(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_main_default, 90);
	lv_style_set_text_color(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_main_default, &lv_font_montserratMedium_14);
	lv_style_set_text_opa(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_main_default, 255);
	lv_style_set_border_width(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_main_default, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_main_default, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_main_default, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_main_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_main_default, lv_color_hex(0x53a1d9));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_1_Qua_li_can), &style_Main_scrn_ENG_1_Qua_li_can_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_1_Qua_li_can_extra_list_scrollbar_default
	static lv_style_t style_Main_scrn_ENG_1_Qua_li_can_extra_list_scrollbar_default;
	ui_init_style(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_scrollbar_default);
	
	lv_style_set_radius(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_scrollbar_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_scrollbar_default, lv_color_hex(0x62b062));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_1_Qua_li_can_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_1_Qua_li_can), &style_Main_scrn_ENG_1_Qua_li_can_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Space_can_2
	ui->Main_scrn_ENG_1_Space_can_2 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_3);
	lv_label_set_text(ui->Main_scrn_ENG_1_Space_can_2, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Space_can_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Space_can_2, 654, 83);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Space_can_2, 88, 43);

	//Write style for Main_scrn_ENG_1_Space_can_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Space_can_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Space_can_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Space_can_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Space_can_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Space_can_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Space_can_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Space_can_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Space_can_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Space_can_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Space_can_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Space_can_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Space_can_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Space_can_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Space_can_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_im_can
	ui->Main_scrn_ENG_1_im_can = lv_img_create(ui->Main_scrn_ENG_1_Main_menu_subpage_3);
	lv_obj_add_flag(ui->Main_scrn_ENG_1_im_can, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Main_scrn_ENG_1_im_can, &_Candid_powder_alpha_263x240);
	lv_img_set_pivot(ui->Main_scrn_ENG_1_im_can, 250,100);
	lv_img_set_angle(ui->Main_scrn_ENG_1_im_can, 0);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_im_can, 217, 94);
	lv_obj_set_size(ui->Main_scrn_ENG_1_im_can, 263, 240);

	//Write style for Main_scrn_ENG_1_im_can, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Main_scrn_ENG_1_im_can, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Main_scrn_ENG_1_im_can, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_im_can, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Main_scrn_ENG_1_im_can, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Space_can_3
	ui->Main_scrn_ENG_1_Space_can_3 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_3);
	lv_label_set_text(ui->Main_scrn_ENG_1_Space_can_3, "\n\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Space_can_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Space_can_3, 617, 56);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Space_can_3, 110, 31);

	//Write style for Main_scrn_ENG_1_Space_can_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Space_can_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Space_can_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Space_can_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Space_can_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Space_can_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Space_can_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Space_can_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Space_can_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Space_can_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Space_can_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Space_can_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Space_can_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Space_can_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Space_can_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Price_can
	ui->Main_scrn_ENG_1_Price_can = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_3);
	lv_label_set_text(ui->Main_scrn_ENG_1_Price_can, "₹104\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Price_can, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Price_can, 352, 414);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Price_can, 160, 80);

	//Write style for Main_scrn_ENG_1_Price_can, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Price_can, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Price_can, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Price_can, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Price_can, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Price_can, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Price_can, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Price_can, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Price_can, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Price_can, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Price_can, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Price_can, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Price_can, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Price_can, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Price_can, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Price_can, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Price_can, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Price_can, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Price_can, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Price_can, 0, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes Main_scrn_ENG_1_Space_cip_1
	ui->Main_scrn_ENG_1_Space_cip_1 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_4);
	lv_label_set_text(ui->Main_scrn_ENG_1_Space_cip_1, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Space_cip_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Space_cip_1, 618, 55);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Space_cip_1, 88, 43);

	//Write style for Main_scrn_ENG_1_Space_cip_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Space_cip_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Space_cip_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Space_cip_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Space_cip_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Space_cip_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Space_cip_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Space_cip_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Space_cip_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Space_cip_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Space_cip_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Space_cip_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Space_cip_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Space_cip_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Space_cip_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Qua_li_cip
	ui->Main_scrn_ENG_1_Qua_li_cip = lv_dropdown_create(ui->Main_scrn_ENG_1_Main_menu_subpage_4);
	lv_dropdown_set_options(ui->Main_scrn_ENG_1_Qua_li_cip, "0\n1\n2\n3\n4\n5");
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Qua_li_cip, 410, 77);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Qua_li_cip, 156, 48);

	//Write style for Main_scrn_ENG_1_Qua_li_cip, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Qua_li_cip, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Qua_li_cip, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Qua_li_cip, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Qua_li_cip, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Qua_li_cip, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Qua_li_cip, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Qua_li_cip, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Qua_li_cip, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Qua_li_cip, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Qua_li_cip, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Qua_li_cip, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Qua_li_cip, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Qua_li_cip, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Qua_li_cip, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Qua_li_cip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Main_scrn_ENG_1_Qua_li_cip, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Qua_li_cip, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Qua_li_cip, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Qua_li_cip, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Qua_li_cip, 1, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Qua_li_cip, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Qua_li_cip, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Qua_li_cip, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Qua_li_cip, 8, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Qua_li_cip, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Qua_li_cip, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Qua_li_cip, 3, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Qua_li_cip, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Qua_li_cip, lv_color_hex(0x3bae90), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Qua_li_cip, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Qua_li_cip, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for Main_scrn_ENG_1_Qua_li_cip, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Qua_li_cip, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Qua_li_cip, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Qua_li_cip, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Qua_li_cip, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Qua_li_cip, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Qua_li_cip, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Qua_li_cip, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Qua_li_cip, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Qua_li_cip, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Qua_li_cip, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Qua_li_cip, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Qua_li_cip, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Qua_li_cip, lv_color_hex(0x3bcba6), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Qua_li_cip, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Qua_li_cip, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style state: LV_STATE_CHECKED for &style_Main_scrn_ENG_1_Qua_li_cip_extra_list_selected_checked
	static lv_style_t style_Main_scrn_ENG_1_Qua_li_cip_extra_list_selected_checked;
	ui_init_style(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_selected_checked);
	
	lv_style_set_border_width(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_selected_checked, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_selected_checked, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_selected_checked, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_selected_checked, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_selected_checked, lv_color_hex(0x00a1b5));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_selected_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_1_Qua_li_cip), &style_Main_scrn_ENG_1_Qua_li_cip_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_1_Qua_li_cip_extra_list_main_default
	static lv_style_t style_Main_scrn_ENG_1_Qua_li_cip_extra_list_main_default;
	ui_init_style(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_main_default);
	
	lv_style_set_max_height(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_main_default, 90);
	lv_style_set_text_color(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_main_default, &lv_font_montserratMedium_14);
	lv_style_set_text_opa(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_main_default, 255);
	lv_style_set_border_width(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_main_default, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_main_default, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_main_default, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_main_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_main_default, lv_color_hex(0x53a1d9));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_1_Qua_li_cip), &style_Main_scrn_ENG_1_Qua_li_cip_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_1_Qua_li_cip_extra_list_scrollbar_default
	static lv_style_t style_Main_scrn_ENG_1_Qua_li_cip_extra_list_scrollbar_default;
	ui_init_style(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_scrollbar_default);
	
	lv_style_set_radius(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_scrollbar_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_scrollbar_default, lv_color_hex(0x62b062));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_1_Qua_li_cip_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_1_Qua_li_cip), &style_Main_scrn_ENG_1_Qua_li_cip_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Space_cip_2
	ui->Main_scrn_ENG_1_Space_cip_2 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_4);
	lv_label_set_text(ui->Main_scrn_ENG_1_Space_cip_2, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Space_cip_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Space_cip_2, 680, 68);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Space_cip_2, 88, 43);

	//Write style for Main_scrn_ENG_1_Space_cip_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Space_cip_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Space_cip_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Space_cip_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Space_cip_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Space_cip_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Space_cip_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Space_cip_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Space_cip_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Space_cip_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Space_cip_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Space_cip_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Space_cip_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Space_cip_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Space_cip_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_im_cip
	ui->Main_scrn_ENG_1_im_cip = lv_img_create(ui->Main_scrn_ENG_1_Main_menu_subpage_4);
	lv_obj_add_flag(ui->Main_scrn_ENG_1_im_cip, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Main_scrn_ENG_1_im_cip, &_cipla_cheston_cold_alpha_190x240);
	lv_img_set_pivot(ui->Main_scrn_ENG_1_im_cip, 250,100);
	lv_img_set_angle(ui->Main_scrn_ENG_1_im_cip, 0);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_im_cip, 301, 110);
	lv_obj_set_size(ui->Main_scrn_ENG_1_im_cip, 190, 240);

	//Write style for Main_scrn_ENG_1_im_cip, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Main_scrn_ENG_1_im_cip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Main_scrn_ENG_1_im_cip, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_im_cip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Main_scrn_ENG_1_im_cip, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Space_cip_3
	ui->Main_scrn_ENG_1_Space_cip_3 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_4);
	lv_label_set_text(ui->Main_scrn_ENG_1_Space_cip_3, "\n\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Space_cip_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Space_cip_3, 633, 50);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Space_cip_3, 110, 31);

	//Write style for Main_scrn_ENG_1_Space_cip_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Space_cip_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Space_cip_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Space_cip_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Space_cip_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Space_cip_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Space_cip_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Space_cip_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Space_cip_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Space_cip_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Space_cip_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Space_cip_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Space_cip_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Space_cip_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Space_cip_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Price_cip
	ui->Main_scrn_ENG_1_Price_cip = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_4);
	lv_label_set_text(ui->Main_scrn_ENG_1_Price_cip, "₹38\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Price_cip, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Price_cip, 352, 414);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Price_cip, 160, 80);

	//Write style for Main_scrn_ENG_1_Price_cip, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Price_cip, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Price_cip, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Price_cip, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Price_cip, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Price_cip, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Price_cip, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Price_cip, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Price_cip, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Price_cip, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Price_cip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Price_cip, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Price_cip, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Price_cip, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Price_cip, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Price_cip, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Price_cip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Price_cip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Price_cip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Price_cip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes Main_scrn_ENG_1_Space_clo_1
	ui->Main_scrn_ENG_1_Space_clo_1 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_5);
	lv_label_set_text(ui->Main_scrn_ENG_1_Space_clo_1, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Space_clo_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Space_clo_1, 615, 56);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Space_clo_1, 88, 43);

	//Write style for Main_scrn_ENG_1_Space_clo_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Space_clo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Space_clo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Space_clo_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Space_clo_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Space_clo_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Space_clo_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Space_clo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Space_clo_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Space_clo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Space_clo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Space_clo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Space_clo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Space_clo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Space_clo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Qua_li_clo
	ui->Main_scrn_ENG_1_Qua_li_clo = lv_dropdown_create(ui->Main_scrn_ENG_1_Main_menu_subpage_5);
	lv_dropdown_set_options(ui->Main_scrn_ENG_1_Qua_li_clo, "0\n1\n2\n3\n4\n5");
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Qua_li_clo, 387, 46);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Qua_li_clo, 156, 48);

	//Write style for Main_scrn_ENG_1_Qua_li_clo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Qua_li_clo, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Qua_li_clo, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Qua_li_clo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Qua_li_clo, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Qua_li_clo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Qua_li_clo, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Qua_li_clo, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Qua_li_clo, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Qua_li_clo, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Qua_li_clo, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Qua_li_clo, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Qua_li_clo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Qua_li_clo, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Qua_li_clo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Qua_li_clo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Main_scrn_ENG_1_Qua_li_clo, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Qua_li_clo, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Qua_li_clo, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Qua_li_clo, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Qua_li_clo, 1, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Qua_li_clo, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Qua_li_clo, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Qua_li_clo, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Qua_li_clo, 8, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Qua_li_clo, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Qua_li_clo, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Qua_li_clo, 3, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Qua_li_clo, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Qua_li_clo, lv_color_hex(0x3bae90), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Qua_li_clo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Qua_li_clo, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for Main_scrn_ENG_1_Qua_li_clo, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Qua_li_clo, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Qua_li_clo, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Qua_li_clo, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Qua_li_clo, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Qua_li_clo, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Qua_li_clo, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Qua_li_clo, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Qua_li_clo, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Qua_li_clo, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Qua_li_clo, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Qua_li_clo, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Qua_li_clo, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Qua_li_clo, lv_color_hex(0x3bcba6), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Qua_li_clo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Qua_li_clo, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style state: LV_STATE_CHECKED for &style_Main_scrn_ENG_1_Qua_li_clo_extra_list_selected_checked
	static lv_style_t style_Main_scrn_ENG_1_Qua_li_clo_extra_list_selected_checked;
	ui_init_style(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_selected_checked);
	
	lv_style_set_border_width(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_selected_checked, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_selected_checked, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_selected_checked, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_selected_checked, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_selected_checked, lv_color_hex(0x00a1b5));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_selected_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_1_Qua_li_clo), &style_Main_scrn_ENG_1_Qua_li_clo_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_1_Qua_li_clo_extra_list_main_default
	static lv_style_t style_Main_scrn_ENG_1_Qua_li_clo_extra_list_main_default;
	ui_init_style(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_main_default);
	
	lv_style_set_max_height(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_main_default, 90);
	lv_style_set_text_color(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_main_default, &lv_font_montserratMedium_14);
	lv_style_set_text_opa(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_main_default, 255);
	lv_style_set_border_width(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_main_default, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_main_default, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_main_default, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_main_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_main_default, lv_color_hex(0x53a1d9));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_1_Qua_li_clo), &style_Main_scrn_ENG_1_Qua_li_clo_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_1_Qua_li_clo_extra_list_scrollbar_default
	static lv_style_t style_Main_scrn_ENG_1_Qua_li_clo_extra_list_scrollbar_default;
	ui_init_style(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_scrollbar_default);
	
	lv_style_set_radius(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_scrollbar_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_scrollbar_default, lv_color_hex(0x62b062));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_1_Qua_li_clo_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_1_Qua_li_clo), &style_Main_scrn_ENG_1_Qua_li_clo_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Space_clo_2
	ui->Main_scrn_ENG_1_Space_clo_2 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_5);
	lv_label_set_text(ui->Main_scrn_ENG_1_Space_clo_2, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Space_clo_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Space_clo_2, 675, 66);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Space_clo_2, 88, 43);

	//Write style for Main_scrn_ENG_1_Space_clo_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Space_clo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Space_clo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Space_clo_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Space_clo_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Space_clo_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Space_clo_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Space_clo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Space_clo_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Space_clo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Space_clo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Space_clo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Space_clo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Space_clo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Space_clo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_im_clo
	ui->Main_scrn_ENG_1_im_clo = lv_img_create(ui->Main_scrn_ENG_1_Main_menu_subpage_5);
	lv_obj_add_flag(ui->Main_scrn_ENG_1_im_clo, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Main_scrn_ENG_1_im_clo, &_Clocip_alpha_274x240);
	lv_img_set_pivot(ui->Main_scrn_ENG_1_im_clo, 250,100);
	lv_img_set_angle(ui->Main_scrn_ENG_1_im_clo, 0);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_im_clo, 238, 104);
	lv_obj_set_size(ui->Main_scrn_ENG_1_im_clo, 274, 240);

	//Write style for Main_scrn_ENG_1_im_clo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Main_scrn_ENG_1_im_clo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Main_scrn_ENG_1_im_clo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_im_clo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Main_scrn_ENG_1_im_clo, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Space_clo_3
	ui->Main_scrn_ENG_1_Space_clo_3 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_5);
	lv_label_set_text(ui->Main_scrn_ENG_1_Space_clo_3, "\n\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Space_clo_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Space_clo_3, 607, 57);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Space_clo_3, 110, 31);

	//Write style for Main_scrn_ENG_1_Space_clo_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Space_clo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Space_clo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Space_clo_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Space_clo_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Space_clo_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Space_clo_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Space_clo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Space_clo_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Space_clo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Space_clo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Space_clo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Space_clo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Space_clo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Space_clo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Price_clo
	ui->Main_scrn_ENG_1_Price_clo = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_5);
	lv_label_set_text(ui->Main_scrn_ENG_1_Price_clo, "₹140\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Price_clo, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Price_clo, 352, 414);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Price_clo, 160, 80);

	//Write style for Main_scrn_ENG_1_Price_clo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Price_clo, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Price_clo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Price_clo, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Price_clo, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Price_clo, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Price_clo, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Price_clo, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Price_clo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Price_clo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Price_clo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Price_clo, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Price_clo, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Price_clo, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Price_clo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Price_clo, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Price_clo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Price_clo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Price_clo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Price_clo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes Main_scrn_ENG_1_Space_cof_1
	ui->Main_scrn_ENG_1_Space_cof_1 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_6);
	lv_label_set_text(ui->Main_scrn_ENG_1_Space_cof_1, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Space_cof_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Space_cof_1, 648, 85);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Space_cof_1, 88, 43);

	//Write style for Main_scrn_ENG_1_Space_cof_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Space_cof_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Space_cof_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Space_cof_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Space_cof_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Space_cof_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Space_cof_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Space_cof_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Space_cof_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Space_cof_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Space_cof_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Space_cof_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Space_cof_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Space_cof_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Space_cof_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Qua_li_cof
	ui->Main_scrn_ENG_1_Qua_li_cof = lv_dropdown_create(ui->Main_scrn_ENG_1_Main_menu_subpage_6);
	lv_dropdown_set_options(ui->Main_scrn_ENG_1_Qua_li_cof, "0\n1\n2\n3\n4\n5");
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Qua_li_cof, 423, 58);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Qua_li_cof, 156, 48);

	//Write style for Main_scrn_ENG_1_Qua_li_cof, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Qua_li_cof, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Qua_li_cof, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Qua_li_cof, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Qua_li_cof, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Qua_li_cof, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Qua_li_cof, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Qua_li_cof, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Qua_li_cof, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Qua_li_cof, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Qua_li_cof, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Qua_li_cof, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Qua_li_cof, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Qua_li_cof, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Qua_li_cof, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Qua_li_cof, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Main_scrn_ENG_1_Qua_li_cof, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Qua_li_cof, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Qua_li_cof, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Qua_li_cof, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Qua_li_cof, 1, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Qua_li_cof, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Qua_li_cof, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Qua_li_cof, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Qua_li_cof, 8, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Qua_li_cof, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Qua_li_cof, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Qua_li_cof, 3, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Qua_li_cof, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Qua_li_cof, lv_color_hex(0x3bae90), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Qua_li_cof, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Qua_li_cof, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for Main_scrn_ENG_1_Qua_li_cof, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Qua_li_cof, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Qua_li_cof, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Qua_li_cof, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Qua_li_cof, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Qua_li_cof, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Qua_li_cof, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Qua_li_cof, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Qua_li_cof, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Qua_li_cof, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Qua_li_cof, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Qua_li_cof, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Qua_li_cof, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Qua_li_cof, lv_color_hex(0x3bcba6), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Qua_li_cof, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Qua_li_cof, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style state: LV_STATE_CHECKED for &style_Main_scrn_ENG_1_Qua_li_cof_extra_list_selected_checked
	static lv_style_t style_Main_scrn_ENG_1_Qua_li_cof_extra_list_selected_checked;
	ui_init_style(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_selected_checked);
	
	lv_style_set_border_width(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_selected_checked, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_selected_checked, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_selected_checked, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_selected_checked, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_selected_checked, lv_color_hex(0x00a1b5));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_selected_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_1_Qua_li_cof), &style_Main_scrn_ENG_1_Qua_li_cof_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_1_Qua_li_cof_extra_list_main_default
	static lv_style_t style_Main_scrn_ENG_1_Qua_li_cof_extra_list_main_default;
	ui_init_style(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_main_default);
	
	lv_style_set_max_height(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_main_default, 90);
	lv_style_set_text_color(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_main_default, &lv_font_montserratMedium_14);
	lv_style_set_text_opa(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_main_default, 255);
	lv_style_set_border_width(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_main_default, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_main_default, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_main_default, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_main_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_main_default, lv_color_hex(0x53a1d9));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_1_Qua_li_cof), &style_Main_scrn_ENG_1_Qua_li_cof_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_1_Qua_li_cof_extra_list_scrollbar_default
	static lv_style_t style_Main_scrn_ENG_1_Qua_li_cof_extra_list_scrollbar_default;
	ui_init_style(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_scrollbar_default);
	
	lv_style_set_radius(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_scrollbar_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_scrollbar_default, lv_color_hex(0x62b062));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_1_Qua_li_cof_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_1_Qua_li_cof), &style_Main_scrn_ENG_1_Qua_li_cof_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Space_cof_2
	ui->Main_scrn_ENG_1_Space_cof_2 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_6);
	lv_label_set_text(ui->Main_scrn_ENG_1_Space_cof_2, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Space_cof_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Space_cof_2, 671, 58);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Space_cof_2, 88, 43);

	//Write style for Main_scrn_ENG_1_Space_cof_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Space_cof_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Space_cof_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Space_cof_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Space_cof_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Space_cof_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Space_cof_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Space_cof_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Space_cof_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Space_cof_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Space_cof_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Space_cof_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Space_cof_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Space_cof_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Space_cof_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_im_cof
	ui->Main_scrn_ENG_1_im_cof = lv_img_create(ui->Main_scrn_ENG_1_Main_menu_subpage_6);
	lv_obj_add_flag(ui->Main_scrn_ENG_1_im_cof, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Main_scrn_ENG_1_im_cof, &_Cofsils_alpha_230x240);
	lv_img_set_pivot(ui->Main_scrn_ENG_1_im_cof, 250,100);
	lv_img_set_angle(ui->Main_scrn_ENG_1_im_cof, 0);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_im_cof, 233, 104);
	lv_obj_set_size(ui->Main_scrn_ENG_1_im_cof, 230, 240);

	//Write style for Main_scrn_ENG_1_im_cof, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Main_scrn_ENG_1_im_cof, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Main_scrn_ENG_1_im_cof, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_im_cof, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Main_scrn_ENG_1_im_cof, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Space_cof_3
	ui->Main_scrn_ENG_1_Space_cof_3 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_6);
	lv_label_set_text(ui->Main_scrn_ENG_1_Space_cof_3, "\n\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Space_cof_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Space_cof_3, 626, 71);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Space_cof_3, 110, 31);

	//Write style for Main_scrn_ENG_1_Space_cof_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Space_cof_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Space_cof_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Space_cof_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Space_cof_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Space_cof_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Space_cof_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Space_cof_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Space_cof_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Space_cof_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Space_cof_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Space_cof_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Space_cof_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Space_cof_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Space_cof_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Price_cof
	ui->Main_scrn_ENG_1_Price_cof = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_6);
	lv_label_set_text(ui->Main_scrn_ENG_1_Price_cof, "₹12\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Price_cof, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Price_cof, 352, 414);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Price_cof, 160, 80);

	//Write style for Main_scrn_ENG_1_Price_cof, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Price_cof, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Price_cof, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Price_cof, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Price_cof, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Price_cof, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Price_cof, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Price_cof, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Price_cof, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Price_cof, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Price_cof, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Price_cof, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Price_cof, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Price_cof, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Price_cof, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Price_cof, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Price_cof, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Price_cof, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Price_cof, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Price_cof, 0, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes Main_scrn_ENG_1_Space_com_1
	ui->Main_scrn_ENG_1_Space_com_1 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_7);
	lv_label_set_text(ui->Main_scrn_ENG_1_Space_com_1, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Space_com_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Space_com_1, 651, 57);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Space_com_1, 88, 43);

	//Write style for Main_scrn_ENG_1_Space_com_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Space_com_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Space_com_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Space_com_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Space_com_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Space_com_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Space_com_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Space_com_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Space_com_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Space_com_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Space_com_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Space_com_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Space_com_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Space_com_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Space_com_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Qua_li_com
	ui->Main_scrn_ENG_1_Qua_li_com = lv_dropdown_create(ui->Main_scrn_ENG_1_Main_menu_subpage_7);
	lv_dropdown_set_options(ui->Main_scrn_ENG_1_Qua_li_com, "0\n1\n2\n3\n4\n5");
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Qua_li_com, 416, 81);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Qua_li_com, 156, 48);

	//Write style for Main_scrn_ENG_1_Qua_li_com, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Qua_li_com, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Qua_li_com, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Qua_li_com, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Qua_li_com, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Qua_li_com, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Qua_li_com, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Qua_li_com, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Qua_li_com, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Qua_li_com, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Qua_li_com, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Qua_li_com, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Qua_li_com, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Qua_li_com, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Qua_li_com, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Qua_li_com, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Main_scrn_ENG_1_Qua_li_com, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Qua_li_com, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Qua_li_com, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Qua_li_com, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Qua_li_com, 1, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Qua_li_com, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Qua_li_com, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Qua_li_com, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Qua_li_com, 8, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Qua_li_com, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Qua_li_com, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Qua_li_com, 3, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Qua_li_com, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Qua_li_com, lv_color_hex(0x3bae90), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Qua_li_com, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Qua_li_com, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for Main_scrn_ENG_1_Qua_li_com, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Qua_li_com, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Qua_li_com, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Qua_li_com, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Qua_li_com, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Qua_li_com, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Qua_li_com, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Qua_li_com, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Qua_li_com, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Qua_li_com, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Qua_li_com, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Qua_li_com, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Qua_li_com, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Qua_li_com, lv_color_hex(0x3bcba6), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Qua_li_com, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Qua_li_com, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style state: LV_STATE_CHECKED for &style_Main_scrn_ENG_1_Qua_li_com_extra_list_selected_checked
	static lv_style_t style_Main_scrn_ENG_1_Qua_li_com_extra_list_selected_checked;
	ui_init_style(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_selected_checked);
	
	lv_style_set_border_width(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_selected_checked, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_selected_checked, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_selected_checked, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_selected_checked, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_selected_checked, lv_color_hex(0x00a1b5));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_selected_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_1_Qua_li_com), &style_Main_scrn_ENG_1_Qua_li_com_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_1_Qua_li_com_extra_list_main_default
	static lv_style_t style_Main_scrn_ENG_1_Qua_li_com_extra_list_main_default;
	ui_init_style(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_main_default);
	
	lv_style_set_max_height(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_main_default, 90);
	lv_style_set_text_color(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_main_default, &lv_font_montserratMedium_14);
	lv_style_set_text_opa(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_main_default, 255);
	lv_style_set_border_width(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_main_default, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_main_default, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_main_default, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_main_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_main_default, lv_color_hex(0x53a1d9));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_1_Qua_li_com), &style_Main_scrn_ENG_1_Qua_li_com_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_1_Qua_li_com_extra_list_scrollbar_default
	static lv_style_t style_Main_scrn_ENG_1_Qua_li_com_extra_list_scrollbar_default;
	ui_init_style(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_scrollbar_default);
	
	lv_style_set_radius(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_scrollbar_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_scrollbar_default, lv_color_hex(0x62b062));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_1_Qua_li_com_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_1_Qua_li_com), &style_Main_scrn_ENG_1_Qua_li_com_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Space_com_2
	ui->Main_scrn_ENG_1_Space_com_2 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_7);
	lv_label_set_text(ui->Main_scrn_ENG_1_Space_com_2, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Space_com_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Space_com_2, 673, 53);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Space_com_2, 88, 43);

	//Write style for Main_scrn_ENG_1_Space_com_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Space_com_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Space_com_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Space_com_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Space_com_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Space_com_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Space_com_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Space_com_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Space_com_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Space_com_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Space_com_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Space_com_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Space_com_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Space_com_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Space_com_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_im_com
	ui->Main_scrn_ENG_1_im_com = lv_img_create(ui->Main_scrn_ENG_1_Main_menu_subpage_7);
	lv_obj_add_flag(ui->Main_scrn_ENG_1_im_com, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Main_scrn_ENG_1_im_com, &_Omnigel_alpha_521x240);
	lv_img_set_pivot(ui->Main_scrn_ENG_1_im_com, 250,100);
	lv_img_set_angle(ui->Main_scrn_ENG_1_im_com, 0);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_im_com, 52, 86);
	lv_obj_set_size(ui->Main_scrn_ENG_1_im_com, 521, 240);

	//Write style for Main_scrn_ENG_1_im_com, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Main_scrn_ENG_1_im_com, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Main_scrn_ENG_1_im_com, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_im_com, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Main_scrn_ENG_1_im_com, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Space_com_3
	ui->Main_scrn_ENG_1_Space_com_3 = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_7);
	lv_label_set_text(ui->Main_scrn_ENG_1_Space_com_3, "\n\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Space_com_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Space_com_3, 607, 59);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Space_com_3, 110, 31);

	//Write style for Main_scrn_ENG_1_Space_com_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Space_com_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Space_com_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Space_com_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Space_com_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Space_com_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Space_com_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Space_com_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Space_com_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Space_com_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Space_com_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Space_com_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Space_com_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Space_com_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Space_com_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Price_com
	ui->Main_scrn_ENG_1_Price_com = lv_label_create(ui->Main_scrn_ENG_1_Main_menu_subpage_7);
	lv_label_set_text(ui->Main_scrn_ENG_1_Price_com, "₹72\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Price_com, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Price_com, 174, 325);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Price_com, 160, 80);

	//Write style for Main_scrn_ENG_1_Price_com, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Price_com, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Price_com, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Price_com, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Price_com, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Price_com, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Price_com, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Price_com, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Price_com, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Price_com, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Price_com, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Price_com, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Price_com, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Price_com, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Price_com, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Price_com, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Price_com, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Price_com, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Price_com, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Price_com, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Common_txt_2
	ui->Main_scrn_ENG_1_Common_txt_2 = lv_label_create(ui->Main_scrn_ENG_1);
	lv_label_set_text(ui->Main_scrn_ENG_1_Common_txt_2, "" LV_SYMBOL_LEFT " " LV_SYMBOL_LEFT " " LV_SYMBOL_LEFT " Price for 1 item");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Common_txt_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Common_txt_2, 917, 446);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Common_txt_2, 316, 45);

	//Write style for Main_scrn_ENG_1_Common_txt_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Common_txt_2, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Common_txt_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Common_txt_2, lv_color_hex(0x9ba5ae), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Common_txt_2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Common_txt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Common_txt_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Common_txt_2, &lv_font_PottiSreeramuluRegular_28, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Common_txt_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Common_txt_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Common_txt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Common_txt_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Common_txt_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Common_txt_2, lv_color_hex(0xc5fdd3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Common_txt_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Common_txt_2, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Common_txt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Common_txt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Common_txt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Common_txt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Common_txt_1
	ui->Main_scrn_ENG_1_Common_txt_1 = lv_label_create(ui->Main_scrn_ENG_1);
	lv_label_set_text(ui->Main_scrn_ENG_1_Common_txt_1, "Select the Quantity of this product here  " LV_SYMBOL_RIGHT " " LV_SYMBOL_RIGHT " " LV_SYMBOL_RIGHT " " LV_SYMBOL_RIGHT "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Common_txt_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Common_txt_1, 406, 26);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Common_txt_1, 336, 75);

	//Write style for Main_scrn_ENG_1_Common_txt_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Common_txt_1, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Common_txt_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Common_txt_1, lv_color_hex(0x9ba5ae), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Common_txt_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Common_txt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Common_txt_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Common_txt_1, &lv_font_PottiSreeramuluRegular_28, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Common_txt_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Common_txt_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Common_txt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Common_txt_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Common_txt_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Common_txt_1, lv_color_hex(0xc5fdd3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Common_txt_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Common_txt_1, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Common_txt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Common_txt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Common_txt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Common_txt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_cancel_btn
	ui->Main_scrn_ENG_1_cancel_btn = lv_btn_create(ui->Main_scrn_ENG_1);
	ui->Main_scrn_ENG_1_cancel_btn_label = lv_label_create(ui->Main_scrn_ENG_1_cancel_btn);
	lv_label_set_text(ui->Main_scrn_ENG_1_cancel_btn_label, "CANCEL");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_cancel_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Main_scrn_ENG_1_cancel_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Main_scrn_ENG_1_cancel_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Main_scrn_ENG_1_cancel_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->Main_scrn_ENG_1_cancel_btn, 63, 582);
	lv_obj_set_size(ui->Main_scrn_ENG_1_cancel_btn, 235, 106);

	//Write style for Main_scrn_ENG_1_cancel_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_cancel_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_cancel_btn, lv_color_hex(0xff0027), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_cancel_btn, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Main_scrn_ENG_1_cancel_btn, lv_color_hex(0x500619), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_main_stop(ui->Main_scrn_ENG_1_cancel_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_stop(ui->Main_scrn_ENG_1_cancel_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_cancel_btn, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_cancel_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_cancel_btn, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_cancel_btn, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_cancel_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_cancel_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_cancel_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_cancel_btn, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_cancel_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_cancel_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_proceed_btn
	ui->Main_scrn_ENG_1_proceed_btn = lv_btn_create(ui->Main_scrn_ENG_1);
	ui->Main_scrn_ENG_1_proceed_btn_label = lv_label_create(ui->Main_scrn_ENG_1_proceed_btn);
	lv_label_set_text(ui->Main_scrn_ENG_1_proceed_btn_label, "PROCEED");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_proceed_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Main_scrn_ENG_1_proceed_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Main_scrn_ENG_1_proceed_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Main_scrn_ENG_1_proceed_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->Main_scrn_ENG_1_proceed_btn, 997, 582);
	lv_obj_set_size(ui->Main_scrn_ENG_1_proceed_btn, 235, 106);

	//Write style for Main_scrn_ENG_1_proceed_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_proceed_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_proceed_btn, lv_color_hex(0x00ff32), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_proceed_btn, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Main_scrn_ENG_1_proceed_btn, lv_color_hex(0x003712), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_main_stop(ui->Main_scrn_ENG_1_proceed_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_stop(ui->Main_scrn_ENG_1_proceed_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_proceed_btn, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_proceed_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_proceed_btn, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_proceed_btn, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_proceed_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_proceed_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_proceed_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_proceed_btn, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_proceed_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_proceed_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_chat_txt
	ui->Main_scrn_ENG_1_chat_txt = lv_label_create(ui->Main_scrn_ENG_1);
	lv_label_set_text(ui->Main_scrn_ENG_1_chat_txt, "Unable to find what you need?\nTo chat with me........");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_chat_txt, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_chat_txt, 415, 549);
	lv_obj_set_size(ui->Main_scrn_ENG_1_chat_txt, 487, 65);

	//Write style for Main_scrn_ENG_1_chat_txt, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_chat_txt, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_chat_txt, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_chat_txt, lv_color_hex(0x9ba5ae), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_chat_txt, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_chat_txt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_chat_txt, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_chat_txt, &lv_font_PottiSreeramuluRegular_28, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_chat_txt, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_chat_txt, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_chat_txt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_chat_txt, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_chat_txt, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_chat_txt, lv_color_hex(0xc5fdd3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_chat_txt, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_chat_txt, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_chat_txt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_chat_txt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_chat_txt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_chat_txt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_chat_btn
	ui->Main_scrn_ENG_1_chat_btn = lv_btn_create(ui->Main_scrn_ENG_1);
	ui->Main_scrn_ENG_1_chat_btn_label = lv_label_create(ui->Main_scrn_ENG_1_chat_btn);
	lv_label_set_text(ui->Main_scrn_ENG_1_chat_btn_label, "Click Here  ");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_chat_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Main_scrn_ENG_1_chat_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Main_scrn_ENG_1_chat_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Main_scrn_ENG_1_chat_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->Main_scrn_ENG_1_chat_btn, 446, 628);
	lv_obj_set_size(ui->Main_scrn_ENG_1_chat_btn, 417, 65);

	//Write style for Main_scrn_ENG_1_chat_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_chat_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_chat_btn, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_chat_btn, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Main_scrn_ENG_1_chat_btn, lv_color_hex(0x0a1721), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_main_stop(ui->Main_scrn_ENG_1_chat_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_stop(ui->Main_scrn_ENG_1_chat_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_chat_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_chat_btn, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_chat_btn, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Main_scrn_ENG_1_chat_btn, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Main_scrn_ENG_1_chat_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Main_scrn_ENG_1_chat_btn, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Main_scrn_ENG_1_chat_btn, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Main_scrn_ENG_1_chat_btn, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_chat_btn, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_chat_btn, &lv_font_PottiSreeramuluRegular_46, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_chat_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_chat_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Page_1
	ui->Main_scrn_ENG_1_Page_1 = lv_label_create(ui->Main_scrn_ENG_1);
	lv_label_set_text(ui->Main_scrn_ENG_1_Page_1, "1\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Page_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Page_1, 170, 406);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Page_1, 80, 80);

	//Write style for Main_scrn_ENG_1_Page_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Page_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_1_Page_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_1_Page_1, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_1_Page_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Page_1, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Page_1, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Page_1, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Page_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_1_Page_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_1_Page_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Page_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Page_1, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Page_1, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Page_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_1_Page_1, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_1_Page_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_1_Page_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_1_Page_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Page_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_1_Nxt_page
	ui->Main_scrn_ENG_1_Nxt_page = lv_btn_create(ui->Main_scrn_ENG_1);
	ui->Main_scrn_ENG_1_Nxt_page_label = lv_label_create(ui->Main_scrn_ENG_1_Nxt_page);
	lv_label_set_text(ui->Main_scrn_ENG_1_Nxt_page_label, "" LV_SYMBOL_RIGHT " ");
	lv_label_set_long_mode(ui->Main_scrn_ENG_1_Nxt_page_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Main_scrn_ENG_1_Nxt_page_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Main_scrn_ENG_1_Nxt_page, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Main_scrn_ENG_1_Nxt_page_label, LV_PCT(100));
	lv_obj_set_pos(ui->Main_scrn_ENG_1_Nxt_page, 250, 425);
	lv_obj_set_size(ui->Main_scrn_ENG_1_Nxt_page, 100, 50);

	//Write style for Main_scrn_ENG_1_Nxt_page, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_1_Nxt_page, 181, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_1_Nxt_page, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_1_Nxt_page, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_1_Nxt_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_1_Nxt_page, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_1_Nxt_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_1_Nxt_page, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_1_Nxt_page, &lv_font_PottiSreeramuluRegular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_1_Nxt_page, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_1_Nxt_page, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of Main_scrn_ENG_1.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->Main_scrn_ENG_1);

	//Init events for screen.
	events_init_Main_scrn_ENG_1(ui);
}
