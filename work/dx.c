#include <stdio.h>


int main(void){
    int a = 1223;
    int b = 512;
    int c = 4213;

    printf("a = %d, b = %d, c =%d\n", a, b, c);

    if(a > b){                //a > b = true
        if(a > c){            //max = a
            printf("a max = %d\n",a);
        }
        else{                  //max = c
            printf("a-c max = %d\n", c);
        }
    }
    else{                  //a < b = true
        if(b > c){       // max = b
            printf("b max = %d\n",b);
        }
        else{            //max = c
            printf("b-c mac = %d\n",c);
        }
    }

    return 0;
}
