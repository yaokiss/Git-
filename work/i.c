#include <stdio.h>

int main(void)
{
    int year = 2016, month = 1, day = 1;
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
        printf ("sum = %d\n",sum);
    }
    else if (month ==2)
    {
        sum = 31 + day;
        printf ("sum = %d\n",sum); 
    }
    else if (month = 3)
    {
        sum = 31 + 28 + leap + day;
        printf ("sum = %d\n",sum);  
    }
    else if (month = 4)
    {
        sum = 31 + 31 + 28 + leap + day;
        printf ("sum = %d\n",sum);  
    }
    
    else if (month = 5)
        sum = 31 + 31 + 31 + 28 + leap + day;
        printf ("sum = %d\n",sum);  
        
    return 0;
}
