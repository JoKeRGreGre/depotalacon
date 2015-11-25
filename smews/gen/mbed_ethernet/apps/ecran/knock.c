/*
* This file has been enriched by GenApps, a tool of the smews project
* smews home page: http://www.lifl.fr/2XS/smews
* Generation date: Wed Nov 18 15:19:29 2015
*/

#include "generators.h"
#include "stddef.h"

#include "defines.h"

#ifndef DISABLE_ARGS
/********** Arguments structure **********/
struct args_t {
	uint16_t val;
};

/********** Arguments index **********/
static CONST_VAR(struct arg_ref_t, args_index[]) = {
	{arg_type: arg_ui16, arg_size: sizeof(uint16_t), arg_offset: offsetof(struct args_t,val)},
};

/********** Symbols list, total length: 3 bytes **********/
/*
* val
*/

/********** Generated Ternary Tree **********/
/*
* -val|END
*/

/********** "Understoodable" Generated BLOB, total length: 5 bytes **********/
/*
* "val",ref:0,0
*/

/********** Finally Generated BLOB, total length: 5 bytes **********/
static CONST_VAR(unsigned char, args_tree[]) = {118,97,108,128,0};
#endif

/********** Output handler **********/
static generator_doget_func_t doGet;
CONST_VAR(struct output_handler_t, apps_ecran_knock) = {
	.handler_type = type_generator,
	.handler_comet = 0,
	.handler_stream = 0,
	.handler_data = {
		.generator = {
			.prop = prop_volatile,
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
	<properties persistence="volatile"/>
	<args>
		<arg name="val" type="uint16" />
	</args>
</generator>
*/

#include "channels.h"

uint16_t val;

/* triggers the knockknock comet channel */
static char doGet(struct args_t *args) {
	if(args) {
		val = args->val;
		server_push(&knockknock);
		out_str("knock knock: ");
		out_uint(val);
	} else {
		out_str("no args");
	}
	return 1;
}
