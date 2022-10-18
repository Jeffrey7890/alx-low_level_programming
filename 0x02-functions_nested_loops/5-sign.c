
#include "main.h"

/**
 * print_sign - returns thr sign of numberd
 * @c: number to check
 * Return: 1 if positive, -1 if negative and 0 if zero
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
