#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 3, задание - 3.10
*/

int main(int argc, char* argv[])
{
    int n, r = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            printf("%d\n", i);

    return 0;
}


