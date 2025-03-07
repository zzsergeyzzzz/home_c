/* Cчитать массив из 10 элементов и найти в нем максимальный и минимальный элементы и их номера.

*/
#include <stdio.h>

int Min(int *arr)
{
    int min=arr[0],i;
    for (i = 0; i < 10; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    return min;
}
int PosMin(int *arr)
{
    int min=arr[0],i,pos=1;
    for (i = 0; i < 10; i++)
        if (min > arr[i])
        {
            min = arr[i];
            pos = i+1;
        }
    return pos;
}
int Max(int *arr)
{
    int max=arr[0],i;
    for (i = 0; i < 10; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}
int PosMax(int *arr)
{
    int max=arr[0],i,pos=1;
    for (i = 0; i < 10; i++)
        if (max < arr[i])
        {
            max = arr[i];
            pos = i+1;
        }
    return pos;
}

int main()
{
    int arr[10];
    scanf ("%d %d %d %d %d %d %d %d %d %d", &arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5],&arr[6],&arr[7],&arr[8],&arr[9]);
    printf("%d %d %d %d",PosMax(arr),Max(arr),PosMin(arr),Min(arr));
    return 0;
}
