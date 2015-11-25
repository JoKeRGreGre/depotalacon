/*
* This file has been enriched by GenApps, a tool of the smews project
* smews home page: http://www.lifl.fr/2XS/smews
* Generation date: Wed Nov 25 16:17:57 2015
*/

#include "generators.h"
#include "stddef.h"

#include "defines.h"


/********** Output handler **********/
static generator_doget_func_t doGet;
CONST_VAR(struct output_handler_t, apps_test_pje_test) = {
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
		rflpc_led_set(RFLPC_LED_1);
		rflpc_gpio_clr_pin(MBED_DIP23);
	}
	if(rflpc_gpio_get_pin(MBED_DIP13)){
		out_str("GAUCHE");
		rflpc_led_set(RFLPC_LED_2);
		rflpc_gpio_clr_pin(MBED_DIP25);
	}
	if(rflpc_gpio_get_pin(MBED_DIP14)){
		out_str("CENTER");
		rflpc_led_set(RFLPC_LED_1);
		rflpc_led_set(RFLPC_LED_2);
		rflpc_led_set(RFLPC_LED_3);
		rflpc_led_set(RFLPC_LED_4);
		rflpc_gpio_clr_pin(MBED_DIP24);
	}
	if(rflpc_gpio_get_pin(MBED_DIP15)){
		out_str("HAUT");
		rflpc_led_set(RFLPC_LED_3);
		rflpc_gpio_clr_pin(MBED_DIP23);
	}
	if(rflpc_gpio_get_pin(MBED_DIP16)){
		out_str("DROITE");
		rflpc_led_set(RFLPC_LED_4);
		rflpc_gpio_clr_pin(MBED_DIP25);
	}
}

static char doGet(struct args_t *args) {
    rflpc_led_init();

	rflpc_gpio_set_pin_mode_output(MBED_DIP23, 1);
	rflpc_gpio_set_pin_mode_output(MBED_DIP24, 1);
	rflpc_gpio_set_pin_mode_output(MBED_DIP25, 1);

    rflpc_pin_set(MBED_DIP12, 0, RFLPC_PIN_MODE_RESISTOR_PULL_DOWN, 0);
    rflpc_pin_set(MBED_DIP13, 0, RFLPC_PIN_MODE_RESISTOR_PULL_DOWN, 0);
    rflpc_pin_set(MBED_DIP14, 0, RFLPC_PIN_MODE_RESISTOR_PULL_DOWN, 0);
    rflpc_pin_set(MBED_DIP15, 0, RFLPC_PIN_MODE_RESISTOR_PULL_DOWN, 0);
    rflpc_pin_set(MBED_DIP16, 0, RFLPC_PIN_MODE_RESISTOR_PULL_DOWN, 0);

	change_state();
	
    return 1;
}
