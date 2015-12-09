#include "print_str.h"

static uint8_t buffer[BUFFER_SIZE];

static const int NB_CHAR = WIDTH/(WIDTH_CHAR+1);

void set_pixel(uint8_t x, uint8_t y){
	int byte_idx = COORD_TO_BYTE(x,y);
	buffer[byte_idx] |= (1 << COORD_TO_BIT(x,y));
}

void clr_pixel(uint8_t x, uint8_t y){
	int byte_idx = COORD_TO_BYTE(x,y);
	buffer[byte_idx] &= ~(1 << COORD_TO_BIT(x,y));
}

void set_pixel_at(uint8_t x, uint8_t y, int pos){
	int ligne, colonne;
	ligne = pos / NB_CHAR;
	colonne = pos % NB_CHAR;

	x += colonne * (WIDTH_CHAR+1);
	y += ligne * (HEIGHT_CHAR+1);
	x++;
	y++;

	set_pixel(x, y);
}

void init_lcd(){
	nhd_spi_lcd_init(NHD_MAKE_SIZE(WIDTH, HEIGHT),
	                 MBED_DIP6, MBED_DIP8, MBED_DIP11, RFLPC_SPI1);
}

void clr_buffer(){
	memset(buffer, 0, BUFFER_SIZE);
}

void clr_lcd(){
	int i;
	for(i = 0; i < BUFFER_SIZE; i++){
		buffer[i] = 0;
	}
	nhd_spi_lcd_display_buffer(buffer);
}


void print_char(char c, int pos){
	int i, j;
	switch(c){
	case 'a':
	case 'A':
		A(pos);
		break;

	case 'b':
	case 'B':
		B(pos);
		break;

	case 'c':
	case 'C':
		C(pos);
		break;

	case 'd':
	case 'D':
		D(pos);
		break;
	case 'e':
	case 'E':
		E(pos);
		break;
	case 'f':
	case 'F':
		F(pos);
		break;

	case 'g':
	case 'G':
		G(pos);
		break;

	case 'h':
	case 'H':
		H(pos);
		break;

	case 'i':
	case 'I':
		I(pos);
		break;

	case 'j':
	case 'J':
		J(pos);
		break;

	case 'k':
	case 'K':
		K(pos);
		break;

	case 'l':
	case 'L':
		L(pos);
		break;

	case 'm':
	case 'M':
		M(pos);
		break;

	case 'n':
	case 'N':
		N(pos);
		break;

	case 'o':
	case 'O':
		O(pos);
		break;

	case 'p':
	case 'P':
		P(pos);
		break;

	case 'q':
	case 'Q':
		Q(pos);
		break;

	case 'r':
	case 'R':
		R(pos);
		break;

	case 's':
	case 'S':
		S(pos);
		break;

	case 't':
	case 'T':
		T(pos);
		break;

	case 'u':
	case 'U':
		U(pos);
		break;

	case 'v':
	case 'V':
		V(pos);
		break;

	case 'w':
	case 'W':
		W(pos);
		break;

	case 'x':
	case 'X':
		X(pos);
		break;

	case 'y':
	case 'Y':
		Y(pos);
		break;

	case 'z':
	case 'Z':
		Z(pos);
		break;

	case '+': /* Pour prendre en compte le remplacement des espaceS en + en get */
		SPACE(pos);
		break;

	case '_':
		UNDERSCORE(pos);
		break;

	case '0':
		ZERO(pos);
		break;

	case '1':
		ONE(pos);
		break;

	case '2':
		TWO(pos);
		break;

	case '3':
		THREE(pos);
		break;

	case '4':
		FOUR(pos);
		break;

	case '5':
		FIVE(pos);
		break;

	case '6':
		SIX(pos);
		break;

	case '7':
		SEVEN(pos);
		break;

	case '8':
		EIGHT(pos);
		break;

	case '9':
		NINE(pos);
		break;
	default:
		for(i = 0 ; i < WIDTH_CHAR ; i++)
			for(j = 0 ; j < HEIGHT_CHAR ; j++)
				clr_pixel(i, j);
		break;
	}
	nhd_spi_lcd_display_buffer(buffer);
}

void print_string(char* s){
	int i;
	char c;
	for(i = 0, c=s[i] ; c != '\0' ; i++, c=s[i]){
		print_char(s[i], i);
	}
}
