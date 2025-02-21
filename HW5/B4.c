/*Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.*/

#include <stdio.h>

int main()
{
int a;
    scanf("%d", &a);
        if ((a / 100 != 0) && (a / 1000 == 0))
        {
        printf("YES\n");
        }
        else
        {
        printf("NO\n");
        }
return 0;
}
