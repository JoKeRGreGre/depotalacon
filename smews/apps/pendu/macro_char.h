#ifndef _H_MACRO_CHAR
#define _H_MACRO_CHAR

/*
  Ajoute une lettre A dans le buffer à partir de la position pos
 */
#define A(pos){									\
		set_pixel_at(0,2, pos);					\
		set_pixel_at(0,3, pos);					\
		set_pixel_at(0,4, pos);					\
		set_pixel_at(0,5, pos);					\
		set_pixel_at(0,6, pos);					\
		set_pixel_at(1,1, pos);					\
		set_pixel_at(1,3, pos);					\
		set_pixel_at(2,0, pos);					\
		set_pixel_at(2,3, pos);					\
		set_pixel_at(3,1, pos);					\
		set_pixel_at(3,3, pos);					\
		set_pixel_at(4,2, pos);					\
		set_pixel_at(4,3, pos);					\
		set_pixel_at(4,4, pos);					\
		set_pixel_at(4,5, pos);					\
		set_pixel_at(4,6, pos);					\
	}

/*
  Ajoute une lettre B dans le buffer à partir de la position pos
 */
#define B(pos){								\
		set_pixel_at(0, 0, pos);				\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 2, pos);				\
		set_pixel_at(0, 3, pos);				\
		set_pixel_at(0, 4, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(0, 6, pos);				\
		set_pixel_at(1, 0, pos);				\
		set_pixel_at(1, 3, pos);				\
		set_pixel_at(1, 6, pos);				\
		set_pixel_at(2, 0, pos);				\
		set_pixel_at(2, 3, pos);				\
		set_pixel_at(2, 6, pos);				\
		set_pixel_at(3, 0, pos);				\
		set_pixel_at(3, 1, pos);				\
		set_pixel_at(3, 2, pos);				\
		set_pixel_at(4, 3, pos);				\
		set_pixel_at(4, 4, pos);				\
		set_pixel_at(4, 5, pos);				\
		set_pixel_at(4, 6, pos);				\
	}

/*
  Ajoute une lettre C dans le buffer à partir de la position pos
 */
#define C(pos){								\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 2, pos);				\
		set_pixel_at(0, 3, pos);				\
		set_pixel_at(0, 4, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(1, 0, pos);				\
		set_pixel_at(1, 6, pos);				\
		set_pixel_at(2, 0, pos);				\
		set_pixel_at(2, 6, pos);				\
		set_pixel_at(3, 0, pos);				\
		set_pixel_at(3, 6, pos);				\
		set_pixel_at(4, 1, pos);				\
		set_pixel_at(4, 5, pos);				\
	}

/*
  Ajoute une lettre D dans le buffer à partir de la position pos
 */
#define D(pos){								\
		set_pixel_at(0, 0, pos);				\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 2, pos);				\
		set_pixel_at(0, 3, pos);				\
		set_pixel_at(0, 4, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(0, 6, pos);				\
		set_pixel_at(1, 0, pos);				\
		set_pixel_at(1, 6, pos);				\
		set_pixel_at(2, 0, pos);				\
		set_pixel_at(2, 6, pos);				\
		set_pixel_at(3, 0, pos);				\
		set_pixel_at(3, 6, pos);				\
		set_pixel_at(4, 1, pos);				\
		set_pixel_at(4, 2, pos);				\
		set_pixel_at(4, 3, pos);				\
		set_pixel_at(4, 4, pos);				\
		set_pixel_at(4, 5, pos);				\
	}

/*
  Ajoute une lettre E dans le buffer à partir de la position pos
 */
#define E(pos){								\
		set_pixel_at(0, 0, pos);				\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 2, pos);				\
		set_pixel_at(0, 3, pos);				\
		set_pixel_at(0, 4, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(0, 6, pos);				\
		set_pixel_at(1, 0, pos);				\
		set_pixel_at(1, 3, pos);				\
		set_pixel_at(1, 6, pos);				\
		set_pixel_at(2, 0, pos);				\
		set_pixel_at(2, 3, pos);				\
		set_pixel_at(2, 6, pos);				\
		set_pixel_at(3, 0, pos);				\
		set_pixel_at(3, 3, pos);				\
		set_pixel_at(3, 6, pos);				\
		set_pixel_at(4, 0, pos);				\
		set_pixel_at(4, 6, pos);				\
	}

/*
  Ajoute une lettre F dans le buffer à partir de la position pos
 */
#define F(pos){								\
		set_pixel_at(0, 0, pos);				\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 2, pos);				\
		set_pixel_at(0, 3, pos);				\
		set_pixel_at(0, 4, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(0, 6, pos);				\
		set_pixel_at(1, 0, pos);				\
		set_pixel_at(1, 3, pos);				\
		set_pixel_at(2, 0, pos);				\
		set_pixel_at(2, 3, pos);				\
		set_pixel_at(3, 0, pos);				\
		set_pixel_at(3, 3, pos);				\
		set_pixel_at(4, 0, pos);				\
	}

/*
  Ajoute une lettre G dans le buffer à partir de la position pos
 */
#define G(pos){								\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 2, pos);				\
		set_pixel_at(0, 3, pos);				\
		set_pixel_at(0, 4, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(1, 0, pos);				\
		set_pixel_at(1, 6, pos);				\
		set_pixel_at(2, 0, pos);				\
		set_pixel_at(2, 6, pos);				\
		set_pixel_at(3, 0, pos);				\
		set_pixel_at(3, 4, pos);				\
		set_pixel_at(3, 6, pos);				\
		set_pixel_at(4, 1, pos);				\
		set_pixel_at(4, 4, pos);				\
		set_pixel_at(4, 5, pos);				\
	}											\

/*
  Ajoute une lettre H dans le buffer à partir de la position pos
 */
#define H(pos){								\
		set_pixel_at(0, 0, pos);				\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 2, pos);				\
		set_pixel_at(0, 3, pos);				\
		set_pixel_at(0, 4, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(0, 6, pos);				\
		set_pixel_at(1, 3, pos);				\
		set_pixel_at(2, 3, pos);				\
		set_pixel_at(3, 3, pos);				\
		set_pixel_at(4, 0, pos);				\
		set_pixel_at(4, 1, pos);				\
		set_pixel_at(4, 2, pos);				\
		set_pixel_at(4, 3, pos);				\
		set_pixel_at(4, 4, pos);				\
		set_pixel_at(4, 5, pos);				\
		set_pixel_at(4, 6, pos);				\
	}

/*
  Ajoute une lettre I dans le buffer à partir de la position pos
 */
#define I(pos){								\
		set_pixel_at(1, 0, pos);				\
		set_pixel_at(1, 6, pos);				\
		set_pixel_at(2, 0, pos);				\
		set_pixel_at(2, 1, pos);				\
		set_pixel_at(2, 2, pos);				\
		set_pixel_at(2, 3, pos);				\
		set_pixel_at(2, 4, pos);				\
		set_pixel_at(2, 5, pos);				\
		set_pixel_at(2, 6, pos);				\
		set_pixel_at(3, 0, pos);				\
		set_pixel_at(3, 6, pos);				\
	}											\

/*
  Ajoute une lettre J dans le buffer à partir de la position pos
 */
#define J(pos){								\
		set_pixel_at(0, 0, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(1, 0, pos);				\
		set_pixel_at(1, 6, pos);				\
		set_pixel_at(2, 0, pos);				\
		set_pixel_at(2, 6, pos);				\
		set_pixel_at(3, 0, pos);				\
		set_pixel_at(3, 6, pos);				\
		set_pixel_at(4, 0, pos);				\
		set_pixel_at(4, 1, pos);				\
		set_pixel_at(4, 2, pos);				\
		set_pixel_at(4, 3, pos);				\
		set_pixel_at(4, 4, pos);				\
		set_pixel_at(4, 5, pos);				\
	}

/*
  Ajoute une lettre K dans le buffer à partir de la position pos
 */
#define K(pos){								\
		set_pixel_at(0, 0, pos);				\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 2, pos);				\
		set_pixel_at(0, 3, pos);				\
		set_pixel_at(0, 4, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(0, 6, pos);				\
		set_pixel_at(1, 3, pos);				\
		set_pixel_at(2, 2, pos);				\
		set_pixel_at(2, 4, pos);				\
		set_pixel_at(3, 1, pos);				\
		set_pixel_at(3, 5, pos);				\
		set_pixel_at(4, 0, pos);				\
		set_pixel_at(4, 6, pos);				\
	}

/*
  Ajoute une lettre L dans le buffer à partir de la position pos
 */
#define L(pos){								\
		set_pixel_at(0, 0, pos);				\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 2, pos);				\
		set_pixel_at(0, 3, pos);				\
		set_pixel_at(0, 4, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(0, 6, pos);				\
		set_pixel_at(1, 6, pos);				\
		set_pixel_at(2, 6, pos);				\
		set_pixel_at(3, 6, pos);				\
		set_pixel_at(4, 6, pos);				\
	}											\

/*
  Ajoute une lettre M dans le buffer à partir de la position pos
 */
#define M(pos){								\
		set_pixel_at(0, 0, pos);				\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 2, pos);				\
		set_pixel_at(0, 3, pos);				\
		set_pixel_at(0, 4, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(0, 6, pos);				\
		set_pixel_at(1, 1, pos);				\
		set_pixel_at(2, 2, pos);				\
		set_pixel_at(3, 1, pos);				\
		set_pixel_at(4, 0, pos);				\
		set_pixel_at(4, 1, pos);				\
		set_pixel_at(4, 2, pos);				\
		set_pixel_at(4, 3, pos);				\
		set_pixel_at(4, 4, pos);				\
		set_pixel_at(4, 5, pos);				\
		set_pixel_at(4, 6, pos);				\
	}

/*
  Ajoute une lettre N dans le buffer à partir de la position pos
 */
#define N(pos){								\
		set_pixel_at(0, 0, pos);				\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 2, pos);				\
		set_pixel_at(0, 3, pos);				\
		set_pixel_at(0, 4, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(0, 6, pos);				\
		set_pixel_at(1, 2, pos);				\
		set_pixel_at(2, 3, pos);				\
		set_pixel_at(3, 4, pos);				\
		set_pixel_at(4, 0, pos);				\
		set_pixel_at(4, 1, pos);				\
		set_pixel_at(4, 2, pos);				\
		set_pixel_at(4, 3, pos);				\
		set_pixel_at(4, 4, pos);				\
		set_pixel_at(4, 5, pos);				\
		set_pixel_at(4, 6, pos);				\
	}

/*
  Ajoute une lettre O dans le buffer à partir de la position pos
 */
#define O(pos){								\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 2, pos);				\
		set_pixel_at(0, 3, pos);				\
		set_pixel_at(0, 4, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(1, 0, pos);				\
		set_pixel_at(1, 6, pos);				\
		set_pixel_at(2, 0, pos);				\
		set_pixel_at(2, 6, pos);				\
		set_pixel_at(3, 0, pos);				\
		set_pixel_at(3, 6, pos);				\
		set_pixel_at(4, 1, pos);				\
		set_pixel_at(4, 2, pos);				\
		set_pixel_at(4, 3, pos);				\
		set_pixel_at(4, 4, pos);				\
		set_pixel_at(4, 5, pos);				\
	}

/*
  Ajoute une lettre P dans le buffer à partir de la position pos
 */
#define P(pos){								\
		set_pixel_at(0, 0, pos);				\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 2, pos);				\
		set_pixel_at(0, 3, pos);				\
		set_pixel_at(0, 4, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(0, 6, pos);				\
		set_pixel_at(1, 0, pos);				\
		set_pixel_at(1, 3, pos);				\
		set_pixel_at(2, 0, pos);				\
		set_pixel_at(2, 3, pos);				\
		set_pixel_at(3, 0, pos);				\
		set_pixel_at(3, 3, pos);				\
		set_pixel_at(4, 1, pos);				\
		set_pixel_at(4, 2, pos);				\
	}

/*
  Ajoute une lettre Q dans le buffer à partir de la position pos
 */
#define Q(pos){								\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 2, pos);				\
		set_pixel_at(0, 3, pos);				\
		set_pixel_at(0, 4, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(1, 0, pos);				\
		set_pixel_at(1, 6, pos);				\
		set_pixel_at(2, 0, pos);				\
		set_pixel_at(2, 4, pos);				\
		set_pixel_at(2, 6, pos);				\
		set_pixel_at(3, 0, pos);				\
		set_pixel_at(3, 5, pos);				\
		set_pixel_at(3, 6, pos);				\
		set_pixel_at(4, 1, pos);				\
		set_pixel_at(4, 2, pos);				\
		set_pixel_at(4, 3, pos);				\
		set_pixel_at(4, 4, pos);				\
		set_pixel_at(4, 5, pos);				\
		set_pixel_at(4, 6, pos);				\
	}

/*
  Ajoute une lettre R dans le buffer à partir de la position pos
 */
#define R(pos){								\
		set_pixel_at(0, 0, pos);				\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 2, pos);				\
		set_pixel_at(0, 3, pos);				\
		set_pixel_at(0, 4, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(0, 6, pos);				\
		set_pixel_at(1, 0, pos);				\
		set_pixel_at(1, 3, pos);				\
		set_pixel_at(2, 0, pos);				\
		set_pixel_at(2, 3, pos);				\
		set_pixel_at(2, 4, pos);				\
		set_pixel_at(3, 0, pos);				\
		set_pixel_at(3, 3, pos);				\
		set_pixel_at(3, 5, pos);				\
		set_pixel_at(4, 1, pos);				\
		set_pixel_at(4, 2, pos);				\
		set_pixel_at(4, 6, pos);				\
	}

/*
  Ajoute une lettre S dans le buffer à partir de la position pos
 */
#define S(pos){								\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 2, pos);				\
		set_pixel_at(0, 6, pos);				\
		set_pixel_at(1, 0, pos);				\
		set_pixel_at(1, 3, pos);				\
		set_pixel_at(1, 6, pos);				\
		set_pixel_at(2, 0, pos);				\
		set_pixel_at(2, 3, pos);				\
		set_pixel_at(2, 6, pos);				\
		set_pixel_at(3, 0, pos);				\
		set_pixel_at(3, 3, pos);				\
		set_pixel_at(3, 6, pos);				\
		set_pixel_at(4, 0, pos);				\
		set_pixel_at(4, 4, pos);				\
		set_pixel_at(4, 5, pos);				\
	}

/*
  Ajoute une lettre T dans le buffer à partir de la position pos
 */
#define T(pos){								\
		set_pixel_at(0, 0, pos);				\
		set_pixel_at(1, 0, pos);				\
		set_pixel_at(2, 0, pos);				\
		set_pixel_at(2, 1, pos);				\
		set_pixel_at(2, 2, pos);				\
		set_pixel_at(2, 3, pos);				\
		set_pixel_at(2, 4, pos);				\
		set_pixel_at(2, 5, pos);				\
		set_pixel_at(2, 6, pos);				\
		set_pixel_at(3, 0, pos);				\
		set_pixel_at(4, 0, pos);				\
	}

/*
  Ajoute une lettre U dans le buffer à partir de la position pos
 */
#define U(pos){								\
		set_pixel_at(0, 0, pos);				\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 2, pos);				\
		set_pixel_at(0, 3, pos);				\
		set_pixel_at(0, 4, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(1, 6, pos);				\
		set_pixel_at(2, 6, pos);				\
		set_pixel_at(3, 6, pos);				\
		set_pixel_at(4, 0, pos);				\
		set_pixel_at(4, 1, pos);				\
		set_pixel_at(4, 2, pos);				\
		set_pixel_at(4, 3, pos);				\
		set_pixel_at(4, 4, pos);				\
		set_pixel_at(4, 5, pos);				\
	}

/*
  Ajoute une lettre V dans le buffer à partir de la position pos
 */
#define V(pos){								\
		set_pixel_at(0, 0, pos);				\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 2, pos);				\
		set_pixel_at(0, 3, pos);				\
		set_pixel_at(0, 4, pos);				\
		set_pixel_at(1, 5, pos);				\
		set_pixel_at(2, 6, pos);				\
		set_pixel_at(3, 5, pos);				\
		set_pixel_at(4, 0, pos);				\
		set_pixel_at(4, 1, pos);				\
		set_pixel_at(4, 2, pos);				\
		set_pixel_at(4, 3, pos);				\
		set_pixel_at(4, 4, pos);				\
	}

/*
  Ajoute une lettre W dans le buffer à partir de la position pos
 */
#define W(pos){								\
		set_pixel_at(0, 0, pos);				\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 2, pos);				\
		set_pixel_at(0, 3, pos);				\
		set_pixel_at(0, 4, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(1, 6, pos);				\
		set_pixel_at(2, 5, pos);				\
		set_pixel_at(3, 6, pos);				\
		set_pixel_at(4, 0, pos);				\
		set_pixel_at(4, 1, pos);				\
		set_pixel_at(4, 2, pos);				\
		set_pixel_at(4, 3, pos);				\
		set_pixel_at(4, 4, pos);				\
		set_pixel_at(4, 5, pos);				\
	}

/*
  Ajoute une lettre X dans le buffer à partir de la position pos
 */
#define X(pos){								\
		set_pixel_at(0, 0, pos);				\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(0, 6, pos);				\
		set_pixel_at(1, 2, pos);				\
		set_pixel_at(1, 4, pos);				\
		set_pixel_at(2, 5, pos);				\
		set_pixel_at(3, 2, pos);				\
		set_pixel_at(3, 4, pos);				\
		set_pixel_at(4, 0, pos);				\
		set_pixel_at(4, 1, pos);				\
		set_pixel_at(4, 5, pos);				\
		set_pixel_at(4, 6, pos);				\
	}

/*
  Ajoute une lettre Y dans le buffer à partir de la position pos
 */
#define Y(pos){								\
		set_pixel_at(0, 0, pos);				\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 2, pos);				\
		set_pixel_at(1, 3, pos);				\
		set_pixel_at(2, 3, pos);				\
		set_pixel_at(2, 4, pos);				\
		set_pixel_at(2, 5, pos);				\
		set_pixel_at(2, 6, pos);				\
		set_pixel_at(3, 3, pos);				\
		set_pixel_at(4, 0, pos);				\
		set_pixel_at(4, 1, pos);				\
		set_pixel_at(4, 2, pos);				\
	}

/*
  Ajoute une lettre Z dans le buffer à partir de la position pos
 */
#define Z(pos){								\
		set_pixel_at(0, 0, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(0, 6, pos);				\
		set_pixel_at(1, 0, pos);				\
		set_pixel_at(1, 4, pos);				\
		set_pixel_at(1, 6, pos);				\
		set_pixel_at(2, 0, pos);				\
		set_pixel_at(2, 3, pos);				\
		set_pixel_at(2, 6, pos);				\
		set_pixel_at(3, 0, pos);				\
		set_pixel_at(3, 2, pos);				\
		set_pixel_at(3, 6, pos);				\
		set_pixel_at(4, 0, pos);				\
		set_pixel_at(4, 1, pos);				\
		set_pixel_at(4, 6, pos);				\
	}

/*
  Ajoute un espace dans le buffer à partir de la position pos
 */
#define SPACE(pos){							\
	}

/*
  Ajoute un 0 dans le buffer à partir de la position pos
 */
#define ZERO(pos){								\
		set_pixel_at(0, 0, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(0, 6, pos);				\
		set_pixel_at(0, 0, pos);				\
		set_pixel_at(0, 4, pos);				\
		set_pixel_at(1, 6, pos);				\
		set_pixel_at(1, 0, pos);				\
		set_pixel_at(1, 3, pos);				\
		set_pixel_at(2, 6, pos);				\
		set_pixel_at(2, 0, pos);				\
		set_pixel_at(2, 2, pos);				\
		set_pixel_at(3, 6, pos);				\
		set_pixel_at(3, 0, pos);				\
		set_pixel_at(3, 1, pos);				\
		set_pixel_at(4, 1, pos);				\
		set_pixel_at(4, 2, pos);				\
		set_pixel_at(4, 3, pos);				\
		set_pixel_at(4, 4, pos);				\
		set_pixel_at(4, 5, pos);				\
	}

/*
  Ajoute un 1 dans le buffer à partir de la position pos
 */
#define ONE(pos){								\
		set_pixel_at(1, 1, pos);				\
		set_pixel_at(1, 6, pos);				\
		set_pixel_at(2, 0, pos);				\
		set_pixel_at(2, 1, pos);				\
		set_pixel_at(2, 2, pos);				\
		set_pixel_at(2, 3, pos);				\
		set_pixel_at(2, 4, pos);				\
		set_pixel_at(2, 5, pos);				\
		set_pixel_at(2, 6, pos);				\
		set_pixel_at(3, 6, pos);				\
	}

/*
  Ajoute un 2 dans le buffer à partir de la position pos
 */
#define TWO(pos){								\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 6, pos);				\
		set_pixel_at(1, 0, pos);				\
		set_pixel_at(1, 5, pos);				\
		set_pixel_at(1, 6, pos);				\
		set_pixel_at(2, 0, pos);				\
		set_pixel_at(2, 4, pos);				\
		set_pixel_at(2, 6, pos);				\
		set_pixel_at(3, 0, pos);				\
		set_pixel_at(3, 3, pos);				\
		set_pixel_at(3, 6, pos);				\
		set_pixel_at(4, 1, pos);				\
		set_pixel_at(4, 2, pos);				\
		set_pixel_at(4, 6, pos);				\
	}

/*
  Ajoute un 3 dans le buffer à partir de la position pos
 */
#define THREE(pos){							\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(1, 0, pos);				\
		set_pixel_at(1, 6, pos);				\
		set_pixel_at(2, 0, pos);				\
		set_pixel_at(2, 3, pos);				\
		set_pixel_at(2, 6, pos);				\
		set_pixel_at(3, 0, pos);				\
		set_pixel_at(3, 3, pos);				\
		set_pixel_at(3, 6, pos);				\
		set_pixel_at(4, 1, pos);				\
		set_pixel_at(4, 2, pos);				\
		set_pixel_at(4, 4, pos);				\
		set_pixel_at(4, 5, pos);				\
	}

/*
  Ajoute un 4 dans le buffer à partir de la position pos
 */
#define FOUR(pos){								\
		set_pixel_at(0, 3, pos);				\
		set_pixel_at(0, 4, pos);				\
		set_pixel_at(1, 2, pos);				\
		set_pixel_at(1, 4, pos);				\
		set_pixel_at(2, 1, pos);				\
		set_pixel_at(2, 4, pos);				\
		set_pixel_at(3, 0, pos);				\
		set_pixel_at(3, 1, pos);				\
		set_pixel_at(3, 2, pos);				\
		set_pixel_at(3, 3, pos);				\
		set_pixel_at(3, 4, pos);				\
		set_pixel_at(3, 5, pos);				\
		set_pixel_at(3, 6, pos);				\
		set_pixel_at(4, 4, pos);				\
	}

/*
  Ajoute un 5 dans le buffer à partir de la position pos
 */
#define FIVE(pos){								\
		set_pixel_at(0, 0, pos);				\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 2, pos);				\
		set_pixel_at(0, 3, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(1, 0, pos);				\
		set_pixel_at(1, 3, pos);				\
		set_pixel_at(1, 6, pos);				\
		set_pixel_at(2, 0, pos);				\
		set_pixel_at(2, 3, pos);				\
		set_pixel_at(2, 6, pos);				\
		set_pixel_at(3, 0, pos);				\
		set_pixel_at(3, 3, pos);				\
		set_pixel_at(3, 6, pos);				\
		set_pixel_at(4, 0, pos);				\
		set_pixel_at(4, 4, pos);				\
		set_pixel_at(4, 5, pos);				\
	}

/*
  Ajoute un 6 dans le buffer à partir de la position pos
 */
#define SIX(pos){								\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 2, pos);				\
		set_pixel_at(0, 3, pos);				\
		set_pixel_at(0, 4, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(1, 0, pos);				\
		set_pixel_at(1, 3, pos);				\
		set_pixel_at(1, 6, pos);				\
		set_pixel_at(2, 0, pos);				\
		set_pixel_at(2, 3, pos);				\
		set_pixel_at(2, 6, pos);				\
		set_pixel_at(3, 0, pos);				\
		set_pixel_at(3, 3, pos);				\
		set_pixel_at(3, 6, pos);				\
		set_pixel_at(4, 0, pos);				\
		set_pixel_at(4, 4, pos);				\
		set_pixel_at(4, 5, pos);				\
	}

/*
  Ajoute un 7 dans le buffer à partir de la position pos
 */
#define SEVEN(pos){							\
		set_pixel_at(0, 0, pos);				\
		set_pixel_at(1, 0, pos);				\
		set_pixel_at(1, 4, pos);				\
		set_pixel_at(1, 5, pos);				\
		set_pixel_at(1, 6, pos);				\
		set_pixel_at(2, 0, pos);				\
		set_pixel_at(2, 3, pos);				\
		set_pixel_at(3, 0, pos);				\
		set_pixel_at(3, 2, pos);				\
		set_pixel_at(4, 0, pos);				\
		set_pixel_at(4, 1, pos);				\
	}

/*
  Ajoute un 8 dans le buffer à partir de la position pos
 */
#define EIGHT(pos){							\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 2, pos);				\
		set_pixel_at(0, 4, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(1, 0, pos);				\
		set_pixel_at(1, 3, pos);				\
		set_pixel_at(1, 6, pos);				\
		set_pixel_at(2, 0, pos);				\
		set_pixel_at(2, 3, pos);				\
		set_pixel_at(2, 6, pos);				\
		set_pixel_at(3, 0, pos);				\
		set_pixel_at(3, 3, pos);				\
		set_pixel_at(3, 6, pos);				\
		set_pixel_at(4, 1, pos);				\
		set_pixel_at(4, 2, pos);				\
		set_pixel_at(4, 4, pos);				\
		set_pixel_at(4, 5, pos);				\
	}

/*
  Ajoute un 9 dans le buffer à partir de la position pos
 */
#define NINE(pos){								\
		set_pixel_at(0, 1, pos);				\
		set_pixel_at(0, 2, pos);				\
		set_pixel_at(0, 5, pos);				\
		set_pixel_at(1, 0, pos);				\
		set_pixel_at(1, 3, pos);				\
		set_pixel_at(1, 6, pos);				\
		set_pixel_at(2, 0, pos);				\
		set_pixel_at(2, 3, pos);				\
		set_pixel_at(2, 6, pos);				\
		set_pixel_at(3, 0, pos);				\
		set_pixel_at(3, 3, pos);				\
		set_pixel_at(3, 6, pos);				\
		set_pixel_at(4, 1, pos);				\
		set_pixel_at(4, 2, pos);				\
		set_pixel_at(4, 3, pos);				\
		set_pixel_at(4, 4, pos);				\
		set_pixel_at(4, 5, pos);				\
	}

#define UNDERSCORE(pos){						\
		set_pixel_at(1, 6, pos);				\
		set_pixel_at(2, 6, pos);				\
		set_pixel_at(3, 6, pos);				\
		set_pixel_at(3, 6, pos);				\
		set_pixel_at(4, 6, pos);				\
	}

#define SHARP(pos){							\
	}

#endif
