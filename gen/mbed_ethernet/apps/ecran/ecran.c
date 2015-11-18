/*
* This file has been enriched by GenApps, a tool of the smews project
* smews home page: http://www.lifl.fr/2XS/smews
* Generation date: Wed Nov 18 15:19:29 2015
*/

#include "generators.h"
#include "stddef.h"

#include "defines.h"


/********** Output handler **********/
static generator_initget_func_t initGet;
static generator_doget_func_t doGet;
CONST_VAR(struct output_handler_t, apps_ecran_ecran) = {
	.handler_type = type_generator,
	.handler_comet = 1,
	.handler_stream = 0,
	.handler_data = {
		.generator = {
			.prop = prop_volatile,
			.init = NULL,
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
	<handlers initGet="initGet" doGet="doGet"/>
	<properties persistence="volatile" interaction="alert" channel="knockknock"/>
</generator>
*/

extern uint16_t val;

/* launched when the GET request is received */
static char initGet(struct args_t *args) {
	return 1;
}

/* launched when knockknock is triggered */
static char doGet(struct args_t *args) {
	out_str("somebody knocked: ");
	out_uint(val);
	return 1;
}
