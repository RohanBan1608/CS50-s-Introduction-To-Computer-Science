#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long n = get_long("Number: ");
    // Calculate the length
    int i = 0;
    long l = n;
    while (l > 0)
    {
        l = l / 10;
        i++;
    }
    if(i!=13 && i!=15 && i!=16)
    {
        printf("INVALID!");
    }

    long y = n;
    int mod1;
    int sum1 = 0;
    int sum2 = 0;
    int mod2;
    int digit_1;
    int digit_2;
    int total;
    do
    {
        //remove last digit
        mod1 = y%10;
        y /= 10;
        sum1 +=mod1;

        //second last digit
        mod2 = y % 10;
        y = y/10;

        //multiply 2nd last digit by 2
        mod2 = mod2 * 2;
        digit_1 = mod2 % 10;
        digit_2 = mod2 /10;
        sum2 = sum1 + digit_1 + digit_2;
    }
    while(y>0);

    total = sum1 + sum2;
    //Algorithm:
    if(total % 10 != 0)
    {
        printf("INVALID \n");
    }
    //First few
    long start = n;
    do
    {
        start = start /10;
    }
    while(start>100);

    //Card Type
    if(start / 10 == 5 && (start % 10 < 0 && start %10 == 7))
    {
        printf("MASTERCARD\n");
    }
    else if(start /10 == 3 && (start %10 == 4 || start %10 == 7))
    {
        printf("AMEX\n");
    }
    else if(start / 10 == 4)
    {
        printf("VISA\n");
    }
}