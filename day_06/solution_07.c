#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    (g) If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. 
    (Hint: Use the modulus operator ‘%’)
*/

int main(int argc, char const *argv[])
{
    // declaring variables
    int num, sum, once, tenths, hundreths, thousands, tenThousands;

    // taking input
    printf("Enter a 5 digit number and I'll return sum of their digits: ");
    scanf("%d", &num);

    once = num%10;
    num = num/10;

    tenths = num%10;
    num = num/10;

    hundreths = num%10;
    num = num/10;

    thousands = num%10;
    num = num/10;

    tenThousands = num%10;
    num = num/10;


    // printf("num = %d \nonce = %d\ntenths = %d\nhundreths = %d\nthousandths = %d\ntenthousandths = %d", num, once, tenths, hundreths, thousands,tenThousands);
    sum = once + tenths + hundreths + thousands + tenThousands;

    // Displaying the sum of the digits;
    printf("The number is: %d\nThe sum of the digits: %d", num, sum);
    return 0;
}