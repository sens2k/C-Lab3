#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 3, задание - 9
*/

int main(int argc, char* argv[])
{
	/*	a) 🚫 while ( E ) { S; ... break; ... S; next: ; }
		b) ✅ while ( E ) { S; ... break; ... S; } next: ; ...
		c) ✅ do { S; ... break; ... S; } while ( E ); next: ; ...
		d) 🚫 for ( E1; E2; E3) { S; ... break; ... S; next: ; }
		e) ✅ while ( E) { S; ... for ( E1; E2; E3) { S; ... break; ... S; } next: ; ... S;
		f) 🚫 while ( E ) { S; ... for ( E1; E2; E3) { S; ... break; ... S; } ... S; next: ; }
	*/
}

