/*
1. Создать массив из структурного типа данных для хранения температуры.
2. Структура типа: dddd - год 4 цифры mm - месяц 2 символа dd - день 2 цифры hh - часы 2 цифры
mm - минуты 2 цифры temperature - целое число от -99 до 99
3. Создать прототипы (заглушки) функций вывода статистики по каждому месяцу: среднемесячная
температура, минимальная температура в текущем месяце, максимальная температура в текущем
месяце, вывод статистику за год: • среднегодовая температура • минимальная температура •
максимальная температура
4. Все прототипы функций, используемые в приложении, должны быть вынесены в отдельный файл
temp_api.h
5. Тексты функций - в файл temp_api.c.
6. Приложение должно собираться при помощи утилиты make
*/


#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "temp_api.h"

#define SIZE 30

typedef struct sensor {
    uint8_t minute;
    uint8_t hour;
    uint8_t day;
    uint8_t month;
    uint16_t year;
    int8_t t;
} sensor_t;

void AddRecord(sensor_t info[],size_t number,
    uint16_t year,uint8_t month,uint8_t day,uint8_t hour,uint8_t minute,int8_t t)
{
    info[number].year = year;
    info[number].month = month;
    info[number].day = day;
    info[number].hour = hour;
    info[number].minute = minute;
    info[number].t = t;
}

int AddInfo(sensor_t info[])
{
int counter=0;
    AddRecord(info,counter++,2021,9,16,14,28,9);
    AddRecord(info,counter++,2022,9,2,03,24,-9);
    AddRecord(info,counter++,2021,1,7,23,15,8);
    AddRecord(info,counter++,2021,9,5,11,07,1);
    return counter;
}

void print(sensor_t info[],size_t number)
{
    printf("===================================\n");
    for(int i=0;i<number;i++)
        printf("%04d-%02d-%02d-%02d-%02d t=%3d\n",
        info[i].year,
        info[i].month,
        info[i].day,
        info[i].hour,
        info[i].minute,
        info[i].t);
}

int main(void)
{
    sensor_t info[SIZE];
    int number=AddInfo(info);
    print(info,number);
    return 0;
}
