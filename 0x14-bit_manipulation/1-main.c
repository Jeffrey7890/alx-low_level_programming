#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(ULONG_MAX);
    printf(" ULONG_MAX: %lu\n", ULONG_MAX);
    print_binary(LONG_MAX);
    printf(" LONG_MAX: %lu\n", LONG_MAX);
    print_binary(1024);
    printf("\n");

    print_binary(98);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
