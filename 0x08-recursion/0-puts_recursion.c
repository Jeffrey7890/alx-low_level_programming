#include "main.h"

/**
  * _puts_recursion - recursively puts char to stdout
  * @s: string to print
  */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s);
}
