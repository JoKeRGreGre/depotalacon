/*
* This file has been generated by GenApps, a tool of the smews project
* smews home page: http://www.lifl.fr/2XS/smews
* Generation date: Wed Nov 18 14:00:54 2015
*/

#include "handlers.h"

/********** External references **********/
extern CONST_VAR(struct output_handler_t, apps_httpCodes_505_html_handler);
extern CONST_VAR(struct output_handler_t, apps_httpCodes_404_html_handler);
extern CONST_VAR(struct output_handler_t, apps_ecran_ecran_html_handler);

/********** Files index **********/
CONST_VAR(const struct output_handler_t /*CONST_VAR*/ *, resources_index[]) = {
	&apps_ecran_ecran_html_handler,
	&apps_httpCodes_404_html_handler,
	&apps_httpCodes_505_html_handler,
	NULL,
};

/********** Symbols list, total length: 49 bytes **********/
/*
* /ecran.html
* /httpCodes/404.html
* /httpCodes/505.html
*/

/********** Generated Ternary Tree **********/
/*
* -/h
* --=ttpCodes/5
* ------------=05.html|END
* ------------<404.html|END
* --<ecran.html|END
*/

/********** "Understoodable" Generated BLOB, total length: 47 bytes **********/
/*
* "/h",<=,=:12,"ecran.html",ref:0,0,"ttpCodes/5",<=,=:10,"404.html",ref:1,0,"05.html",ref:2,0
*/

/********** Finally Generated BLOB, total length: 47 bytes **********/
CONST_VAR(unsigned char, urls_tree[]) = {47,104,3,12,101,99,114,97,110,46,104,116,109,108,128,0,116,116,112,67,111,100,101,115,47,53,3,10,52,48,52,46,104,116,109,108,129,0,48,53,46,104,116,109,108,130,0};