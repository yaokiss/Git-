#include <stdio.h>

int main(void)
{
    int h = 13, m = 2;
    
    if(h > 12)
    {
        h = h -12;
        printf("%d : %02d pm\n", h, m);
    }
    else if (h != 12)
    {
        printf("%d : %02d am\n", h, m);
    }
    if(h == 12)
    {
        printf("%d : %02d pm\n", h, m);
    }
    return 0;
}
