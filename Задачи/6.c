#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 3, задание - 3.6
*/

int summ(int n);
int main(int argc, char* argv[])
{
    int n;
    scanf("%d", &n);
    while (n % 3 == 0) n /= 3;
    printf(n == 1 ? "true\n" : "false\n");
    return 0;
}


