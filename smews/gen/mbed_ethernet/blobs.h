/*
* This file has been generated by GenApps, a tool of the smews project
* smews home page: http://www.lifl.fr/2XS/smews
* Generation date: Wed Nov 25 13:09:55 2015
*/

#ifndef __BLOBS_H__
#define __BLOBS_H__


/********** Symbols list, total length: 9 bytes **********/
/*
* GET 
* POST 
*/

/********** Generated Ternary Tree **********/
/*
* -P
* -=OST |END
* -<GET |END
*/

/********** "Understoodable" Generated BLOB, total length: 15 bytes **********/
/*
* "P",<=,=:6,"GET ",ref:0,0,"OST ",ref:1,0
*/

/********** Finally Generated BLOB, total length: 15 bytes **********/
CONST_VAR(unsigned char, blob_http_rqt[]) = {80,3,6,71,69,84,32,128,0,79,83,84,32,129,0};

/********** Symbols list, total length: 243 bytes **********/
/*
* application/x-latex
* application/x-sh
* application/x-tar
* application/x-tex
* application/x-www-form-urlencoded
* application/zip
* image/png
* image/jpeg
* model/vrml
* multipart/form-data
* text/css
* text/html
* text/javascript
* text/plain
* text/richtext
* text/rtf
* video/x-msvideo
*/

/********** Generated Ternary Tree **********/
/*
* -m
* -=u
* --=ltipart/form-data|END
* --<odel/vrml|END
* -<i
* --=mage/p
* --------=ng|END
* --------<jpeg|END
* --<application/z
* ---------------=ip|END
* ---------------<x-t
* ------------------=e
* -------------------=x|END
* -------------------<ar|END
* ------------------<s
* -------------------=h|END
* -------------------<latex|END
* ------------------>www-form-urlencoded|END
* ->v
* --=ideo/x-msvideo|END
* --<text/j
* --------=avascript|END
* --------<h
* ---------=tml|END
* ---------<css|END
* -------->r
* ---------=t
* ----------=f|END
* ----------<ichtext|END
* ---------<plain|END
*/

/********** "Understoodable" Generated BLOB, total length: 204 bytes **********/
/*
* "m",<=>,=:90,>:33,"i",<=,=:69,"application/z",<=,=:50,"x-t",<=>,=:13,>:10,"s",<=,=:7,"latex",ref:0,0,"h",ref:1,0,"e",<=,=:4,"ar",ref:2,0,"x",ref:3,0,"www-form-urlencoded",ref:4,0,"ip",ref:5,0,"mage/p",<=,=:6,"jpeg",ref:7,0,"ng",ref:6,0,"u",<=,=:11,"odel/vrml",ref:8,0,"ltipart/form-data",ref:9,0,"v",<=,=:58,"text/j",<=>,=:13,>:11,"h",<=,=:5,"css",ref:10,0,"tml",ref:11,0,"avascript",ref:12,0,"r",<=,=:7,"plain",ref:13,0,"t",<=,=:9,"ichtext",ref:14,0,"f",ref:15,0,"ideo/x-msvideo",ref:16,0
*/

/********** Finally Generated BLOB, total length: 204 bytes **********/
CONST_VAR(unsigned char, mimes_tree[]) = {109,7,90,33,105,3,69,97,112,112,108,105,99,97,116,105,111,110,47,122,3,50,120,45,116,7,13,10,115,3,7,108,97,116,101,120,128,0,104,129,0,101,3,4,97,114,130,0,120,131,0,119,119,119,45,102,111,114,109,45,117,114,108,101,110,99,111,100,101,100,132,0,105,112,133,0,109,97,103,101,47,112,3,6,106,112,101,103,135,0,110,103,134,0,117,3,11,111,100,101,108,47,118,114,109,108,136,0,108,116,105,112,97,114,116,47,102,111,114,109,45,100,97,116,97,137,0,118,3,58,116,101,120,116,47,106,7,13,11,104,3,5,99,115,115,138,0,116,109,108,139,0,97,118,97,115,99,114,105,112,116,140,0,114,3,7,112,108,97,105,110,141,0,116,3,9,105,99,104,116,101,120,116,142,0,102,143,0,105,100,101,111,47,120,45,109,115,118,105,100,101,111,144,0};

/********** Symbols list, total length: 44 bytes **********/
/*
* CONTENT-TYPE
* CONTENT-LENGTH
* FILENAME=
* BOUNDARY=
*/

/********** Generated Ternary Tree **********/
/*
* -C
* -=ONTENT-T
* ---------=YPE|END
* ---------<LENGTH|END
* -<BOUNDARY=|END
* ->FILENAME=|END
*/

/********** "Understoodable" Generated BLOB, total length: 49 bytes **********/
/*
* "C",<=>,=:11,>:23,"BOUNDARY=",ref:3,0,"ONTENT-T",<=,=:8,"LENGTH",ref:1,0,"YPE",ref:0,0,"FILENAME=",ref:2,0
*/

/********** Finally Generated BLOB, total length: 49 bytes **********/
CONST_VAR(unsigned char, blob_http_header_content[]) = {67,7,11,23,66,79,85,78,68,65,82,89,61,131,0,79,78,84,69,78,84,45,84,3,8,76,69,78,71,84,72,129,0,89,80,69,128,0,70,73,76,69,78,65,77,69,61,130,0};

#endif
