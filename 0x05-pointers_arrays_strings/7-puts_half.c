

#include "main.h"

/**
  * puts_half - prints half a string
  * @str: strng to half
  */
void puts_half(char *str)
{
	int length = 0, n, i;

	char *start = str;

	while (*start != '\0')
	{
		length++;
		start++;
	}


	if ((length % 2) == 1)
		n = (length - 1) / 2;
	n = length / 2;

	for (i = (n + 1); i < length; i++)
		_putchar(*(str + i));
	_putchar('\n');

}

