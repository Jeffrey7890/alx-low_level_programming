#include "main.h"
#include "string.h"
#include <stdio.h>

/**
  * puts_half - prints half a string
  * @str: strng to half
  */
void puts_half(char *str)
{
	int length = strlen(str), n, i;

	/* char *start = str; */

	if ((length % 2) == 1)
		n = (length + 1) / 2;
	else
		n = length / 2;

	for (i = n; i < length; i++)
		_putchar(*(str + i));
	_putchar('\n');

}

