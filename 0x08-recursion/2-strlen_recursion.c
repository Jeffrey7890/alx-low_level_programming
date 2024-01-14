#include "main.h"


/**
 * _puts_recursion_temp - recursively prints string s
 *
 * @s: string to be printed
 *
 * @n: count of the char
 *
 * Return: void
 */
int _puts_recursion_temp(char *s, int n)
{
	if (*s == '\0')
	{
		return (n);
	}
	return (_puts_recursion_temp(s + 1, n + 1));
}


/**
 * _strlen_recursion - recursively prints string s
 *
 * @s: string to be printed
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int count, n = 0;

	if (*s == '\0')
		return (0);

	count = _puts_recursion_temp(s, n);
	return (count);
}
