#include <stdio.h>
#include <inttypes.h>

int main()
{
int a, b;
    scanf("%d%d", &a, &b);
    printf("%d %d", a > b ? b : a, a > b ? a : b);
    return 0;
}
