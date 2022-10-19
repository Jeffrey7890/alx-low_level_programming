#include <stdio.h>

#include "main.h"

/**
  * count_digit - counts the number of didgits in a number
  * @digit: well the number
  * Return: number of digits in a number
  */
int count_digit(int digit)
{
	int rem, mod = 10, i = 1, index = 0;

	while (digit > 0)
	{
		rem = (digit % mod) / i;
		digit = digit - (rem * i);
		mod *= 10;
		i *= 10;
		index++;
	}
	/*printf(":%d: digits",index);*/
	return (index);
}


/**
 * _putdigits - prints digits to the screen using _putchar
 * @digit: digits to print
 */
void _putdigits(int digit)
{
	int rem, mod = 10, i = 1;

	int arr[11], index, digit_cnt;

	if (digit < 0)
		digit *= -1;

	digit_cnt = count_digit(digit) + 1;
	index = digit_cnt;
	for (i = 0; i < 11; i++)
		arr[i] = ' ';
	i = 1;

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

	for (index = 2; index < digit_cnt + 1; index++)
	{
		if (arr[digit_cnt] != ' ')
			_putchar(arr[index]);
	}

}

/**
  * print_to_98 - prints from numbers n to 98
  * @n: starting number
  */
void print_to_98(int n)
{
	int i;

	if (n < 0)
		_putchar('-');
	if (n != 98)
	{
		_putdigits(n);
		_putchar(',');
	}
	if (n < 98)
	{
		for (i = n + 1; i < 98; i++)
		{
			_putchar(' ');
			if (i < 0)
			{

				_putchar('-');
			}
			_putdigits(i);
			_putchar(',');
		}
	}
	else
	{
		for (i = n - 1; i > 98; i--)
		{
			_putchar(' ');
			_putdigits(i);
			_putchar(',');
		}
	}
	_putchar(' ');
	_putdigits(98);
	_putchar('\n');
}
