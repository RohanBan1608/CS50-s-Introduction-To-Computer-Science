#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long n = get_int("Enter the number:\n");
    long  count = 0;
    do
    {
        n = n/10;
        ++count;

    }
    while(count!=0);

    printf("%li\n", count);
}