#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    (j) In a town, the percentage of men is 52. The percentage of total literacy is 48. If total percentage of literate men is 35 of 
    the total population, write a program to find the total number of illiterate men and women if the population of the town is 
    80,000.
*/

int main(int argc, char const *argv[])
{
    int population = 80000;
    int men_population = 0.52*population;
    int literate_num = 0.48*population;
    int men_literate_population = 0.35*population;

    int women_population = population - men_population;
    int illiterate_num = population - literate_num;

    int men_illiterate_population = men_population - men_literate_population;
    
    printf("%d %d", men_population, women_population);


    
    return 0;
}
