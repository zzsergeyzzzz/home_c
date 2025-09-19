/*
На вход программе подается беззнаковое 32-битное целое число N.
Требуется изменить значения всех битов старшего байта числа на противоположные и вывести полученное таким образом число.
*/

#include <stdio.h>
#include <stdint.h>

int32_t inverseseniorbite(int32_t n)
{
    return n ^ 0xFF000000;
}

int main ()
{
    int32_t N;
    scanf("%u",&N);
    //printf("%u\n", N);
    a = inverseseniorbite(N);
    printf("%u\n", N);
    /*
    a = inverseseniorbite(N);
    printf("%u\n", N);
    */
    return 0;
}
