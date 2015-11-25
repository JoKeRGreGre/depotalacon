/*
* This file has been enriched by GenApps, a tool of the smews project
* smews home page: http://www.lifl.fr/2XS/smews
* Generation date: Wed Nov 25 15:49:04 2015
*/

#include "generators.h"
#include "stddef.h"

#include "defines.h"

#ifndef DISABLE_ARGS
/********** Arguments structure **********/
struct args_t {
	uint8_t led;
};

/********** Arguments index **********/
static CONST_VAR(struct arg_ref_t, args_index[]) = {
	{arg_type: arg_ui8, arg_size: sizeof(uint8_t), arg_offset: offsetof(struct args_t,led)},
};

/********** Symbols list, total length: 3 bytes **********/
/*
* led
*/

/********** Generated Ternary Tree **********/
/*
* -led|END
*/

/********** "Understoodable" Generated BLOB, total length: 5 bytes **********/
/*
* "led",ref:0,0
*/

/********** Finally Generated BLOB, total length: 5 bytes **********/
static CONST_VAR(unsigned char, args_tree[]) = {108,101,100,128,0};
#endif

/********** Output handler **********/
static generator_doget_func_t doGet;
CONST_VAR(struct output_handler_t, apps_all_in_one_on_off) = {
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
	<handlers doGet="doGet"/>
	<args>
		<arg name="led" type="uint8" size="4" />
	</args>
</generator>
*/
volatile int state1 = 0;
volatile int state2 = 0;
volatile int state3 = 0;
volatile int state4 = 0;

/* simple contents generator */
static char doGet(struct args_t *args) {
    
    rflpc_led_init();
    
    if(args->led == 1){
		if(state1 == 0){
			state1=1;
		}
		else{
			state1=0;
		}
	}
	if(args->led == 2){
		if(state2 == 0){
			state2=1;
		}
		else{
			state2=0;
		}
	}
	if(args->led == 3){
		if(state3 == 0){
			state3=1;
		}
		else{
			state3=0;
		}
	}
	if(args->led == 4){
		if(state4 == 0){
			state4=1;
		}
		else{
			state4=0;
		}
	}
	
	if(state1 == 1){
		rflpc_led_set(RFLPC_LED_1);
	}
	if(state2 == 1){
		rflpc_led_set(RFLPC_LED_2);
	}
	if(state3 == 1){
		rflpc_led_set(RFLPC_LED_3);
	}
	if(state4 == 1){
		rflpc_led_set(RFLPC_LED_4);
	}

    return 1;
}
