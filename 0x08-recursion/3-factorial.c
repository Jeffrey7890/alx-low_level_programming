#include "main.h"

/**
 * factorial - recursively calc the factorial
 *
 * @n: number to get factorial
 *
 * Return: -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1 || n == 0)
		return (1);
	return (n * factorial(n - 1));
}
