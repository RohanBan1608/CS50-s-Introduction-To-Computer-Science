#include <stdio.h>
#include <cs50.h>

int string_length(string name);

int main(void)
{
    string name = get_string("Enter your name:");
    int i  = string_length(name);
    printf("%i\n", i);

}

int string_length(string name)
{
    int i = 0;
    while(name[i] !='\0')
    {
         i++;
    }
   return i;
}