#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * reverse - reverses the string
  * @s: string to check
  * @rev: reverseed string
  * Return: 1 if palidrome and 0 if not
  */
int reverse(char *s, char *rev)
{
	if (*s == '\0')
		return (1);
	if (*s != *rev)
	{
		return (0);
	}
	rev--;
	s++;
	return (reverse(s, rev));
}

/**
  * is_palindrome - wrapper func for reverse
  * @s: string to check
  * Return: 1 if true 0 if not
  */
int is_palindrome(char *s)
{
	if (reverse(s, s + strlen(s) - 1) == 0)
		return (0);
	return (1);
}
