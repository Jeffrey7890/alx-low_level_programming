#include "main.h"
#include <string.h>
#include <stdio.h>

/**
  * print_str - prints string with number
  * @s: string to print
  * @n: length of string
  */
void print_str(char *s, int n)
{
	if (n < 0)
		return;
	_putchar(s[n]);
	n--;
	print_str(s, n);
}

/**
  * _print_rev_recursion - prints reverse of string
  * @s: string to reverse
  */
void _print_rev_recursion(char *s)
{
	int n = strlen(s);

	print_str(s, n);
}
