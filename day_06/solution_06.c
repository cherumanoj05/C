#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    /*
        (f) Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the 
        contents of C and D. 
    */

int main(int argc, char const *argv[])
{
    /* code */
    // switching with the help of a temp variable
    int C, D, temp;
    printf("Enter the value of C and D separated by space: ");
    scanf("%d %d", &C, &D);

    // Displaying the old values
    printf("The old values: \nC = %d\nD = %d\n\n", C, D);

    temp = C;
    C = D;
    D = temp;

    // Displaying the values after interchanging
    printf("The new values: \nC = %d\nD = %d", C, D);

    return 0;
}
