/*Дано целое не отрицательное число N. Выведите все его цифры по одной, в обратном порядке, разделяя их пробелами или новыми строками.*/
#include <stdio.h>

void rec(int n)
{
    if (n == 0) {
        return;
    }
        printf("%d ", n%10);
        rec(n/10);
}
int main()
{
int n=0;
    scanf("%d", &n);
    if (n == 0) {
        printf("0");
    }
    else {
    rec(n);
    }
    return 0;
}

