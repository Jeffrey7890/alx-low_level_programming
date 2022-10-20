#include "main.h"

/**
  * print_numbers - prints all single digit numbers of bs 10
  * Return: zero
  */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}
