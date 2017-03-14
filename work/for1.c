#include <stdio.h>

int main (void)
{
    int i = 0;
    int sum = 0;
    for(i = 0; i < 10; i += 2)
    {
        printf("i = %d\n",i);
        sum = sum + i;
    }
    printf("after for ...!\n");
    printf("after for i = %d\n",i);
    printf("sum = %d\n",sum);
    return 0;
}
