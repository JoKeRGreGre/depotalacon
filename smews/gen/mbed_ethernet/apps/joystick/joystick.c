/*
* This file has been enriched by GenApps, a tool of the smews project
* smews home page: http://www.lifl.fr/2XS/smews
* Generation date: Wed Nov 25 14:57:03 2015
*/

#include "generators.h"
#include "stddef.h"

#include "defines.h"

#ifndef DISABLE_ARGS
/********** Arguments structure **********/
struct args_t {
	uint16_t joystick;
};

/********** Arguments index **********/
static CONST_VAR(struct arg_ref_t, args_index[]) = {
	{arg_type: arg_ui16, arg_size: sizeof(uint16_t), arg_offset: offsetof(struct args_t,joystick)},
};

/********** Symbols list, total length: 8 bytes **********/
/*
* joystick
*/

/********** Generated Ternary Tree **********/
/*
* -joystick|END
*/

/********** "Understoodable" Generated BLOB, total length: 10 bytes **********/
/*
* "joystick",ref:0,0
*/

/********** Finally Generated BLOB, total length: 10 bytes **********/
static CONST_VAR(unsigned char, args_tree[]) = {106,111,121,115,116,105,99,107,128,0};
#endif

/********** Output handler **********/
static generator_init_func_t init;
static generator_initget_func_t initGet;
static generator_doget_func_t doGet;
CONST_VAR(struct output_handler_t, apps_joystick_joystick) = {
	.handler_type = type_generator,
	.handler_comet = 1,
	.handler_stream = 0,
	.handler_data = {
		.generator = {
			.prop = prop_persistent,
			.init = init,
			.handlers = {
				.get = {
				.initget = initGet,
					.doget = doGet,
				},
			},
		},
	},
#ifndef DISABLE_ARGS
	.handler_args = {
		.args_tree = args_tree,
		.args_index = args_index,
		.args_size = sizeof(struct args_t)
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
	<handlers init="init" initGet="initGet" doGet="doGet"/>
	<properties persitence="volatile" channel="joystickChannel"/>
	<args>
		<arg name="joystick" type="uint16" />
	</args>
</generator>
*/

#include <stdio.h>

#include "generators.h"
#include "timers.h"
#include "channels.h"

static uint16_t glob_load;
static int oldjoystick;
static int joystick = 0;

static void timer() {
	if(rflpc_gpio_get_pin(MBED_DIP12)){
		joystick = 2;
	}
	if(rflpc_gpio_get_pin(MBED_DIP13)){
		joystick = 4;
	}
	if(rflpc_gpio_get_pin(MBED_DIP14)){
		joystick = 5;
	}
	if(rflpc_gpio_get_pin(MBED_DIP15)){
		joystick = 8;
	}
	if(rflpc_gpio_get_pin(MBED_DIP16)){
		joystick = 6;
	}
	if(joystick != oldjoystick){
		glob_load = (uint16_t)joystick;
		server_push(&joystickChannel);
	}
}

static char init(void) {
	return set_timer(&timer,500);
}

static char initGet(struct args_t *args) {
	if(args)
		oldjoystick = args->joystick;
	return 1;
}

static char doGet(struct args_t *args) {
	out_uint(glob_load);
	return 1;
}
