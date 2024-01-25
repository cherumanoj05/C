#include <stdio.h>

// printing multipliers of 3 or 5 from 1 to 20 i.e: 3,5,6,9,10,12,15,18

int main(int argc, char const *argv[])
{
    /* code */
    int i = 0,sum =0;
    for(i;i<100;i++ ){
        if(i%3==0 || i%5 == 0){
            sum += i;
            printf("i = %d, sum = %d \n",i, sum);
        }
    }
    printf("%d",sum);
    return 0;
}
