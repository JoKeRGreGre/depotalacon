#include <rflpc17xx/rflpc17xx.h>
#include "print_str.h"


/*
  <generator>
    <handlers init="null_action" doGet="lcd_f"/>
    <args>
      <arg name="t" type="str" size="150" />
    </args>
  </generator>
*/

uint8_t buffer[BUFFER_SIZE];

static char lcd_f(struct args_t *args){
	init_lcd();
	clr_lcd();
	print_string(args->t);
	return 1;
}

static char null_action(){return 1;}

static char null_action1(){return 1;}
