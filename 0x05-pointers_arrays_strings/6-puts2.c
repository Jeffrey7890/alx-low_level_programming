#include "main.h"

/**
  * puts2 - prints every other char
  * @str: string to print
  */
void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;

		if ((i % 2) == 0)
			str++;
	}
	_putchar('\n');
}
