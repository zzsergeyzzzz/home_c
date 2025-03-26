/*
Цифры в строке
Написать функцию и программу, демонстрирующую работу данной функции.
Вывести в порядке возрастания цифры, входящие в строку. Цифра - количество.
 */
//#include <stdio.h>

void print_digit(char s[])
{
    int i, r[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    char c;
    while((c=getchar())!='\n')
    {
        if((c>='0')&&(c<='9'))
        s[i++] = c;
    }
    s[i]='\0';
    for (i=0;s[i]!=0;i++)
        r[s[i]-'0']++;
    for (i=0; i<10; i++)
        if (r[i] > 0)
            printf("%d %d\n", i, r[i]);
}
/*int main()
{
    enum {BUFFER_SIZE = 20};
    char s[BUFFER_SIZE];
    print_digit(s);
    return 0;
}
*/





