#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    (c) If the marks obtained by a student in five different subjects     are input through the keyboard, find out the aggregate marks 
    and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each 
    subject is 100.
*/

int main(int argc, char const *argv[])
{
    // declaring variables
    int sub1, sub2, sub3, sub4, sub5, aggregate;
    float percent;

    printf("Enter your marks out of 100\n");

    // taking inputs
    printf("Enter the marks obtained in subject 1: ");
    scanf("%d",&sub1);

    printf("Enter the marks obtained in subject 2: ");
    scanf("%d",&sub2);

    printf("Enter the marks obtained in subject 3: ");
    scanf("%d",&sub3);

    printf("Enter the marks obtained in subject 4: ");
    scanf("%d",&sub4);

    printf("Enter the marks obtained in subject 5: ");
    scanf("%d",&sub5);
    
    // calculating total marks and 
    aggregate = sub1 + sub2 + sub3 + sub4 + sub5;
    percent = aggregate/5;

    // Displaying output
    printf("Total marks: %d\nPercentage: %.2f\%",aggregate, percent);

    return 0;
}