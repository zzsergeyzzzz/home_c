/*Ввести натуральное число вывести квадраты и кубы всех чисел от 1 до этого числа. Число не превосходит 100.*/

#include <stdio.h>

int main()
{
int a, b;
    scanf("%d", &a);
    b = a>100 ? 100 : a;//ограничение
    int i=1;
    while (i<=b) {
        printf("%d %d %d\n",i, i*i, i*i*i);
        i++;
        }
return 0;
}
