#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Size:\n");

    }
    while(n<1);

    // Loop for number of rows
    for(int i = 0; i < n; i++)
    {
        //Loop for coloumns
        for(int j = 0; j < n; j++)
        {
            printf("#");
        }
    // Move to next line
    printf("\n");
    }

}