/*Составить рекурсивную функцию, печать всех чисел от 1 до N.*/
#include <stdio.h>

void rec(int n)
{
    if (n > 1)
        rec(n - 1);
    printf("%5d", n);
}
int main()
{
int n;
    scanf("%d", &n);
    rec(n);
    return 0;
}

