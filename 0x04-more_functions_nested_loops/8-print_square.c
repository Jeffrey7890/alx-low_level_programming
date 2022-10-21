#include "main.h"

/**
 * print_square - Prints a square to the screen
 * @n: size of square
 */
void print_square(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}

