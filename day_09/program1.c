#include <stdio.h>

// program to print odd integers from 1 to 10

int main(int argc, char const *argv[])
{
    /* code */
    int i = 0;

    for(i;i<=10; i++)
    {
        if(i%2!=0){
            printf("%d\n",i);
        }
    }

    return 0;
}
