/*Перевести натуральное число в двоичную систему счисления. Необходимо реализовать рекурсивную функцию.*/

#include <stdio.h>
void getbin(int n)
{
    if (n >= 1)
    {
    getbin(n / 2);
    printf("%d", n % 2);
    }
}
int main ()

{
int n;
scanf("%d", &n);
getbin(n);
return 0;
}
