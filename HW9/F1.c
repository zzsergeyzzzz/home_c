/*Написать только одну функцию, которая сортирует массив по возрастанию. Необходимо реализовать только одну функцию, всю программу составлять не надо.
Строго согласно прототипу. Имя функции и все аргументы должны быть: void sort_array(int size, int a[]).
Всю программу загружать не надо, только одну эту функцию. Можно просто закомментировать текст всей программы, кроме данной функции.
*/

/*#include <stdio.h>
#include <inttypes.h>

#define SIZE 5

int Input(int* arr, int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    return i;
}

void Print(int *arr,int len)
{
    int i;
    for (i = 0; i < len; i++)
        printf("%d ",arr[i]);
    printf("\n");
}

void SwapArr(int *arr,int i,int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
*/
void sort_array(int size, int a[])
{
    int noSwap;
    for (int i = 0; i < size; i++)
    {
        noSwap = 1;
        for (int j = size-1; j > i; j--)
        {
            if(a[j-1]>a[j])
            {
            int temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
            noSwap = 0;
            }
        }
        if(noSwap)
            break;
    }
}
/*
int main(int argc, char **argv)
{
    int arr[SIZE]={0};
    Input(arr,SIZE);
    sort_array(SIZE,arr);
    Print(arr,SIZE);
    return 0;
}
*/












