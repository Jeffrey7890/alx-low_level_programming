#include "main.h"

/**
 * _print_rev_recursion2 - recursively reverses a string
 *
 * @s: string to be printed
 * Return: void
 */
char *_print_rev_recursion2(char *s)
{
	if (*s == '\0')
	{
		return (s - 1);
	}
	return (_print_rev_recursion2(s + 1));

}

/**
 * is_palindrome_recursive - helper recursive function
 *
 * @start: start of the string
 * @end: end of the string
 *
 * Return: 1 if true or 0 if false
 */
int is_palindrome_recursive(char *start, char *end)
{
	if (*start != *end)
		return (0);
	if (*start == '\0')
		return (1);

	return (is_palindrome_recursive(start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string to check
 *
 * Return: bool
 */
int is_palindrome(char *s)
{
	char *end = _print_rev_recursion2(s);

	return (is_palindrome_recursive(s, end));
}
