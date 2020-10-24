#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 3, задание - 3.12
*/

int main(int argc, char* argv[])
{
    int m, p, k = 0;
    scanf("%d", &m);
    for (p = 4; p < m; p *= 4)
        k++;
    printf("%d\n", k);

    return 0;
}


