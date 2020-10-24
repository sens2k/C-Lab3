#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 3, задание - 3.17
*/
double A(double x, double n);
double B(double x, double n);
double C(double x, double n);

int main(int argc, char* argv[])
{
	printf("%lf\n", A(0.5, 4));
	printf("%lf\n", B(0.5, 4));
	printf("%lf\n", C(0.5, 4));
	return 0;
}

double A(double x, double n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += pow(sin(x), n);
	}
	return sum;
}

double B(double x, double n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += sin(pow(x, n));
	}
	return sum;
}
double C(double x, double n)
{
	double sinus = sin(x);
	double sum = 0;
	for (int i = 1; i < n; i++)
	{
		sum += sinus;
		sinus = sin(sinus);
	}
	return sum;
}