#include "main.h"
#include <stdio.h>
/**
  * print_number - prints number to screen
  * @nb: number to print
  */
void print_number(int nb)
{
	unsigned int numb = 0, n;

	if (nb == 0)
		_putchar('0');

	if (nb < 0)
	{
		_putchar('-');
		nb *= -1;
	}
	n = nb;


	while (n > 0)
	{
		numb += (n % 10);
		n = (n - (n % 10)) / 10;
		/*if (n >= 10)*/
		if (n == 0)
			break;
		numb *= 10;
	}

	/*numb /= 10;*/

	while (numb > 0)
	{
		_putchar('0' +  (numb % 10));
		numb = (numb - (numb % 10)) / 10;
	}
}
