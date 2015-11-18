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

    rflpc_led_init();
    
    rflpc_led_set(RFLPC_LED_1);
    rflpc_led_set(RFLPC_LED_2);
    rflpc_led_set(RFLPC_LED_3);
    rflpc_led_set(RFLPC_LED_4);
    rflpc_spi_init(MASTER_SPI, RFLPC_SPI_MASTER, RFLPC_CCLK_8, 8, 60, 2, 0);
    rflpc_spi_init(SLAVE_SPI, RFLPC_SPI_SLAVE, RFLPC_CCLK_8, 8, 0, 0, 0);

rflpc_spi_write(SLAVE_SPI, i);
rflpc_spi_write(MASTER_SPI,i);

	

}
