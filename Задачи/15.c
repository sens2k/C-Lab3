#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 3, задание - 3.15
*/
int main(int argc, char* argv[])
{
    int n, p = 1, s = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        p *= i;
        s += p;
    }
    printf("%d\n", s);

    return 0;
}


