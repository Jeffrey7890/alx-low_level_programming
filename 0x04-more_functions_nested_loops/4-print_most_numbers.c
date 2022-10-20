#include "main.h"

/**
  * print_most_numbers - prints all numbers of bs 10 except 2 and 4
  * Return: zero
  */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			i++;
		_putchar(i + '0');
	}
	_putchar('\n');
}
