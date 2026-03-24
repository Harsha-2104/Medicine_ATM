/*
* Copyright 2026 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

typedef struct
{
  
	lv_obj_t *Home_scrn;
	bool Home_scrn_del;
	lv_obj_t *Home_scrn_Title;
	lv_obj_t *Home_scrn_Eng_btn;
	lv_obj_t *Home_scrn_Eng_btn_label;
	lv_obj_t *Main_scrn_ENG_1;
	bool Main_scrn_ENG_1_del;
	lv_obj_t *Main_scrn_ENG_1_Main_menu;
	lv_obj_t *Main_scrn_ENG_1_Main_menu_sidebar_page;
	lv_obj_t *Main_scrn_ENG_1_Main_menu_subpage_1;
	lv_obj_t *Main_scrn_ENG_1_Main_menu_cont_1;
	lv_obj_t *Main_scrn_ENG_1_Main_menu_label_1;
	lv_obj_t *Main_scrn_ENG_1_Main_menu_subpage_2;
	lv_obj_t *Main_scrn_ENG_1_Main_menu_cont_2;
	lv_obj_t *Main_scrn_ENG_1_Main_menu_label_2;
	lv_obj_t *Main_scrn_ENG_1_Main_menu_subpage_3;
	lv_obj_t *Main_scrn_ENG_1_Main_menu_cont_3;
	lv_obj_t *Main_scrn_ENG_1_Main_menu_label_3;
	lv_obj_t *Main_scrn_ENG_1_Main_menu_subpage_4;
	lv_obj_t *Main_scrn_ENG_1_Main_menu_cont_4;
	lv_obj_t *Main_scrn_ENG_1_Main_menu_label_4;
	lv_obj_t *Main_scrn_ENG_1_Main_menu_subpage_5;
	lv_obj_t *Main_scrn_ENG_1_Main_menu_cont_5;
	lv_obj_t *Main_scrn_ENG_1_Main_menu_label_5;
	lv_obj_t *Main_scrn_ENG_1_Main_menu_subpage_6;
	lv_obj_t *Main_scrn_ENG_1_Main_menu_cont_6;
	lv_obj_t *Main_scrn_ENG_1_Main_menu_label_6;
	lv_obj_t *Main_scrn_ENG_1_Main_menu_subpage_7;
	lv_obj_t *Main_scrn_ENG_1_Main_menu_cont_7;
	lv_obj_t *Main_scrn_ENG_1_Main_menu_label_7;
	lv_obj_t *Main_scrn_ENG_1_Space_ben_1;
	lv_obj_t *Main_scrn_ENG_1_Qua_li_ben;
	lv_obj_t *Main_scrn_ENG_1_Space_ben_2;
	lv_obj_t *Main_scrn_ENG_1_im_ben;
	lv_obj_t *Main_scrn_ENG_1_Space_ben_3;
	lv_obj_t *Main_scrn_ENG_1_Price_ben;
	lv_obj_t *Main_scrn_ENG_1_Space_cal_1;
	lv_obj_t *Main_scrn_ENG_1_Qua_li_cal;
	lv_obj_t *Main_scrn_ENG_1_Space_cal_2;
	lv_obj_t *Main_scrn_ENG_1_im_cal;
	lv_obj_t *Main_scrn_ENG_1_Space_cal_3;
	lv_obj_t *Main_scrn_ENG_1_Price_cal;
	lv_obj_t *Main_scrn_ENG_1_Space_can_1;
	lv_obj_t *Main_scrn_ENG_1_Qua_li_can;
	lv_obj_t *Main_scrn_ENG_1_Space_can_2;
	lv_obj_t *Main_scrn_ENG_1_im_can;
	lv_obj_t *Main_scrn_ENG_1_Space_can_3;
	lv_obj_t *Main_scrn_ENG_1_Price_can;
	lv_obj_t *Main_scrn_ENG_1_Space_cip_1;
	lv_obj_t *Main_scrn_ENG_1_Qua_li_cip;
	lv_obj_t *Main_scrn_ENG_1_Space_cip_2;
	lv_obj_t *Main_scrn_ENG_1_im_cip;
	lv_obj_t *Main_scrn_ENG_1_Space_cip_3;
	lv_obj_t *Main_scrn_ENG_1_Price_cip;
	lv_obj_t *Main_scrn_ENG_1_Space_clo_1;
	lv_obj_t *Main_scrn_ENG_1_Qua_li_clo;
	lv_obj_t *Main_scrn_ENG_1_Space_clo_2;
	lv_obj_t *Main_scrn_ENG_1_im_clo;
	lv_obj_t *Main_scrn_ENG_1_Space_clo_3;
	lv_obj_t *Main_scrn_ENG_1_Price_clo;
	lv_obj_t *Main_scrn_ENG_1_Space_cof_1;
	lv_obj_t *Main_scrn_ENG_1_Qua_li_cof;
	lv_obj_t *Main_scrn_ENG_1_Space_cof_2;
	lv_obj_t *Main_scrn_ENG_1_im_cof;
	lv_obj_t *Main_scrn_ENG_1_Space_cof_3;
	lv_obj_t *Main_scrn_ENG_1_Price_cof;
	lv_obj_t *Main_scrn_ENG_1_Space_com_1;
	lv_obj_t *Main_scrn_ENG_1_Qua_li_com;
	lv_obj_t *Main_scrn_ENG_1_Space_com_2;
	lv_obj_t *Main_scrn_ENG_1_im_com;
	lv_obj_t *Main_scrn_ENG_1_Space_com_3;
	lv_obj_t *Main_scrn_ENG_1_Price_com;
	lv_obj_t *Main_scrn_ENG_1_Common_txt_2;
	lv_obj_t *Main_scrn_ENG_1_Common_txt_1;
	lv_obj_t *Main_scrn_ENG_1_cancel_btn;
	lv_obj_t *Main_scrn_ENG_1_cancel_btn_label;
	lv_obj_t *Main_scrn_ENG_1_proceed_btn;
	lv_obj_t *Main_scrn_ENG_1_proceed_btn_label;
	lv_obj_t *Main_scrn_ENG_1_chat_txt;
	lv_obj_t *Main_scrn_ENG_1_chat_btn;
	lv_obj_t *Main_scrn_ENG_1_chat_btn_label;
	lv_obj_t *Main_scrn_ENG_1_Page_1;
	lv_obj_t *Main_scrn_ENG_1_Nxt_page;
	lv_obj_t *Main_scrn_ENG_1_Nxt_page_label;
	lv_obj_t *Main_scrn_ENG_2;
	bool Main_scrn_ENG_2_del;
	lv_obj_t *Main_scrn_ENG_2_Main_menu;
	lv_obj_t *Main_scrn_ENG_2_Main_menu_sidebar_page;
	lv_obj_t *Main_scrn_ENG_2_Main_menu_subpage_1;
	lv_obj_t *Main_scrn_ENG_2_Main_menu_cont_1;
	lv_obj_t *Main_scrn_ENG_2_Main_menu_label_1;
	lv_obj_t *Main_scrn_ENG_2_Main_menu_subpage_2;
	lv_obj_t *Main_scrn_ENG_2_Main_menu_cont_2;
	lv_obj_t *Main_scrn_ENG_2_Main_menu_label_2;
	lv_obj_t *Main_scrn_ENG_2_Main_menu_subpage_3;
	lv_obj_t *Main_scrn_ENG_2_Main_menu_cont_3;
	lv_obj_t *Main_scrn_ENG_2_Main_menu_label_3;
	lv_obj_t *Main_scrn_ENG_2_Main_menu_subpage_4;
	lv_obj_t *Main_scrn_ENG_2_Main_menu_cont_4;
	lv_obj_t *Main_scrn_ENG_2_Main_menu_label_4;
	lv_obj_t *Main_scrn_ENG_2_Main_menu_subpage_5;
	lv_obj_t *Main_scrn_ENG_2_Main_menu_cont_5;
	lv_obj_t *Main_scrn_ENG_2_Main_menu_label_5;
	lv_obj_t *Main_scrn_ENG_2_Main_menu_subpage_6;
	lv_obj_t *Main_scrn_ENG_2_Main_menu_cont_6;
	lv_obj_t *Main_scrn_ENG_2_Main_menu_label_6;
	lv_obj_t *Main_scrn_ENG_2_Main_menu_subpage_7;
	lv_obj_t *Main_scrn_ENG_2_Main_menu_cont_7;
	lv_obj_t *Main_scrn_ENG_2_Main_menu_label_7;
	lv_obj_t *Main_scrn_ENG_2_Space_cro_3;
	lv_obj_t *Main_scrn_ENG_2_Qua_li_cro;
	lv_obj_t *Main_scrn_ENG_2_Space_cro_2;
	lv_obj_t *Main_scrn_ENG_2_im_cro;
	lv_obj_t *Main_scrn_ENG_2_Space_cro_1;
	lv_obj_t *Main_scrn_ENG_2_Price_cro;
	lv_obj_t *Main_scrn_ENG_2_Space_det_3;
	lv_obj_t *Main_scrn_ENG_2_Qua_li_det;
	lv_obj_t *Main_scrn_ENG_2_Space_det_2;
	lv_obj_t *Main_scrn_ENG_2_im_det;
	lv_obj_t *Main_scrn_ENG_2_Space_det_1;
	lv_obj_t *Main_scrn_ENG_2_Price_det;
	lv_obj_t *Main_scrn_ENG_2_Space_ele_3;
	lv_obj_t *Main_scrn_ENG_2_Qua_li_ele;
	lv_obj_t *Main_scrn_ENG_2_Space_ele_2;
	lv_obj_t *Main_scrn_ENG_2_im_ele;
	lv_obj_t *Main_scrn_ENG_2_Space_ele_1;
	lv_obj_t *Main_scrn_ENG_2_Price_ele;
	lv_obj_t *Main_scrn_ENG_2_Space_gel_3;
	lv_obj_t *Main_scrn_ENG_2_Qua_li_gel;
	lv_obj_t *Main_scrn_ENG_2_Space_gel_2;
	lv_obj_t *Main_scrn_ENG_2_im_gel;
	lv_obj_t *Main_scrn_ENG_2_Space_gel_1;
	lv_obj_t *Main_scrn_ENG_2_Price_gel;
	lv_obj_t *Main_scrn_ENG_2_Space_kof_3;
	lv_obj_t *Main_scrn_ENG_2_Qua_li_kof;
	lv_obj_t *Main_scrn_ENG_2_Space_kof_2;
	lv_obj_t *Main_scrn_ENG_2_im_kof;
	lv_obj_t *Main_scrn_ENG_2_Space_kof_1;
	lv_obj_t *Main_scrn_ENG_2_Price_kof;
	lv_obj_t *Main_scrn_ENG_2_Space_imo_3;
	lv_obj_t *Main_scrn_ENG_2_Qua_li_imo;
	lv_obj_t *Main_scrn_ENG_2_Space_imo_2;
	lv_obj_t *Main_scrn_ENG_2_im_imo;
	lv_obj_t *Main_scrn_ENG_2_Space_imo_1;
	lv_obj_t *Main_scrn_ENG_2_Price_imo;
	lv_obj_t *Main_scrn_ENG_2_Space_nas_3;
	lv_obj_t *Main_scrn_ENG_2_Qua_li_nas;
	lv_obj_t *Main_scrn_ENG_2_Space_nas_2;
	lv_obj_t *Main_scrn_ENG_2_im_nas;
	lv_obj_t *Main_scrn_ENG_2_Space_nas_1;
	lv_obj_t *Main_scrn_ENG_2_Price_nas;
	lv_obj_t *Main_scrn_ENG_2_Common_txt_2;
	lv_obj_t *Main_scrn_ENG_2_Common_txt_1;
	lv_obj_t *Main_scrn_ENG_2_cancel_btn;
	lv_obj_t *Main_scrn_ENG_2_cancel_btn_label;
	lv_obj_t *Main_scrn_ENG_2_proceed_btn;
	lv_obj_t *Main_scrn_ENG_2_proceed_btn_label;
	lv_obj_t *Main_scrn_ENG_2_chat_txt;
	lv_obj_t *Main_scrn_ENG_2_chat_btn;
	lv_obj_t *Main_scrn_ENG_2_chat_btn_label;
	lv_obj_t *Main_scrn_ENG_2_Page_2;
	lv_obj_t *Main_scrn_ENG_2_Nxt_page;
	lv_obj_t *Main_scrn_ENG_2_Nxt_page_label;
	lv_obj_t *Main_scrn_ENG_2_Prev_page;
	lv_obj_t *Main_scrn_ENG_2_Prev_page_label;
	lv_obj_t *Main_scrn_ENG_3;
	bool Main_scrn_ENG_3_del;
	lv_obj_t *Main_scrn_ENG_3_Main_menu;
	lv_obj_t *Main_scrn_ENG_3_Main_menu_sidebar_page;
	lv_obj_t *Main_scrn_ENG_3_Main_menu_subpage_1;
	lv_obj_t *Main_scrn_ENG_3_Main_menu_cont_1;
	lv_obj_t *Main_scrn_ENG_3_Main_menu_label_1;
	lv_obj_t *Main_scrn_ENG_3_Main_menu_subpage_2;
	lv_obj_t *Main_scrn_ENG_3_Main_menu_cont_2;
	lv_obj_t *Main_scrn_ENG_3_Main_menu_label_2;
	lv_obj_t *Main_scrn_ENG_3_Main_menu_subpage_3;
	lv_obj_t *Main_scrn_ENG_3_Main_menu_cont_3;
	lv_obj_t *Main_scrn_ENG_3_Main_menu_label_3;
	lv_obj_t *Main_scrn_ENG_3_Main_menu_subpage_4;
	lv_obj_t *Main_scrn_ENG_3_Main_menu_cont_4;
	lv_obj_t *Main_scrn_ENG_3_Main_menu_label_4;
	lv_obj_t *Main_scrn_ENG_3_Main_menu_subpage_5;
	lv_obj_t *Main_scrn_ENG_3_Main_menu_cont_5;
	lv_obj_t *Main_scrn_ENG_3_Main_menu_label_5;
	lv_obj_t *Main_scrn_ENG_3_Main_menu_subpage_6;
	lv_obj_t *Main_scrn_ENG_3_Main_menu_cont_6;
	lv_obj_t *Main_scrn_ENG_3_Main_menu_label_6;
	lv_obj_t *Main_scrn_ENG_3_Main_menu_subpage_7;
	lv_obj_t *Main_scrn_ENG_3_Main_menu_cont_7;
	lv_obj_t *Main_scrn_ENG_3_Main_menu_label_7;
	lv_obj_t *Main_scrn_ENG_3_Space_neo_3;
	lv_obj_t *Main_scrn_ENG_3_Qua_li_neo;
	lv_obj_t *Main_scrn_ENG_3_Space_neo_2;
	lv_obj_t *Main_scrn_ENG_3_im_neo;
	lv_obj_t *Main_scrn_ENG_3_Space_neo_1;
	lv_obj_t *Main_scrn_ENG_3_Price_neo;
	lv_obj_t *Main_scrn_ENG_3_Space_otr_3;
	lv_obj_t *Main_scrn_ENG_3_Qua_li_otr;
	lv_obj_t *Main_scrn_ENG_3_Space_otr_2;
	lv_obj_t *Main_scrn_ENG_3_im_otr;
	lv_obj_t *Main_scrn_ENG_3_Space_otr_1;
	lv_obj_t *Main_scrn_ENG_3_Price_otr;
	lv_obj_t *Main_scrn_ENG_3_Space_ran_3;
	lv_obj_t *Main_scrn_ENG_3_Qua_li_ran;
	lv_obj_t *Main_scrn_ENG_3_Space_ran_2;
	lv_obj_t *Main_scrn_ENG_3_im_ran;
	lv_obj_t *Main_scrn_ENG_3_Space_ran_1;
	lv_obj_t *Main_scrn_ENG_3_Price_ran;
	lv_obj_t *Main_scrn_ENG_3_Space_sar_3;
	lv_obj_t *Main_scrn_ENG_3_Qua_li_sar;
	lv_obj_t *Main_scrn_ENG_3_Space_sar_2;
	lv_obj_t *Main_scrn_ENG_3_im_sar;
	lv_obj_t *Main_scrn_ENG_3_Space_sar_1;
	lv_obj_t *Main_scrn_ENG_3_Price_sar;
	lv_obj_t *Main_scrn_ENG_3_Space_str_3;
	lv_obj_t *Main_scrn_ENG_3_Qua_li_str;
	lv_obj_t *Main_scrn_ENG_3_Space_str_2;
	lv_obj_t *Main_scrn_ENG_3_im_str;
	lv_obj_t *Main_scrn_ENG_3_Space_str_1;
	lv_obj_t *Main_scrn_ENG_3_Price_str;
	lv_obj_t *Main_scrn_ENG_3_Space_vic_3;
	lv_obj_t *Main_scrn_ENG_3_Qua_li_vic;
	lv_obj_t *Main_scrn_ENG_3_Space_vic_2;
	lv_obj_t *Main_scrn_ENG_3_im_vic;
	lv_obj_t *Main_scrn_ENG_3_Space_vic_1;
	lv_obj_t *Main_scrn_ENG_3_Price_vic;
	lv_obj_t *Main_scrn_ENG_3_Space_vol_3;
	lv_obj_t *Main_scrn_ENG_3_Qua_li_vol;
	lv_obj_t *Main_scrn_ENG_3_Space_vol_2;
	lv_obj_t *Main_scrn_ENG_3_im_vol;
	lv_obj_t *Main_scrn_ENG_3_Space_vol_1;
	lv_obj_t *Main_scrn_ENG_3_Price_vol;
	lv_obj_t *Main_scrn_ENG_3_Common_txt_2;
	lv_obj_t *Main_scrn_ENG_3_Common_txt_1;
	lv_obj_t *Main_scrn_ENG_3_cancel_btn;
	lv_obj_t *Main_scrn_ENG_3_cancel_btn_label;
	lv_obj_t *Main_scrn_ENG_3_proceed_btn;
	lv_obj_t *Main_scrn_ENG_3_proceed_btn_label;
	lv_obj_t *Main_scrn_ENG_3_chat_txt;
	lv_obj_t *Main_scrn_ENG_3_chat_btn;
	lv_obj_t *Main_scrn_ENG_3_chat_btn_label;
	lv_obj_t *Main_scrn_ENG_3_Page_3;
	lv_obj_t *Main_scrn_ENG_3_Prev_page;
	lv_obj_t *Main_scrn_ENG_3_Prev_page_label;
	lv_obj_t *ChatBot_Home_scrn;
	bool ChatBot_Home_scrn_del;
	lv_obj_t *ChatBot_Home_scrn_Bot_Title;
	lv_obj_t *ChatBot_Home_scrn_Question;
	lv_obj_t *ChatBot_Home_scrn_cold_cough_flu_btn;
	lv_obj_t *ChatBot_Home_scrn_cold_cough_flu_btn_label;
	lv_obj_t *ChatBot_Home_scrn_pain_btn;
	lv_obj_t *ChatBot_Home_scrn_pain_btn_label;
	lv_obj_t *ChatBot_Home_scrn_digestive_btn;
	lv_obj_t *ChatBot_Home_scrn_digestive_btn_label;
	lv_obj_t *ChatBot_Home_scrn_skin_issue_btn;
	lv_obj_t *ChatBot_Home_scrn_skin_issue_btn_label;
	lv_obj_t *ChatBot_Home_scrn_others_btn;
	lv_obj_t *ChatBot_Home_scrn_others_btn_label;
	lv_obj_t *ChatBot_Home_scrn_Purchase_scrn_btn;
	lv_obj_t *ChatBot_Home_scrn_Purchase_scrn_btn_label;
	lv_obj_t *ChatBot_Home_scrn_Alert_msg;
	lv_obj_t *Cold_scrn;
	bool Cold_scrn_del;
	lv_obj_t *Cold_scrn_Bot_Title;
	lv_obj_t *Cold_scrn_Question;
	lv_obj_t *Cold_scrn_cough_btn;
	lv_obj_t *Cold_scrn_cough_btn_label;
	lv_obj_t *Cold_scrn_sneezing_btn;
	lv_obj_t *Cold_scrn_sneezing_btn_label;
	lv_obj_t *Cold_scrn_sore_throat_btn;
	lv_obj_t *Cold_scrn_sore_throat_btn_label;
	lv_obj_t *Cold_scrn_Fever_btn;
	lv_obj_t *Cold_scrn_Fever_btn_label;
	lv_obj_t *Cold_scrn_All_btn;
	lv_obj_t *Cold_scrn_All_btn_label;
	lv_obj_t *Cold_scrn_Purchase_scrn_btn;
	lv_obj_t *Cold_scrn_Purchase_scrn_btn_label;
	lv_obj_t *Cold_scrn_Alert_msg;
	lv_obj_t *Pain_scrn;
	bool Pain_scrn_del;
	lv_obj_t *Pain_scrn_Bot_Title;
	lv_obj_t *Pain_scrn_Question;
	lv_obj_t *Pain_scrn_General_pain_btn;
	lv_obj_t *Pain_scrn_General_pain_btn_label;
	lv_obj_t *Pain_scrn_joint_pain_btn;
	lv_obj_t *Pain_scrn_joint_pain_btn_label;
	lv_obj_t *Pain_scrn_amb_pain_btn;
	lv_obj_t *Pain_scrn_amb_pain_btn_label;
	lv_obj_t *Pain_scrn_Purchase_scrn_btn;
	lv_obj_t *Pain_scrn_Purchase_scrn_btn_label;
	lv_obj_t *Pain_scrn_Alert_msg;
	lv_obj_t *Digestive_scrn;
	bool Digestive_scrn_del;
	lv_obj_t *Digestive_scrn_Bot_Title;
	lv_obj_t *Digestive_scrn_Question;
	lv_obj_t *Digestive_scrn_sneezing_btn;
	lv_obj_t *Digestive_scrn_sneezing_btn_label;
	lv_obj_t *Digestive_scrn_sore_throat_btn;
	lv_obj_t *Digestive_scrn_sore_throat_btn_label;
	lv_obj_t *Digestive_scrn_Fever_btn;
	lv_obj_t *Digestive_scrn_Fever_btn_label;
	lv_obj_t *Digestive_scrn_Purchase_scrn_btn;
	lv_obj_t *Digestive_scrn_Purchase_scrn_btn_label;
	lv_obj_t *Digestive_scrn_Alert_msg;
	lv_obj_t *Skin_issue_scrn;
	bool Skin_issue_scrn_del;
	lv_obj_t *Skin_issue_scrn_Bot_Title;
	lv_obj_t *Skin_issue_scrn_Question;
	lv_obj_t *Skin_issue_scrn_cough_btn;
	lv_obj_t *Skin_issue_scrn_cough_btn_label;
	lv_obj_t *Skin_issue_scrn_sneezing_btn;
	lv_obj_t *Skin_issue_scrn_sneezing_btn_label;
	lv_obj_t *Skin_issue_scrn_Fever_btn;
	lv_obj_t *Skin_issue_scrn_Fever_btn_label;
	lv_obj_t *Skin_issue_scrn_Purchase_scrn_btn;
	lv_obj_t *Skin_issue_scrn_Purchase_scrn_btn_label;
	lv_obj_t *Skin_issue_scrn_Alert_msg;
	lv_obj_t *Others_scrn;
	bool Others_scrn_del;
	lv_obj_t *Others_scrn_Bot_Title;
	lv_obj_t *Others_scrn_Question;
	lv_obj_t *Others_scrn_Home_scrn_btn;
	lv_obj_t *Others_scrn_Home_scrn_btn_label;
	lv_obj_t *Cough_reme_scrn;
	bool Cough_reme_scrn_del;
	lv_obj_t *Cough_reme_scrn_Bot_Title;
	lv_obj_t *Cough_reme_scrn_Question;
	lv_obj_t *Cough_reme_scrn_label_1;
	lv_obj_t *Cough_reme_scrn_label_2;
	lv_obj_t *Cough_reme_scrn_img_1;
	lv_obj_t *Cough_reme_scrn_img_2;
	lv_obj_t *Cough_reme_scrn_label_3;
	lv_obj_t *Cough_reme_scrn_label_4;
	lv_obj_t *Cough_reme_scrn_Purchase_scrn_btn;
	lv_obj_t *Cough_reme_scrn_Purchase_scrn_btn_label;
	lv_obj_t *Cough_reme_scrn_Alert_msg;
	lv_obj_t *Sneeze_reme_scrn;
	bool Sneeze_reme_scrn_del;
	lv_obj_t *Sneeze_reme_scrn_Bot_Title;
	lv_obj_t *Sneeze_reme_scrn_Question;
	lv_obj_t *Sneeze_reme_scrn_label_1;
	lv_obj_t *Sneeze_reme_scrn_label_2;
	lv_obj_t *Sneeze_reme_scrn_img_1;
	lv_obj_t *Sneeze_reme_scrn_img_2;
	lv_obj_t *Sneeze_reme_scrn_label_3;
	lv_obj_t *Sneeze_reme_scrn_label_4;
	lv_obj_t *Sneeze_reme_scrn_img_3;
	lv_obj_t *Sneeze_reme_scrn_img_4;
	lv_obj_t *Sneeze_reme_scrn_label_5;
	lv_obj_t *Sneeze_reme_scrn_label_6;
	lv_obj_t *Sneeze_reme_scrn_Purchase_scrn_btn;
	lv_obj_t *Sneeze_reme_scrn_Purchase_scrn_btn_label;
	lv_obj_t *Sneeze_reme_scrn_Alert_msg;
	lv_obj_t *Throat_reme_scrn;
	bool Throat_reme_scrn_del;
	lv_obj_t *Throat_reme_scrn_Bot_Title;
	lv_obj_t *Throat_reme_scrn_Question;
	lv_obj_t *Throat_reme_scrn_label_1;
	lv_obj_t *Throat_reme_scrn_img_1;
	lv_obj_t *Throat_reme_scrn_img_2;
	lv_obj_t *Throat_reme_scrn_label_3;
	lv_obj_t *Throat_reme_scrn_label_4;
	lv_obj_t *Throat_reme_scrn_Purchase_scrn_btn;
	lv_obj_t *Throat_reme_scrn_Purchase_scrn_btn_label;
	lv_obj_t *Throat_reme_scrn_Alert_msg;
	lv_obj_t *FeverAche_reme_scrn;
	bool FeverAche_reme_scrn_del;
	lv_obj_t *FeverAche_reme_scrn_Bot_Title;
	lv_obj_t *FeverAche_reme_scrn_Question;
	lv_obj_t *FeverAche_reme_scrn_label_1;
	lv_obj_t *FeverAche_reme_scrn_img_1;
	lv_obj_t *FeverAche_reme_scrn_img_2;
	lv_obj_t *FeverAche_reme_scrn_label_3;
	lv_obj_t *FeverAche_reme_scrn_label_4;
	lv_obj_t *FeverAche_reme_scrn_Purchase_scrn_btn;
	lv_obj_t *FeverAche_reme_scrn_Purchase_scrn_btn_label;
	lv_obj_t *FeverAche_reme_scrn_Alert_msg;
	lv_obj_t *Multi_reme_scrn;
	bool Multi_reme_scrn_del;
	lv_obj_t *Multi_reme_scrn_Bot_Title;
	lv_obj_t *Multi_reme_scrn_Question;
	lv_obj_t *Multi_reme_scrn_label_1;
	lv_obj_t *Multi_reme_scrn_img_1;
	lv_obj_t *Multi_reme_scrn_img_2;
	lv_obj_t *Multi_reme_scrn_label_3;
	lv_obj_t *Multi_reme_scrn_label_4;
	lv_obj_t *Multi_reme_scrn_Purchase_scrn_btn;
	lv_obj_t *Multi_reme_scrn_Purchase_scrn_btn_label;
	lv_obj_t *Multi_reme_scrn_Alert_msg;
	lv_obj_t *Ache_reme_scrn;
	bool Ache_reme_scrn_del;
	lv_obj_t *Ache_reme_scrn_Bot_Title;
	lv_obj_t *Ache_reme_scrn_Question;
	lv_obj_t *Ache_reme_scrn_label_1;
	lv_obj_t *Ache_reme_scrn_img_1;
	lv_obj_t *Ache_reme_scrn_img_2;
	lv_obj_t *Ache_reme_scrn_label_3;
	lv_obj_t *Ache_reme_scrn_label_4;
	lv_obj_t *Ache_reme_scrn_Purchase_scrn_btn;
	lv_obj_t *Ache_reme_scrn_Purchase_scrn_btn_label;
	lv_obj_t *Ache_reme_scrn_img_3;
	lv_obj_t *Ache_reme_scrn_label_5;
	lv_obj_t *Ache_reme_scrn_Alert_msg;
	lv_obj_t *JointPain_reme_scrn;
	bool JointPain_reme_scrn_del;
	lv_obj_t *JointPain_reme_scrn_Bot_Title;
	lv_obj_t *JointPain_reme_scrn_Question;
	lv_obj_t *JointPain_reme_scrn_label_1;
	lv_obj_t *JointPain_reme_scrn_img_2;
	lv_obj_t *JointPain_reme_scrn_label_4;
	lv_obj_t *JointPain_reme_scrn_Purchase_scrn_btn;
	lv_obj_t *JointPain_reme_scrn_Purchase_scrn_btn_label;
	lv_obj_t *JointPain_reme_scrn_img_3;
	lv_obj_t *JointPain_reme_scrn_label_5;
	lv_obj_t *JointPain_reme_scrn_Alert_msg;
	lv_obj_t *Acidity_reme_scrn;
	bool Acidity_reme_scrn_del;
	lv_obj_t *Acidity_reme_scrn_Bot_Title;
	lv_obj_t *Acidity_reme_scrn_Question;
	lv_obj_t *Acidity_reme_scrn_label_1;
	lv_obj_t *Acidity_reme_scrn_img_2;
	lv_obj_t *Acidity_reme_scrn_label_4;
	lv_obj_t *Acidity_reme_scrn_Purchase_scrn_btn;
	lv_obj_t *Acidity_reme_scrn_Purchase_scrn_btn_label;
	lv_obj_t *Acidity_reme_scrn_img_3;
	lv_obj_t *Acidity_reme_scrn_label_5;
	lv_obj_t *Acidity_reme_scrn_Alert_msg;
	lv_obj_t *Diarrhea_reme_scrn;
	bool Diarrhea_reme_scrn_del;
	lv_obj_t *Diarrhea_reme_scrn_Bot_Title;
	lv_obj_t *Diarrhea_reme_scrn_Question;
	lv_obj_t *Diarrhea_reme_scrn_label_1;
	lv_obj_t *Diarrhea_reme_scrn_img_2;
	lv_obj_t *Diarrhea_reme_scrn_label_4;
	lv_obj_t *Diarrhea_reme_scrn_Purchase_scrn_btn;
	lv_obj_t *Diarrhea_reme_scrn_Purchase_scrn_btn_label;
	lv_obj_t *Diarrhea_reme_scrn_img_3;
	lv_obj_t *Diarrhea_reme_scrn_label_5;
	lv_obj_t *Diarrhea_reme_scrn_Alert_msg;
	lv_obj_t *Rash_reme_scrn;
	bool Rash_reme_scrn_del;
	lv_obj_t *Rash_reme_scrn_Bot_Title;
	lv_obj_t *Rash_reme_scrn_Question;
	lv_obj_t *Rash_reme_scrn_label_1;
	lv_obj_t *Rash_reme_scrn_img_2;
	lv_obj_t *Rash_reme_scrn_label_4;
	lv_obj_t *Rash_reme_scrn_Purchase_scrn_btn;
	lv_obj_t *Rash_reme_scrn_Purchase_scrn_btn_label;
	lv_obj_t *Rash_reme_scrn_img_3;
	lv_obj_t *Rash_reme_scrn_label_5;
	lv_obj_t *Rash_reme_scrn_Alert_msg;
	lv_obj_t *Cut_reme_scrn;
	bool Cut_reme_scrn_del;
	lv_obj_t *Cut_reme_scrn_Bot_Title;
	lv_obj_t *Cut_reme_scrn_Question;
	lv_obj_t *Cut_reme_scrn_label_1;
	lv_obj_t *Cut_reme_scrn_img_2;
	lv_obj_t *Cut_reme_scrn_label_4;
	lv_obj_t *Cut_reme_scrn_Purchase_scrn_btn;
	lv_obj_t *Cut_reme_scrn_Purchase_scrn_btn_label;
	lv_obj_t *Cut_reme_scrn_img_3;
	lv_obj_t *Cut_reme_scrn_label_5;
	lv_obj_t *Cut_reme_scrn_Alert_msg;
	lv_obj_t *Load_anim_scrn;
	bool Load_anim_scrn_del;
	lv_obj_t *Load_anim_scrn_spinner_1;
	lv_obj_t *Load_anim_scrn_label_1;
	lv_obj_t *Purchase_scrn;
	bool Purchase_scrn_del;
	lv_obj_t *Purchase_scrn_Text_box;
	lv_obj_t *Purchase_scrn_label_str;
	lv_obj_t *Purchase_scrn_label_det;
	lv_obj_t *Purchase_scrn_Title;
	lv_obj_t *Purchase_scrn_im_det;
	lv_obj_t *Purchase_scrn_Del_det_btn;
	lv_obj_t *Purchase_scrn_Del_det_btn_label;
	lv_obj_t *Purchase_scrn_im_str;
	lv_obj_t *Purchase_scrn_Del_str_btn;
	lv_obj_t *Purchase_scrn_Del_str_btn_label;
	lv_obj_t *Purchase_scrn_label_cal;
	lv_obj_t *Purchase_scrn_im_cal;
	lv_obj_t *Purchase_scrn_Del_cal_btn;
	lv_obj_t *Purchase_scrn_Del_cal_btn_label;
	lv_obj_t *Purchase_scrn_Cancel_pay_btn;
	lv_obj_t *Purchase_scrn_Cancel_pay_btn_label;
	lv_obj_t *Purchase_scrn_Pay_btn;
	lv_obj_t *Purchase_scrn_Pay_btn_label;
	lv_obj_t *Pay_cmplt_scrn;
	bool Pay_cmplt_scrn_del;
	lv_obj_t *Pay_cmplt_scrn_label_1;
	lv_obj_t *Pay_cmplt_scrn_im_tick;
	lv_obj_t *Pay_cmplt_scrn_label_2;
}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);

void ui_init_style(lv_style_t * style);

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_scr_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);

void ui_animation(void * var, int32_t duration, int32_t delay, int32_t start_value, int32_t end_value, lv_anim_path_cb_t path_cb,
                       uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                       lv_anim_exec_xcb_t exec_cb, lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);


void init_scr_del_flag(lv_ui *ui);

void setup_ui(lv_ui *ui);


extern lv_ui guider_ui;


void setup_scr_Home_scrn(lv_ui *ui);
void setup_scr_Main_scrn_ENG_1(lv_ui *ui);
void setup_scr_Main_scrn_ENG_2(lv_ui *ui);
void setup_scr_Main_scrn_ENG_3(lv_ui *ui);
void setup_scr_ChatBot_Home_scrn(lv_ui *ui);
void setup_scr_Cold_scrn(lv_ui *ui);
void setup_scr_Pain_scrn(lv_ui *ui);
void setup_scr_Digestive_scrn(lv_ui *ui);
void setup_scr_Skin_issue_scrn(lv_ui *ui);
void setup_scr_Others_scrn(lv_ui *ui);
void setup_scr_Cough_reme_scrn(lv_ui *ui);
void setup_scr_Sneeze_reme_scrn(lv_ui *ui);
void setup_scr_Throat_reme_scrn(lv_ui *ui);
void setup_scr_FeverAche_reme_scrn(lv_ui *ui);
void setup_scr_Multi_reme_scrn(lv_ui *ui);
void setup_scr_Ache_reme_scrn(lv_ui *ui);
void setup_scr_JointPain_reme_scrn(lv_ui *ui);
void setup_scr_Acidity_reme_scrn(lv_ui *ui);
void setup_scr_Diarrhea_reme_scrn(lv_ui *ui);
void setup_scr_Rash_reme_scrn(lv_ui *ui);
void setup_scr_Cut_reme_scrn(lv_ui *ui);
void setup_scr_Load_anim_scrn(lv_ui *ui);
void setup_scr_Purchase_scrn(lv_ui *ui);
void setup_scr_Pay_cmplt_scrn(lv_ui *ui);

LV_IMG_DECLARE(_Background_1280x720);

LV_IMG_DECLARE(_Background_1280x720);
LV_IMG_DECLARE(_Benadryl_alpha_120x240);
LV_IMG_DECLARE(_Calpol_paracetamol_alpha_303x240);
LV_IMG_DECLARE(_Candid_powder_alpha_263x240);
LV_IMG_DECLARE(_cipla_cheston_cold_alpha_190x240);
LV_IMG_DECLARE(_Clocip_alpha_274x240);
LV_IMG_DECLARE(_Cofsils_alpha_230x240);
LV_IMG_DECLARE(_Omnigel_alpha_521x240);

LV_IMG_DECLARE(_Background_1280x720);
LV_IMG_DECLARE(_Crocin_Cold_Flu_alpha_418x240);
LV_IMG_DECLARE(_Dettol_alpha_151x240);
LV_IMG_DECLARE(_Electral_alpha_420x240);
LV_IMG_DECLARE(_Gelusil_MPS_alpha_450x240);
LV_IMG_DECLARE(_himalaya_koflet_cough_syrup_alpha_211x240);
LV_IMG_DECLARE(_Imodium_alpha_345x240);
LV_IMG_DECLARE(_Naselin_alpha_195x240);

LV_IMG_DECLARE(_Background_1280x720);
LV_IMG_DECLARE(_Neosporin_alpha_487x240);
LV_IMG_DECLARE(_Otrivin_alpha_213x240);
LV_IMG_DECLARE(_Rantac_alpha_229x240);
LV_IMG_DECLARE(_Saridon_alpha_140x240);
LV_IMG_DECLARE(_Strepsils_alpha_405x240);
LV_IMG_DECLARE(_Vicks_VapoRub_alpha_433x240);
LV_IMG_DECLARE(_Volini_alpha_328x240);

LV_IMG_DECLARE(_Background_1280x720);

LV_IMG_DECLARE(_Background_1280x720);

LV_IMG_DECLARE(_Background_1280x720);

LV_IMG_DECLARE(_Background_1280x720);

LV_IMG_DECLARE(_Background_1280x720);

LV_IMG_DECLARE(_Background_1280x720);

LV_IMG_DECLARE(_Background_1280x720);
LV_IMG_DECLARE(_Benadryl_alpha_62x131);
LV_IMG_DECLARE(_himalaya_koflet_cough_syrup_alpha_140x145);

LV_IMG_DECLARE(_Background_1280x720);
LV_IMG_DECLARE(_Naselin_alpha_92x138);
LV_IMG_DECLARE(_Otrivin_alpha_102x148);
LV_IMG_DECLARE(_Crocin_Cold_Flu_alpha_188x124);
LV_IMG_DECLARE(_cipla_cheston_cold_alpha_99x135);

LV_IMG_DECLARE(_Background_1280x720);
LV_IMG_DECLARE(_Cofsils_alpha_141x160);
LV_IMG_DECLARE(_Strepsils_alpha_170x150);

LV_IMG_DECLARE(_Background_1280x720);
LV_IMG_DECLARE(_Calpol_paracetamol_alpha_177x162);
LV_IMG_DECLARE(_Crocin_Cold_Flu_alpha_170x150);

LV_IMG_DECLARE(_Background_1280x720);
LV_IMG_DECLARE(_cipla_cheston_cold_alpha_140x190);
LV_IMG_DECLARE(_Crocin_Cold_Flu_alpha_170x150);

LV_IMG_DECLARE(_Background_1280x720);
LV_IMG_DECLARE(_Calpol_paracetamol_alpha_177x162);
LV_IMG_DECLARE(_Crocin_Cold_Flu_alpha_170x150);
LV_IMG_DECLARE(_Saridon_alpha_101x166);

LV_IMG_DECLARE(_Background_1280x720);
LV_IMG_DECLARE(_Volini_alpha_150x166);
LV_IMG_DECLARE(_Omnigel_alpha_264x142);

LV_IMG_DECLARE(_Background_1280x720);
LV_IMG_DECLARE(_Rantac_alpha_170x150);
LV_IMG_DECLARE(_Gelusil_MPS_alpha_257x140);

LV_IMG_DECLARE(_Background_1280x720);
LV_IMG_DECLARE(_Electral_alpha_198x182);
LV_IMG_DECLARE(_Imodium_alpha_257x140);

LV_IMG_DECLARE(_Background_1280x720);
LV_IMG_DECLARE(_Candid_powder_alpha_198x182);
LV_IMG_DECLARE(_Clocip_alpha_183x188);

LV_IMG_DECLARE(_Background_1280x720);
LV_IMG_DECLARE(_Neosporin_alpha_252x155);
LV_IMG_DECLARE(_Dettol_alpha_101x166);

LV_IMG_DECLARE(_Background_1280x720);
LV_IMG_DECLARE(_Dettol_alpha_101x166);
LV_IMG_DECLARE(_Strepsils_alpha_101x166);
LV_IMG_DECLARE(_Calpol_paracetamol_alpha_101x166);
LV_IMG_DECLARE(_Tick_alpha_268x256);

LV_FONT_DECLARE(lv_font_PottiSreeramuluRegular_45)
LV_FONT_DECLARE(lv_font_montserratMedium_16)
LV_FONT_DECLARE(lv_font_PottiSreeramuluRegular_40)
LV_FONT_DECLARE(lv_font_montserratMedium_12)
LV_FONT_DECLARE(lv_font_Alatsi_Regular_18)
LV_FONT_DECLARE(lv_font_Alatsi_Regular_20)
LV_FONT_DECLARE(lv_font_Alatsi_Regular_25)
LV_FONT_DECLARE(lv_font_montserratMedium_30)
LV_FONT_DECLARE(lv_font_montserratMedium_14)
LV_FONT_DECLARE(lv_font_PottiSreeramuluRegular_28)
LV_FONT_DECLARE(lv_font_PottiSreeramuluRegular_46)
LV_FONT_DECLARE(lv_font_PottiSreeramuluRegular_30)
LV_FONT_DECLARE(lv_font_PottiSreeramuluRegular_35)
LV_FONT_DECLARE(lv_font_PottiSreeramuluRegular_23)
LV_FONT_DECLARE(lv_font_PottiSreeramuluRegular_31)
LV_FONT_DECLARE(lv_font_Acme_Regular_30)
LV_FONT_DECLARE(lv_font_PottiSreeramuluRegular_25)


#ifdef __cplusplus
}
#endif
#endif
