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



void setup_scr_Main_scrn_ENG_3(lv_ui *ui)
{
	//Write codes Main_scrn_ENG_3
	ui->Main_scrn_ENG_3 = lv_obj_create(NULL);
	lv_obj_set_size(ui->Main_scrn_ENG_3, 1280, 720);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for Main_scrn_ENG_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->Main_scrn_ENG_3, &_Background_1280x720, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->Main_scrn_ENG_3, 166, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_recolor(ui->Main_scrn_ENG_3, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_recolor_opa(ui->Main_scrn_ENG_3, 54, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Main_menu
	ui->Main_scrn_ENG_3_Main_menu = lv_menu_create(ui->Main_scrn_ENG_3);

	//Create sidebar page for menu Main_scrn_ENG_3_Main_menu
	ui->Main_scrn_ENG_3_Main_menu_sidebar_page = lv_menu_page_create(ui->Main_scrn_ENG_3_Main_menu, "Medicines List");
	lv_menu_set_sidebar_page(ui->Main_scrn_ENG_3_Main_menu, ui->Main_scrn_ENG_3_Main_menu_sidebar_page);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_3_Main_menu_sidebar_page, LV_SCROLLBAR_MODE_ON);

	//Create subpage for Main_scrn_ENG_3_Main_menu
	ui->Main_scrn_ENG_3_Main_menu_subpage_1 = lv_menu_page_create(ui->Main_scrn_ENG_3_Main_menu, NULL);
	ui->Main_scrn_ENG_3_Main_menu_cont_1 = lv_menu_cont_create(ui->Main_scrn_ENG_3_Main_menu_sidebar_page);
	ui->Main_scrn_ENG_3_Main_menu_label_1 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_cont_1);
	lv_label_set_text(ui->Main_scrn_ENG_3_Main_menu_label_1, "Neosporin");
	lv_obj_set_size(ui->Main_scrn_ENG_3_Main_menu_label_1, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_3_Main_menu_subpage_1, LV_SCROLLBAR_MODE_ON);
	lv_menu_set_load_page_event(ui->Main_scrn_ENG_3_Main_menu, ui->Main_scrn_ENG_3_Main_menu_cont_1, ui->Main_scrn_ENG_3_Main_menu_subpage_1);

	//Create subpage for Main_scrn_ENG_3_Main_menu
	ui->Main_scrn_ENG_3_Main_menu_subpage_2 = lv_menu_page_create(ui->Main_scrn_ENG_3_Main_menu, NULL);
	ui->Main_scrn_ENG_3_Main_menu_cont_2 = lv_menu_cont_create(ui->Main_scrn_ENG_3_Main_menu_sidebar_page);
	ui->Main_scrn_ENG_3_Main_menu_label_2 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_cont_2);
	lv_label_set_text(ui->Main_scrn_ENG_3_Main_menu_label_2, "Otrivin");
	lv_obj_set_size(ui->Main_scrn_ENG_3_Main_menu_label_2, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_3_Main_menu_subpage_2, LV_SCROLLBAR_MODE_ON);
	lv_menu_set_load_page_event(ui->Main_scrn_ENG_3_Main_menu, ui->Main_scrn_ENG_3_Main_menu_cont_2, ui->Main_scrn_ENG_3_Main_menu_subpage_2);

	//Create subpage for Main_scrn_ENG_3_Main_menu
	ui->Main_scrn_ENG_3_Main_menu_subpage_3 = lv_menu_page_create(ui->Main_scrn_ENG_3_Main_menu, NULL);
	ui->Main_scrn_ENG_3_Main_menu_cont_3 = lv_menu_cont_create(ui->Main_scrn_ENG_3_Main_menu_sidebar_page);
	ui->Main_scrn_ENG_3_Main_menu_label_3 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_cont_3);
	lv_label_set_text(ui->Main_scrn_ENG_3_Main_menu_label_3, "Rantac");
	lv_obj_set_size(ui->Main_scrn_ENG_3_Main_menu_label_3, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_3_Main_menu_subpage_3, LV_SCROLLBAR_MODE_ON);
	lv_menu_set_load_page_event(ui->Main_scrn_ENG_3_Main_menu, ui->Main_scrn_ENG_3_Main_menu_cont_3, ui->Main_scrn_ENG_3_Main_menu_subpage_3);

	//Create subpage for Main_scrn_ENG_3_Main_menu
	ui->Main_scrn_ENG_3_Main_menu_subpage_4 = lv_menu_page_create(ui->Main_scrn_ENG_3_Main_menu, NULL);
	ui->Main_scrn_ENG_3_Main_menu_cont_4 = lv_menu_cont_create(ui->Main_scrn_ENG_3_Main_menu_sidebar_page);
	ui->Main_scrn_ENG_3_Main_menu_label_4 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_cont_4);
	lv_label_set_text(ui->Main_scrn_ENG_3_Main_menu_label_4, "Saridon");
	lv_obj_set_size(ui->Main_scrn_ENG_3_Main_menu_label_4, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_3_Main_menu_subpage_4, LV_SCROLLBAR_MODE_ON);
	lv_menu_set_load_page_event(ui->Main_scrn_ENG_3_Main_menu, ui->Main_scrn_ENG_3_Main_menu_cont_4, ui->Main_scrn_ENG_3_Main_menu_subpage_4);

	//Create subpage for Main_scrn_ENG_3_Main_menu
	ui->Main_scrn_ENG_3_Main_menu_subpage_5 = lv_menu_page_create(ui->Main_scrn_ENG_3_Main_menu, NULL);
	ui->Main_scrn_ENG_3_Main_menu_cont_5 = lv_menu_cont_create(ui->Main_scrn_ENG_3_Main_menu_sidebar_page);
	ui->Main_scrn_ENG_3_Main_menu_label_5 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_cont_5);
	lv_label_set_text(ui->Main_scrn_ENG_3_Main_menu_label_5, "Strepsils");
	lv_obj_set_size(ui->Main_scrn_ENG_3_Main_menu_label_5, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_3_Main_menu_subpage_5, LV_SCROLLBAR_MODE_ON);
	lv_menu_set_load_page_event(ui->Main_scrn_ENG_3_Main_menu, ui->Main_scrn_ENG_3_Main_menu_cont_5, ui->Main_scrn_ENG_3_Main_menu_subpage_5);

	//Create subpage for Main_scrn_ENG_3_Main_menu
	ui->Main_scrn_ENG_3_Main_menu_subpage_6 = lv_menu_page_create(ui->Main_scrn_ENG_3_Main_menu, NULL);
	ui->Main_scrn_ENG_3_Main_menu_cont_6 = lv_menu_cont_create(ui->Main_scrn_ENG_3_Main_menu_sidebar_page);
	ui->Main_scrn_ENG_3_Main_menu_label_6 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_cont_6);
	lv_label_set_text(ui->Main_scrn_ENG_3_Main_menu_label_6, "Vicks_VapoRub");
	lv_obj_set_size(ui->Main_scrn_ENG_3_Main_menu_label_6, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_3_Main_menu_subpage_6, LV_SCROLLBAR_MODE_ON);
	lv_menu_set_load_page_event(ui->Main_scrn_ENG_3_Main_menu, ui->Main_scrn_ENG_3_Main_menu_cont_6, ui->Main_scrn_ENG_3_Main_menu_subpage_6);

	//Create subpage for Main_scrn_ENG_3_Main_menu
	ui->Main_scrn_ENG_3_Main_menu_subpage_7 = lv_menu_page_create(ui->Main_scrn_ENG_3_Main_menu, NULL);
	ui->Main_scrn_ENG_3_Main_menu_cont_7 = lv_menu_cont_create(ui->Main_scrn_ENG_3_Main_menu_sidebar_page);
	ui->Main_scrn_ENG_3_Main_menu_label_7 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_cont_7);
	lv_label_set_text(ui->Main_scrn_ENG_3_Main_menu_label_7, "Volini");
	lv_obj_set_size(ui->Main_scrn_ENG_3_Main_menu_label_7, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_3_Main_menu_subpage_7, LV_SCROLLBAR_MODE_ON);
	lv_menu_set_load_page_event(ui->Main_scrn_ENG_3_Main_menu, ui->Main_scrn_ENG_3_Main_menu_cont_7, ui->Main_scrn_ENG_3_Main_menu_subpage_7);
	lv_event_send(ui->Main_scrn_ENG_3_Main_menu_cont_1, LV_EVENT_CLICKED, NULL);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Main_menu, 21, 15);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Main_menu, 1247, 525);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_3_Main_menu, LV_SCROLLBAR_MODE_ON);

	//Write style for Main_scrn_ENG_3_Main_menu, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Main_menu, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Main_menu, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Main_menu, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Main_menu, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Main_menu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_3_Main_menu_extra_sidebar_page_main_default
	static lv_style_t style_Main_scrn_ENG_3_Main_menu_extra_sidebar_page_main_default;
	ui_init_style(&style_Main_scrn_ENG_3_Main_menu_extra_sidebar_page_main_default);
	
	lv_style_set_bg_opa(&style_Main_scrn_ENG_3_Main_menu_extra_sidebar_page_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_3_Main_menu_extra_sidebar_page_main_default, lv_color_hex(0xf2f2f2));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_3_Main_menu_extra_sidebar_page_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_radius(&style_Main_scrn_ENG_3_Main_menu_extra_sidebar_page_main_default, 0);
	lv_obj_add_style(ui->Main_scrn_ENG_3_Main_menu_sidebar_page, &style_Main_scrn_ENG_3_Main_menu_extra_sidebar_page_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_default
	static lv_style_t style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_default;
	ui_init_style(&style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_default);
	
	lv_style_set_text_color(&style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_default, lv_color_hex(0x000000));
	lv_style_set_text_font(&style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_default, &lv_font_Alatsi_Regular_18);
	lv_style_set_text_opa(&style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_default, 255);
	lv_style_set_text_align(&style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_top(&style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_default, 6);
	lv_style_set_pad_bottom(&style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_default, 7);
	lv_obj_add_style(ui->Main_scrn_ENG_3_Main_menu_cont_7, &style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->Main_scrn_ENG_3_Main_menu_cont_6, &style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->Main_scrn_ENG_3_Main_menu_cont_5, &style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->Main_scrn_ENG_3_Main_menu_cont_4, &style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->Main_scrn_ENG_3_Main_menu_cont_3, &style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->Main_scrn_ENG_3_Main_menu_cont_2, &style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->Main_scrn_ENG_3_Main_menu_cont_1, &style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_CHECKED for &style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_checked
	static lv_style_t style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_checked;
	ui_init_style(&style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_checked);
	
	lv_style_set_text_color(&style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_checked, lv_color_hex(0x000000));
	lv_style_set_text_font(&style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_checked, &lv_font_Alatsi_Regular_20);
	lv_style_set_text_opa(&style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_checked, 255);
	lv_style_set_text_align(&style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_border_width(&style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_checked, 2);
	lv_style_set_border_opa(&style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_checked, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_checked, lv_color_hex(0x000000));
	lv_style_set_border_side(&style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_checked, LV_BORDER_SIDE_BOTTOM);
	lv_style_set_radius(&style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_checked, 2);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_checked, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_checked, lv_color_hex(0xd2d2d2));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_checked, LV_GRAD_DIR_HOR);
	lv_style_set_bg_grad_color(&style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_checked, lv_color_hex(0xffffff));
	lv_style_set_bg_main_stop(&style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_checked, 0);
	lv_style_set_bg_grad_stop(&style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_checked, 255);
	lv_obj_add_style(ui->Main_scrn_ENG_3_Main_menu_cont_7, &style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_add_style(ui->Main_scrn_ENG_3_Main_menu_cont_6, &style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_add_style(ui->Main_scrn_ENG_3_Main_menu_cont_5, &style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_add_style(ui->Main_scrn_ENG_3_Main_menu_cont_4, &style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_add_style(ui->Main_scrn_ENG_3_Main_menu_cont_3, &style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_add_style(ui->Main_scrn_ENG_3_Main_menu_cont_2, &style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_add_style(ui->Main_scrn_ENG_3_Main_menu_cont_1, &style_Main_scrn_ENG_3_Main_menu_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_3_Main_menu_extra_main_title_main_default
	static lv_style_t style_Main_scrn_ENG_3_Main_menu_extra_main_title_main_default;
	ui_init_style(&style_Main_scrn_ENG_3_Main_menu_extra_main_title_main_default);
	
	lv_style_set_text_color(&style_Main_scrn_ENG_3_Main_menu_extra_main_title_main_default, lv_color_hex(0x3f4657));
	lv_style_set_text_font(&style_Main_scrn_ENG_3_Main_menu_extra_main_title_main_default, &lv_font_Alatsi_Regular_25);
	lv_style_set_text_opa(&style_Main_scrn_ENG_3_Main_menu_extra_main_title_main_default, 255);
	lv_style_set_text_align(&style_Main_scrn_ENG_3_Main_menu_extra_main_title_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_3_Main_menu_extra_main_title_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_3_Main_menu_extra_main_title_main_default, lv_color_hex(0xd0d0d0));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_3_Main_menu_extra_main_title_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_pad_top(&style_Main_scrn_ENG_3_Main_menu_extra_main_title_main_default, 7);
	lv_style_set_pad_bottom(&style_Main_scrn_ENG_3_Main_menu_extra_main_title_main_default, 7);
	lv_menu_t * Main_scrn_ENG_3_Main_menu_menu= (lv_menu_t *)ui->Main_scrn_ENG_3_Main_menu;
	lv_obj_t * Main_scrn_ENG_3_Main_menu_title = Main_scrn_ENG_3_Main_menu_menu->sidebar_header_title;
	lv_obj_set_size(Main_scrn_ENG_3_Main_menu_title, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_add_style(lv_menu_get_sidebar_header(ui->Main_scrn_ENG_3_Main_menu), &style_Main_scrn_ENG_3_Main_menu_extra_main_title_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes Main_scrn_ENG_3_Space_neo_3
	ui->Main_scrn_ENG_3_Space_neo_3 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_1);
	lv_label_set_text(ui->Main_scrn_ENG_3_Space_neo_3, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Space_neo_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Space_neo_3, 625, 82);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Space_neo_3, 88, 43);

	//Write style for Main_scrn_ENG_3_Space_neo_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Space_neo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Space_neo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Space_neo_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Space_neo_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Space_neo_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Space_neo_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Space_neo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Space_neo_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Space_neo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Space_neo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Space_neo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Space_neo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Space_neo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Space_neo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Qua_li_neo
	ui->Main_scrn_ENG_3_Qua_li_neo = lv_dropdown_create(ui->Main_scrn_ENG_3_Main_menu_subpage_1);
	lv_dropdown_set_options(ui->Main_scrn_ENG_3_Qua_li_neo, "0\n1\n2\n3\n4\n5");
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Qua_li_neo, 423, 58);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Qua_li_neo, 156, 48);

	//Write style for Main_scrn_ENG_3_Qua_li_neo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Qua_li_neo, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Qua_li_neo, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Qua_li_neo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Qua_li_neo, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Qua_li_neo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Qua_li_neo, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Qua_li_neo, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Qua_li_neo, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Qua_li_neo, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Qua_li_neo, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Qua_li_neo, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Qua_li_neo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Qua_li_neo, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Qua_li_neo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Qua_li_neo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Main_scrn_ENG_3_Qua_li_neo, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Qua_li_neo, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Qua_li_neo, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Qua_li_neo, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Qua_li_neo, 1, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Qua_li_neo, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Qua_li_neo, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Qua_li_neo, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Qua_li_neo, 8, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Qua_li_neo, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Qua_li_neo, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Qua_li_neo, 3, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Qua_li_neo, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Qua_li_neo, lv_color_hex(0x3bae90), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Qua_li_neo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Qua_li_neo, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for Main_scrn_ENG_3_Qua_li_neo, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Qua_li_neo, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Qua_li_neo, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Qua_li_neo, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Qua_li_neo, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Qua_li_neo, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Qua_li_neo, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Qua_li_neo, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Qua_li_neo, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Qua_li_neo, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Qua_li_neo, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Qua_li_neo, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Qua_li_neo, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Qua_li_neo, lv_color_hex(0x3bcba6), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Qua_li_neo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Qua_li_neo, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style state: LV_STATE_CHECKED for &style_Main_scrn_ENG_3_Qua_li_neo_extra_list_selected_checked
	static lv_style_t style_Main_scrn_ENG_3_Qua_li_neo_extra_list_selected_checked;
	ui_init_style(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_selected_checked);
	
	lv_style_set_border_width(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_selected_checked, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_selected_checked, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_selected_checked, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_selected_checked, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_selected_checked, lv_color_hex(0x00a1b5));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_selected_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_3_Qua_li_neo), &style_Main_scrn_ENG_3_Qua_li_neo_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_3_Qua_li_neo_extra_list_main_default
	static lv_style_t style_Main_scrn_ENG_3_Qua_li_neo_extra_list_main_default;
	ui_init_style(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_main_default);
	
	lv_style_set_max_height(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_main_default, 90);
	lv_style_set_text_color(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_main_default, &lv_font_montserratMedium_14);
	lv_style_set_text_opa(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_main_default, 255);
	lv_style_set_border_width(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_main_default, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_main_default, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_main_default, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_main_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_main_default, lv_color_hex(0x53a1d9));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_3_Qua_li_neo), &style_Main_scrn_ENG_3_Qua_li_neo_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_3_Qua_li_neo_extra_list_scrollbar_default
	static lv_style_t style_Main_scrn_ENG_3_Qua_li_neo_extra_list_scrollbar_default;
	ui_init_style(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_scrollbar_default);
	
	lv_style_set_radius(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_scrollbar_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_scrollbar_default, lv_color_hex(0x62b062));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_3_Qua_li_neo_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_3_Qua_li_neo), &style_Main_scrn_ENG_3_Qua_li_neo_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Space_neo_2
	ui->Main_scrn_ENG_3_Space_neo_2 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_1);
	lv_label_set_text(ui->Main_scrn_ENG_3_Space_neo_2, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Space_neo_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Space_neo_2, 666, 76);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Space_neo_2, 88, 43);

	//Write style for Main_scrn_ENG_3_Space_neo_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Space_neo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Space_neo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Space_neo_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Space_neo_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Space_neo_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Space_neo_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Space_neo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Space_neo_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Space_neo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Space_neo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Space_neo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Space_neo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Space_neo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Space_neo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_im_neo
	ui->Main_scrn_ENG_3_im_neo = lv_img_create(ui->Main_scrn_ENG_3_Main_menu_subpage_1);
	lv_obj_add_flag(ui->Main_scrn_ENG_3_im_neo, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Main_scrn_ENG_3_im_neo, &_Neosporin_alpha_487x240);
	lv_img_set_pivot(ui->Main_scrn_ENG_3_im_neo, 250,100);
	lv_img_set_angle(ui->Main_scrn_ENG_3_im_neo, 0);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_im_neo, 293, 84);
	lv_obj_set_size(ui->Main_scrn_ENG_3_im_neo, 487, 240);

	//Write style for Main_scrn_ENG_3_im_neo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Main_scrn_ENG_3_im_neo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Main_scrn_ENG_3_im_neo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_im_neo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Main_scrn_ENG_3_im_neo, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Space_neo_1
	ui->Main_scrn_ENG_3_Space_neo_1 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_1);
	lv_label_set_text(ui->Main_scrn_ENG_3_Space_neo_1, "\n\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Space_neo_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Space_neo_1, 657, 56);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Space_neo_1, 110, 31);

	//Write style for Main_scrn_ENG_3_Space_neo_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Space_neo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Space_neo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Space_neo_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Space_neo_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Space_neo_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Space_neo_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Space_neo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Space_neo_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Space_neo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Space_neo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Space_neo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Space_neo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Space_neo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Space_neo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Price_neo
	ui->Main_scrn_ENG_3_Price_neo = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_1);
	lv_label_set_text(ui->Main_scrn_ENG_3_Price_neo, "₹120");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Price_neo, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Price_neo, 224, 414);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Price_neo, 160, 80);

	//Write style for Main_scrn_ENG_3_Price_neo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Price_neo, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Price_neo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Price_neo, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Price_neo, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Price_neo, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Price_neo, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Price_neo, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Price_neo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Price_neo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Price_neo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Price_neo, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Price_neo, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Price_neo, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Price_neo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Price_neo, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Price_neo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Price_neo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Price_neo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Price_neo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes Main_scrn_ENG_3_Space_otr_3
	ui->Main_scrn_ENG_3_Space_otr_3 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_2);
	lv_label_set_text(ui->Main_scrn_ENG_3_Space_otr_3, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Space_otr_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Space_otr_3, 664, 100);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Space_otr_3, 88, 43);

	//Write style for Main_scrn_ENG_3_Space_otr_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Space_otr_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Space_otr_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Space_otr_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Space_otr_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Space_otr_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Space_otr_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Space_otr_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Space_otr_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Space_otr_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Space_otr_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Space_otr_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Space_otr_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Space_otr_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Space_otr_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Qua_li_otr
	ui->Main_scrn_ENG_3_Qua_li_otr = lv_dropdown_create(ui->Main_scrn_ENG_3_Main_menu_subpage_2);
	lv_dropdown_set_options(ui->Main_scrn_ENG_3_Qua_li_otr, "0\n1\n2\n3\n4\n5");
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Qua_li_otr, 423, 58);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Qua_li_otr, 156, 48);

	//Write style for Main_scrn_ENG_3_Qua_li_otr, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Qua_li_otr, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Qua_li_otr, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Qua_li_otr, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Qua_li_otr, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Qua_li_otr, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Qua_li_otr, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Qua_li_otr, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Qua_li_otr, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Qua_li_otr, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Qua_li_otr, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Qua_li_otr, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Qua_li_otr, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Qua_li_otr, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Qua_li_otr, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Qua_li_otr, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Main_scrn_ENG_3_Qua_li_otr, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Qua_li_otr, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Qua_li_otr, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Qua_li_otr, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Qua_li_otr, 1, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Qua_li_otr, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Qua_li_otr, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Qua_li_otr, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Qua_li_otr, 8, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Qua_li_otr, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Qua_li_otr, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Qua_li_otr, 3, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Qua_li_otr, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Qua_li_otr, lv_color_hex(0x3bae90), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Qua_li_otr, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Qua_li_otr, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for Main_scrn_ENG_3_Qua_li_otr, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Qua_li_otr, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Qua_li_otr, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Qua_li_otr, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Qua_li_otr, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Qua_li_otr, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Qua_li_otr, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Qua_li_otr, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Qua_li_otr, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Qua_li_otr, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Qua_li_otr, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Qua_li_otr, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Qua_li_otr, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Qua_li_otr, lv_color_hex(0x3bcba6), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Qua_li_otr, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Qua_li_otr, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style state: LV_STATE_CHECKED for &style_Main_scrn_ENG_3_Qua_li_otr_extra_list_selected_checked
	static lv_style_t style_Main_scrn_ENG_3_Qua_li_otr_extra_list_selected_checked;
	ui_init_style(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_selected_checked);
	
	lv_style_set_border_width(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_selected_checked, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_selected_checked, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_selected_checked, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_selected_checked, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_selected_checked, lv_color_hex(0x00a1b5));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_selected_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_3_Qua_li_otr), &style_Main_scrn_ENG_3_Qua_li_otr_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_3_Qua_li_otr_extra_list_main_default
	static lv_style_t style_Main_scrn_ENG_3_Qua_li_otr_extra_list_main_default;
	ui_init_style(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_main_default);
	
	lv_style_set_max_height(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_main_default, 90);
	lv_style_set_text_color(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_main_default, &lv_font_montserratMedium_14);
	lv_style_set_text_opa(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_main_default, 255);
	lv_style_set_border_width(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_main_default, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_main_default, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_main_default, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_main_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_main_default, lv_color_hex(0x53a1d9));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_3_Qua_li_otr), &style_Main_scrn_ENG_3_Qua_li_otr_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_3_Qua_li_otr_extra_list_scrollbar_default
	static lv_style_t style_Main_scrn_ENG_3_Qua_li_otr_extra_list_scrollbar_default;
	ui_init_style(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_scrollbar_default);
	
	lv_style_set_radius(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_scrollbar_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_scrollbar_default, lv_color_hex(0x62b062));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_3_Qua_li_otr_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_3_Qua_li_otr), &style_Main_scrn_ENG_3_Qua_li_otr_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Space_otr_2
	ui->Main_scrn_ENG_3_Space_otr_2 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_2);
	lv_label_set_text(ui->Main_scrn_ENG_3_Space_otr_2, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Space_otr_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Space_otr_2, 650, 73);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Space_otr_2, 88, 43);

	//Write style for Main_scrn_ENG_3_Space_otr_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Space_otr_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Space_otr_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Space_otr_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Space_otr_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Space_otr_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Space_otr_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Space_otr_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Space_otr_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Space_otr_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Space_otr_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Space_otr_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Space_otr_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Space_otr_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Space_otr_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_im_otr
	ui->Main_scrn_ENG_3_im_otr = lv_img_create(ui->Main_scrn_ENG_3_Main_menu_subpage_2);
	lv_obj_add_flag(ui->Main_scrn_ENG_3_im_otr, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Main_scrn_ENG_3_im_otr, &_Otrivin_alpha_213x240);
	lv_img_set_pivot(ui->Main_scrn_ENG_3_im_otr, 250,100);
	lv_img_set_angle(ui->Main_scrn_ENG_3_im_otr, 0);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_im_otr, 273, 110);
	lv_obj_set_size(ui->Main_scrn_ENG_3_im_otr, 213, 240);

	//Write style for Main_scrn_ENG_3_im_otr, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Main_scrn_ENG_3_im_otr, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Main_scrn_ENG_3_im_otr, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_im_otr, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Main_scrn_ENG_3_im_otr, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Space_otr_1
	ui->Main_scrn_ENG_3_Space_otr_1 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_2);
	lv_label_set_text(ui->Main_scrn_ENG_3_Space_otr_1, "\n\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Space_otr_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Space_otr_1, 632, 74);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Space_otr_1, 110, 31);

	//Write style for Main_scrn_ENG_3_Space_otr_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Space_otr_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Space_otr_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Space_otr_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Space_otr_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Space_otr_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Space_otr_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Space_otr_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Space_otr_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Space_otr_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Space_otr_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Space_otr_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Space_otr_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Space_otr_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Space_otr_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Price_otr
	ui->Main_scrn_ENG_3_Price_otr = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_2);
	lv_label_set_text(ui->Main_scrn_ENG_3_Price_otr, "₹44\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Price_otr, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Price_otr, 226, 343);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Price_otr, 160, 80);

	//Write style for Main_scrn_ENG_3_Price_otr, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Price_otr, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Price_otr, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Price_otr, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Price_otr, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Price_otr, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Price_otr, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Price_otr, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Price_otr, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Price_otr, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Price_otr, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Price_otr, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Price_otr, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Price_otr, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Price_otr, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Price_otr, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Price_otr, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Price_otr, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Price_otr, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Price_otr, 0, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes Main_scrn_ENG_3_Space_ran_3
	ui->Main_scrn_ENG_3_Space_ran_3 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_3);
	lv_label_set_text(ui->Main_scrn_ENG_3_Space_ran_3, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Space_ran_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Space_ran_3, 634, 100);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Space_ran_3, 88, 43);

	//Write style for Main_scrn_ENG_3_Space_ran_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Space_ran_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Space_ran_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Space_ran_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Space_ran_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Space_ran_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Space_ran_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Space_ran_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Space_ran_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Space_ran_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Space_ran_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Space_ran_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Space_ran_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Space_ran_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Space_ran_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Qua_li_ran
	ui->Main_scrn_ENG_3_Qua_li_ran = lv_dropdown_create(ui->Main_scrn_ENG_3_Main_menu_subpage_3);
	lv_dropdown_set_options(ui->Main_scrn_ENG_3_Qua_li_ran, "0\n1\n2\n3\n4\n5");
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Qua_li_ran, 423, 58);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Qua_li_ran, 156, 48);

	//Write style for Main_scrn_ENG_3_Qua_li_ran, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Qua_li_ran, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Qua_li_ran, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Qua_li_ran, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Qua_li_ran, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Qua_li_ran, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Qua_li_ran, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Qua_li_ran, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Qua_li_ran, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Qua_li_ran, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Qua_li_ran, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Qua_li_ran, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Qua_li_ran, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Qua_li_ran, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Qua_li_ran, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Qua_li_ran, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Main_scrn_ENG_3_Qua_li_ran, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Qua_li_ran, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Qua_li_ran, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Qua_li_ran, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Qua_li_ran, 1, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Qua_li_ran, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Qua_li_ran, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Qua_li_ran, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Qua_li_ran, 8, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Qua_li_ran, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Qua_li_ran, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Qua_li_ran, 3, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Qua_li_ran, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Qua_li_ran, lv_color_hex(0x3bae90), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Qua_li_ran, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Qua_li_ran, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for Main_scrn_ENG_3_Qua_li_ran, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Qua_li_ran, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Qua_li_ran, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Qua_li_ran, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Qua_li_ran, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Qua_li_ran, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Qua_li_ran, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Qua_li_ran, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Qua_li_ran, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Qua_li_ran, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Qua_li_ran, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Qua_li_ran, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Qua_li_ran, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Qua_li_ran, lv_color_hex(0x3bcba6), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Qua_li_ran, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Qua_li_ran, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style state: LV_STATE_CHECKED for &style_Main_scrn_ENG_3_Qua_li_ran_extra_list_selected_checked
	static lv_style_t style_Main_scrn_ENG_3_Qua_li_ran_extra_list_selected_checked;
	ui_init_style(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_selected_checked);
	
	lv_style_set_border_width(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_selected_checked, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_selected_checked, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_selected_checked, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_selected_checked, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_selected_checked, lv_color_hex(0x00a1b5));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_selected_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_3_Qua_li_ran), &style_Main_scrn_ENG_3_Qua_li_ran_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_3_Qua_li_ran_extra_list_main_default
	static lv_style_t style_Main_scrn_ENG_3_Qua_li_ran_extra_list_main_default;
	ui_init_style(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_main_default);
	
	lv_style_set_max_height(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_main_default, 90);
	lv_style_set_text_color(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_main_default, &lv_font_montserratMedium_14);
	lv_style_set_text_opa(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_main_default, 255);
	lv_style_set_border_width(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_main_default, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_main_default, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_main_default, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_main_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_main_default, lv_color_hex(0x53a1d9));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_3_Qua_li_ran), &style_Main_scrn_ENG_3_Qua_li_ran_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_3_Qua_li_ran_extra_list_scrollbar_default
	static lv_style_t style_Main_scrn_ENG_3_Qua_li_ran_extra_list_scrollbar_default;
	ui_init_style(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_scrollbar_default);
	
	lv_style_set_radius(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_scrollbar_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_scrollbar_default, lv_color_hex(0x62b062));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_3_Qua_li_ran_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_3_Qua_li_ran), &style_Main_scrn_ENG_3_Qua_li_ran_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Space_ran_2
	ui->Main_scrn_ENG_3_Space_ran_2 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_3);
	lv_label_set_text(ui->Main_scrn_ENG_3_Space_ran_2, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Space_ran_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Space_ran_2, 674, 69);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Space_ran_2, 88, 43);

	//Write style for Main_scrn_ENG_3_Space_ran_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Space_ran_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Space_ran_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Space_ran_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Space_ran_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Space_ran_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Space_ran_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Space_ran_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Space_ran_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Space_ran_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Space_ran_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Space_ran_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Space_ran_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Space_ran_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Space_ran_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_im_ran
	ui->Main_scrn_ENG_3_im_ran = lv_img_create(ui->Main_scrn_ENG_3_Main_menu_subpage_3);
	lv_obj_add_flag(ui->Main_scrn_ENG_3_im_ran, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Main_scrn_ENG_3_im_ran, &_Rantac_alpha_229x240);
	lv_img_set_pivot(ui->Main_scrn_ENG_3_im_ran, 250,100);
	lv_img_set_angle(ui->Main_scrn_ENG_3_im_ran, 0);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_im_ran, 286, 121);
	lv_obj_set_size(ui->Main_scrn_ENG_3_im_ran, 229, 240);

	//Write style for Main_scrn_ENG_3_im_ran, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Main_scrn_ENG_3_im_ran, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Main_scrn_ENG_3_im_ran, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_im_ran, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Main_scrn_ENG_3_im_ran, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Space_ran_1
	ui->Main_scrn_ENG_3_Space_ran_1 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_3);
	lv_label_set_text(ui->Main_scrn_ENG_3_Space_ran_1, "\n\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Space_ran_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Space_ran_1, 669, 68);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Space_ran_1, 110, 31);

	//Write style for Main_scrn_ENG_3_Space_ran_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Space_ran_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Space_ran_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Space_ran_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Space_ran_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Space_ran_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Space_ran_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Space_ran_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Space_ran_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Space_ran_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Space_ran_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Space_ran_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Space_ran_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Space_ran_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Space_ran_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Price_ran
	ui->Main_scrn_ENG_3_Price_ran = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_3);
	lv_label_set_text(ui->Main_scrn_ENG_3_Price_ran, "₹50\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Price_ran, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Price_ran, 204, 353);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Price_ran, 160, 80);

	//Write style for Main_scrn_ENG_3_Price_ran, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Price_ran, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Price_ran, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Price_ran, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Price_ran, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Price_ran, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Price_ran, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Price_ran, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Price_ran, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Price_ran, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Price_ran, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Price_ran, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Price_ran, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Price_ran, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Price_ran, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Price_ran, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Price_ran, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Price_ran, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Price_ran, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Price_ran, 0, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes Main_scrn_ENG_3_Space_sar_3
	ui->Main_scrn_ENG_3_Space_sar_3 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_4);
	lv_label_set_text(ui->Main_scrn_ENG_3_Space_sar_3, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Space_sar_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Space_sar_3, 653, 75);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Space_sar_3, 88, 43);

	//Write style for Main_scrn_ENG_3_Space_sar_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Space_sar_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Space_sar_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Space_sar_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Space_sar_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Space_sar_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Space_sar_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Space_sar_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Space_sar_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Space_sar_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Space_sar_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Space_sar_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Space_sar_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Space_sar_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Space_sar_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Qua_li_sar
	ui->Main_scrn_ENG_3_Qua_li_sar = lv_dropdown_create(ui->Main_scrn_ENG_3_Main_menu_subpage_4);
	lv_dropdown_set_options(ui->Main_scrn_ENG_3_Qua_li_sar, "0\n1\n2\n3\n4\n5");
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Qua_li_sar, 423, 58);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Qua_li_sar, 156, 48);

	//Write style for Main_scrn_ENG_3_Qua_li_sar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Qua_li_sar, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Qua_li_sar, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Qua_li_sar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Qua_li_sar, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Qua_li_sar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Qua_li_sar, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Qua_li_sar, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Qua_li_sar, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Qua_li_sar, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Qua_li_sar, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Qua_li_sar, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Qua_li_sar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Qua_li_sar, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Qua_li_sar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Qua_li_sar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Main_scrn_ENG_3_Qua_li_sar, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Qua_li_sar, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Qua_li_sar, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Qua_li_sar, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Qua_li_sar, 1, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Qua_li_sar, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Qua_li_sar, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Qua_li_sar, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Qua_li_sar, 8, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Qua_li_sar, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Qua_li_sar, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Qua_li_sar, 3, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Qua_li_sar, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Qua_li_sar, lv_color_hex(0x3bae90), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Qua_li_sar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Qua_li_sar, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for Main_scrn_ENG_3_Qua_li_sar, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Qua_li_sar, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Qua_li_sar, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Qua_li_sar, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Qua_li_sar, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Qua_li_sar, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Qua_li_sar, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Qua_li_sar, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Qua_li_sar, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Qua_li_sar, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Qua_li_sar, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Qua_li_sar, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Qua_li_sar, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Qua_li_sar, lv_color_hex(0x3bcba6), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Qua_li_sar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Qua_li_sar, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style state: LV_STATE_CHECKED for &style_Main_scrn_ENG_3_Qua_li_sar_extra_list_selected_checked
	static lv_style_t style_Main_scrn_ENG_3_Qua_li_sar_extra_list_selected_checked;
	ui_init_style(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_selected_checked);
	
	lv_style_set_border_width(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_selected_checked, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_selected_checked, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_selected_checked, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_selected_checked, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_selected_checked, lv_color_hex(0x00a1b5));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_selected_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_3_Qua_li_sar), &style_Main_scrn_ENG_3_Qua_li_sar_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_3_Qua_li_sar_extra_list_main_default
	static lv_style_t style_Main_scrn_ENG_3_Qua_li_sar_extra_list_main_default;
	ui_init_style(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_main_default);
	
	lv_style_set_max_height(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_main_default, 90);
	lv_style_set_text_color(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_main_default, &lv_font_montserratMedium_14);
	lv_style_set_text_opa(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_main_default, 255);
	lv_style_set_border_width(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_main_default, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_main_default, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_main_default, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_main_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_main_default, lv_color_hex(0x53a1d9));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_3_Qua_li_sar), &style_Main_scrn_ENG_3_Qua_li_sar_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_3_Qua_li_sar_extra_list_scrollbar_default
	static lv_style_t style_Main_scrn_ENG_3_Qua_li_sar_extra_list_scrollbar_default;
	ui_init_style(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_scrollbar_default);
	
	lv_style_set_radius(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_scrollbar_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_scrollbar_default, lv_color_hex(0x62b062));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_3_Qua_li_sar_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_3_Qua_li_sar), &style_Main_scrn_ENG_3_Qua_li_sar_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Space_sar_2
	ui->Main_scrn_ENG_3_Space_sar_2 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_4);
	lv_label_set_text(ui->Main_scrn_ENG_3_Space_sar_2, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Space_sar_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Space_sar_2, 671, 77);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Space_sar_2, 88, 43);

	//Write style for Main_scrn_ENG_3_Space_sar_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Space_sar_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Space_sar_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Space_sar_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Space_sar_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Space_sar_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Space_sar_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Space_sar_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Space_sar_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Space_sar_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Space_sar_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Space_sar_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Space_sar_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Space_sar_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Space_sar_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_im_sar
	ui->Main_scrn_ENG_3_im_sar = lv_img_create(ui->Main_scrn_ENG_3_Main_menu_subpage_4);
	lv_obj_add_flag(ui->Main_scrn_ENG_3_im_sar, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Main_scrn_ENG_3_im_sar, &_Saridon_alpha_140x240);
	lv_img_set_pivot(ui->Main_scrn_ENG_3_im_sar, 250,100);
	lv_img_set_angle(ui->Main_scrn_ENG_3_im_sar, 0);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_im_sar, 269, 113);
	lv_obj_set_size(ui->Main_scrn_ENG_3_im_sar, 140, 240);

	//Write style for Main_scrn_ENG_3_im_sar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Main_scrn_ENG_3_im_sar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Main_scrn_ENG_3_im_sar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_im_sar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Main_scrn_ENG_3_im_sar, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Space_sar_1
	ui->Main_scrn_ENG_3_Space_sar_1 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_4);
	lv_label_set_text(ui->Main_scrn_ENG_3_Space_sar_1, "\n\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Space_sar_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Space_sar_1, 663, 71);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Space_sar_1, 110, 31);

	//Write style for Main_scrn_ENG_3_Space_sar_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Space_sar_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Space_sar_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Space_sar_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Space_sar_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Space_sar_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Space_sar_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Space_sar_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Space_sar_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Space_sar_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Space_sar_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Space_sar_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Space_sar_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Space_sar_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Space_sar_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Price_sar
	ui->Main_scrn_ENG_3_Price_sar = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_4);
	lv_label_set_text(ui->Main_scrn_ENG_3_Price_sar, "₹50\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Price_sar, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Price_sar, 224, 353);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Price_sar, 160, 80);

	//Write style for Main_scrn_ENG_3_Price_sar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Price_sar, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Price_sar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Price_sar, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Price_sar, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Price_sar, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Price_sar, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Price_sar, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Price_sar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Price_sar, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Price_sar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Price_sar, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Price_sar, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Price_sar, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Price_sar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Price_sar, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Price_sar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Price_sar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Price_sar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Price_sar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes Main_scrn_ENG_3_Space_str_3
	ui->Main_scrn_ENG_3_Space_str_3 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_5);
	lv_label_set_text(ui->Main_scrn_ENG_3_Space_str_3, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Space_str_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Space_str_3, 635, 85);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Space_str_3, 88, 43);

	//Write style for Main_scrn_ENG_3_Space_str_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Space_str_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Space_str_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Space_str_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Space_str_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Space_str_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Space_str_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Space_str_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Space_str_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Space_str_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Space_str_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Space_str_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Space_str_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Space_str_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Space_str_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Qua_li_str
	ui->Main_scrn_ENG_3_Qua_li_str = lv_dropdown_create(ui->Main_scrn_ENG_3_Main_menu_subpage_5);
	lv_dropdown_set_options(ui->Main_scrn_ENG_3_Qua_li_str, "0\n1\n2\n3\n4\n5");
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Qua_li_str, 423, 58);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Qua_li_str, 156, 48);

	//Write style for Main_scrn_ENG_3_Qua_li_str, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Qua_li_str, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Qua_li_str, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Qua_li_str, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Qua_li_str, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Qua_li_str, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Qua_li_str, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Qua_li_str, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Qua_li_str, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Qua_li_str, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Qua_li_str, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Qua_li_str, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Qua_li_str, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Qua_li_str, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Qua_li_str, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Qua_li_str, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Main_scrn_ENG_3_Qua_li_str, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Qua_li_str, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Qua_li_str, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Qua_li_str, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Qua_li_str, 1, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Qua_li_str, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Qua_li_str, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Qua_li_str, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Qua_li_str, 8, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Qua_li_str, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Qua_li_str, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Qua_li_str, 3, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Qua_li_str, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Qua_li_str, lv_color_hex(0x3bae90), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Qua_li_str, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Qua_li_str, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for Main_scrn_ENG_3_Qua_li_str, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Qua_li_str, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Qua_li_str, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Qua_li_str, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Qua_li_str, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Qua_li_str, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Qua_li_str, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Qua_li_str, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Qua_li_str, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Qua_li_str, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Qua_li_str, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Qua_li_str, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Qua_li_str, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Qua_li_str, lv_color_hex(0x3bcba6), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Qua_li_str, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Qua_li_str, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style state: LV_STATE_CHECKED for &style_Main_scrn_ENG_3_Qua_li_str_extra_list_selected_checked
	static lv_style_t style_Main_scrn_ENG_3_Qua_li_str_extra_list_selected_checked;
	ui_init_style(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_selected_checked);
	
	lv_style_set_border_width(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_selected_checked, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_selected_checked, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_selected_checked, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_selected_checked, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_selected_checked, lv_color_hex(0x00a1b5));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_selected_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_3_Qua_li_str), &style_Main_scrn_ENG_3_Qua_li_str_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_3_Qua_li_str_extra_list_main_default
	static lv_style_t style_Main_scrn_ENG_3_Qua_li_str_extra_list_main_default;
	ui_init_style(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_main_default);
	
	lv_style_set_max_height(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_main_default, 90);
	lv_style_set_text_color(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_main_default, &lv_font_montserratMedium_14);
	lv_style_set_text_opa(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_main_default, 255);
	lv_style_set_border_width(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_main_default, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_main_default, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_main_default, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_main_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_main_default, lv_color_hex(0x53a1d9));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_3_Qua_li_str), &style_Main_scrn_ENG_3_Qua_li_str_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_3_Qua_li_str_extra_list_scrollbar_default
	static lv_style_t style_Main_scrn_ENG_3_Qua_li_str_extra_list_scrollbar_default;
	ui_init_style(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_scrollbar_default);
	
	lv_style_set_radius(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_scrollbar_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_scrollbar_default, lv_color_hex(0x62b062));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_3_Qua_li_str_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_3_Qua_li_str), &style_Main_scrn_ENG_3_Qua_li_str_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Space_str_2
	ui->Main_scrn_ENG_3_Space_str_2 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_5);
	lv_label_set_text(ui->Main_scrn_ENG_3_Space_str_2, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Space_str_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Space_str_2, 654, 64);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Space_str_2, 88, 43);

	//Write style for Main_scrn_ENG_3_Space_str_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Space_str_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Space_str_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Space_str_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Space_str_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Space_str_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Space_str_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Space_str_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Space_str_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Space_str_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Space_str_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Space_str_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Space_str_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Space_str_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Space_str_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_im_str
	ui->Main_scrn_ENG_3_im_str = lv_img_create(ui->Main_scrn_ENG_3_Main_menu_subpage_5);
	lv_obj_add_flag(ui->Main_scrn_ENG_3_im_str, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Main_scrn_ENG_3_im_str, &_Strepsils_alpha_405x240);
	lv_img_set_pivot(ui->Main_scrn_ENG_3_im_str, 250,100);
	lv_img_set_angle(ui->Main_scrn_ENG_3_im_str, 0);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_im_str, 282, 115);
	lv_obj_set_size(ui->Main_scrn_ENG_3_im_str, 405, 240);

	//Write style for Main_scrn_ENG_3_im_str, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Main_scrn_ENG_3_im_str, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Main_scrn_ENG_3_im_str, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_im_str, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Main_scrn_ENG_3_im_str, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Space_str_1
	ui->Main_scrn_ENG_3_Space_str_1 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_5);
	lv_label_set_text(ui->Main_scrn_ENG_3_Space_str_1, "\n\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Space_str_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Space_str_1, 641, 81);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Space_str_1, 110, 31);

	//Write style for Main_scrn_ENG_3_Space_str_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Space_str_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Space_str_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Space_str_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Space_str_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Space_str_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Space_str_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Space_str_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Space_str_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Space_str_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Space_str_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Space_str_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Space_str_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Space_str_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Space_str_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Price_str
	ui->Main_scrn_ENG_3_Price_str = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_5);
	lv_label_set_text(ui->Main_scrn_ENG_3_Price_str, "₹26\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Price_str, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Price_str, 229, 365);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Price_str, 160, 80);

	//Write style for Main_scrn_ENG_3_Price_str, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Price_str, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Price_str, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Price_str, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Price_str, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Price_str, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Price_str, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Price_str, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Price_str, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Price_str, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Price_str, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Price_str, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Price_str, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Price_str, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Price_str, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Price_str, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Price_str, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Price_str, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Price_str, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Price_str, 0, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes Main_scrn_ENG_3_Space_vic_3
	ui->Main_scrn_ENG_3_Space_vic_3 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_6);
	lv_label_set_text(ui->Main_scrn_ENG_3_Space_vic_3, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Space_vic_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Space_vic_3, 628, 80);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Space_vic_3, 88, 43);

	//Write style for Main_scrn_ENG_3_Space_vic_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Space_vic_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Space_vic_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Space_vic_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Space_vic_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Space_vic_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Space_vic_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Space_vic_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Space_vic_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Space_vic_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Space_vic_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Space_vic_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Space_vic_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Space_vic_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Space_vic_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Qua_li_vic
	ui->Main_scrn_ENG_3_Qua_li_vic = lv_dropdown_create(ui->Main_scrn_ENG_3_Main_menu_subpage_6);
	lv_dropdown_set_options(ui->Main_scrn_ENG_3_Qua_li_vic, "0\n1\n2\n3\n4\n5");
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Qua_li_vic, 423, 58);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Qua_li_vic, 156, 48);

	//Write style for Main_scrn_ENG_3_Qua_li_vic, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Qua_li_vic, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Qua_li_vic, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Qua_li_vic, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Qua_li_vic, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Qua_li_vic, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Qua_li_vic, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Qua_li_vic, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Qua_li_vic, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Qua_li_vic, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Qua_li_vic, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Qua_li_vic, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Qua_li_vic, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Qua_li_vic, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Qua_li_vic, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Qua_li_vic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Main_scrn_ENG_3_Qua_li_vic, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Qua_li_vic, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Qua_li_vic, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Qua_li_vic, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Qua_li_vic, 1, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Qua_li_vic, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Qua_li_vic, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Qua_li_vic, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Qua_li_vic, 8, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Qua_li_vic, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Qua_li_vic, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Qua_li_vic, 3, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Qua_li_vic, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Qua_li_vic, lv_color_hex(0x3bae90), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Qua_li_vic, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Qua_li_vic, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for Main_scrn_ENG_3_Qua_li_vic, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Qua_li_vic, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Qua_li_vic, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Qua_li_vic, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Qua_li_vic, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Qua_li_vic, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Qua_li_vic, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Qua_li_vic, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Qua_li_vic, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Qua_li_vic, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Qua_li_vic, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Qua_li_vic, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Qua_li_vic, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Qua_li_vic, lv_color_hex(0x3bcba6), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Qua_li_vic, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Qua_li_vic, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style state: LV_STATE_CHECKED for &style_Main_scrn_ENG_3_Qua_li_vic_extra_list_selected_checked
	static lv_style_t style_Main_scrn_ENG_3_Qua_li_vic_extra_list_selected_checked;
	ui_init_style(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_selected_checked);
	
	lv_style_set_border_width(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_selected_checked, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_selected_checked, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_selected_checked, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_selected_checked, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_selected_checked, lv_color_hex(0x00a1b5));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_selected_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_3_Qua_li_vic), &style_Main_scrn_ENG_3_Qua_li_vic_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_3_Qua_li_vic_extra_list_main_default
	static lv_style_t style_Main_scrn_ENG_3_Qua_li_vic_extra_list_main_default;
	ui_init_style(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_main_default);
	
	lv_style_set_max_height(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_main_default, 90);
	lv_style_set_text_color(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_main_default, &lv_font_montserratMedium_14);
	lv_style_set_text_opa(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_main_default, 255);
	lv_style_set_border_width(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_main_default, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_main_default, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_main_default, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_main_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_main_default, lv_color_hex(0x53a1d9));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_3_Qua_li_vic), &style_Main_scrn_ENG_3_Qua_li_vic_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_3_Qua_li_vic_extra_list_scrollbar_default
	static lv_style_t style_Main_scrn_ENG_3_Qua_li_vic_extra_list_scrollbar_default;
	ui_init_style(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_scrollbar_default);
	
	lv_style_set_radius(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_scrollbar_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_scrollbar_default, lv_color_hex(0x62b062));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_3_Qua_li_vic_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_3_Qua_li_vic), &style_Main_scrn_ENG_3_Qua_li_vic_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Space_vic_2
	ui->Main_scrn_ENG_3_Space_vic_2 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_6);
	lv_label_set_text(ui->Main_scrn_ENG_3_Space_vic_2, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Space_vic_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Space_vic_2, 675, 51);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Space_vic_2, 88, 43);

	//Write style for Main_scrn_ENG_3_Space_vic_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Space_vic_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Space_vic_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Space_vic_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Space_vic_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Space_vic_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Space_vic_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Space_vic_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Space_vic_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Space_vic_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Space_vic_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Space_vic_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Space_vic_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Space_vic_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Space_vic_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_im_vic
	ui->Main_scrn_ENG_3_im_vic = lv_img_create(ui->Main_scrn_ENG_3_Main_menu_subpage_6);
	lv_obj_add_flag(ui->Main_scrn_ENG_3_im_vic, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Main_scrn_ENG_3_im_vic, &_Vicks_VapoRub_alpha_433x240);
	lv_img_set_pivot(ui->Main_scrn_ENG_3_im_vic, 250,100);
	lv_img_set_angle(ui->Main_scrn_ENG_3_im_vic, 0);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_im_vic, 293, 86);
	lv_obj_set_size(ui->Main_scrn_ENG_3_im_vic, 433, 240);

	//Write style for Main_scrn_ENG_3_im_vic, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Main_scrn_ENG_3_im_vic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Main_scrn_ENG_3_im_vic, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_im_vic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Main_scrn_ENG_3_im_vic, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Space_vic_1
	ui->Main_scrn_ENG_3_Space_vic_1 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_6);
	lv_label_set_text(ui->Main_scrn_ENG_3_Space_vic_1, "\n\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Space_vic_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Space_vic_1, 652, 82);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Space_vic_1, 110, 31);

	//Write style for Main_scrn_ENG_3_Space_vic_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Space_vic_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Space_vic_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Space_vic_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Space_vic_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Space_vic_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Space_vic_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Space_vic_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Space_vic_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Space_vic_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Space_vic_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Space_vic_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Space_vic_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Space_vic_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Space_vic_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Price_vic
	ui->Main_scrn_ENG_3_Price_vic = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_6);
	lv_label_set_text(ui->Main_scrn_ENG_3_Price_vic, "₹23\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Price_vic, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Price_vic, 215, 374);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Price_vic, 160, 80);

	//Write style for Main_scrn_ENG_3_Price_vic, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Price_vic, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Price_vic, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Price_vic, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Price_vic, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Price_vic, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Price_vic, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Price_vic, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Price_vic, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Price_vic, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Price_vic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Price_vic, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Price_vic, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Price_vic, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Price_vic, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Price_vic, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Price_vic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Price_vic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Price_vic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Price_vic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes Main_scrn_ENG_3_Space_vol_3
	ui->Main_scrn_ENG_3_Space_vol_3 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_7);
	lv_label_set_text(ui->Main_scrn_ENG_3_Space_vol_3, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Space_vol_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Space_vol_3, 636, 102);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Space_vol_3, 88, 43);

	//Write style for Main_scrn_ENG_3_Space_vol_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Space_vol_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Space_vol_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Space_vol_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Space_vol_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Space_vol_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Space_vol_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Space_vol_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Space_vol_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Space_vol_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Space_vol_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Space_vol_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Space_vol_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Space_vol_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Space_vol_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Qua_li_vol
	ui->Main_scrn_ENG_3_Qua_li_vol = lv_dropdown_create(ui->Main_scrn_ENG_3_Main_menu_subpage_7);
	lv_dropdown_set_options(ui->Main_scrn_ENG_3_Qua_li_vol, "0\n1\n2\n3\n4\n5");
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Qua_li_vol, 423, 58);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Qua_li_vol, 156, 48);

	//Write style for Main_scrn_ENG_3_Qua_li_vol, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Qua_li_vol, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Qua_li_vol, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Qua_li_vol, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Qua_li_vol, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Qua_li_vol, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Qua_li_vol, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Qua_li_vol, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Qua_li_vol, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Qua_li_vol, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Qua_li_vol, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Qua_li_vol, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Qua_li_vol, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Qua_li_vol, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Qua_li_vol, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Qua_li_vol, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Main_scrn_ENG_3_Qua_li_vol, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Qua_li_vol, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Qua_li_vol, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Qua_li_vol, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Qua_li_vol, 1, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Qua_li_vol, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Qua_li_vol, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Qua_li_vol, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Qua_li_vol, 8, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Qua_li_vol, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Qua_li_vol, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Qua_li_vol, 3, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Qua_li_vol, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Qua_li_vol, lv_color_hex(0x3bae90), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Qua_li_vol, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Qua_li_vol, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for Main_scrn_ENG_3_Qua_li_vol, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Qua_li_vol, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Qua_li_vol, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Qua_li_vol, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Qua_li_vol, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Qua_li_vol, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Qua_li_vol, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Qua_li_vol, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Qua_li_vol, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Qua_li_vol, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Qua_li_vol, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Qua_li_vol, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Qua_li_vol, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Qua_li_vol, lv_color_hex(0x3bcba6), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Qua_li_vol, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Qua_li_vol, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style state: LV_STATE_CHECKED for &style_Main_scrn_ENG_3_Qua_li_vol_extra_list_selected_checked
	static lv_style_t style_Main_scrn_ENG_3_Qua_li_vol_extra_list_selected_checked;
	ui_init_style(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_selected_checked);
	
	lv_style_set_border_width(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_selected_checked, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_selected_checked, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_selected_checked, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_selected_checked, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_selected_checked, lv_color_hex(0x00a1b5));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_selected_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_3_Qua_li_vol), &style_Main_scrn_ENG_3_Qua_li_vol_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_3_Qua_li_vol_extra_list_main_default
	static lv_style_t style_Main_scrn_ENG_3_Qua_li_vol_extra_list_main_default;
	ui_init_style(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_main_default);
	
	lv_style_set_max_height(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_main_default, 90);
	lv_style_set_text_color(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_main_default, &lv_font_montserratMedium_14);
	lv_style_set_text_opa(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_main_default, 255);
	lv_style_set_border_width(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_main_default, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_main_default, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_main_default, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_main_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_main_default, lv_color_hex(0x53a1d9));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_3_Qua_li_vol), &style_Main_scrn_ENG_3_Qua_li_vol_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_3_Qua_li_vol_extra_list_scrollbar_default
	static lv_style_t style_Main_scrn_ENG_3_Qua_li_vol_extra_list_scrollbar_default;
	ui_init_style(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_scrollbar_default);
	
	lv_style_set_radius(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_scrollbar_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_scrollbar_default, lv_color_hex(0x62b062));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_3_Qua_li_vol_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_3_Qua_li_vol), &style_Main_scrn_ENG_3_Qua_li_vol_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Space_vol_2
	ui->Main_scrn_ENG_3_Space_vol_2 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_7);
	lv_label_set_text(ui->Main_scrn_ENG_3_Space_vol_2, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Space_vol_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Space_vol_2, 650, 65);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Space_vol_2, 88, 43);

	//Write style for Main_scrn_ENG_3_Space_vol_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Space_vol_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Space_vol_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Space_vol_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Space_vol_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Space_vol_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Space_vol_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Space_vol_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Space_vol_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Space_vol_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Space_vol_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Space_vol_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Space_vol_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Space_vol_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Space_vol_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_im_vol
	ui->Main_scrn_ENG_3_im_vol = lv_img_create(ui->Main_scrn_ENG_3_Main_menu_subpage_7);
	lv_obj_add_flag(ui->Main_scrn_ENG_3_im_vol, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Main_scrn_ENG_3_im_vol, &_Volini_alpha_328x240);
	lv_img_set_pivot(ui->Main_scrn_ENG_3_im_vol, 250,100);
	lv_img_set_angle(ui->Main_scrn_ENG_3_im_vol, 0);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_im_vol, 291, 96);
	lv_obj_set_size(ui->Main_scrn_ENG_3_im_vol, 328, 240);

	//Write style for Main_scrn_ENG_3_im_vol, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Main_scrn_ENG_3_im_vol, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Main_scrn_ENG_3_im_vol, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_im_vol, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Main_scrn_ENG_3_im_vol, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Space_vol_1
	ui->Main_scrn_ENG_3_Space_vol_1 = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_7);
	lv_label_set_text(ui->Main_scrn_ENG_3_Space_vol_1, "\n\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Space_vol_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Space_vol_1, 657, 67);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Space_vol_1, 110, 31);

	//Write style for Main_scrn_ENG_3_Space_vol_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Space_vol_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Space_vol_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Space_vol_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Space_vol_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Space_vol_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Space_vol_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Space_vol_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Space_vol_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Space_vol_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Space_vol_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Space_vol_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Space_vol_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Space_vol_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Space_vol_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Price_vol
	ui->Main_scrn_ENG_3_Price_vol = lv_label_create(ui->Main_scrn_ENG_3_Main_menu_subpage_7);
	lv_label_set_text(ui->Main_scrn_ENG_3_Price_vol, "₹73\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Price_vol, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Price_vol, 200, 358);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Price_vol, 160, 80);

	//Write style for Main_scrn_ENG_3_Price_vol, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Price_vol, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Price_vol, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Price_vol, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Price_vol, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Price_vol, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Price_vol, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Price_vol, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Price_vol, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Price_vol, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Price_vol, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Price_vol, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Price_vol, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Price_vol, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Price_vol, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Price_vol, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Price_vol, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Price_vol, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Price_vol, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Price_vol, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Common_txt_2
	ui->Main_scrn_ENG_3_Common_txt_2 = lv_label_create(ui->Main_scrn_ENG_3);
	lv_label_set_text(ui->Main_scrn_ENG_3_Common_txt_2, "" LV_SYMBOL_LEFT " " LV_SYMBOL_LEFT " " LV_SYMBOL_LEFT " Price for 1 item");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Common_txt_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Common_txt_2, 921, 446);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Common_txt_2, 316, 45);

	//Write style for Main_scrn_ENG_3_Common_txt_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Common_txt_2, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Common_txt_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Common_txt_2, lv_color_hex(0x9ba5ae), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Common_txt_2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Common_txt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Common_txt_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Common_txt_2, &lv_font_PottiSreeramuluRegular_28, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Common_txt_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Common_txt_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Common_txt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Common_txt_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Common_txt_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Common_txt_2, lv_color_hex(0xc5fdd3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Common_txt_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Common_txt_2, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Common_txt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Common_txt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Common_txt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Common_txt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Common_txt_1
	ui->Main_scrn_ENG_3_Common_txt_1 = lv_label_create(ui->Main_scrn_ENG_3);
	lv_label_set_text(ui->Main_scrn_ENG_3_Common_txt_1, "Select the Quantity of this product here  " LV_SYMBOL_RIGHT " " LV_SYMBOL_RIGHT " " LV_SYMBOL_RIGHT " " LV_SYMBOL_RIGHT "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Common_txt_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Common_txt_1, 406, 26);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Common_txt_1, 336, 75);

	//Write style for Main_scrn_ENG_3_Common_txt_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Common_txt_1, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Common_txt_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Common_txt_1, lv_color_hex(0x9ba5ae), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Common_txt_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Common_txt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Common_txt_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Common_txt_1, &lv_font_PottiSreeramuluRegular_28, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Common_txt_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Common_txt_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Common_txt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Common_txt_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Common_txt_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Common_txt_1, lv_color_hex(0xc5fdd3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Common_txt_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Common_txt_1, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Common_txt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Common_txt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Common_txt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Common_txt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_cancel_btn
	ui->Main_scrn_ENG_3_cancel_btn = lv_btn_create(ui->Main_scrn_ENG_3);
	ui->Main_scrn_ENG_3_cancel_btn_label = lv_label_create(ui->Main_scrn_ENG_3_cancel_btn);
	lv_label_set_text(ui->Main_scrn_ENG_3_cancel_btn_label, "CANCEL");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_cancel_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Main_scrn_ENG_3_cancel_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Main_scrn_ENG_3_cancel_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Main_scrn_ENG_3_cancel_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->Main_scrn_ENG_3_cancel_btn, 63, 582);
	lv_obj_set_size(ui->Main_scrn_ENG_3_cancel_btn, 235, 106);

	//Write style for Main_scrn_ENG_3_cancel_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_cancel_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_cancel_btn, lv_color_hex(0xff0027), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_cancel_btn, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Main_scrn_ENG_3_cancel_btn, lv_color_hex(0x500619), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_main_stop(ui->Main_scrn_ENG_3_cancel_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_stop(ui->Main_scrn_ENG_3_cancel_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_cancel_btn, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_cancel_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_cancel_btn, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_cancel_btn, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_cancel_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_cancel_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_cancel_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_cancel_btn, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_cancel_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_cancel_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_proceed_btn
	ui->Main_scrn_ENG_3_proceed_btn = lv_btn_create(ui->Main_scrn_ENG_3);
	ui->Main_scrn_ENG_3_proceed_btn_label = lv_label_create(ui->Main_scrn_ENG_3_proceed_btn);
	lv_label_set_text(ui->Main_scrn_ENG_3_proceed_btn_label, "PROCEED");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_proceed_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Main_scrn_ENG_3_proceed_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Main_scrn_ENG_3_proceed_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Main_scrn_ENG_3_proceed_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->Main_scrn_ENG_3_proceed_btn, 997, 582);
	lv_obj_set_size(ui->Main_scrn_ENG_3_proceed_btn, 235, 106);

	//Write style for Main_scrn_ENG_3_proceed_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_proceed_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_proceed_btn, lv_color_hex(0x00ff32), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_proceed_btn, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Main_scrn_ENG_3_proceed_btn, lv_color_hex(0x003712), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_main_stop(ui->Main_scrn_ENG_3_proceed_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_stop(ui->Main_scrn_ENG_3_proceed_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_proceed_btn, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_proceed_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_proceed_btn, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_proceed_btn, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_proceed_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_proceed_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_proceed_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_proceed_btn, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_proceed_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_proceed_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_chat_txt
	ui->Main_scrn_ENG_3_chat_txt = lv_label_create(ui->Main_scrn_ENG_3);
	lv_label_set_text(ui->Main_scrn_ENG_3_chat_txt, "Unable to find what you need?\nTo chat with me........");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_chat_txt, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_chat_txt, 415, 549);
	lv_obj_set_size(ui->Main_scrn_ENG_3_chat_txt, 487, 65);

	//Write style for Main_scrn_ENG_3_chat_txt, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_chat_txt, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_chat_txt, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_chat_txt, lv_color_hex(0x9ba5ae), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_chat_txt, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_chat_txt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_chat_txt, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_chat_txt, &lv_font_PottiSreeramuluRegular_28, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_chat_txt, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_chat_txt, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_chat_txt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_chat_txt, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_chat_txt, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_chat_txt, lv_color_hex(0xc5fdd3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_chat_txt, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_chat_txt, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_chat_txt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_chat_txt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_chat_txt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_chat_txt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_chat_btn
	ui->Main_scrn_ENG_3_chat_btn = lv_btn_create(ui->Main_scrn_ENG_3);
	ui->Main_scrn_ENG_3_chat_btn_label = lv_label_create(ui->Main_scrn_ENG_3_chat_btn);
	lv_label_set_text(ui->Main_scrn_ENG_3_chat_btn_label, "Click Here  ");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_chat_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Main_scrn_ENG_3_chat_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Main_scrn_ENG_3_chat_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Main_scrn_ENG_3_chat_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->Main_scrn_ENG_3_chat_btn, 446, 627);
	lv_obj_set_size(ui->Main_scrn_ENG_3_chat_btn, 417, 65);

	//Write style for Main_scrn_ENG_3_chat_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_chat_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_chat_btn, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_chat_btn, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Main_scrn_ENG_3_chat_btn, lv_color_hex(0x0a1721), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_main_stop(ui->Main_scrn_ENG_3_chat_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_stop(ui->Main_scrn_ENG_3_chat_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_chat_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_chat_btn, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_chat_btn, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Main_scrn_ENG_3_chat_btn, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Main_scrn_ENG_3_chat_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Main_scrn_ENG_3_chat_btn, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Main_scrn_ENG_3_chat_btn, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Main_scrn_ENG_3_chat_btn, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_chat_btn, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_chat_btn, &lv_font_PottiSreeramuluRegular_46, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_chat_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_chat_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Page_3
	ui->Main_scrn_ENG_3_Page_3 = lv_label_create(ui->Main_scrn_ENG_3);
	lv_label_set_text(ui->Main_scrn_ENG_3_Page_3, "3\n\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Page_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Page_3, 170, 406);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Page_3, 80, 80);

	//Write style for Main_scrn_ENG_3_Page_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Page_3, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_3_Page_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_3_Page_3, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_3_Page_3, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Page_3, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Page_3, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Page_3, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Page_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_3_Page_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_3_Page_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Page_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Page_3, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Page_3, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Page_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_3_Page_3, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_3_Page_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_3_Page_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_3_Page_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Page_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_3_Prev_page
	ui->Main_scrn_ENG_3_Prev_page = lv_btn_create(ui->Main_scrn_ENG_3);
	ui->Main_scrn_ENG_3_Prev_page_label = lv_label_create(ui->Main_scrn_ENG_3_Prev_page);
	lv_label_set_text(ui->Main_scrn_ENG_3_Prev_page_label, "" LV_SYMBOL_LEFT "\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_3_Prev_page_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Main_scrn_ENG_3_Prev_page_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Main_scrn_ENG_3_Prev_page, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Main_scrn_ENG_3_Prev_page_label, LV_PCT(100));
	lv_obj_set_pos(ui->Main_scrn_ENG_3_Prev_page, 63, 425);
	lv_obj_set_size(ui->Main_scrn_ENG_3_Prev_page, 100, 50);

	//Write style for Main_scrn_ENG_3_Prev_page, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_3_Prev_page, 177, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_3_Prev_page, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_3_Prev_page, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_3_Prev_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_3_Prev_page, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_3_Prev_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_3_Prev_page, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_3_Prev_page, &lv_font_PottiSreeramuluRegular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_3_Prev_page, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_3_Prev_page, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of Main_scrn_ENG_3.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->Main_scrn_ENG_3);

	//Init events for screen.
	events_init_Main_scrn_ENG_3(ui);
}
