#include <stdio.h>
#include <cs50.h>

void swap(int a, int b);

int main(void)
{
    int a = get_int("a:");
    int b = get_int("b:");
    swap(a,b);
}

void swap(int a, int b)
{
    printf("x is: %i, y is : %i\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("x is: %i, y is : %i\n", a, b);
}