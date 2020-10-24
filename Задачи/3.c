#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 3, задание - 3.3
*/


int main(int argc, char* argv[])
{
	int n, x, y, z;
	n = 0;
	for (int i = 11; i <= 999; i++)
	{
		if (i < 100)
		{
			x = i % 10;
			y = i / 10;
			if (x == y) n++;
		}
		else
		{
			x = i % 10;
			y = i % 100; y /= 10;
			z = i / 100;
			if (x == z) n++;
		}
	}

	printf("%d\n", n);
}


