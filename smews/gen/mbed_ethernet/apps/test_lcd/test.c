/*
* This file has been enriched by GenApps, a tool of the smews project
* smews home page: http://www.lifl.fr/2XS/smews
* Generation date: Wed Dec  9 14:49:14 2015
*/

#include "generators.h"
#include "stddef.h"

#include "defines.h"

#ifndef DISABLE_POST
/********* Content-types array **********/
static CONST_VAR(unsigned char, mimes_index[]) = {4};

#endif
#ifndef DISABLE_ARGS
/********** Arguments structure **********/
struct args_t {
	char nom[150];
};

/********** Arguments index **********/
static CONST_VAR(struct arg_ref_t, args_index[]) = {
	{arg_type: arg_str, arg_size: sizeof(char[150]), arg_offset: offsetof(struct args_t,nom)},
};

/********** Symbols list, total length: 3 bytes **********/
/*
* nom
*/

/********** Generated Ternary Tree **********/
/*
* -nom|END
*/

/********** "Understoodable" Generated BLOB, total length: 5 bytes **********/
/*
* "nom",ref:0,0
*/

/********** Finally Generated BLOB, total length: 5 bytes **********/
static CONST_VAR(unsigned char, args_tree[]) = {110,111,109,128,0};
#endif

/********** Output handler **********/
static generator_init_func_t null_action;
static generator_doget_func_t lcd_f;
CONST_VAR(struct output_handler_t, apps_test_lcd_test) = {
	.handler_type = type_generator,
	.handler_comet = 0,
	.handler_stream = 0,
	.handler_data = {
		.generator = {
			.prop = prop_persistent,
			.init = null_action,
			.handlers = {
				.get = {
				.doget = lcd_f,
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
		.mimes_index = mimes_index,
		.mimes_size = 1,
	},
#endif
};

/* End of the enriched part */

#include <rflpc17xx/rflpc17xx.h>
#include "print_str.h"


/*
  <generator>
    <handlers init="null_action" doPost="lcd_f"/>
    <args>
      <arg name="nom" type="str" size="150" />
    </args>
  </generator>
*/

uint8_t buffer[BUFFER_SIZE];

static char lcd_f(struct args_t *args){
	init_lcd();
	clr_lcd();
	print_string(args->nom);
	return 1;
}

static char null_action(){return 1;}

static char null_action1(){return 1;}
