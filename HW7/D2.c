/*Составить рекурсивную функцию, которая определяет сумму всех чисел от 1 до N.*/
#include <stdio.h>

int sum_num(int n)
{

    if (n ==1)
        return 1;
    else
        return n+sum_num(n-1);
}

int main()
{
int n;
    scanf("%d", &n);
    printf("%d ", sum_num(n));

    return 0;
}

