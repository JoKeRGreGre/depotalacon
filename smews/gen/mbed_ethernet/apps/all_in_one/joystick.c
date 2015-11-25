/*
* This file has been enriched by GenApps, a tool of the smews project
* smews home page: http://www.lifl.fr/2XS/smews
* Generation date: Wed Nov 25 15:49:04 2015
*/

#include "generators.h"
#include "stddef.h"

#include "defines.h"


/********** Output handler **********/
static generator_doget_func_t doGet;
CONST_VAR(struct output_handler_t, apps_all_in_one_joystick) = {
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

/*
<generator>
	<handlers doGet="doGet"/>
</generator>
*/

/* simple contents generator */
static void change_state(){
	if(rflpc_gpio_get_pin(MBED_DIP12)){
		out_str("BAS");
	}
	if(rflpc_gpio_get_pin(MBED_DIP13)){
		out_str("GAUCHE");
	}
	if(rflpc_gpio_get_pin(MBED_DIP14)){
		out_str("CENTER");
	}
	if(rflpc_gpio_get_pin(MBED_DIP15)){
		out_str("HAUT");
	}
	if(rflpc_gpio_get_pin(MBED_DIP16)){
		out_str("DROITE");
	}
}

static char doGet(struct args_t *args) {
    unsigned i;
    
    rflpc_pin_set(MBED_DIP12, 0, RFLPC_PIN_MODE_RESISTOR_PULL_DOWN, 0);
    rflpc_pin_set(MBED_DIP13, 0, RFLPC_PIN_MODE_RESISTOR_PULL_DOWN, 0);
    rflpc_pin_set(MBED_DIP14, 0, RFLPC_PIN_MODE_RESISTOR_PULL_DOWN, 0);
    rflpc_pin_set(MBED_DIP15, 0, RFLPC_PIN_MODE_RESISTOR_PULL_DOWN, 0);
    rflpc_pin_set(MBED_DIP16, 0, RFLPC_PIN_MODE_RESISTOR_PULL_DOWN, 0);

	change_state();
	
    return 1;
}
