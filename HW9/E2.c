/*Ввести c клавиатуры массив из 5 элементов, найти минимальный из них.*/
#include <stdio.h>

int Min(int *arr)
{
    int min=arr[0],i;
    for (i = 0; i < 5; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    return min;
}
int main()
{
    int arr[5];
    scanf ("%d %d %d %d %d", &arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    printf("%d",Min(arr));
    return 0;
}
