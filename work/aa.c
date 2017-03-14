#include <stdio.h>

int main (void)
{
    int a = 22;
    int b = 20;
    int c = 10;
    
    printf("a =22, b = 20, c = 10\n");
    if(a > b)
    {
        if(a > c)
        {
            printf("a = %d\n",a);
        }
        else
        {
            printf("c = %d\n",c);
        }
    }
    else
    {
        if(b > c)
        {
            printf("b = %d\n", b);
        }
        else
        {
            printf("c = %d\n", c);
        }
    } 

    return 0;
}
