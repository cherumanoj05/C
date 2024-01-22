#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int choice;
    
    printf("### MAIN MENU ###\n\n");
    printf("(1) Student details\n");
    printf("(2)Teacher details.\n");
    printf("(3) Employee details\n");
    printf("(4) Exam details.\n");
    printf("(5) Exit\n");
    
    
    choice = scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Student details are:\n");
        break;
    case 2:
        printf("Teachers details are:\n");
    case 3:
        printf("Employee details are:\n");
    case 4:
        printf("Exam details are:\n");
    case 5:
        printf("Thanks for visiting:\n");
    default:
        printf("Invalid choice");
        break;
    }

    return 0;
}
