#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    string key = argv[1];
    for(int i = 0, n = strlen(argv[1]); i < n ; i++)
    {
        if(!isdigit(argv[1][i]))
        {
          printf("Usage: ./caesar key\n");
          return 1;
        }
    }
    int k = atoi(key);
    if(k < 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    string text = get_string("plaintext:");
    printf("ciphertext:  ");
    for(int j = 0,l = strlen(text); j < l; j++)
    {
        if(isupper(text[j]))
        {
            char c = (((text[j] - 65) + k) % 26) + 65;
            printf("%c", c);
        }
        else if(islower(text[j]))
        {
            char c = (((text[j] - 97) + k) % 26) + 97;
            printf("%c", c);
        }
        else
        {
            printf("%c", text[j]);
        }
    }
    printf("\n");




}






