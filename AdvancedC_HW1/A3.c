/*
 На вход программе подается беззнаковое 32-битное целое число N и натуральное число K (1 ≤ K ≤ 31).
 Требуется взять K младших битов числа N и вывести полученное таким образом число.
*/
#include <stdio.h>
#include <stdint.h>

int mask(uint32_t n, uint32_t k)
{
    return n&(4294967295 >> (32 - k));
}
int main ()
{
    uint32_t N, K, res;

    scanf("%u %u",&N, &K);
    res = mask(N, K);
    printf("%u", res);

    return 0;
}
