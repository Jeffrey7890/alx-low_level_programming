#include <stdio.h>
#include "main.h"

/**
 * _putdigits - prints digits to the screen using _putchar
 * @digit: digits to print
 */
void _putdigits(int digit)
{
	int rem, mod = 10, i = 1;

	int arr[4] = {' ', ' ', ' ', ','}, index = 2;

	if (digit == 0)
	{
		_putchar('0');
	}
	else
	{
		while (digit > 0)
		{
			rem = (digit % mod) / i;
			arr[index] = rem + '0';
			digit = digit - (rem * i);
			mod *= 10;
			i *= 10;
			index--;
		}
	}

	for (index = 0; index < 3; index++)
	{
		if (arr[2] != ' ')
			_putchar(arr[index]);
	}

}

/**
  * times_table - prints 9 times table
  */
void times_table(void)
{
	int i, cnt;

	for (i = 0; i < 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar('0');
	_putchar('\n');
	for (cnt = 1; cnt < 10; cnt++)
	{
		for (i = 0; i < 10; i++)
		{
			_putdigits(i * cnt);
			if (i < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
