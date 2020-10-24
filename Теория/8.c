#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 3, задание - 8
*/

int main(int argc, char* argv[])
{
	/*	a) while (E) { S; ... continue; ... S; next:; } - верно ✅
		b) do { S; ... continue; ... S; } while ( E ); next: ; ... - не верно 🚫
		c) for ( E1; E2; E3) { S; ... continue; ... S; next: ; } - верно ✅
		d) while ( E) { S; ... for (E1;E2;E3) { S; ... continue; ... S; } ... S; next:; } - не верно 🚫
		e) while ( E) { S; ... for (E1;E2;E3) { S; ... continue; ... S; next: ; } ... S;} - верно  ✅
	*/
}

