#include <stdio.h>
#include <inttypes.h>

int main()
{
int n, a, b, c, max;
scanf("%3d", &n);
a = n%10; //0-й разряд
b = (n/10)%10; //1-й разряд
c = (n/100)%10; //2-й разряд
max = a > b ? a : b;
max = max > c ? max: c;
printf("%d", max);
return 0;
}