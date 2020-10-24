#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 3, задание - 6
*/

int main(int argc, char* argv[])
{
	/*
	1) while ( E1 )
	{ 
		if ( E2 ) continue; 
		S; 
	}
	Улучшенное
		while(E1)
		{
			if(!E2) S;
		}



	2) do { if ( E1 ) continue; else S1; S2; }
		while ( E2 );
	Улучшенное
	do {
		if ( !E1 )
		{
			S1;
			S2;
		}
	}
	while ( E2 );
	*/
	
}