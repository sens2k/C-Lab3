#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 3, задание - 3.2
*/


int main(int argc, char* argv[])
{
	int n, x, y, z, k;
	n = 0;
	k = 0;
	for (int i = 111; i <= 999; i++)
	{
		k++;
		x = i % 10;
		y = i % 100; y /= 10;
		z = i / 100;
		if ((x == y || y == z || x == z)) n++;
	}

	printf("%d\n", k - n);
}


