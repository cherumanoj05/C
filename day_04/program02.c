#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student{
    char name[30];
    char major[30];
    int age;
    char DOB[10];
    int roll_no;
    char college[20];

};


int main(int argc, char const *argv[])
{
    struct Student aastha;
    // aastha.name = "AasthaRawat";
    // aastha.major = "Java";
    aastha.age = 20;
    // aastha.DOB = "25/03/2004";
    aastha.roll_no = 1;
    // aastha.college = "AmityUniversity"; is wrong

    strcpy(aastha.name, "Aastha Rawat");
    strcpy(aastha.major, "Java");
    strcpy(aastha.DOB, "03/25/2004");
    strcpy(aastha.college, "AmityUniversity");

    printf("%s", aastha.name);
    return 0;

}