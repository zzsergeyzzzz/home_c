#include <stdio.h>
#include <inttypes.h>
#include <float.h>
#include <locale.h>


int main()
{
int X1, Y1, X2, Y2;
    scanf("%d%d%d%d", &X1, &Y1, &X2, &Y2);
    Y2=Y2-Y1;
    X2-=X1;
    float K=(float) Y2/(float) X2;
    float B=(float) Y1 //- (k* (float X1)));
    printf("%.2f %.2f", k, b);
return 0;
}
