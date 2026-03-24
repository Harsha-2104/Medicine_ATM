/*
* Copyright 2026 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

#if LV_USE_GUIDER_SIMULATOR && LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif


static void Home_scrn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_SCREEN_LOADED:
	{
		break;
	}
    default:
        break;
    }
}

static void Home_scrn_Eng_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Main_scrn_ENG_1, guider_ui.Main_scrn_ENG_1_del, &guider_ui.Home_scrn_del, setup_scr_Main_scrn_ENG_1, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 200, true, false);
		break;
	}
    default:
        break;
    }
}

void events_init_Home_scrn (lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Home_scrn, Home_scrn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Home_scrn_Eng_btn, Home_scrn_Eng_btn_event_handler, LV_EVENT_ALL, ui);
}

static void Main_scrn_ENG_1_Qua_li_com_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_VALUE_CHANGED:
	{
		uint16_t id = lv_dropdown_get_selected(guider_ui.Main_scrn_ENG_1_Qua_li_com);
		
		break;
	}
    default:
        break;
    }
}

static void Main_scrn_ENG_1_cancel_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Home_scrn, guider_ui.Home_scrn_del, &guider_ui.Main_scrn_ENG_1_del, setup_scr_Home_scrn, LV_SCR_LOAD_ANIM_OVER_LEFT, 200, 200, true, true);
		break;
	}
    default:
        break;
    }
}

static void Main_scrn_ENG_1_proceed_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.Main_scrn_ENG_1_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 600, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.Purchase_scrn, guider_ui.Purchase_scrn_del, &guider_ui.Main_scrn_ENG_1_del, setup_scr_Purchase_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 600, false, true);
		break;
	}
    default:
        break;
    }
}

static void Main_scrn_ENG_1_chat_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.Main_scrn_ENG_1_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_NONE, 600, 200, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.ChatBot_Home_scrn, guider_ui.ChatBot_Home_scrn_del, &guider_ui.Main_scrn_ENG_1_del, setup_scr_ChatBot_Home_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 800, false, true);
		break;
	}
    default:
        break;
    }
}

static void Main_scrn_ENG_1_Nxt_page_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Main_scrn_ENG_2, guider_ui.Main_scrn_ENG_2_del, &guider_ui.Main_scrn_ENG_1_del, setup_scr_Main_scrn_ENG_2, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
		break;
	}
    default:
        break;
    }
}

void events_init_Main_scrn_ENG_1 (lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Main_scrn_ENG_1_Qua_li_com, Main_scrn_ENG_1_Qua_li_com_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Main_scrn_ENG_1_cancel_btn, Main_scrn_ENG_1_cancel_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Main_scrn_ENG_1_proceed_btn, Main_scrn_ENG_1_proceed_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Main_scrn_ENG_1_chat_btn, Main_scrn_ENG_1_chat_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Main_scrn_ENG_1_Nxt_page, Main_scrn_ENG_1_Nxt_page_event_handler, LV_EVENT_ALL, ui);
}

static void Main_scrn_ENG_2_cancel_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Home_scrn, guider_ui.Home_scrn_del, &guider_ui.Main_scrn_ENG_2_del, setup_scr_Home_scrn, LV_SCR_LOAD_ANIM_OVER_LEFT, 200, 200, true, true);
		break;
	}
    default:
        break;
    }
}

static void Main_scrn_ENG_2_proceed_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.Main_scrn_ENG_2_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 600, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.Purchase_scrn, guider_ui.Purchase_scrn_del, &guider_ui.Main_scrn_ENG_2_del, setup_scr_Purchase_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 600, false, true);
		break;
	}
    default:
        break;
    }
}

static void Main_scrn_ENG_2_chat_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.Main_scrn_ENG_2_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 600, 800, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.ChatBot_Home_scrn, guider_ui.ChatBot_Home_scrn_del, &guider_ui.Main_scrn_ENG_2_del, setup_scr_ChatBot_Home_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 800, false, true);
		break;
	}
    default:
        break;
    }
}

static void Main_scrn_ENG_2_Nxt_page_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Main_scrn_ENG_3, guider_ui.Main_scrn_ENG_3_del, &guider_ui.Main_scrn_ENG_2_del, setup_scr_Main_scrn_ENG_3, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
		break;
	}
    default:
        break;
    }
}

static void Main_scrn_ENG_2_Prev_page_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Main_scrn_ENG_1, guider_ui.Main_scrn_ENG_1_del, &guider_ui.Main_scrn_ENG_2_del, setup_scr_Main_scrn_ENG_1, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
		break;
	}
    default:
        break;
    }
}

void events_init_Main_scrn_ENG_2 (lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Main_scrn_ENG_2_cancel_btn, Main_scrn_ENG_2_cancel_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Main_scrn_ENG_2_proceed_btn, Main_scrn_ENG_2_proceed_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Main_scrn_ENG_2_chat_btn, Main_scrn_ENG_2_chat_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Main_scrn_ENG_2_Nxt_page, Main_scrn_ENG_2_Nxt_page_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Main_scrn_ENG_2_Prev_page, Main_scrn_ENG_2_Prev_page_event_handler, LV_EVENT_ALL, ui);
}

static void Main_scrn_ENG_3_cancel_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Home_scrn, guider_ui.Home_scrn_del, &guider_ui.Main_scrn_ENG_3_del, setup_scr_Home_scrn, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
    default:
        break;
    }
}

static void Main_scrn_ENG_3_proceed_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.Main_scrn_ENG_3_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 600, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.Purchase_scrn, guider_ui.Purchase_scrn_del, &guider_ui.Main_scrn_ENG_3_del, setup_scr_Purchase_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 600, false, true);
		break;
	}
    default:
        break;
    }
}

static void Main_scrn_ENG_3_chat_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.Main_scrn_ENG_3_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 600, 800, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.ChatBot_Home_scrn, guider_ui.ChatBot_Home_scrn_del, &guider_ui.Main_scrn_ENG_3_del, setup_scr_ChatBot_Home_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 800, false, true);
		break;
	}
    default:
        break;
    }
}

static void Main_scrn_ENG_3_Prev_page_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Main_scrn_ENG_2, guider_ui.Main_scrn_ENG_2_del, &guider_ui.Main_scrn_ENG_3_del, setup_scr_Main_scrn_ENG_2, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, false);
		break;
	}
    default:
        break;
    }
}

void events_init_Main_scrn_ENG_3 (lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Main_scrn_ENG_3_cancel_btn, Main_scrn_ENG_3_cancel_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Main_scrn_ENG_3_proceed_btn, Main_scrn_ENG_3_proceed_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Main_scrn_ENG_3_chat_btn, Main_scrn_ENG_3_chat_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Main_scrn_ENG_3_Prev_page, Main_scrn_ENG_3_Prev_page_event_handler, LV_EVENT_ALL, ui);
}

static void ChatBot_Home_scrn_cold_cough_flu_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.ChatBot_Home_scrn_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_NONE, 600, 200, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.Cold_scrn, guider_ui.Cold_scrn_del, &guider_ui.ChatBot_Home_scrn_del, setup_scr_Cold_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 800, false, true);
		break;
	}
    default:
        break;
    }
}

static void ChatBot_Home_scrn_pain_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.ChatBot_Home_scrn_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_NONE, 600, 200, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.Pain_scrn, guider_ui.Pain_scrn_del, &guider_ui.ChatBot_Home_scrn_del, setup_scr_Pain_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 800, false, true);
		break;
	}
    default:
        break;
    }
}

static void ChatBot_Home_scrn_digestive_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.ChatBot_Home_scrn_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_NONE, 600, 200, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.Digestive_scrn, guider_ui.Digestive_scrn_del, &guider_ui.ChatBot_Home_scrn_del, setup_scr_Digestive_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 800, false, true);
		break;
	}
    default:
        break;
    }
}

static void ChatBot_Home_scrn_skin_issue_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.ChatBot_Home_scrn_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 600, 200, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.Skin_issue_scrn, guider_ui.Skin_issue_scrn_del, &guider_ui.ChatBot_Home_scrn_del, setup_scr_Skin_issue_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 800, false, true);
		break;
	}
    default:
        break;
    }
}

static void ChatBot_Home_scrn_others_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.ChatBot_Home_scrn_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 600, 200, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.Others_scrn, guider_ui.Others_scrn_del, &guider_ui.ChatBot_Home_scrn_del, setup_scr_Others_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 800, false, true);
		break;
	}
    default:
        break;
    }
}

static void ChatBot_Home_scrn_Purchase_scrn_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Main_scrn_ENG_1, guider_ui.Main_scrn_ENG_1_del, &guider_ui.ChatBot_Home_scrn_del, setup_scr_Main_scrn_ENG_1, LV_SCR_LOAD_ANIM_FADE_ON, 400, 200, false, true);
		break;
	}
    default:
        break;
    }
}

void events_init_ChatBot_Home_scrn (lv_ui *ui)
{
	lv_obj_add_event_cb(ui->ChatBot_Home_scrn_cold_cough_flu_btn, ChatBot_Home_scrn_cold_cough_flu_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->ChatBot_Home_scrn_pain_btn, ChatBot_Home_scrn_pain_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->ChatBot_Home_scrn_digestive_btn, ChatBot_Home_scrn_digestive_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->ChatBot_Home_scrn_skin_issue_btn, ChatBot_Home_scrn_skin_issue_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->ChatBot_Home_scrn_others_btn, ChatBot_Home_scrn_others_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->ChatBot_Home_scrn_Purchase_scrn_btn, ChatBot_Home_scrn_Purchase_scrn_btn_event_handler, LV_EVENT_ALL, ui);
}

static void Cold_scrn_cough_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.Cold_scrn_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 600, 200, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.Cough_reme_scrn, guider_ui.Cough_reme_scrn_del, &guider_ui.Cold_scrn_del, setup_scr_Cough_reme_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 800, false, true);
		break;
	}
    default:
        break;
    }
}

static void Cold_scrn_sneezing_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.Cold_scrn_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 600, 200, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.Sneeze_reme_scrn, guider_ui.Sneeze_reme_scrn_del, &guider_ui.Cold_scrn_del, setup_scr_Sneeze_reme_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 800, false, true);
		break;
	}
    default:
        break;
    }
}

static void Cold_scrn_sore_throat_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.Cold_scrn_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 600, 200, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.Throat_reme_scrn, guider_ui.Throat_reme_scrn_del, &guider_ui.Cold_scrn_del, setup_scr_Throat_reme_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 800, false, true);
		break;
	}
    default:
        break;
    }
}

static void Cold_scrn_Fever_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.Cold_scrn_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 600, 200, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.FeverAche_reme_scrn, guider_ui.FeverAche_reme_scrn_del, &guider_ui.Cold_scrn_del, setup_scr_FeverAche_reme_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 800, false, true);
		break;
	}
    default:
        break;
    }
}

static void Cold_scrn_All_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.Cold_scrn_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 600, 200, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.Multi_reme_scrn, guider_ui.Multi_reme_scrn_del, &guider_ui.Cold_scrn_del, setup_scr_Multi_reme_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 800, false, true);
		break;
	}
    default:
        break;
    }
}

static void Cold_scrn_Purchase_scrn_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Main_scrn_ENG_1, guider_ui.Main_scrn_ENG_1_del, &guider_ui.Cold_scrn_del, setup_scr_Main_scrn_ENG_1, LV_SCR_LOAD_ANIM_FADE_ON, 400, 200, false, true);
		break;
	}
    default:
        break;
    }
}

void events_init_Cold_scrn (lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Cold_scrn_cough_btn, Cold_scrn_cough_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Cold_scrn_sneezing_btn, Cold_scrn_sneezing_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Cold_scrn_sore_throat_btn, Cold_scrn_sore_throat_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Cold_scrn_Fever_btn, Cold_scrn_Fever_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Cold_scrn_All_btn, Cold_scrn_All_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Cold_scrn_Purchase_scrn_btn, Cold_scrn_Purchase_scrn_btn_event_handler, LV_EVENT_ALL, ui);
}

static void Pain_scrn_General_pain_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.Pain_scrn_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 600, 200, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.Ache_reme_scrn, guider_ui.Ache_reme_scrn_del, &guider_ui.Pain_scrn_del, setup_scr_Ache_reme_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 800, false, true);
		break;
	}
    default:
        break;
    }
}

static void Pain_scrn_joint_pain_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.Pain_scrn_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 600, 800, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.JointPain_reme_scrn, guider_ui.JointPain_reme_scrn_del, &guider_ui.Pain_scrn_del, setup_scr_JointPain_reme_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 800, false, true);
		break;
	}
    default:
        break;
    }
}

static void Pain_scrn_amb_pain_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.Pain_scrn_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 600, 200, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.Others_scrn, guider_ui.Others_scrn_del, &guider_ui.Pain_scrn_del, setup_scr_Others_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 800, false, true);
		break;
	}
    default:
        break;
    }
}

static void Pain_scrn_Purchase_scrn_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Main_scrn_ENG_1, guider_ui.Main_scrn_ENG_1_del, &guider_ui.Pain_scrn_del, setup_scr_Main_scrn_ENG_1, LV_SCR_LOAD_ANIM_FADE_ON, 400, 200, false, true);
		break;
	}
    default:
        break;
    }
}

void events_init_Pain_scrn (lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Pain_scrn_General_pain_btn, Pain_scrn_General_pain_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Pain_scrn_joint_pain_btn, Pain_scrn_joint_pain_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Pain_scrn_amb_pain_btn, Pain_scrn_amb_pain_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Pain_scrn_Purchase_scrn_btn, Pain_scrn_Purchase_scrn_btn_event_handler, LV_EVENT_ALL, ui);
}

static void Digestive_scrn_sneezing_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.Digestive_scrn_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 600, 200, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.Acidity_reme_scrn, guider_ui.Acidity_reme_scrn_del, &guider_ui.Digestive_scrn_del, setup_scr_Acidity_reme_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 800, false, true);
		break;
	}
    default:
        break;
    }
}

static void Digestive_scrn_sore_throat_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.Digestive_scrn_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 600, 200, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.Diarrhea_reme_scrn, guider_ui.Diarrhea_reme_scrn_del, &guider_ui.Digestive_scrn_del, setup_scr_Diarrhea_reme_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 800, false, true);
		break;
	}
    default:
        break;
    }
}

static void Digestive_scrn_Fever_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.Digestive_scrn_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 600, 200, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.Others_scrn, guider_ui.Others_scrn_del, &guider_ui.Digestive_scrn_del, setup_scr_Others_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 800, false, true);
		break;
	}
    default:
        break;
    }
}

static void Digestive_scrn_Purchase_scrn_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Main_scrn_ENG_1, guider_ui.Main_scrn_ENG_1_del, &guider_ui.Digestive_scrn_del, setup_scr_Main_scrn_ENG_1, LV_SCR_LOAD_ANIM_FADE_ON, 400, 200, false, true);
		break;
	}
    default:
        break;
    }
}

void events_init_Digestive_scrn (lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Digestive_scrn_sneezing_btn, Digestive_scrn_sneezing_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Digestive_scrn_sore_throat_btn, Digestive_scrn_sore_throat_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Digestive_scrn_Fever_btn, Digestive_scrn_Fever_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Digestive_scrn_Purchase_scrn_btn, Digestive_scrn_Purchase_scrn_btn_event_handler, LV_EVENT_ALL, ui);
}

static void Skin_issue_scrn_cough_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.Skin_issue_scrn_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 600, 200, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.Rash_reme_scrn, guider_ui.Rash_reme_scrn_del, &guider_ui.Skin_issue_scrn_del, setup_scr_Rash_reme_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 800, false, true);
		break;
	}
    default:
        break;
    }
}

static void Skin_issue_scrn_sneezing_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.Skin_issue_scrn_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 600, 200, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.Cut_reme_scrn, guider_ui.Cut_reme_scrn_del, &guider_ui.Skin_issue_scrn_del, setup_scr_Cut_reme_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 800, false, true);
		break;
	}
    default:
        break;
    }
}

static void Skin_issue_scrn_Fever_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.Skin_issue_scrn_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 600, 200, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.Others_scrn, guider_ui.Others_scrn_del, &guider_ui.Skin_issue_scrn_del, setup_scr_Others_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 800, false, true);
		break;
	}
    default:
        break;
    }
}

static void Skin_issue_scrn_Purchase_scrn_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Main_scrn_ENG_1, guider_ui.Main_scrn_ENG_1_del, &guider_ui.Skin_issue_scrn_del, setup_scr_Main_scrn_ENG_1, LV_SCR_LOAD_ANIM_FADE_ON, 400, 200, false, true);
		break;
	}
    default:
        break;
    }
}

void events_init_Skin_issue_scrn (lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Skin_issue_scrn_cough_btn, Skin_issue_scrn_cough_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Skin_issue_scrn_sneezing_btn, Skin_issue_scrn_sneezing_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Skin_issue_scrn_Fever_btn, Skin_issue_scrn_Fever_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Skin_issue_scrn_Purchase_scrn_btn, Skin_issue_scrn_Purchase_scrn_btn_event_handler, LV_EVENT_ALL, ui);
}

static void Others_scrn_Home_scrn_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Home_scrn, guider_ui.Home_scrn_del, &guider_ui.Others_scrn_del, setup_scr_Home_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 200, true, true);
		break;
	}
    default:
        break;
    }
}

void events_init_Others_scrn (lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Others_scrn_Home_scrn_btn, Others_scrn_Home_scrn_btn_event_handler, LV_EVENT_ALL, ui);
}

static void Cough_reme_scrn_Purchase_scrn_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Main_scrn_ENG_1, guider_ui.Main_scrn_ENG_1_del, &guider_ui.Cough_reme_scrn_del, setup_scr_Main_scrn_ENG_1, LV_SCR_LOAD_ANIM_FADE_ON, 400, 200, true, true);
		break;
	}
    default:
        break;
    }
}

void events_init_Cough_reme_scrn (lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Cough_reme_scrn_Purchase_scrn_btn, Cough_reme_scrn_Purchase_scrn_btn_event_handler, LV_EVENT_ALL, ui);
}

static void Sneeze_reme_scrn_Purchase_scrn_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Main_scrn_ENG_1, guider_ui.Main_scrn_ENG_1_del, &guider_ui.Sneeze_reme_scrn_del, setup_scr_Main_scrn_ENG_1, LV_SCR_LOAD_ANIM_FADE_ON, 400, 200, true, true);
		break;
	}
    default:
        break;
    }
}

void events_init_Sneeze_reme_scrn (lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Sneeze_reme_scrn_Purchase_scrn_btn, Sneeze_reme_scrn_Purchase_scrn_btn_event_handler, LV_EVENT_ALL, ui);
}

static void Throat_reme_scrn_Purchase_scrn_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Main_scrn_ENG_1, guider_ui.Main_scrn_ENG_1_del, &guider_ui.Throat_reme_scrn_del, setup_scr_Main_scrn_ENG_1, LV_SCR_LOAD_ANIM_FADE_ON, 400, 200, true, true);
		break;
	}
    default:
        break;
    }
}

void events_init_Throat_reme_scrn (lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Throat_reme_scrn_Purchase_scrn_btn, Throat_reme_scrn_Purchase_scrn_btn_event_handler, LV_EVENT_ALL, ui);
}

static void FeverAche_reme_scrn_Purchase_scrn_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Main_scrn_ENG_1, guider_ui.Main_scrn_ENG_1_del, &guider_ui.FeverAche_reme_scrn_del, setup_scr_Main_scrn_ENG_1, LV_SCR_LOAD_ANIM_FADE_ON, 400, 200, true, true);
		break;
	}
    default:
        break;
    }
}

void events_init_FeverAche_reme_scrn (lv_ui *ui)
{
	lv_obj_add_event_cb(ui->FeverAche_reme_scrn_Purchase_scrn_btn, FeverAche_reme_scrn_Purchase_scrn_btn_event_handler, LV_EVENT_ALL, ui);
}

static void Multi_reme_scrn_Purchase_scrn_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Main_scrn_ENG_1, guider_ui.Main_scrn_ENG_1_del, &guider_ui.Multi_reme_scrn_del, setup_scr_Main_scrn_ENG_1, LV_SCR_LOAD_ANIM_FADE_ON, 400, 200, true, true);
		break;
	}
    default:
        break;
    }
}

void events_init_Multi_reme_scrn (lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Multi_reme_scrn_Purchase_scrn_btn, Multi_reme_scrn_Purchase_scrn_btn_event_handler, LV_EVENT_ALL, ui);
}

static void Ache_reme_scrn_Purchase_scrn_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Main_scrn_ENG_1, guider_ui.Main_scrn_ENG_1_del, &guider_ui.Ache_reme_scrn_del, setup_scr_Main_scrn_ENG_1, LV_SCR_LOAD_ANIM_FADE_ON, 400, 200, true, true);
		break;
	}
    default:
        break;
    }
}

void events_init_Ache_reme_scrn (lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Ache_reme_scrn_Purchase_scrn_btn, Ache_reme_scrn_Purchase_scrn_btn_event_handler, LV_EVENT_ALL, ui);
}

static void JointPain_reme_scrn_Purchase_scrn_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Main_scrn_ENG_1, guider_ui.Main_scrn_ENG_1_del, &guider_ui.JointPain_reme_scrn_del, setup_scr_Main_scrn_ENG_1, LV_SCR_LOAD_ANIM_FADE_ON, 400, 200, true, true);
		break;
	}
    default:
        break;
    }
}

void events_init_JointPain_reme_scrn (lv_ui *ui)
{
	lv_obj_add_event_cb(ui->JointPain_reme_scrn_Purchase_scrn_btn, JointPain_reme_scrn_Purchase_scrn_btn_event_handler, LV_EVENT_ALL, ui);
}

static void Acidity_reme_scrn_Purchase_scrn_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Main_scrn_ENG_1, guider_ui.Main_scrn_ENG_1_del, &guider_ui.Acidity_reme_scrn_del, setup_scr_Main_scrn_ENG_1, LV_SCR_LOAD_ANIM_FADE_ON, 400, 200, true, true);
		break;
	}
    default:
        break;
    }
}

void events_init_Acidity_reme_scrn (lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Acidity_reme_scrn_Purchase_scrn_btn, Acidity_reme_scrn_Purchase_scrn_btn_event_handler, LV_EVENT_ALL, ui);
}

static void Diarrhea_reme_scrn_Purchase_scrn_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Main_scrn_ENG_1, guider_ui.Main_scrn_ENG_1_del, &guider_ui.Diarrhea_reme_scrn_del, setup_scr_Main_scrn_ENG_1, LV_SCR_LOAD_ANIM_FADE_ON, 400, 200, true, true);
		break;
	}
    default:
        break;
    }
}

void events_init_Diarrhea_reme_scrn (lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Diarrhea_reme_scrn_Purchase_scrn_btn, Diarrhea_reme_scrn_Purchase_scrn_btn_event_handler, LV_EVENT_ALL, ui);
}

static void Rash_reme_scrn_Purchase_scrn_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Main_scrn_ENG_1, guider_ui.Main_scrn_ENG_1_del, &guider_ui.Rash_reme_scrn_del, setup_scr_Main_scrn_ENG_1, LV_SCR_LOAD_ANIM_FADE_ON, 400, 200, true, true);
		break;
	}
    default:
        break;
    }
}

void events_init_Rash_reme_scrn (lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Rash_reme_scrn_Purchase_scrn_btn, Rash_reme_scrn_Purchase_scrn_btn_event_handler, LV_EVENT_ALL, ui);
}

static void Cut_reme_scrn_Purchase_scrn_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Main_scrn_ENG_1, guider_ui.Main_scrn_ENG_1_del, &guider_ui.Cut_reme_scrn_del, setup_scr_Main_scrn_ENG_1, LV_SCR_LOAD_ANIM_FADE_ON, 400, 200, true, true);
		break;
	}
    default:
        break;
    }
}

void events_init_Cut_reme_scrn (lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Cut_reme_scrn_Purchase_scrn_btn, Cut_reme_scrn_Purchase_scrn_btn_event_handler, LV_EVENT_ALL, ui);
}

static void Purchase_scrn_Del_det_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_add_flag(guider_ui.Purchase_scrn_label_det, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.Purchase_scrn_im_det, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.Purchase_scrn_Del_det_btn, LV_OBJ_FLAG_HIDDEN);
		break;
	}
    default:
        break;
    }
}

static void Purchase_scrn_Del_str_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_add_flag(guider_ui.Purchase_scrn_im_str, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.Purchase_scrn_label_str, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.Purchase_scrn_Del_str_btn, LV_OBJ_FLAG_HIDDEN);
		break;
	}
    default:
        break;
    }
}

static void Purchase_scrn_Del_cal_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_add_flag(guider_ui.Purchase_scrn_im_cal, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.Purchase_scrn_label_cal, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.Purchase_scrn_Del_cal_btn, LV_OBJ_FLAG_HIDDEN);
		break;
	}
    default:
        break;
    }
}

static void Purchase_scrn_Cancel_pay_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.Purchase_scrn_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 200, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.Main_scrn_ENG_1, guider_ui.Main_scrn_ENG_1_del, &guider_ui.Purchase_scrn_del, setup_scr_Main_scrn_ENG_1, LV_SCR_LOAD_ANIM_FADE_ON, 400, 600, false, true);
		break;
	}
    default:
        break;
    }
}

static void Purchase_scrn_Pay_btn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Load_anim_scrn, guider_ui.Load_anim_scrn_del, &guider_ui.Purchase_scrn_del, setup_scr_Load_anim_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 1200, 200, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.Pay_cmplt_scrn, guider_ui.Pay_cmplt_scrn_del, &guider_ui.Purchase_scrn_del, setup_scr_Pay_cmplt_scrn, LV_SCR_LOAD_ANIM_FADE_ON, 400, 1400, false, true);
		break;
	}
    default:
        break;
    }
}

void events_init_Purchase_scrn (lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Purchase_scrn_Del_det_btn, Purchase_scrn_Del_det_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Purchase_scrn_Del_str_btn, Purchase_scrn_Del_str_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Purchase_scrn_Del_cal_btn, Purchase_scrn_Del_cal_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Purchase_scrn_Cancel_pay_btn, Purchase_scrn_Cancel_pay_btn_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Purchase_scrn_Pay_btn, Purchase_scrn_Pay_btn_event_handler, LV_EVENT_ALL, ui);
}

static void Pay_cmplt_scrn_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
	case LV_EVENT_SCREEN_LOADED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Home_scrn, guider_ui.Home_scrn_del, &guider_ui.Pay_cmplt_scrn_del, setup_scr_Home_scrn, LV_SCR_LOAD_ANIM_NONE, 200, 4000, false, true);
		break;
	}
    default:
        break;
    }
}

void events_init_Pay_cmplt_scrn (lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Pay_cmplt_scrn, Pay_cmplt_scrn_event_handler, LV_EVENT_ALL, ui);
}


void events_init(lv_ui *ui)
{

}
