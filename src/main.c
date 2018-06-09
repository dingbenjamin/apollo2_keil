/******************************************************************************
 * Keil uVision project template for Apollo2 MCU
 *
 * Author: Benjamin DING
 *******************************************************************************/

#include <arm_math.h>
#include "am_mcu_apollo.h"
#include "am_hal_gpio.h"
#include "am_bsp.h"
#include "am_util.h"
		
void setup(void) {
	//
	// Set the clock frequency.
	//
	am_hal_clkgen_sysclk_select(AM_HAL_CLKGEN_SYSCLK_MAX);

	//
	// Set the default cache configuration
	//
	am_hal_cachectrl_enable(&am_hal_cachectrl_defaults);

	//
	// Configure the board for low power operation.
	//
	am_bsp_low_power_init();

	//
	// Initialize the printf interface for ITM/SWO output.
	//
	am_util_stdio_printf_init((am_util_stdio_print_char_t) am_bsp_itm_string_print);

	//
	// Initialize the SWO GPIO pin
	//
	am_bsp_pin_enable(ITM_SWO);

	//
	// Enable the ITM.
	//
	am_hal_itm_enable();

	//
	// Enable debug printf messages using ITM on SWO pin
	//
	am_bsp_debug_printf_enable();
	
	//
	// Clear the LED.
	//
	am_devices_led_array_init(am_bsp_psLEDs, AM_BSP_NUM_LEDS);

	//
	// Enable the LFRC.
	//
	am_hal_clkgen_osc_start(AM_HAL_CLKGEN_OSC_LFRC);
}
	

int main(void) { 
	setup();	
	am_util_stdio_terminal_clear();
	am_util_stdio_printf("Hello World\n");
}
