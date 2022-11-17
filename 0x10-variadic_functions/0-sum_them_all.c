#include <stdio.h>
#include <stdarg.h>

/**
  * sum_them_all -  function that returns the sum of all its parameters.
  * @n: number
  * @...: abitary args
  * Return: sum of args
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
