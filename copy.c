#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char *s = get_string("s:");
    char *t = malloc(strlen(s) + 1);

    if(strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }


    strcpy(t, s);
    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);
    return 0;
}