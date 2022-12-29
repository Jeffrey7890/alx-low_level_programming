#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = NULL;
    /* my_dog.age = NULL; */
    my_dog.owner = NULL;
    print_dog(&my_dog);
    print_dog(NULL);
    return (0);
}
