#include "main.h"
#include <stdio.h>

/**
  * print_rev - print string in reverse
  * @s: string to reverse
  */
void print_rev(char *s)
{
	int count = 0;
	char *end_str, *start_str = s;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	end_str = start_str + (count - 1);
	while (end_str >= start_str)
	{
		_putchar(*end_str);
		end_str--;
	}
	_putchar('\n');
}


