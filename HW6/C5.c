/*Составить функцию, которая определяет сумму всех чисел от 1 до N и привести пример ее использования.*/
#include <stdio.h>
int sum(int a)
{
int i=1, result=0;
    while (i<=a)
    {
        result+=i;
        i++;
    }
    return (result);
}
int main()
{
int N;
    scanf("%d", &N);
    printf("%d", sum(N));
return 0;
}
