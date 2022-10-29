#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int n = get_int("How many test scores?\n");
    int score[n];
    for(int i = 0; i < n; i++)
    {
        score[i] = get_int("Score:");
    }
    printf("Average:%f\n", (score[0] + score[1] + score[2])/3.0);
}