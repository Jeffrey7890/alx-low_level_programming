#include "main.h"

/**
  * print_line - prints _ to the screen
  * @n: number of _ to print
  */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
