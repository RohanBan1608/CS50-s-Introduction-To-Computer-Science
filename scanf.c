#include <stdio.h>
#include <stdlib.h>m

int main(void)
{
    char *s = malloc(4);
    printf("s: ");
    scanf("%s", s);
    printf("s is: %s\n", s);
}