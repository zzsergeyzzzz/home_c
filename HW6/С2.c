/*Составить функцию, возведение числа N в степень P. int power(n, p) и привести пример ее использования.*/

#include <stdio.h>
int power(int n, int p)
{
    int i=1, result=1;
    while (i<=p) {
        result*=n;
        i++;
        }
    return (result);
}
int main()
{
    int n,p;
    scanf("%d%d",&n, &p);
    printf("%d", power(n,p));
    return 0;
}



















