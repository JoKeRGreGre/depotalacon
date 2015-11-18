/*
* This file has been enriched by GenApps, a tool of the smews project
* smews home page: http://www.lifl.fr/2XS/smews
* Generation date: Wed Nov 18 16:27:18 2015
*/

#include "generators.h"
#include "stddef.h"

#include "defines.h"


/********** Output handler **********/
static generator_doget_func_t doGet;
CONST_VAR(struct output_handler_t, apps_bubble_sendBubble) = {
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

#include <rflpc17xx/rflpc17xx.h>
#include "channels.h"
#define MASTER_SPI RFLPC_SPI0
#define SLAVE_SPI RFLPC_SPI1

/* affiche un truc sur le lcd */
static char doGet(struct args_t *args) {

int i;
    rflpc_led_init();
    
    rflpc_led_set(RFLPC_LED_1);
    rflpc_led_set(RFLPC_LED_2);
    rflpc_led_set(RFLPC_LED_3);
    rflpc_led_set(RFLPC_LED_4);
    rflpc_spi_init(MASTER_SPI, RFLPC_SPI_MASTER, RFLPC_CCLK_8, 8, 60, 2, 0);
    rflpc_spi_init(SLAVE_SPI, RFLPC_SPI_SLAVE, RFLPC_CCLK_8, 8, 0, 0, 0);
	

}
