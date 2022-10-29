#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height:");
    }
    while (n > 8 || n < 1);

    // for loop for rows
    for (int i = 1; i <= n; i++)
    {
        //for loop for coloumns
        for (int j = i; j < n; j++)
        {
            //printing spaces
            printf(" ");
        }
        // for loop for printing a # in every row and coloumn.
        for (int a = 0; a < i; a++)
        {
            printf("#");
        }
        printf("\n");
    }
}
