/*
* This file has been enriched by GenApps, a tool of the smews project
* smews home page: http://www.lifl.fr/2XS/smews
* Generation date: Wed Dec  2 14:44:25 2015
*/

#include "generators.h"
#include "stddef.h"

#include "defines.h"


/********** Output handler **********/
static generator_doget_func_t doGet;
CONST_VAR(struct output_handler_t, apps_tetris_main) = {
	.handler_type = type_generator,
	.handler_comet = 0,
	.handler_stream = 0,
	.handler_data = {
		.generator = {
			.prop = prop_persistent,
			.init = NULL,
			.handlers = {
				.get = {
					.doget = doGet,
				},
			},
		},
	},
#ifndef DISABLE_ARGS
	.handler_args = {
		.args_tree = NULL,
		.args_index = NULL,
		.args_size = 0
	},
#endif
#ifndef DISABLE_POST
	.handler_mimes = {
		.mimes_index = NULL,
		.mimes_size = 0,
	},
#endif
};

/* End of the enriched part */

#include <stdio.h>
#include <stdlib.h>
#include "windows.h"
/*
<generator>
	<handlers doGet="doGet"/>
</generator>
*/
/* simple contents generator */
static void change_state(){
	if(rflpc_gpio_get_pin(MBED_DIP12)){
		keybd_event(VK_DOWN,0xD0,0,0);
		keybd_event(VK_DOWN,0xD0,KEYEVENTF_KEYUP,0);
	}
	if(rflpc_gpio_get_pin(MBED_DIP13)){
		keybd_event(VK_LEFT,0xCB,0,0);
		keybd_event(VK_LEFT,0xCB,KEYEVENTF_KEYUP,0);
	}
	if(rflpc_gpio_get_pin(MBED_DIP14)){
	}
	if(rflpc_gpio_get_pin(MBED_DIP15)){
		keybd_event(VK_UP,0xC8,0,0);
		keybd_event(VK_UP,0xC8,KEYEVENTF_KEYUP,0);
	}
	if(rflpc_gpio_get_pin(MBED_DIP16)){
		keybd_event(VK_RIGHT,0xCD,0,0);
		keybd_event(VK_RIGHT,0xCD,KEYEVENTF_KEYUP,0);
	}
}

static char doGet(struct args_t *args) {
    
    rflpc_pin_set(MBED_DIP12, 0, RFLPC_PIN_MODE_RESISTOR_PULL_DOWN, 0);
    rflpc_pin_set(MBED_DIP13, 0, RFLPC_PIN_MODE_RESISTOR_PULL_DOWN, 0);
    rflpc_pin_set(MBED_DIP14, 0, RFLPC_PIN_MODE_RESISTOR_PULL_DOWN, 0);
    rflpc_pin_set(MBED_DIP15, 0, RFLPC_PIN_MODE_RESISTOR_PULL_DOWN, 0);
    rflpc_pin_set(MBED_DIP16, 0, RFLPC_PIN_MODE_RESISTOR_PULL_DOWN, 0);

	change_state();
	
    return 1;
}
