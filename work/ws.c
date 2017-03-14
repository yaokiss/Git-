#include <stdio.h>

int main(void)
{
    int a = 112;
    int sum = 1; 
   
    printf("a = %d\n", a);
    a = a / 10;

    if(a)
    {
        sum = sum + 1;
        a = a / 10;
    }
    if(a)
    {
        sum = sum +1;
        a = a / 10;
    }
    if(a)
    {
        sum = sum + 1;
    }
    printf("sum = %d\n", sum);
    return 0;
}
