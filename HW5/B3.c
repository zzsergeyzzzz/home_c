/*Ввести два целых числа a и b (a ≤ b) и вывести сумму квадратов всех чисел от a до b.*/

#include <stdio.h>

int main()
{
int a, b;
    scanf("%d%d", &a, &b);
    int i=a, sum = 0;
    while (i<=b) {
        sum+=i*i;
        i++;
        }
        printf("%d ", sum);
return 0;
}
