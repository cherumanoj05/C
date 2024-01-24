#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    (l) If the total selling price of 15 items and the total profit earned on them is input through the keyboard, write a program to 
    find the cost price of one item. 
*/

int main(int argc, char const *argv[])
{
    int selling_price_of_15_items, profit_earned, cost_price;

    printf("Enter the selling price of 15 items: ");
    scanf("%d", &selling_price_of_15_items);

    printf("Enter the total profit earned: ");
    scanf("%d", &profit_earned);

    cost_price = (selling_price_of_15_items - profit_earned)/15;

    printf("The cost price is: %d", cost_price);
    return 0;
}