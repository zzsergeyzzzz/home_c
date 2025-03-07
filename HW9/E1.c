/*Ввести c клавиатуры массив из 5 элементов, найти среднее арифметическое всех элементов массива.*/
#include <stdio.h>

int main()
{
    int arr[5];
    for (int i =0; i < 5; i++) { // ввод массива
        scanf ("%d", &arr[i]);
    }
    float avr=0;
    for (int i =0; i < 5; i++) {
        avr+=arr[i];
    }
    printf ("%.3f", avr/5.);
    return 0;
}
