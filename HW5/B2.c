/*Ввести два целых числа a и b (a ≤ b) и вывести квадраты всех чисел от a до b.*/

#include <stdio.h>

int main()
{
int a, b;
    scanf("%d%d", &a, &b);
    int i=a;
    while (i<=b) {
        printf("%d ", i*i);
        i++;
        }
return 0;
}
