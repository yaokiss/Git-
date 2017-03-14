#include <stdio.h>

int main(void)
{
    int year = 2020, month = 12, day = 20;
    int sum = 0;
    int leap = 0;

    if (((year % 4 ==0) &&(year % 100 != 0))||(year % 400 == 0))
    {
        printf("leap year ...!\n");
        leap = 1;
    }
    else
    {
        printf("not leap year ...!\n");
    }
    if (month ==1)
    {
        sum = day;
    }
    if (month ==2)
    {
        sum = 31 + day;
    }
    if (month = 3)
    {
        sum = 31 + 28 + leap + day;
    }
    if (month = 4)
    {
        sum = 31 + 28 + 31 + leap + day;
    }
    if (month = 5)
    {
        sum = 31 + 28 + 31 + 30 + leap + day;
    }
    if (month = 6)
    {
        sum = 31 + 28 + 31 + 30 + 31 + leap + day;
    }
    if (month = 7)
    {
        sum = 31 + 28 + 31 + 30 + 31 + 30 + leap + day;
    }
    if (month = 8)
    {
        sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + leap + day;
    }
    if (month = 9)
    {
        sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + leap + day;
    }
    if (month = 10)
    {
        sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + leap + day;
    }
    if (month = 11)
    {
        sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31+ leap + day;
    }
    if (month = 12)
    {
        sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 +leap + day;
    }
    printf("sum = %d\n",sum);
    return 0;
}
