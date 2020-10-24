#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 3, задание - 3.5
*/


int main(int argc, char* argv[])
{
    int n;
    scanf("%d", &n);
    int k = 1;
    while ((n /= 10) != 0) ++k;
    printf("%d", k);
    return 0;
}


