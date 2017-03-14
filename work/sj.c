#include <stdio.h>

int main(void)
{
    int hour = 11, min = 13;

    if(hour > 12 )
    {
        hour = hour - 12;
        printf("%d : %02d pm\n", hour, min);
    }
    else if(hour != 12)
    {
        printf("%d : %02d am\n", hour, min);
    }
    if(hour == 12)
    {
        printf("%d : %02d pm\n", hour, min);
    }

    return 0;
}
