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
