#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    /*
    (a) Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent 
    allowance is 20% of basic salary. Write a program to calculate his gross salary.
    */   

   float basic_sal, hra, allowance, gross_salary;
    printf("Enter your basic salary: ");
    scanf("%f", &basic_sal);

    allowance = 0.40 * basic_sal;
    hra = 0.20 * basic_sal;

    gross_salary = basic_sal + allowance + hra;

    printf("]nYour gross salary is: %.2f", gross_salary);
    return 0;
}
