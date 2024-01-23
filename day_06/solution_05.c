#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    (e) The length & breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the 
    area & perimeter of the rectangle, and the area & circumference of the circle.
*/

int main(int argc, char const *argv[])
{
    /* code */
    // variable declaration
    int length, breadth, area_rec, perimeter_rec;
    float radius, area_circle, circumference;

    printf("Enter the length and breadth of the rectangle separated by space: ");
    scanf("%d %d", &length, &breadth);
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%f", &radius);

    // Calculation
    area_rec = length * breadth;
    perimeter_rec = 2* (length+breadth);

    area_circle = 3.14159265  * radius * radius;
    circumference = 2*3.14159265*radius;

    printf("RECTANGLE:\nArea: %d\nPerimetre: %d\n\n", area_rec, perimeter_rec);
    printf("CIRCLE:\nArea: %.2f\nCircumference: %.2f", area_circle, circumference);

    return 0;
}
