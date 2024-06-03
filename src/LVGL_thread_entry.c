/***********************************************************************
*
*  FILE        : RX72N_EnVision_LVGL.c
*  DATE        : 2024-05-07
*  DESCRIPTION : Main Program
*
*  NOTE:THIS IS A TYPICAL EXAMPLE.
*
***********************************************************************/
#include "FreeRTOS.h"
#include "task.h"
#include "lvgl.h"
#include "port/lv_port_disp.h"
#include "port/lv_port_indev.h"
#include "lvgl/demos/lv_demos.h"
#include "hal_data.h"
#include "r_cmt_rx_if.h"
#include "user_task.h"

display_t g_display0_cfg;

void timer_tick_callback(void * pdata)
{
    lv_tick_inc(1);
}

void main_task_user(void *pvParameters)
{

	_Bool ret;
	uint32_t channel;

	g_display0_cfg.input->format = LCD_CH0_IN_GR2_FORMAT;

    /* Create all other application tasks here */
	lv_init();

	lv_port_disp_init();

	lv_port_indev_init();

#if (1 == LV_USE_DEMO_BENCHMARK)
	lv_demo_benchmark();
#endif

#if (1 == LV_USE_DEMO_MUSIC)
	lv_demo_music();
#endif

#if (1 == LV_USE_DEMO_KEYPAD_AND_ENCODER)
	lv_demo_keypad_encoder();

#endif

#if (1 == LV_USE_DEMO_STRESS)
	lv_demo_stress();
#endif

#if (1 == LV_USE_DEMO_WIDGETS && 0 == LV_USE_DEMO_BENCHMARK)
	lv_demo_widgets();
#endif

	ret = R_CMT_CreatePeriodic(1000, timer_tick_callback, &channel);
	if (false == ret)
	{
		while(1);
	}

	while(1)
	{
		lv_timer_handler();
		vTaskDelay (1);
	}

}
