#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - sums all numbers in function
 * @n: number of integere
 * Return: sum total
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0, sum = 0;


	va_start(ap, n);

	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}

	va_end(ap);

	return (sum);
}
