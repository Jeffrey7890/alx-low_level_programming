#include "main.h"
#include "string.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello"; 
    char *f;

    f = _strchr(s, '\0');


    if (f != NULL)
    {
        printf("%s\n", f);
    }
    printf("outside _strchr function call\n");
    return (0);
}
