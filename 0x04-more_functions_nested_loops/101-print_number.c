#include "main.h"

/**
  * print_number - prints number to screen
  * @n: number to print
  */
void print_number(int n)
{

	unsigned int numb = 0;

	if (n == 0)
		_putchar('0');

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}


	while (n > 0)
	{
		numb += (n % 10);
		n /= 10;
		numb *= 10;
	}
	numb /= 10;

	while (numb > 0)
	{
		_putchar('0' +  (numb % 10));
		numb /= 10;
	}
}
