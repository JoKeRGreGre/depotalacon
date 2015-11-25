/*
* This file has been enriched by GenApps, a tool of the smews project
* smews home page: http://www.lifl.fr/2XS/smews
* Generation date: Wed Nov 25 15:49:03 2015
*/

#include "generators.h"
#include "stddef.h"

#include "defines.h"

#ifndef DISABLE_ARGS
/********** Arguments structure **********/
struct args_t {
	uint8_t color;
};

/********** Arguments index **********/
static CONST_VAR(struct arg_ref_t, args_index[]) = {
	{arg_type: arg_ui8, arg_size: sizeof(uint8_t), arg_offset: offsetof(struct args_t,color)},
};

/********** Symbols list, total length: 5 bytes **********/
/*
* color
*/

/********** Generated Ternary Tree **********/
/*
* -color|END
*/

/********** "Understoodable" Generated BLOB, total length: 7 bytes **********/
/*
* "color",ref:0,0
*/

/********** Finally Generated BLOB, total length: 7 bytes **********/
static CONST_VAR(unsigned char, args_tree[]) = {99,111,108,111,114,128,0};
#endif

/********** Output handler **********/
static generator_doget_func_t doGet;
CONST_VAR(struct output_handler_t, apps_all_in_one_change_color) = {
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
		<arg name="color" type="uint8" size="4" />
	</args>
</generator>
*/

/* simple contents generator */
static char doGet(struct args_t *args) {
    
	rflpc_gpio_set_pin_mode_output(MBED_DIP23, 1);
	rflpc_gpio_set_pin_mode_output(MBED_DIP24, 1);
	rflpc_gpio_set_pin_mode_output(MBED_DIP25, 1);
	
    switch(args->color){
		case 0:
			rflpc_gpio_set_pin(MBED_DIP23);
			rflpc_gpio_set_pin(MBED_DIP24);
			rflpc_gpio_set_pin(MBED_DIP25);
			break;
		case 1:
			rflpc_gpio_clr_pin(MBED_DIP23);
			break;
		case 2:
			rflpc_gpio_clr_pin(MBED_DIP24);
			break;
		case 3:
			rflpc_gpio_clr_pin(MBED_DIP25);
			break;
		case 4:
			rflpc_gpio_clr_pin(MBED_DIP23);
			rflpc_gpio_clr_pin(MBED_DIP25);
			break;
		case 5:
			rflpc_gpio_clr_pin(MBED_DIP23);
			rflpc_gpio_clr_pin(MBED_DIP24);
			break;
		case 6:
			rflpc_gpio_clr_pin(MBED_DIP24);
			rflpc_gpio_clr_pin(MBED_DIP25);
			break;
	}

    return 1;
}
