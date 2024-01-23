#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    (i) If a four-digit number is input through the keyboard, write a program to obtain the sum of the first and last digit of this number.
*/

int main(int argc, char const *argv[])
{
    /* code */
    int num, first_digit, last_digit, sum;

    printf("Enter a four-digit number: ");
    scanf("%d",&num);

    printf("The number is %d\n", num);
    first_digit = num%10;
    num = num/1000;
    last_digit = num%10;
    sum = first_digit+last_digit;
    printf("The sum of the first digit and the last digit is %d ", sum);
    return 0;
}
