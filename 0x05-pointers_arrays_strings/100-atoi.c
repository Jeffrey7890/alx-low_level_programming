#include "main.h"
#include <stdio.h>

/**
  * _isdigit_ - check if char is digit
  * @c: char to check
  * Return: int
  */
int _isdigit_(char c)
{
	return (c >= '0' && c <= '9');
}

/**
  * _atoi - convert string to integer
  * @s: string to convert
  * Return: converted int
  */
int _atoi(char *s)
{
	char *traverse;

	int i = 1, number = 0;


	traverse = s;
	while (!_isdigit_(*traverse) && *traverse != '\0')
	{
		if (*traverse == '-')
			i *= -1;
		traverse++;
	}
	while (_isdigit_(*traverse))
	{
		number += (*traverse - '0');
		number *= 10;
		traverse++;
	}
	number /= 10;
	number *= i;
	/* printf("digit: %d\n", number);*/

	return (number);
}
