#include "main.h"
#include <stdio.h>

/**
  * _strlen_recursion_wrapp - recursion with count n
  * @s: string to count
  * @n: number of char
  */
void _strlen_recursion_wrapp(char *s, int *n)
{
	if (*s == '\0')
		return;
	s++;
	*n = *n + 1;

	_strlen_recursion_wrapp(s, n);
}

/**
  * _strlen_recursion - recursively count char in str;
  * @s: string to count
  * Return: length of string
  */
int _strlen_recursion(char *s)
{
	int a = 0;

	_strlen_recursion_wrapp(s, &a);
	return (a);
}
