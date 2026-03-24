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



void setup_scr_Main_scrn_ENG_2(lv_ui *ui)
{
	//Write codes Main_scrn_ENG_2
	ui->Main_scrn_ENG_2 = lv_obj_create(NULL);
	lv_obj_set_size(ui->Main_scrn_ENG_2, 1280, 720);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for Main_scrn_ENG_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->Main_scrn_ENG_2, &_Background_1280x720, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->Main_scrn_ENG_2, 175, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_recolor(ui->Main_scrn_ENG_2, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_recolor_opa(ui->Main_scrn_ENG_2, 58, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Main_menu
	ui->Main_scrn_ENG_2_Main_menu = lv_menu_create(ui->Main_scrn_ENG_2);

	//Create sidebar page for menu Main_scrn_ENG_2_Main_menu
	ui->Main_scrn_ENG_2_Main_menu_sidebar_page = lv_menu_page_create(ui->Main_scrn_ENG_2_Main_menu, "Medicines List");
	lv_menu_set_sidebar_page(ui->Main_scrn_ENG_2_Main_menu, ui->Main_scrn_ENG_2_Main_menu_sidebar_page);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_2_Main_menu_sidebar_page, LV_SCROLLBAR_MODE_ON);

	//Create subpage for Main_scrn_ENG_2_Main_menu
	ui->Main_scrn_ENG_2_Main_menu_subpage_1 = lv_menu_page_create(ui->Main_scrn_ENG_2_Main_menu, NULL);
	ui->Main_scrn_ENG_2_Main_menu_cont_1 = lv_menu_cont_create(ui->Main_scrn_ENG_2_Main_menu_sidebar_page);
	ui->Main_scrn_ENG_2_Main_menu_label_1 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_cont_1);
	lv_label_set_text(ui->Main_scrn_ENG_2_Main_menu_label_1, "Crocin_Cold_Flu");
	lv_obj_set_size(ui->Main_scrn_ENG_2_Main_menu_label_1, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_2_Main_menu_subpage_1, LV_SCROLLBAR_MODE_ON);
	lv_menu_set_load_page_event(ui->Main_scrn_ENG_2_Main_menu, ui->Main_scrn_ENG_2_Main_menu_cont_1, ui->Main_scrn_ENG_2_Main_menu_subpage_1);

	//Create subpage for Main_scrn_ENG_2_Main_menu
	ui->Main_scrn_ENG_2_Main_menu_subpage_2 = lv_menu_page_create(ui->Main_scrn_ENG_2_Main_menu, NULL);
	ui->Main_scrn_ENG_2_Main_menu_cont_2 = lv_menu_cont_create(ui->Main_scrn_ENG_2_Main_menu_sidebar_page);
	ui->Main_scrn_ENG_2_Main_menu_label_2 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_cont_2);
	lv_label_set_text(ui->Main_scrn_ENG_2_Main_menu_label_2, "Dettol");
	lv_obj_set_size(ui->Main_scrn_ENG_2_Main_menu_label_2, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_2_Main_menu_subpage_2, LV_SCROLLBAR_MODE_ON);
	lv_menu_set_load_page_event(ui->Main_scrn_ENG_2_Main_menu, ui->Main_scrn_ENG_2_Main_menu_cont_2, ui->Main_scrn_ENG_2_Main_menu_subpage_2);

	//Create subpage for Main_scrn_ENG_2_Main_menu
	ui->Main_scrn_ENG_2_Main_menu_subpage_3 = lv_menu_page_create(ui->Main_scrn_ENG_2_Main_menu, NULL);
	ui->Main_scrn_ENG_2_Main_menu_cont_3 = lv_menu_cont_create(ui->Main_scrn_ENG_2_Main_menu_sidebar_page);
	ui->Main_scrn_ENG_2_Main_menu_label_3 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_cont_3);
	lv_label_set_text(ui->Main_scrn_ENG_2_Main_menu_label_3, "Electral");
	lv_obj_set_size(ui->Main_scrn_ENG_2_Main_menu_label_3, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_2_Main_menu_subpage_3, LV_SCROLLBAR_MODE_ON);
	lv_menu_set_load_page_event(ui->Main_scrn_ENG_2_Main_menu, ui->Main_scrn_ENG_2_Main_menu_cont_3, ui->Main_scrn_ENG_2_Main_menu_subpage_3);

	//Create subpage for Main_scrn_ENG_2_Main_menu
	ui->Main_scrn_ENG_2_Main_menu_subpage_4 = lv_menu_page_create(ui->Main_scrn_ENG_2_Main_menu, NULL);
	ui->Main_scrn_ENG_2_Main_menu_cont_4 = lv_menu_cont_create(ui->Main_scrn_ENG_2_Main_menu_sidebar_page);
	ui->Main_scrn_ENG_2_Main_menu_label_4 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_cont_4);
	lv_label_set_text(ui->Main_scrn_ENG_2_Main_menu_label_4, "Gelusil_MPS");
	lv_obj_set_size(ui->Main_scrn_ENG_2_Main_menu_label_4, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_2_Main_menu_subpage_4, LV_SCROLLBAR_MODE_ON);
	lv_menu_set_load_page_event(ui->Main_scrn_ENG_2_Main_menu, ui->Main_scrn_ENG_2_Main_menu_cont_4, ui->Main_scrn_ENG_2_Main_menu_subpage_4);

	//Create subpage for Main_scrn_ENG_2_Main_menu
	ui->Main_scrn_ENG_2_Main_menu_subpage_5 = lv_menu_page_create(ui->Main_scrn_ENG_2_Main_menu, NULL);
	ui->Main_scrn_ENG_2_Main_menu_cont_5 = lv_menu_cont_create(ui->Main_scrn_ENG_2_Main_menu_sidebar_page);
	ui->Main_scrn_ENG_2_Main_menu_label_5 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_cont_5);
	lv_label_set_text(ui->Main_scrn_ENG_2_Main_menu_label_5, "Himalaya_koflet");
	lv_obj_set_size(ui->Main_scrn_ENG_2_Main_menu_label_5, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_2_Main_menu_subpage_5, LV_SCROLLBAR_MODE_ON);
	lv_menu_set_load_page_event(ui->Main_scrn_ENG_2_Main_menu, ui->Main_scrn_ENG_2_Main_menu_cont_5, ui->Main_scrn_ENG_2_Main_menu_subpage_5);

	//Create subpage for Main_scrn_ENG_2_Main_menu
	ui->Main_scrn_ENG_2_Main_menu_subpage_6 = lv_menu_page_create(ui->Main_scrn_ENG_2_Main_menu, NULL);
	ui->Main_scrn_ENG_2_Main_menu_cont_6 = lv_menu_cont_create(ui->Main_scrn_ENG_2_Main_menu_sidebar_page);
	ui->Main_scrn_ENG_2_Main_menu_label_6 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_cont_6);
	lv_label_set_text(ui->Main_scrn_ENG_2_Main_menu_label_6, "Imodium");
	lv_obj_set_size(ui->Main_scrn_ENG_2_Main_menu_label_6, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_2_Main_menu_subpage_6, LV_SCROLLBAR_MODE_ON);
	lv_menu_set_load_page_event(ui->Main_scrn_ENG_2_Main_menu, ui->Main_scrn_ENG_2_Main_menu_cont_6, ui->Main_scrn_ENG_2_Main_menu_subpage_6);

	//Create subpage for Main_scrn_ENG_2_Main_menu
	ui->Main_scrn_ENG_2_Main_menu_subpage_7 = lv_menu_page_create(ui->Main_scrn_ENG_2_Main_menu, NULL);
	ui->Main_scrn_ENG_2_Main_menu_cont_7 = lv_menu_cont_create(ui->Main_scrn_ENG_2_Main_menu_sidebar_page);
	ui->Main_scrn_ENG_2_Main_menu_label_7 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_cont_7);
	lv_label_set_text(ui->Main_scrn_ENG_2_Main_menu_label_7, "Naselin");
	lv_obj_set_size(ui->Main_scrn_ENG_2_Main_menu_label_7, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_2_Main_menu_subpage_7, LV_SCROLLBAR_MODE_ON);
	lv_menu_set_load_page_event(ui->Main_scrn_ENG_2_Main_menu, ui->Main_scrn_ENG_2_Main_menu_cont_7, ui->Main_scrn_ENG_2_Main_menu_subpage_7);
	lv_event_send(ui->Main_scrn_ENG_2_Main_menu_cont_1, LV_EVENT_CLICKED, NULL);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Main_menu, 21, 15);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Main_menu, 1247, 525);
	lv_obj_set_scrollbar_mode(ui->Main_scrn_ENG_2_Main_menu, LV_SCROLLBAR_MODE_ON);

	//Write style for Main_scrn_ENG_2_Main_menu, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Main_menu, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Main_menu, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Main_menu, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Main_menu, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Main_menu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_2_Main_menu_extra_sidebar_page_main_default
	static lv_style_t style_Main_scrn_ENG_2_Main_menu_extra_sidebar_page_main_default;
	ui_init_style(&style_Main_scrn_ENG_2_Main_menu_extra_sidebar_page_main_default);
	
	lv_style_set_bg_opa(&style_Main_scrn_ENG_2_Main_menu_extra_sidebar_page_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_2_Main_menu_extra_sidebar_page_main_default, lv_color_hex(0xf2f2f2));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_2_Main_menu_extra_sidebar_page_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_radius(&style_Main_scrn_ENG_2_Main_menu_extra_sidebar_page_main_default, 0);
	lv_obj_add_style(ui->Main_scrn_ENG_2_Main_menu_sidebar_page, &style_Main_scrn_ENG_2_Main_menu_extra_sidebar_page_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_default
	static lv_style_t style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_default;
	ui_init_style(&style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_default);
	
	lv_style_set_text_color(&style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_default, lv_color_hex(0x000000));
	lv_style_set_text_font(&style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_default, &lv_font_Alatsi_Regular_18);
	lv_style_set_text_opa(&style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_default, 255);
	lv_style_set_text_align(&style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_top(&style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_default, 6);
	lv_style_set_pad_bottom(&style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_default, 7);
	lv_obj_add_style(ui->Main_scrn_ENG_2_Main_menu_cont_7, &style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->Main_scrn_ENG_2_Main_menu_cont_6, &style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->Main_scrn_ENG_2_Main_menu_cont_5, &style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->Main_scrn_ENG_2_Main_menu_cont_4, &style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->Main_scrn_ENG_2_Main_menu_cont_3, &style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->Main_scrn_ENG_2_Main_menu_cont_2, &style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->Main_scrn_ENG_2_Main_menu_cont_1, &style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_CHECKED for &style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_checked
	static lv_style_t style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_checked;
	ui_init_style(&style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_checked);
	
	lv_style_set_text_color(&style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_checked, lv_color_hex(0x000000));
	lv_style_set_text_font(&style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_checked, &lv_font_Alatsi_Regular_20);
	lv_style_set_text_opa(&style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_checked, 255);
	lv_style_set_text_align(&style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_border_width(&style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_checked, 2);
	lv_style_set_border_opa(&style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_checked, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_checked, lv_color_hex(0x000000));
	lv_style_set_border_side(&style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_checked, LV_BORDER_SIDE_BOTTOM);
	lv_style_set_radius(&style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_checked, 2);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_checked, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_checked, lv_color_hex(0xd2d2d2));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_checked, LV_GRAD_DIR_HOR);
	lv_style_set_bg_grad_color(&style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_checked, lv_color_hex(0xffffff));
	lv_style_set_bg_main_stop(&style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_checked, 0);
	lv_style_set_bg_grad_stop(&style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_checked, 255);
	lv_obj_add_style(ui->Main_scrn_ENG_2_Main_menu_cont_7, &style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_add_style(ui->Main_scrn_ENG_2_Main_menu_cont_6, &style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_add_style(ui->Main_scrn_ENG_2_Main_menu_cont_5, &style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_add_style(ui->Main_scrn_ENG_2_Main_menu_cont_4, &style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_add_style(ui->Main_scrn_ENG_2_Main_menu_cont_3, &style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_add_style(ui->Main_scrn_ENG_2_Main_menu_cont_2, &style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_add_style(ui->Main_scrn_ENG_2_Main_menu_cont_1, &style_Main_scrn_ENG_2_Main_menu_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_2_Main_menu_extra_main_title_main_default
	static lv_style_t style_Main_scrn_ENG_2_Main_menu_extra_main_title_main_default;
	ui_init_style(&style_Main_scrn_ENG_2_Main_menu_extra_main_title_main_default);
	
	lv_style_set_text_color(&style_Main_scrn_ENG_2_Main_menu_extra_main_title_main_default, lv_color_hex(0x3f4657));
	lv_style_set_text_font(&style_Main_scrn_ENG_2_Main_menu_extra_main_title_main_default, &lv_font_Alatsi_Regular_25);
	lv_style_set_text_opa(&style_Main_scrn_ENG_2_Main_menu_extra_main_title_main_default, 255);
	lv_style_set_text_align(&style_Main_scrn_ENG_2_Main_menu_extra_main_title_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_2_Main_menu_extra_main_title_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_2_Main_menu_extra_main_title_main_default, lv_color_hex(0xd0d0d0));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_2_Main_menu_extra_main_title_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_pad_top(&style_Main_scrn_ENG_2_Main_menu_extra_main_title_main_default, 7);
	lv_style_set_pad_bottom(&style_Main_scrn_ENG_2_Main_menu_extra_main_title_main_default, 7);
	lv_menu_t * Main_scrn_ENG_2_Main_menu_menu= (lv_menu_t *)ui->Main_scrn_ENG_2_Main_menu;
	lv_obj_t * Main_scrn_ENG_2_Main_menu_title = Main_scrn_ENG_2_Main_menu_menu->sidebar_header_title;
	lv_obj_set_size(Main_scrn_ENG_2_Main_menu_title, LV_PCT(100), LV_SIZE_CONTENT);
	lv_obj_add_style(lv_menu_get_sidebar_header(ui->Main_scrn_ENG_2_Main_menu), &style_Main_scrn_ENG_2_Main_menu_extra_main_title_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes Main_scrn_ENG_2_Space_cro_3
	ui->Main_scrn_ENG_2_Space_cro_3 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_1);
	lv_label_set_text(ui->Main_scrn_ENG_2_Space_cro_3, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Space_cro_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Space_cro_3, 618, 91);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Space_cro_3, 88, 43);

	//Write style for Main_scrn_ENG_2_Space_cro_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Space_cro_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Space_cro_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Space_cro_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Space_cro_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Space_cro_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Space_cro_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Space_cro_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Space_cro_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Space_cro_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Space_cro_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Space_cro_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Space_cro_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Space_cro_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Space_cro_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Qua_li_cro
	ui->Main_scrn_ENG_2_Qua_li_cro = lv_dropdown_create(ui->Main_scrn_ENG_2_Main_menu_subpage_1);
	lv_dropdown_set_options(ui->Main_scrn_ENG_2_Qua_li_cro, "0\n1\n2\n3\n4\n5");
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Qua_li_cro, 423, 58);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Qua_li_cro, 156, 48);

	//Write style for Main_scrn_ENG_2_Qua_li_cro, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Qua_li_cro, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Qua_li_cro, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Qua_li_cro, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Qua_li_cro, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Qua_li_cro, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Qua_li_cro, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Qua_li_cro, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Qua_li_cro, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Qua_li_cro, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Qua_li_cro, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Qua_li_cro, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Qua_li_cro, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Qua_li_cro, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Qua_li_cro, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Qua_li_cro, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Main_scrn_ENG_2_Qua_li_cro, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Qua_li_cro, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Qua_li_cro, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Qua_li_cro, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Qua_li_cro, 1, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Qua_li_cro, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Qua_li_cro, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Qua_li_cro, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Qua_li_cro, 8, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Qua_li_cro, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Qua_li_cro, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Qua_li_cro, 3, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Qua_li_cro, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Qua_li_cro, lv_color_hex(0x3bae90), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Qua_li_cro, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Qua_li_cro, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for Main_scrn_ENG_2_Qua_li_cro, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Qua_li_cro, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Qua_li_cro, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Qua_li_cro, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Qua_li_cro, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Qua_li_cro, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Qua_li_cro, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Qua_li_cro, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Qua_li_cro, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Qua_li_cro, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Qua_li_cro, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Qua_li_cro, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Qua_li_cro, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Qua_li_cro, lv_color_hex(0x3bcba6), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Qua_li_cro, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Qua_li_cro, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style state: LV_STATE_CHECKED for &style_Main_scrn_ENG_2_Qua_li_cro_extra_list_selected_checked
	static lv_style_t style_Main_scrn_ENG_2_Qua_li_cro_extra_list_selected_checked;
	ui_init_style(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_selected_checked);
	
	lv_style_set_border_width(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_selected_checked, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_selected_checked, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_selected_checked, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_selected_checked, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_selected_checked, lv_color_hex(0x00a1b5));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_selected_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_2_Qua_li_cro), &style_Main_scrn_ENG_2_Qua_li_cro_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_2_Qua_li_cro_extra_list_main_default
	static lv_style_t style_Main_scrn_ENG_2_Qua_li_cro_extra_list_main_default;
	ui_init_style(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_main_default);
	
	lv_style_set_max_height(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_main_default, 90);
	lv_style_set_text_color(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_main_default, &lv_font_montserratMedium_14);
	lv_style_set_text_opa(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_main_default, 255);
	lv_style_set_border_width(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_main_default, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_main_default, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_main_default, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_main_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_main_default, lv_color_hex(0x53a1d9));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_2_Qua_li_cro), &style_Main_scrn_ENG_2_Qua_li_cro_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_2_Qua_li_cro_extra_list_scrollbar_default
	static lv_style_t style_Main_scrn_ENG_2_Qua_li_cro_extra_list_scrollbar_default;
	ui_init_style(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_scrollbar_default);
	
	lv_style_set_radius(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_scrollbar_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_scrollbar_default, lv_color_hex(0x62b062));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_2_Qua_li_cro_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_2_Qua_li_cro), &style_Main_scrn_ENG_2_Qua_li_cro_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Space_cro_2
	ui->Main_scrn_ENG_2_Space_cro_2 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_1);
	lv_label_set_text(ui->Main_scrn_ENG_2_Space_cro_2, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Space_cro_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Space_cro_2, 643, 69);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Space_cro_2, 88, 43);

	//Write style for Main_scrn_ENG_2_Space_cro_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Space_cro_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Space_cro_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Space_cro_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Space_cro_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Space_cro_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Space_cro_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Space_cro_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Space_cro_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Space_cro_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Space_cro_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Space_cro_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Space_cro_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Space_cro_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Space_cro_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_im_cro
	ui->Main_scrn_ENG_2_im_cro = lv_img_create(ui->Main_scrn_ENG_2_Main_menu_subpage_1);
	lv_obj_add_flag(ui->Main_scrn_ENG_2_im_cro, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Main_scrn_ENG_2_im_cro, &_Crocin_Cold_Flu_alpha_418x240);
	lv_img_set_pivot(ui->Main_scrn_ENG_2_im_cro, 250,100);
	lv_img_set_angle(ui->Main_scrn_ENG_2_im_cro, 0);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_im_cro, 225, 89);
	lv_obj_set_size(ui->Main_scrn_ENG_2_im_cro, 418, 240);

	//Write style for Main_scrn_ENG_2_im_cro, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Main_scrn_ENG_2_im_cro, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Main_scrn_ENG_2_im_cro, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_im_cro, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Main_scrn_ENG_2_im_cro, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Space_cro_1
	ui->Main_scrn_ENG_2_Space_cro_1 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_1);
	lv_label_set_text(ui->Main_scrn_ENG_2_Space_cro_1, "\n\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Space_cro_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Space_cro_1, 628, 47);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Space_cro_1, 110, 31);

	//Write style for Main_scrn_ENG_2_Space_cro_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Space_cro_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Space_cro_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Space_cro_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Space_cro_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Space_cro_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Space_cro_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Space_cro_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Space_cro_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Space_cro_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Space_cro_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Space_cro_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Space_cro_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Space_cro_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Space_cro_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Price_cro
	ui->Main_scrn_ENG_2_Price_cro = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_1);
	lv_label_set_text(ui->Main_scrn_ENG_2_Price_cro, "₹60\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Price_cro, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Price_cro, 352, 414);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Price_cro, 160, 80);

	//Write style for Main_scrn_ENG_2_Price_cro, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Price_cro, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Price_cro, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Price_cro, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Price_cro, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Price_cro, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Price_cro, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Price_cro, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Price_cro, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Price_cro, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Price_cro, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Price_cro, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Price_cro, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Price_cro, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Price_cro, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Price_cro, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Price_cro, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Price_cro, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Price_cro, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Price_cro, 0, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes Main_scrn_ENG_2_Space_det_3
	ui->Main_scrn_ENG_2_Space_det_3 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_2);
	lv_label_set_text(ui->Main_scrn_ENG_2_Space_det_3, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Space_det_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Space_det_3, 633, 70);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Space_det_3, 88, 43);

	//Write style for Main_scrn_ENG_2_Space_det_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Space_det_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Space_det_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Space_det_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Space_det_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Space_det_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Space_det_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Space_det_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Space_det_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Space_det_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Space_det_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Space_det_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Space_det_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Space_det_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Space_det_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Qua_li_det
	ui->Main_scrn_ENG_2_Qua_li_det = lv_dropdown_create(ui->Main_scrn_ENG_2_Main_menu_subpage_2);
	lv_dropdown_set_options(ui->Main_scrn_ENG_2_Qua_li_det, "0\n1\n2\n3\n4\n5");
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Qua_li_det, 423, 58);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Qua_li_det, 156, 48);

	//Write style for Main_scrn_ENG_2_Qua_li_det, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Qua_li_det, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Qua_li_det, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Qua_li_det, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Qua_li_det, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Qua_li_det, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Qua_li_det, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Qua_li_det, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Qua_li_det, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Qua_li_det, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Qua_li_det, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Qua_li_det, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Qua_li_det, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Qua_li_det, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Qua_li_det, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Qua_li_det, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Main_scrn_ENG_2_Qua_li_det, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Qua_li_det, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Qua_li_det, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Qua_li_det, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Qua_li_det, 1, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Qua_li_det, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Qua_li_det, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Qua_li_det, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Qua_li_det, 8, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Qua_li_det, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Qua_li_det, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Qua_li_det, 3, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Qua_li_det, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Qua_li_det, lv_color_hex(0x3bae90), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Qua_li_det, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Qua_li_det, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for Main_scrn_ENG_2_Qua_li_det, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Qua_li_det, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Qua_li_det, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Qua_li_det, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Qua_li_det, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Qua_li_det, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Qua_li_det, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Qua_li_det, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Qua_li_det, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Qua_li_det, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Qua_li_det, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Qua_li_det, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Qua_li_det, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Qua_li_det, lv_color_hex(0x3bcba6), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Qua_li_det, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Qua_li_det, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style state: LV_STATE_CHECKED for &style_Main_scrn_ENG_2_Qua_li_det_extra_list_selected_checked
	static lv_style_t style_Main_scrn_ENG_2_Qua_li_det_extra_list_selected_checked;
	ui_init_style(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_selected_checked);
	
	lv_style_set_border_width(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_selected_checked, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_selected_checked, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_selected_checked, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_selected_checked, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_selected_checked, lv_color_hex(0x00a1b5));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_selected_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_2_Qua_li_det), &style_Main_scrn_ENG_2_Qua_li_det_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_2_Qua_li_det_extra_list_main_default
	static lv_style_t style_Main_scrn_ENG_2_Qua_li_det_extra_list_main_default;
	ui_init_style(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_main_default);
	
	lv_style_set_max_height(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_main_default, 90);
	lv_style_set_text_color(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_main_default, &lv_font_montserratMedium_14);
	lv_style_set_text_opa(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_main_default, 255);
	lv_style_set_border_width(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_main_default, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_main_default, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_main_default, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_main_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_main_default, lv_color_hex(0x53a1d9));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_2_Qua_li_det), &style_Main_scrn_ENG_2_Qua_li_det_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_2_Qua_li_det_extra_list_scrollbar_default
	static lv_style_t style_Main_scrn_ENG_2_Qua_li_det_extra_list_scrollbar_default;
	ui_init_style(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_scrollbar_default);
	
	lv_style_set_radius(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_scrollbar_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_scrollbar_default, lv_color_hex(0x62b062));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_2_Qua_li_det_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_2_Qua_li_det), &style_Main_scrn_ENG_2_Qua_li_det_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Space_det_2
	ui->Main_scrn_ENG_2_Space_det_2 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_2);
	lv_label_set_text(ui->Main_scrn_ENG_2_Space_det_2, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Space_det_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Space_det_2, 643, 68);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Space_det_2, 88, 43);

	//Write style for Main_scrn_ENG_2_Space_det_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Space_det_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Space_det_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Space_det_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Space_det_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Space_det_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Space_det_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Space_det_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Space_det_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Space_det_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Space_det_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Space_det_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Space_det_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Space_det_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Space_det_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_im_det
	ui->Main_scrn_ENG_2_im_det = lv_img_create(ui->Main_scrn_ENG_2_Main_menu_subpage_2);
	lv_obj_add_flag(ui->Main_scrn_ENG_2_im_det, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Main_scrn_ENG_2_im_det, &_Dettol_alpha_151x240);
	lv_img_set_pivot(ui->Main_scrn_ENG_2_im_det, 250,100);
	lv_img_set_angle(ui->Main_scrn_ENG_2_im_det, 0);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_im_det, 245, 89);
	lv_obj_set_size(ui->Main_scrn_ENG_2_im_det, 151, 240);

	//Write style for Main_scrn_ENG_2_im_det, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Main_scrn_ENG_2_im_det, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Main_scrn_ENG_2_im_det, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_im_det, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Main_scrn_ENG_2_im_det, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Space_det_1
	ui->Main_scrn_ENG_2_Space_det_1 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_2);
	lv_label_set_text(ui->Main_scrn_ENG_2_Space_det_1, "\n\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Space_det_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Space_det_1, 629, 50);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Space_det_1, 110, 31);

	//Write style for Main_scrn_ENG_2_Space_det_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Space_det_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Space_det_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Space_det_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Space_det_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Space_det_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Space_det_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Space_det_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Space_det_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Space_det_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Space_det_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Space_det_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Space_det_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Space_det_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Space_det_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Price_det
	ui->Main_scrn_ENG_2_Price_det = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_2);
	lv_label_set_text(ui->Main_scrn_ENG_2_Price_det, "₹125\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Price_det, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Price_det, 169, 361);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Price_det, 160, 80);

	//Write style for Main_scrn_ENG_2_Price_det, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Price_det, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Price_det, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Price_det, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Price_det, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Price_det, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Price_det, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Price_det, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Price_det, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Price_det, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Price_det, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Price_det, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Price_det, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Price_det, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Price_det, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Price_det, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Price_det, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Price_det, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Price_det, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Price_det, 0, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes Main_scrn_ENG_2_Space_ele_3
	ui->Main_scrn_ENG_2_Space_ele_3 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_3);
	lv_label_set_text(ui->Main_scrn_ENG_2_Space_ele_3, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Space_ele_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Space_ele_3, 630, 91);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Space_ele_3, 88, 43);

	//Write style for Main_scrn_ENG_2_Space_ele_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Space_ele_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Space_ele_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Space_ele_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Space_ele_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Space_ele_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Space_ele_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Space_ele_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Space_ele_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Space_ele_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Space_ele_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Space_ele_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Space_ele_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Space_ele_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Space_ele_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Qua_li_ele
	ui->Main_scrn_ENG_2_Qua_li_ele = lv_dropdown_create(ui->Main_scrn_ENG_2_Main_menu_subpage_3);
	lv_dropdown_set_options(ui->Main_scrn_ENG_2_Qua_li_ele, "0\n1\n2\n3\n4\n5");
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Qua_li_ele, 423, 58);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Qua_li_ele, 156, 48);

	//Write style for Main_scrn_ENG_2_Qua_li_ele, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Qua_li_ele, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Qua_li_ele, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Qua_li_ele, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Qua_li_ele, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Qua_li_ele, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Qua_li_ele, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Qua_li_ele, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Qua_li_ele, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Qua_li_ele, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Qua_li_ele, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Qua_li_ele, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Qua_li_ele, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Qua_li_ele, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Qua_li_ele, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Qua_li_ele, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Main_scrn_ENG_2_Qua_li_ele, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Qua_li_ele, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Qua_li_ele, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Qua_li_ele, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Qua_li_ele, 1, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Qua_li_ele, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Qua_li_ele, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Qua_li_ele, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Qua_li_ele, 8, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Qua_li_ele, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Qua_li_ele, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Qua_li_ele, 3, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Qua_li_ele, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Qua_li_ele, lv_color_hex(0x3bae90), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Qua_li_ele, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Qua_li_ele, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for Main_scrn_ENG_2_Qua_li_ele, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Qua_li_ele, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Qua_li_ele, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Qua_li_ele, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Qua_li_ele, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Qua_li_ele, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Qua_li_ele, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Qua_li_ele, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Qua_li_ele, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Qua_li_ele, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Qua_li_ele, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Qua_li_ele, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Qua_li_ele, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Qua_li_ele, lv_color_hex(0x3bcba6), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Qua_li_ele, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Qua_li_ele, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style state: LV_STATE_CHECKED for &style_Main_scrn_ENG_2_Qua_li_ele_extra_list_selected_checked
	static lv_style_t style_Main_scrn_ENG_2_Qua_li_ele_extra_list_selected_checked;
	ui_init_style(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_selected_checked);
	
	lv_style_set_border_width(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_selected_checked, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_selected_checked, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_selected_checked, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_selected_checked, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_selected_checked, lv_color_hex(0x00a1b5));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_selected_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_2_Qua_li_ele), &style_Main_scrn_ENG_2_Qua_li_ele_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_2_Qua_li_ele_extra_list_main_default
	static lv_style_t style_Main_scrn_ENG_2_Qua_li_ele_extra_list_main_default;
	ui_init_style(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_main_default);
	
	lv_style_set_max_height(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_main_default, 90);
	lv_style_set_text_color(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_main_default, &lv_font_montserratMedium_14);
	lv_style_set_text_opa(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_main_default, 255);
	lv_style_set_border_width(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_main_default, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_main_default, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_main_default, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_main_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_main_default, lv_color_hex(0x53a1d9));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_2_Qua_li_ele), &style_Main_scrn_ENG_2_Qua_li_ele_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_2_Qua_li_ele_extra_list_scrollbar_default
	static lv_style_t style_Main_scrn_ENG_2_Qua_li_ele_extra_list_scrollbar_default;
	ui_init_style(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_scrollbar_default);
	
	lv_style_set_radius(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_scrollbar_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_scrollbar_default, lv_color_hex(0x62b062));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_2_Qua_li_ele_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_2_Qua_li_ele), &style_Main_scrn_ENG_2_Qua_li_ele_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Space_ele_2
	ui->Main_scrn_ENG_2_Space_ele_2 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_3);
	lv_label_set_text(ui->Main_scrn_ENG_2_Space_ele_2, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Space_ele_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Space_ele_2, 647, 84);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Space_ele_2, 88, 43);

	//Write style for Main_scrn_ENG_2_Space_ele_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Space_ele_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Space_ele_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Space_ele_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Space_ele_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Space_ele_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Space_ele_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Space_ele_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Space_ele_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Space_ele_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Space_ele_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Space_ele_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Space_ele_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Space_ele_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Space_ele_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_im_ele
	ui->Main_scrn_ENG_2_im_ele = lv_img_create(ui->Main_scrn_ENG_2_Main_menu_subpage_3);
	lv_obj_add_flag(ui->Main_scrn_ENG_2_im_ele, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Main_scrn_ENG_2_im_ele, &_Electral_alpha_420x240);
	lv_img_set_pivot(ui->Main_scrn_ENG_2_im_ele, 250,100);
	lv_img_set_angle(ui->Main_scrn_ENG_2_im_ele, 0);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_im_ele, 234, 106);
	lv_obj_set_size(ui->Main_scrn_ENG_2_im_ele, 420, 240);

	//Write style for Main_scrn_ENG_2_im_ele, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Main_scrn_ENG_2_im_ele, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Main_scrn_ENG_2_im_ele, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_im_ele, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Main_scrn_ENG_2_im_ele, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Space_ele_1
	ui->Main_scrn_ENG_2_Space_ele_1 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_3);
	lv_label_set_text(ui->Main_scrn_ENG_2_Space_ele_1, "\n\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Space_ele_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Space_ele_1, 604, 64);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Space_ele_1, 110, 31);

	//Write style for Main_scrn_ENG_2_Space_ele_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Space_ele_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Space_ele_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Space_ele_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Space_ele_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Space_ele_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Space_ele_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Space_ele_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Space_ele_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Space_ele_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Space_ele_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Space_ele_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Space_ele_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Space_ele_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Space_ele_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Price_ele
	ui->Main_scrn_ENG_2_Price_ele = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_3);
	lv_label_set_text(ui->Main_scrn_ENG_2_Price_ele, "₹4\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Price_ele, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Price_ele, 171, 339);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Price_ele, 160, 80);

	//Write style for Main_scrn_ENG_2_Price_ele, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Price_ele, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Price_ele, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Price_ele, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Price_ele, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Price_ele, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Price_ele, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Price_ele, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Price_ele, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Price_ele, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Price_ele, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Price_ele, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Price_ele, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Price_ele, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Price_ele, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Price_ele, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Price_ele, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Price_ele, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Price_ele, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Price_ele, 0, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes Main_scrn_ENG_2_Space_gel_3
	ui->Main_scrn_ENG_2_Space_gel_3 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_4);
	lv_label_set_text(ui->Main_scrn_ENG_2_Space_gel_3, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Space_gel_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Space_gel_3, 644, 61);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Space_gel_3, 88, 43);

	//Write style for Main_scrn_ENG_2_Space_gel_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Space_gel_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Space_gel_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Space_gel_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Space_gel_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Space_gel_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Space_gel_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Space_gel_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Space_gel_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Space_gel_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Space_gel_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Space_gel_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Space_gel_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Space_gel_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Space_gel_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Qua_li_gel
	ui->Main_scrn_ENG_2_Qua_li_gel = lv_dropdown_create(ui->Main_scrn_ENG_2_Main_menu_subpage_4);
	lv_dropdown_set_options(ui->Main_scrn_ENG_2_Qua_li_gel, "0\n1\n2\n3\n4\n5");
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Qua_li_gel, 423, 58);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Qua_li_gel, 156, 48);

	//Write style for Main_scrn_ENG_2_Qua_li_gel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Qua_li_gel, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Qua_li_gel, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Qua_li_gel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Qua_li_gel, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Qua_li_gel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Qua_li_gel, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Qua_li_gel, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Qua_li_gel, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Qua_li_gel, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Qua_li_gel, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Qua_li_gel, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Qua_li_gel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Qua_li_gel, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Qua_li_gel, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Qua_li_gel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Main_scrn_ENG_2_Qua_li_gel, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Qua_li_gel, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Qua_li_gel, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Qua_li_gel, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Qua_li_gel, 1, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Qua_li_gel, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Qua_li_gel, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Qua_li_gel, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Qua_li_gel, 8, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Qua_li_gel, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Qua_li_gel, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Qua_li_gel, 3, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Qua_li_gel, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Qua_li_gel, lv_color_hex(0x3bae90), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Qua_li_gel, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Qua_li_gel, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for Main_scrn_ENG_2_Qua_li_gel, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Qua_li_gel, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Qua_li_gel, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Qua_li_gel, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Qua_li_gel, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Qua_li_gel, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Qua_li_gel, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Qua_li_gel, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Qua_li_gel, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Qua_li_gel, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Qua_li_gel, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Qua_li_gel, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Qua_li_gel, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Qua_li_gel, lv_color_hex(0x3bcba6), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Qua_li_gel, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Qua_li_gel, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style state: LV_STATE_CHECKED for &style_Main_scrn_ENG_2_Qua_li_gel_extra_list_selected_checked
	static lv_style_t style_Main_scrn_ENG_2_Qua_li_gel_extra_list_selected_checked;
	ui_init_style(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_selected_checked);
	
	lv_style_set_border_width(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_selected_checked, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_selected_checked, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_selected_checked, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_selected_checked, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_selected_checked, lv_color_hex(0x00a1b5));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_selected_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_2_Qua_li_gel), &style_Main_scrn_ENG_2_Qua_li_gel_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_2_Qua_li_gel_extra_list_main_default
	static lv_style_t style_Main_scrn_ENG_2_Qua_li_gel_extra_list_main_default;
	ui_init_style(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_main_default);
	
	lv_style_set_max_height(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_main_default, 90);
	lv_style_set_text_color(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_main_default, &lv_font_montserratMedium_14);
	lv_style_set_text_opa(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_main_default, 255);
	lv_style_set_border_width(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_main_default, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_main_default, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_main_default, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_main_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_main_default, lv_color_hex(0x53a1d9));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_2_Qua_li_gel), &style_Main_scrn_ENG_2_Qua_li_gel_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_2_Qua_li_gel_extra_list_scrollbar_default
	static lv_style_t style_Main_scrn_ENG_2_Qua_li_gel_extra_list_scrollbar_default;
	ui_init_style(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_scrollbar_default);
	
	lv_style_set_radius(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_scrollbar_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_scrollbar_default, lv_color_hex(0x62b062));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_2_Qua_li_gel_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_2_Qua_li_gel), &style_Main_scrn_ENG_2_Qua_li_gel_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Space_gel_2
	ui->Main_scrn_ENG_2_Space_gel_2 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_4);
	lv_label_set_text(ui->Main_scrn_ENG_2_Space_gel_2, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Space_gel_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Space_gel_2, 646, 84);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Space_gel_2, 88, 43);

	//Write style for Main_scrn_ENG_2_Space_gel_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Space_gel_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Space_gel_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Space_gel_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Space_gel_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Space_gel_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Space_gel_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Space_gel_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Space_gel_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Space_gel_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Space_gel_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Space_gel_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Space_gel_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Space_gel_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Space_gel_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_im_gel
	ui->Main_scrn_ENG_2_im_gel = lv_img_create(ui->Main_scrn_ENG_2_Main_menu_subpage_4);
	lv_obj_add_flag(ui->Main_scrn_ENG_2_im_gel, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Main_scrn_ENG_2_im_gel, &_Gelusil_MPS_alpha_450x240);
	lv_img_set_pivot(ui->Main_scrn_ENG_2_im_gel, 250,100);
	lv_img_set_angle(ui->Main_scrn_ENG_2_im_gel, 0);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_im_gel, 254, 110);
	lv_obj_set_size(ui->Main_scrn_ENG_2_im_gel, 450, 240);

	//Write style for Main_scrn_ENG_2_im_gel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Main_scrn_ENG_2_im_gel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Main_scrn_ENG_2_im_gel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_im_gel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Main_scrn_ENG_2_im_gel, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Space_gel_1
	ui->Main_scrn_ENG_2_Space_gel_1 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_4);
	lv_label_set_text(ui->Main_scrn_ENG_2_Space_gel_1, "\n\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Space_gel_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Space_gel_1, 615, 40);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Space_gel_1, 110, 31);

	//Write style for Main_scrn_ENG_2_Space_gel_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Space_gel_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Space_gel_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Space_gel_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Space_gel_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Space_gel_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Space_gel_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Space_gel_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Space_gel_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Space_gel_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Space_gel_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Space_gel_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Space_gel_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Space_gel_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Space_gel_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Price_gel
	ui->Main_scrn_ENG_2_Price_gel = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_4);
	lv_label_set_text(ui->Main_scrn_ENG_2_Price_gel, "₹150\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Price_gel, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Price_gel, 176, 336);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Price_gel, 160, 80);

	//Write style for Main_scrn_ENG_2_Price_gel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Price_gel, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Price_gel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Price_gel, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Price_gel, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Price_gel, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Price_gel, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Price_gel, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Price_gel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Price_gel, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Price_gel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Price_gel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Price_gel, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Price_gel, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Price_gel, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Price_gel, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Price_gel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Price_gel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Price_gel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Price_gel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes Main_scrn_ENG_2_Space_kof_3
	ui->Main_scrn_ENG_2_Space_kof_3 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_5);
	lv_label_set_text(ui->Main_scrn_ENG_2_Space_kof_3, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Space_kof_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Space_kof_3, 653, 66);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Space_kof_3, 88, 43);

	//Write style for Main_scrn_ENG_2_Space_kof_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Space_kof_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Space_kof_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Space_kof_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Space_kof_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Space_kof_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Space_kof_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Space_kof_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Space_kof_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Space_kof_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Space_kof_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Space_kof_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Space_kof_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Space_kof_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Space_kof_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Qua_li_kof
	ui->Main_scrn_ENG_2_Qua_li_kof = lv_dropdown_create(ui->Main_scrn_ENG_2_Main_menu_subpage_5);
	lv_dropdown_set_options(ui->Main_scrn_ENG_2_Qua_li_kof, "0\n1\n2\n3\n4\n5");
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Qua_li_kof, 423, 58);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Qua_li_kof, 156, 48);

	//Write style for Main_scrn_ENG_2_Qua_li_kof, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Qua_li_kof, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Qua_li_kof, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Qua_li_kof, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Qua_li_kof, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Qua_li_kof, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Qua_li_kof, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Qua_li_kof, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Qua_li_kof, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Qua_li_kof, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Qua_li_kof, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Qua_li_kof, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Qua_li_kof, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Qua_li_kof, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Qua_li_kof, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Qua_li_kof, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Main_scrn_ENG_2_Qua_li_kof, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Qua_li_kof, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Qua_li_kof, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Qua_li_kof, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Qua_li_kof, 1, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Qua_li_kof, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Qua_li_kof, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Qua_li_kof, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Qua_li_kof, 8, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Qua_li_kof, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Qua_li_kof, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Qua_li_kof, 3, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Qua_li_kof, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Qua_li_kof, lv_color_hex(0x3bae90), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Qua_li_kof, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Qua_li_kof, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for Main_scrn_ENG_2_Qua_li_kof, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Qua_li_kof, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Qua_li_kof, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Qua_li_kof, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Qua_li_kof, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Qua_li_kof, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Qua_li_kof, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Qua_li_kof, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Qua_li_kof, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Qua_li_kof, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Qua_li_kof, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Qua_li_kof, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Qua_li_kof, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Qua_li_kof, lv_color_hex(0x3bcba6), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Qua_li_kof, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Qua_li_kof, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style state: LV_STATE_CHECKED for &style_Main_scrn_ENG_2_Qua_li_kof_extra_list_selected_checked
	static lv_style_t style_Main_scrn_ENG_2_Qua_li_kof_extra_list_selected_checked;
	ui_init_style(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_selected_checked);
	
	lv_style_set_border_width(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_selected_checked, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_selected_checked, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_selected_checked, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_selected_checked, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_selected_checked, lv_color_hex(0x00a1b5));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_selected_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_2_Qua_li_kof), &style_Main_scrn_ENG_2_Qua_li_kof_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_2_Qua_li_kof_extra_list_main_default
	static lv_style_t style_Main_scrn_ENG_2_Qua_li_kof_extra_list_main_default;
	ui_init_style(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_main_default);
	
	lv_style_set_max_height(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_main_default, 90);
	lv_style_set_text_color(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_main_default, &lv_font_montserratMedium_14);
	lv_style_set_text_opa(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_main_default, 255);
	lv_style_set_border_width(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_main_default, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_main_default, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_main_default, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_main_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_main_default, lv_color_hex(0x53a1d9));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_2_Qua_li_kof), &style_Main_scrn_ENG_2_Qua_li_kof_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_2_Qua_li_kof_extra_list_scrollbar_default
	static lv_style_t style_Main_scrn_ENG_2_Qua_li_kof_extra_list_scrollbar_default;
	ui_init_style(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_scrollbar_default);
	
	lv_style_set_radius(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_scrollbar_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_scrollbar_default, lv_color_hex(0x62b062));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_2_Qua_li_kof_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_2_Qua_li_kof), &style_Main_scrn_ENG_2_Qua_li_kof_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Space_kof_2
	ui->Main_scrn_ENG_2_Space_kof_2 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_5);
	lv_label_set_text(ui->Main_scrn_ENG_2_Space_kof_2, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Space_kof_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Space_kof_2, 654, 79);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Space_kof_2, 88, 43);

	//Write style for Main_scrn_ENG_2_Space_kof_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Space_kof_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Space_kof_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Space_kof_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Space_kof_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Space_kof_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Space_kof_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Space_kof_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Space_kof_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Space_kof_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Space_kof_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Space_kof_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Space_kof_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Space_kof_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Space_kof_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_im_kof
	ui->Main_scrn_ENG_2_im_kof = lv_img_create(ui->Main_scrn_ENG_2_Main_menu_subpage_5);
	lv_obj_add_flag(ui->Main_scrn_ENG_2_im_kof, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Main_scrn_ENG_2_im_kof, &_himalaya_koflet_cough_syrup_alpha_211x240);
	lv_img_set_pivot(ui->Main_scrn_ENG_2_im_kof, 250,100);
	lv_img_set_angle(ui->Main_scrn_ENG_2_im_kof, 0);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_im_kof, 228, 112);
	lv_obj_set_size(ui->Main_scrn_ENG_2_im_kof, 211, 240);

	//Write style for Main_scrn_ENG_2_im_kof, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Main_scrn_ENG_2_im_kof, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Main_scrn_ENG_2_im_kof, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_im_kof, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Main_scrn_ENG_2_im_kof, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Space_kof_1
	ui->Main_scrn_ENG_2_Space_kof_1 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_5);
	lv_label_set_text(ui->Main_scrn_ENG_2_Space_kof_1, "\n\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Space_kof_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Space_kof_1, 599, 62);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Space_kof_1, 110, 31);

	//Write style for Main_scrn_ENG_2_Space_kof_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Space_kof_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Space_kof_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Space_kof_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Space_kof_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Space_kof_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Space_kof_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Space_kof_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Space_kof_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Space_kof_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Space_kof_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Space_kof_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Space_kof_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Space_kof_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Space_kof_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Price_kof
	ui->Main_scrn_ENG_2_Price_kof = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_5);
	lv_label_set_text(ui->Main_scrn_ENG_2_Price_kof, "₹117\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Price_kof, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Price_kof, 180, 327);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Price_kof, 160, 80);

	//Write style for Main_scrn_ENG_2_Price_kof, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Price_kof, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Price_kof, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Price_kof, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Price_kof, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Price_kof, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Price_kof, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Price_kof, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Price_kof, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Price_kof, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Price_kof, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Price_kof, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Price_kof, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Price_kof, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Price_kof, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Price_kof, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Price_kof, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Price_kof, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Price_kof, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Price_kof, 0, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes Main_scrn_ENG_2_Space_imo_3
	ui->Main_scrn_ENG_2_Space_imo_3 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_6);
	lv_label_set_text(ui->Main_scrn_ENG_2_Space_imo_3, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Space_imo_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Space_imo_3, 632, 64);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Space_imo_3, 88, 43);

	//Write style for Main_scrn_ENG_2_Space_imo_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Space_imo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Space_imo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Space_imo_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Space_imo_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Space_imo_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Space_imo_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Space_imo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Space_imo_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Space_imo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Space_imo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Space_imo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Space_imo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Space_imo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Space_imo_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Qua_li_imo
	ui->Main_scrn_ENG_2_Qua_li_imo = lv_dropdown_create(ui->Main_scrn_ENG_2_Main_menu_subpage_6);
	lv_dropdown_set_options(ui->Main_scrn_ENG_2_Qua_li_imo, "0\n1\n2\n3\n4\n5");
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Qua_li_imo, 423, 58);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Qua_li_imo, 156, 48);

	//Write style for Main_scrn_ENG_2_Qua_li_imo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Qua_li_imo, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Qua_li_imo, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Qua_li_imo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Qua_li_imo, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Qua_li_imo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Qua_li_imo, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Qua_li_imo, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Qua_li_imo, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Qua_li_imo, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Qua_li_imo, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Qua_li_imo, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Qua_li_imo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Qua_li_imo, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Qua_li_imo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Qua_li_imo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Main_scrn_ENG_2_Qua_li_imo, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Qua_li_imo, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Qua_li_imo, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Qua_li_imo, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Qua_li_imo, 1, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Qua_li_imo, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Qua_li_imo, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Qua_li_imo, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Qua_li_imo, 8, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Qua_li_imo, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Qua_li_imo, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Qua_li_imo, 3, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Qua_li_imo, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Qua_li_imo, lv_color_hex(0x3bae90), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Qua_li_imo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Qua_li_imo, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for Main_scrn_ENG_2_Qua_li_imo, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Qua_li_imo, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Qua_li_imo, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Qua_li_imo, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Qua_li_imo, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Qua_li_imo, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Qua_li_imo, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Qua_li_imo, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Qua_li_imo, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Qua_li_imo, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Qua_li_imo, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Qua_li_imo, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Qua_li_imo, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Qua_li_imo, lv_color_hex(0x3bcba6), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Qua_li_imo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Qua_li_imo, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style state: LV_STATE_CHECKED for &style_Main_scrn_ENG_2_Qua_li_imo_extra_list_selected_checked
	static lv_style_t style_Main_scrn_ENG_2_Qua_li_imo_extra_list_selected_checked;
	ui_init_style(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_selected_checked);
	
	lv_style_set_border_width(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_selected_checked, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_selected_checked, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_selected_checked, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_selected_checked, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_selected_checked, lv_color_hex(0x00a1b5));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_selected_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_2_Qua_li_imo), &style_Main_scrn_ENG_2_Qua_li_imo_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_2_Qua_li_imo_extra_list_main_default
	static lv_style_t style_Main_scrn_ENG_2_Qua_li_imo_extra_list_main_default;
	ui_init_style(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_main_default);
	
	lv_style_set_max_height(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_main_default, 90);
	lv_style_set_text_color(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_main_default, &lv_font_montserratMedium_14);
	lv_style_set_text_opa(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_main_default, 255);
	lv_style_set_border_width(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_main_default, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_main_default, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_main_default, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_main_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_main_default, lv_color_hex(0x53a1d9));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_2_Qua_li_imo), &style_Main_scrn_ENG_2_Qua_li_imo_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_2_Qua_li_imo_extra_list_scrollbar_default
	static lv_style_t style_Main_scrn_ENG_2_Qua_li_imo_extra_list_scrollbar_default;
	ui_init_style(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_scrollbar_default);
	
	lv_style_set_radius(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_scrollbar_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_scrollbar_default, lv_color_hex(0x62b062));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_2_Qua_li_imo_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_2_Qua_li_imo), &style_Main_scrn_ENG_2_Qua_li_imo_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Space_imo_2
	ui->Main_scrn_ENG_2_Space_imo_2 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_6);
	lv_label_set_text(ui->Main_scrn_ENG_2_Space_imo_2, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Space_imo_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Space_imo_2, 677, 52);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Space_imo_2, 88, 43);

	//Write style for Main_scrn_ENG_2_Space_imo_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Space_imo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Space_imo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Space_imo_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Space_imo_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Space_imo_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Space_imo_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Space_imo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Space_imo_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Space_imo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Space_imo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Space_imo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Space_imo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Space_imo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Space_imo_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_im_imo
	ui->Main_scrn_ENG_2_im_imo = lv_img_create(ui->Main_scrn_ENG_2_Main_menu_subpage_6);
	lv_obj_add_flag(ui->Main_scrn_ENG_2_im_imo, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Main_scrn_ENG_2_im_imo, &_Imodium_alpha_345x240);
	lv_img_set_pivot(ui->Main_scrn_ENG_2_im_imo, 250,100);
	lv_img_set_angle(ui->Main_scrn_ENG_2_im_imo, 0);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_im_imo, 229, 82);
	lv_obj_set_size(ui->Main_scrn_ENG_2_im_imo, 345, 240);

	//Write style for Main_scrn_ENG_2_im_imo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Main_scrn_ENG_2_im_imo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Main_scrn_ENG_2_im_imo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_im_imo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Main_scrn_ENG_2_im_imo, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Space_imo_1
	ui->Main_scrn_ENG_2_Space_imo_1 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_6);
	lv_label_set_text(ui->Main_scrn_ENG_2_Space_imo_1, "\n\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Space_imo_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Space_imo_1, 601, 36);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Space_imo_1, 110, 31);

	//Write style for Main_scrn_ENG_2_Space_imo_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Space_imo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Space_imo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Space_imo_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Space_imo_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Space_imo_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Space_imo_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Space_imo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Space_imo_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Space_imo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Space_imo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Space_imo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Space_imo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Space_imo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Space_imo_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Price_imo
	ui->Main_scrn_ENG_2_Price_imo = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_6);
	lv_label_set_text(ui->Main_scrn_ENG_2_Price_imo, "₹15\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Price_imo, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Price_imo, 186, 330);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Price_imo, 160, 80);

	//Write style for Main_scrn_ENG_2_Price_imo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Price_imo, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Price_imo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Price_imo, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Price_imo, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Price_imo, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Price_imo, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Price_imo, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Price_imo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Price_imo, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Price_imo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Price_imo, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Price_imo, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Price_imo, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Price_imo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Price_imo, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Price_imo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Price_imo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Price_imo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Price_imo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes Main_scrn_ENG_2_Space_nas_3
	ui->Main_scrn_ENG_2_Space_nas_3 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_7);
	lv_label_set_text(ui->Main_scrn_ENG_2_Space_nas_3, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Space_nas_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Space_nas_3, 624, 68);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Space_nas_3, 88, 43);

	//Write style for Main_scrn_ENG_2_Space_nas_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Space_nas_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Space_nas_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Space_nas_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Space_nas_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Space_nas_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Space_nas_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Space_nas_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Space_nas_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Space_nas_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Space_nas_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Space_nas_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Space_nas_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Space_nas_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Space_nas_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Qua_li_nas
	ui->Main_scrn_ENG_2_Qua_li_nas = lv_dropdown_create(ui->Main_scrn_ENG_2_Main_menu_subpage_7);
	lv_dropdown_set_options(ui->Main_scrn_ENG_2_Qua_li_nas, "0\n1\n2\n3\n4\n5");
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Qua_li_nas, 423, 58);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Qua_li_nas, 156, 48);

	//Write style for Main_scrn_ENG_2_Qua_li_nas, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Qua_li_nas, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Qua_li_nas, &lv_font_montserratMedium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Qua_li_nas, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Qua_li_nas, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Qua_li_nas, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Qua_li_nas, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Qua_li_nas, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Qua_li_nas, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Qua_li_nas, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Qua_li_nas, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Qua_li_nas, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Qua_li_nas, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Qua_li_nas, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Qua_li_nas, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Qua_li_nas, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Main_scrn_ENG_2_Qua_li_nas, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Qua_li_nas, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Qua_li_nas, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Qua_li_nas, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Qua_li_nas, 1, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Qua_li_nas, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Qua_li_nas, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Qua_li_nas, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Qua_li_nas, 8, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Qua_li_nas, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Qua_li_nas, 6, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Qua_li_nas, 3, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Qua_li_nas, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Qua_li_nas, lv_color_hex(0x3bae90), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Qua_li_nas, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Qua_li_nas, 0, LV_PART_MAIN|LV_STATE_CHECKED);

	//Write style for Main_scrn_ENG_2_Qua_li_nas, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Qua_li_nas, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Qua_li_nas, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Qua_li_nas, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Qua_li_nas, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Qua_li_nas, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Qua_li_nas, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Qua_li_nas, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Qua_li_nas, 8, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Qua_li_nas, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Qua_li_nas, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Qua_li_nas, 3, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Qua_li_nas, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Qua_li_nas, lv_color_hex(0x3bcba6), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Qua_li_nas, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Qua_li_nas, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style state: LV_STATE_CHECKED for &style_Main_scrn_ENG_2_Qua_li_nas_extra_list_selected_checked
	static lv_style_t style_Main_scrn_ENG_2_Qua_li_nas_extra_list_selected_checked;
	ui_init_style(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_selected_checked);
	
	lv_style_set_border_width(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_selected_checked, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_selected_checked, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_selected_checked, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_selected_checked, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_selected_checked, lv_color_hex(0x00a1b5));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_selected_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_2_Qua_li_nas), &style_Main_scrn_ENG_2_Qua_li_nas_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_2_Qua_li_nas_extra_list_main_default
	static lv_style_t style_Main_scrn_ENG_2_Qua_li_nas_extra_list_main_default;
	ui_init_style(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_main_default);
	
	lv_style_set_max_height(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_main_default, 90);
	lv_style_set_text_color(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_main_default, &lv_font_montserratMedium_14);
	lv_style_set_text_opa(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_main_default, 255);
	lv_style_set_border_width(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_main_default, 1);
	lv_style_set_border_opa(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_main_default, 255);
	lv_style_set_border_color(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_main_default, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_main_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_main_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_main_default, lv_color_hex(0x53a1d9));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_2_Qua_li_nas), &style_Main_scrn_ENG_2_Qua_li_nas_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_Main_scrn_ENG_2_Qua_li_nas_extra_list_scrollbar_default
	static lv_style_t style_Main_scrn_ENG_2_Qua_li_nas_extra_list_scrollbar_default;
	ui_init_style(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_scrollbar_default);
	
	lv_style_set_radius(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_scrollbar_default, 255);
	lv_style_set_bg_color(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_scrollbar_default, lv_color_hex(0x62b062));
	lv_style_set_bg_grad_dir(&style_Main_scrn_ENG_2_Qua_li_nas_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->Main_scrn_ENG_2_Qua_li_nas), &style_Main_scrn_ENG_2_Qua_li_nas_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Space_nas_2
	ui->Main_scrn_ENG_2_Space_nas_2 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_7);
	lv_label_set_text(ui->Main_scrn_ENG_2_Space_nas_2, "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Space_nas_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Space_nas_2, 643, 49);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Space_nas_2, 88, 43);

	//Write style for Main_scrn_ENG_2_Space_nas_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Space_nas_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Space_nas_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Space_nas_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Space_nas_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Space_nas_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Space_nas_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Space_nas_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Space_nas_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Space_nas_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Space_nas_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Space_nas_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Space_nas_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Space_nas_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Space_nas_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_im_nas
	ui->Main_scrn_ENG_2_im_nas = lv_img_create(ui->Main_scrn_ENG_2_Main_menu_subpage_7);
	lv_obj_add_flag(ui->Main_scrn_ENG_2_im_nas, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Main_scrn_ENG_2_im_nas, &_Naselin_alpha_195x240);
	lv_img_set_pivot(ui->Main_scrn_ENG_2_im_nas, 250,100);
	lv_img_set_angle(ui->Main_scrn_ENG_2_im_nas, 0);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_im_nas, 254, 83);
	lv_obj_set_size(ui->Main_scrn_ENG_2_im_nas, 195, 240);

	//Write style for Main_scrn_ENG_2_im_nas, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->Main_scrn_ENG_2_im_nas, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->Main_scrn_ENG_2_im_nas, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_im_nas, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->Main_scrn_ENG_2_im_nas, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Space_nas_1
	ui->Main_scrn_ENG_2_Space_nas_1 = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_7);
	lv_label_set_text(ui->Main_scrn_ENG_2_Space_nas_1, "\n\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Space_nas_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Space_nas_1, 631, 43);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Space_nas_1, 110, 31);

	//Write style for Main_scrn_ENG_2_Space_nas_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Space_nas_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Space_nas_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Space_nas_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Space_nas_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Space_nas_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Space_nas_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Space_nas_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Space_nas_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Space_nas_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Space_nas_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Space_nas_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Space_nas_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Space_nas_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Space_nas_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Price_nas
	ui->Main_scrn_ENG_2_Price_nas = lv_label_create(ui->Main_scrn_ENG_2_Main_menu_subpage_7);
	lv_label_set_text(ui->Main_scrn_ENG_2_Price_nas, "₹95\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Price_nas, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Price_nas, 194, 339);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Price_nas, 160, 80);

	//Write style for Main_scrn_ENG_2_Price_nas, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Price_nas, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Price_nas, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Price_nas, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Price_nas, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Price_nas, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Price_nas, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Price_nas, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Price_nas, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Price_nas, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Price_nas, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Price_nas, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Price_nas, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Price_nas, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Price_nas, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Price_nas, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Price_nas, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Price_nas, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Price_nas, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Price_nas, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Common_txt_2
	ui->Main_scrn_ENG_2_Common_txt_2 = lv_label_create(ui->Main_scrn_ENG_2);
	lv_label_set_text(ui->Main_scrn_ENG_2_Common_txt_2, "" LV_SYMBOL_LEFT " " LV_SYMBOL_LEFT " " LV_SYMBOL_LEFT " Price for 1 item");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Common_txt_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Common_txt_2, 918, 446);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Common_txt_2, 316, 45);

	//Write style for Main_scrn_ENG_2_Common_txt_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Common_txt_2, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Common_txt_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Common_txt_2, lv_color_hex(0x9ba5ae), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Common_txt_2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Common_txt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Common_txt_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Common_txt_2, &lv_font_PottiSreeramuluRegular_28, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Common_txt_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Common_txt_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Common_txt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Common_txt_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Common_txt_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Common_txt_2, lv_color_hex(0xc5fdd3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Common_txt_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Common_txt_2, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Common_txt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Common_txt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Common_txt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Common_txt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Common_txt_1
	ui->Main_scrn_ENG_2_Common_txt_1 = lv_label_create(ui->Main_scrn_ENG_2);
	lv_label_set_text(ui->Main_scrn_ENG_2_Common_txt_1, "Select the Quantity of this product here  " LV_SYMBOL_RIGHT " " LV_SYMBOL_RIGHT " " LV_SYMBOL_RIGHT " " LV_SYMBOL_RIGHT "");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Common_txt_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Common_txt_1, 406, 26);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Common_txt_1, 336, 75);

	//Write style for Main_scrn_ENG_2_Common_txt_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Common_txt_1, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Common_txt_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Common_txt_1, lv_color_hex(0x9ba5ae), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Common_txt_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Common_txt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Common_txt_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Common_txt_1, &lv_font_PottiSreeramuluRegular_28, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Common_txt_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Common_txt_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Common_txt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Common_txt_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Common_txt_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Common_txt_1, lv_color_hex(0xc5fdd3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Common_txt_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Common_txt_1, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Common_txt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Common_txt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Common_txt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Common_txt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_cancel_btn
	ui->Main_scrn_ENG_2_cancel_btn = lv_btn_create(ui->Main_scrn_ENG_2);
	ui->Main_scrn_ENG_2_cancel_btn_label = lv_label_create(ui->Main_scrn_ENG_2_cancel_btn);
	lv_label_set_text(ui->Main_scrn_ENG_2_cancel_btn_label, "CANCEL");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_cancel_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Main_scrn_ENG_2_cancel_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Main_scrn_ENG_2_cancel_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Main_scrn_ENG_2_cancel_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->Main_scrn_ENG_2_cancel_btn, 63, 582);
	lv_obj_set_size(ui->Main_scrn_ENG_2_cancel_btn, 235, 106);

	//Write style for Main_scrn_ENG_2_cancel_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_cancel_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_cancel_btn, lv_color_hex(0xff0027), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_cancel_btn, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Main_scrn_ENG_2_cancel_btn, lv_color_hex(0x500619), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_main_stop(ui->Main_scrn_ENG_2_cancel_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_stop(ui->Main_scrn_ENG_2_cancel_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_cancel_btn, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_cancel_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_cancel_btn, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_cancel_btn, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_cancel_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_cancel_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_cancel_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_cancel_btn, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_cancel_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_cancel_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_proceed_btn
	ui->Main_scrn_ENG_2_proceed_btn = lv_btn_create(ui->Main_scrn_ENG_2);
	ui->Main_scrn_ENG_2_proceed_btn_label = lv_label_create(ui->Main_scrn_ENG_2_proceed_btn);
	lv_label_set_text(ui->Main_scrn_ENG_2_proceed_btn_label, "PROCEED");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_proceed_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Main_scrn_ENG_2_proceed_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Main_scrn_ENG_2_proceed_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Main_scrn_ENG_2_proceed_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->Main_scrn_ENG_2_proceed_btn, 997, 582);
	lv_obj_set_size(ui->Main_scrn_ENG_2_proceed_btn, 235, 106);

	//Write style for Main_scrn_ENG_2_proceed_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_proceed_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_proceed_btn, lv_color_hex(0x00ff32), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_proceed_btn, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Main_scrn_ENG_2_proceed_btn, lv_color_hex(0x003712), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_main_stop(ui->Main_scrn_ENG_2_proceed_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_stop(ui->Main_scrn_ENG_2_proceed_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_proceed_btn, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_proceed_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_proceed_btn, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_proceed_btn, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_proceed_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_proceed_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_proceed_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_proceed_btn, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_proceed_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_proceed_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_chat_txt
	ui->Main_scrn_ENG_2_chat_txt = lv_label_create(ui->Main_scrn_ENG_2);
	lv_label_set_text(ui->Main_scrn_ENG_2_chat_txt, "Unable to find what you need?\nTo chat with me........");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_chat_txt, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_chat_txt, 415, 549);
	lv_obj_set_size(ui->Main_scrn_ENG_2_chat_txt, 487, 65);

	//Write style for Main_scrn_ENG_2_chat_txt, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_chat_txt, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_chat_txt, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_chat_txt, lv_color_hex(0x9ba5ae), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_chat_txt, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_chat_txt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_chat_txt, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_chat_txt, &lv_font_PottiSreeramuluRegular_28, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_chat_txt, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_chat_txt, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_chat_txt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_chat_txt, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_chat_txt, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_chat_txt, lv_color_hex(0xc5fdd3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_chat_txt, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_chat_txt, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_chat_txt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_chat_txt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_chat_txt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_chat_txt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_chat_btn
	ui->Main_scrn_ENG_2_chat_btn = lv_btn_create(ui->Main_scrn_ENG_2);
	ui->Main_scrn_ENG_2_chat_btn_label = lv_label_create(ui->Main_scrn_ENG_2_chat_btn);
	lv_label_set_text(ui->Main_scrn_ENG_2_chat_btn_label, "Click Here  ");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_chat_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Main_scrn_ENG_2_chat_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Main_scrn_ENG_2_chat_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Main_scrn_ENG_2_chat_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->Main_scrn_ENG_2_chat_btn, 446, 627);
	lv_obj_set_size(ui->Main_scrn_ENG_2_chat_btn, 417, 65);

	//Write style for Main_scrn_ENG_2_chat_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_chat_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_chat_btn, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_chat_btn, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Main_scrn_ENG_2_chat_btn, lv_color_hex(0x0a1721), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_main_stop(ui->Main_scrn_ENG_2_chat_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_stop(ui->Main_scrn_ENG_2_chat_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_chat_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_chat_btn, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_chat_btn, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Main_scrn_ENG_2_chat_btn, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Main_scrn_ENG_2_chat_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Main_scrn_ENG_2_chat_btn, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Main_scrn_ENG_2_chat_btn, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Main_scrn_ENG_2_chat_btn, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_chat_btn, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_chat_btn, &lv_font_PottiSreeramuluRegular_46, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_chat_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_chat_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Page_2
	ui->Main_scrn_ENG_2_Page_2 = lv_label_create(ui->Main_scrn_ENG_2);
	lv_label_set_text(ui->Main_scrn_ENG_2_Page_2, "2\n\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Page_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Page_2, 170, 406);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Page_2, 80, 80);

	//Write style for Main_scrn_ENG_2_Page_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Page_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Main_scrn_ENG_2_Page_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Main_scrn_ENG_2_Page_2, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Main_scrn_ENG_2_Page_2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Page_2, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Page_2, lv_color_hex(0x94e1b4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Page_2, &lv_font_PottiSreeramuluRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Page_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_scrn_ENG_2_Page_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_scrn_ENG_2_Page_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Page_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Page_2, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Page_2, lv_color_hex(0x126171), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Page_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_scrn_ENG_2_Page_2, 22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_scrn_ENG_2_Page_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_scrn_ENG_2_Page_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_scrn_ENG_2_Page_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Page_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Nxt_page
	ui->Main_scrn_ENG_2_Nxt_page = lv_btn_create(ui->Main_scrn_ENG_2);
	ui->Main_scrn_ENG_2_Nxt_page_label = lv_label_create(ui->Main_scrn_ENG_2_Nxt_page);
	lv_label_set_text(ui->Main_scrn_ENG_2_Nxt_page_label, "" LV_SYMBOL_RIGHT " ");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Nxt_page_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Main_scrn_ENG_2_Nxt_page_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Main_scrn_ENG_2_Nxt_page, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Main_scrn_ENG_2_Nxt_page_label, LV_PCT(100));
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Nxt_page, 250, 425);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Nxt_page, 100, 50);

	//Write style for Main_scrn_ENG_2_Nxt_page, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Nxt_page, 184, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Nxt_page, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Nxt_page, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Nxt_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Nxt_page, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Nxt_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Nxt_page, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Nxt_page, &lv_font_PottiSreeramuluRegular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Nxt_page, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Nxt_page, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Main_scrn_ENG_2_Prev_page
	ui->Main_scrn_ENG_2_Prev_page = lv_btn_create(ui->Main_scrn_ENG_2);
	ui->Main_scrn_ENG_2_Prev_page_label = lv_label_create(ui->Main_scrn_ENG_2_Prev_page);
	lv_label_set_text(ui->Main_scrn_ENG_2_Prev_page_label, "" LV_SYMBOL_LEFT "\n");
	lv_label_set_long_mode(ui->Main_scrn_ENG_2_Prev_page_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Main_scrn_ENG_2_Prev_page_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Main_scrn_ENG_2_Prev_page, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Main_scrn_ENG_2_Prev_page_label, LV_PCT(100));
	lv_obj_set_pos(ui->Main_scrn_ENG_2_Prev_page, 70, 425);
	lv_obj_set_size(ui->Main_scrn_ENG_2_Prev_page, 100, 50);

	//Write style for Main_scrn_ENG_2_Prev_page, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Main_scrn_ENG_2_Prev_page, 183, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_scrn_ENG_2_Prev_page, lv_color_hex(0x033854), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Main_scrn_ENG_2_Prev_page, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_scrn_ENG_2_Prev_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_scrn_ENG_2_Prev_page, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_scrn_ENG_2_Prev_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_scrn_ENG_2_Prev_page, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_scrn_ENG_2_Prev_page, &lv_font_PottiSreeramuluRegular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Main_scrn_ENG_2_Prev_page, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_scrn_ENG_2_Prev_page, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of Main_scrn_ENG_2.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->Main_scrn_ENG_2);

	//Init events for screen.
	events_init_Main_scrn_ENG_2(ui);
}
