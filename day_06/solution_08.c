#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    (h) If a five-digit number is input through the keyboard, write a program to reverse the number. 
*/

int main(int argc, char const *argv[])
{
    /* code\
    Algorithm to solve:
    1. Take the number as input in num variable;
    2. get once digit by using modulus operaton e.g: num%10 = remainder or the once digit. for example 12345%10 = 5
    3. divide the number by 10 and again %10 by it. 12345/10 = 1234, and 1234%10 = 4
    4. repeat the process ans store the variablees.
    5. multiply place value with face value.

     */
    // printf("%d", 1234%10);

    int num, one, ten, hundred, thousand, ten_thousand, reverse_num;

    // taking the input:
    printf("Enter a 5 digit number: ");
    scanf("%d", &num);
    printf("The number is: %d \n", num);
    one = num%10;
    num = num/10;

    ten = num%10;
    num = num/10;

    hundred = num%10;
    num = num/10;

    thousand = num%10;
    num = num/10;

    ten_thousand = num%10;
    num = num/10;

    reverse_num = 10000*one + 1000*ten + 100*hundred + 10*thousand + 1*ten_thousand;

    printf("When reversed, it became: %d",reverse_num);

    return 0;
}
