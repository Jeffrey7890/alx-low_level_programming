#include "main.h"

/**
 * _pow_recursion - recursively calc the power of x to y
 *
 * @x: number to be raised
 * @y: number power
 *
 * Return: -1 if n < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
