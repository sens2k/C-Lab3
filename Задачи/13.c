#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 3, задание - 3.13
*/
bool isPrime(int n)
{
	if (n > 1)
	{
		for (int i = 2; i < n; i++)
			if (n % i == 0)
				return false;
		return true;
	}
	else
		return false;
}
int main(int argc, char* argv[])
{
	int d;
	scanf("%d", &d);
	for (int i = 1; i <= d; i++)
		if (isPrime(i))
			printf("%d\n", i);
	return 0;
}


