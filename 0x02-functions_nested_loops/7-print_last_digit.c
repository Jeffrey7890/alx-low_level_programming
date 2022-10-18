
#include "main.h"

/**
 * print_last_digit - gets the last digit of a number
 * @c: number to be checked
 * Return: last digit
 */


int print_last_digit(int c)
{
	int t;

	if (c < 0)
		c *= -1;

	t = c % 10;
	_putchar(t + '0');
	return (t);
}
