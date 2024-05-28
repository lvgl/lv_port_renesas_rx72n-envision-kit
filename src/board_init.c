#include "board_init.h"

#include "lvgl.h"
#include "port/lv_port_indev.h"
#include "lvgl/src/drivers/display/renesas_glcdc/lv_renesas_glcdc.h"
#include "r_gpio_rx_if.h"


#define LCD_DISPON  GPIO_PORT_B_PIN_3
#define DISP_BLEN   GPIO_PORT_6_PIN_7

void board_init(void)
{
    /* Display OFF */
    R_GPIO_PinControl(LCD_DISPON, GPIO_CMD_OUT_CMOS);
    R_GPIO_PortDirectionSet(GPIO_PORT_B, GPIO_DIRECTION_OUTPUT, (1<<3));

    R_GPIO_PinControl(DISP_BLEN, GPIO_CMD_OUT_CMOS);
    R_GPIO_PortDirectionSet(GPIO_PORT_6, GPIO_DIRECTION_OUTPUT, (1<<7));

    R_GPIO_PinWrite(DISP_BLEN, GPIO_LEVEL_LOW);
    R_GPIO_PinWrite(LCD_DISPON, GPIO_LEVEL_LOW);

    /* init GLCDC */
    lv_display_t * disp = lv_renesas_glcdc_direct_create();
	lv_display_set_default(disp);

    /* Display and backlight ON */
    R_GPIO_PinWrite(LCD_DISPON, GPIO_LEVEL_HIGH);
    R_GPIO_PinWrite(DISP_BLEN, GPIO_LEVEL_HIGH);

    /* init touch controller */
	lv_port_indev_init();
}
