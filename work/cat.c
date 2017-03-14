#include <stdio.h> 

int main(void)
{
    int c ;
    c = getchar();
    
    while (!(c == EOF))
    {
        printf("char = %c\t c(10) = %d\n", c, c);
        c  = getchar();
    }
    printf("\n");
    return 0;

}





