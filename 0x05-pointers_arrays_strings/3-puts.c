#include "main.h"

/**
  * _puts - prints strings to the screen
  * @str: string to print
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
