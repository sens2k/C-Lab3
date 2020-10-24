#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 3, задание - 3.8
*/

int main(int argc, char* argv[])
{
    double a, s = 0;
    int n;
    scanf("%lf", &a);
    for (n = 1; s <= a; s += 1.0 / n++);
    printf("s=%lf\nn=%d\n", s, n);
    return 0;
}


