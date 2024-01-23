#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    (d) Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature 
    into Centigrade degrees.
*/

int main(int argc, char const *argv[])
{
    /* code */
    // variable declaration
    float fahrenheit, celcius;

    // taking input
    printf("Enter the temperature in degre fahrenheit: ");
    scanf("%f", &fahrenheit);

    // calculations
    // To convert temperatures in degrees Fahrenheit to Celsius, subtract 32 and multiply by .5556 (or 5/9).
    celcius = (fahrenheit-32) * 0.5556;
    printf("%.2f degF = %.2f degC",fahrenheit, celcius);

    return 0;
}