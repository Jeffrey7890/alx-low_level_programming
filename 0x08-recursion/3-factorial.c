#include "main.h"

/**
  * factorial - gets factorial of number n
  * @n: numbrr
  * Return: integer
  */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
