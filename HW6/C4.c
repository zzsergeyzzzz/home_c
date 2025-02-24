/*Описать функцию вычисления f(x) по формуле:
f(x)= x*x при -2 ≤ x < 2;
x*x+4x+5 при x ≥ 2;
4 при x < -2.
Используя эту функцию для n заданных чисел, вычислить f(x). Среди вычисленных значений найти наибольшее. 
Последовательность не нулевых целых чисел, в конце последовательности число 0.*/
#include <stdio.h>
int f (int x) {
    int result=0;
    if ((x>=-2) && (x<2))
    result = x*x;
    else if (x>=2)
    result = x*x+4*x+5;
    else if (x<=-2)
    result = 4;
    return (result);
    }
int main()
{
    int x=1, max=0, a;
    while (x!=0) {
    scanf("%d", &x);
    a=f(x);
    max = max > a ? max : a;
    }
    printf("%d", max);
return 0;
} 
