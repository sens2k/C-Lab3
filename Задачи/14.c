#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 3, задание - 3.14
*/
int main(int argc, char* argv[])
{
	int n1, n2, n3, i, number;
	printf("Number = ");
	scanf("%d", number);
	printf("%d\n%d\n", n1, n2);
	for (int i = 2; i < number; i++)
	{
		n3 = n1 + n2;
		printf("%d", n3);
		n1 = n2;
		n2 = n3;
	}
	return 0;
}


