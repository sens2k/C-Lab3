#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 3, задание - 3.5
*/

int summ(int n);
int main(int argc, char* argv[])
{
    int n;
    scanf("%d", &n);
    if((summ(n) * summ(n) * summ(n) == n * n)) printf("DDAAAMn its true");
    else printf("DAmN it is not TRUE");
}
int summ(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

