#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char name[20];
    int age;
    char grade;
    double percentage;

    printf("Enter your name: ");
    fgets(name,20,stdin);
    printf("\n");
    printf("%s %d %.2f %c",name, age, percentage, grade);

    printf("Enter your age: ");
    scanf("%d",&age);
    printf("%s %d %.2f %c",name, age, percentage, grade);

    printf("Enter your grade: ");
    scanf("%c",&grade);
    printf("\n");
    printf("%s %d %.2f %c",name, age, percentage, grade);

    printf("Enter your percentage: ");
    scanf("%f",&percentage);
    printf("\n");
    printf("%s %d %.2f %c",name, age, percentage, grade);

    return 0;
}