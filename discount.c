#include <stdio.h>
#include <cs50.h>

float discount(float regular, int percentage);

int main(void)
{
    float regular = get_float("Regular price:\n");
    int percentage_off = get_int("Percentage off:\n");
    float sale = discount(regular, percentage_off);
    printf("Sale price: %.2f\n", sale);
}


float discount(float price, int percentage)
{    float sale = price * (100 - percentage)/100;
    return sale;
}