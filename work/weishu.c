
#include <stdio.h>

int main(void)
{
    int a = 123;
    
    if(a >= 0 && a < 10)
    {
        printf("weishu: 1\n");
    }
    if(a >= 10 && a < 100)
    {
        printf("weishu: 2\n");
    }
    if ( a >= 100 && a<1000)
    {
        printf("weishu: 3\n");
    }

    if ( a >= 1000 && a<10000)
    {
        printf("weishu: 4\n");
    }
    
    return 0;
}
