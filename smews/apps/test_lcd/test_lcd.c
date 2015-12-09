/*
  <generator>
    <handlers init="null_action" initGet="initGet" doGet="doGet"/>
    <args>
      <arg name="nom" type="str" size="150" />
    </args>
  </generator>
*/

#include "generators.h"
#include "print_str.h"

uint8_t buffer[BUFFER_SIZE];

static char doGet(struct args_t *args){
	init_lcd();
	clr_lcd();
	print_string(args->nom);
	return 1;
}
static char initGet(struct args_t *args) {
	return 1;
}
static char null_action(){return 1;}

