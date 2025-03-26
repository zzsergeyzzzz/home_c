/*Написать только одну функцию, которая ставит в начало массива все четные элементы, а в конец – все нечетные. Не нарушайте порядок следования чисел между собой.
Строго согласно прототипу:void sort_even_odd(int n, int a[])
*/

/*#include <stdio.h>
#include <inttypes.h>

#define SIZE 20

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
}*/
void sort_even_odd(int n, int a[])
{
    int k;
    for (int i = 0; i < n-1; i++)
    {
       k=0;
        for (int j = i+1; j < n; j++)
        {
            if(a[i]%2)
            {
               if(a[j]%2==0)
               {
                //  SwapArr(a,i,j);
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                    if (k)
                   {
                    for (int z = 0; z < k; z++)
                        {
                            //SwapArr(a,j-z,j-z-1);
                              int temp1 = a[j-z];
                              a[j-z] = a[j-z-1];
                              a[j-z-1] = temp1;


                        }

                   }

                }
                    else k++;
            }
        }
    }
}
/*
int main(int argc, char **argv)
{
    int arr[SIZE]={0};
    Input(arr,SIZE);
    sort_even_odd(SIZE,arr);

    Print(arr,SIZE);
    return 0;
}
*/



