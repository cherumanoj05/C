#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    /*
    (b) The distance between two cities (in km.) is input through the keyboard. Write a program to convert and print this distance 
    in meters, feet, inches and centimeters.
    */

//    declaring variables
    float distance, d_metres, d_feet, d_inches, d_centimetres;

    // taking the user input;
    printf("Enter the distance between two cities in km: ");
    scanf("%f",&distance);

    // converting the distances into meters, feet, inches and centimeters.
    d_metres = distance * 1000;
    d_feet = distance * 3280.84;
    d_inches = distance * 12 * 3280.84;
    d_centimetres = 100*1000 * distance;

    // printing the output
    printf("distance in km is: %.2f km.\n", distance);
    printf("distance in metres is: %.2f metres.\n", d_metres);
    printf("distance in feet is: %.2f feets.\n", d_feet);
    printf("distance in inches is: %.2f inches.\n", d_inches);
    printf("distance in km centimetres: %.2f centimetres.\n", d_centimetres);

    return 0;
}
