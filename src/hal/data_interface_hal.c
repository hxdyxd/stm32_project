/* 
 *
 *2018 09 21 & hxdyxd
 *
 */

#include "data_interface_hal.h"
#include "stm32f10x.h"

//TICKET
#include "systick.h"

//GPIO
#include "leds.h"
#include "keys.h"

//uart
#include "interface_usart.h"


uint64_t timer;

/* some low level platform function */
/* public hal function */


void data_interface_hal_init(void)
{
    //CLOCK INTERFACE
    systick_init();
    //GPIO INTERFACE
    leds_init();
    keys_init();
    //uart
    interface_usart_init();
}


uint64_t hal_read_TickCounter(void)
{
    return clk_count;
}


/******************* (C) COPYRIGHT 2018 hxdyxd *****END OF FILE****/
