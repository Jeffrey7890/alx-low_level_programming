#include "main.h"

/**
  * _putdigit - display ascii representation of digits
  * @digit: number to display
  */
void _putdigit(int digit)
{
	int arr[10], rem, offset = 1, mod = 10, index = 0;
	/**
	 *if (digit < 0)
	 *{
	*	digit *= -1;
	*	_putchar('-');
	*}
	*/
	if (digit == 0)
		_putchar('0');

	while (digit > 0)
	{
		rem = (digit % mod) / offset;
		arr[index] = rem + '0';
		digit = digit - (rem * offset);
		mod *= 10;
		offset *= 10;
		++index;
	}
	index--;
	for (; index > -1; index--)
	{
		_putchar(arr[index]);
	}
}


/**
  * more_numbers - prints 0 - 14 10 times
  */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			_putdigit(i);
		}
		_putchar('\n');
	}
}

