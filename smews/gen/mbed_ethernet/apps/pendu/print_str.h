#include <rflpc17xx/rflpc17xx.h>
#include "macro_char.h"

#define WIDTH 128
#define HEIGHT 32

#define WIDTH_CHAR  5
#define HEIGHT_CHAR 7
#define NHD_MAKE_SIZE(w,h) (((h) << 8) | (w))
#define BUFFER_SIZE (WIDTH * (HEIGHT >> 3))
#define COORD_TO_BYTE(x,y) ((((y)>>3) * WIDTH) + (x))
#define COORD_TO_BIT(x,y) (((y) & 7))

/*
  Affiche la chaine s passé en paramêtre.
*/
extern void print_string(char* s);

/*
  Affiche un caractère
*/
extern void print_char(char c, int pos);

/*
  Set le pixel aux coordonnées x×y relative à pos à 1.
*/
extern void set_pixel_at(uint8_t x, uint8_t y, int pos);

/*
  Vide le buffer utilisé pour l'affichage.
*/
extern void clr_buffer(void);

/*
  Reset un pixel à une coordonnée.
*/
extern void clr_pixel(uint8_t x, uint8_t y);

/*
  Remet à zéro l'affichage du LCD.
 */
extern void clr_lcd();

/*
  Initialise le LCD.
*/
extern void init_lcd();

/*
  Set le pixel aux coordonnées x×y à 1.
*/
extern void set_pixel(uint8_t x, uint8_t y);
