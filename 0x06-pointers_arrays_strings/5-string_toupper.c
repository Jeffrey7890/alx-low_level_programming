#include "main.h"
#include "string.h"
#include <stdio.h>

#define OFFSET 32
/**
  * _islower - checks if letter is lowercase
  * @c: int to check
  * Return: 1 if upper and 0 if lower
  */
int _islower(int c)
{
	return ((97 <= c && 122 >= c));
}

/**
  * string_toupper - changes string to upper case
  * @a: stiring to change
  * Return: pointer to the string
  */
char *string_toupper(char *a)
{
	int size = 0, i;

	size = strlen(a);

	for (i = 0; i < size; i++)
	{
		if (_islower(a[i]))
		{
			a[i] -= OFFSET;
		}

	}

	return (a);
}
