#include "main.h"
#include <aio.h>
#include <stdlib.h>

/**
 * _sizeOfStr - gets size of string
 *
 * @str: string to get size of
 *
 * Return: size of string
 */
size_t _sizeOfStr(char *str)
{
	size_t size = 0;

	while (*str != '\0')
	{
		size++;
		str++;
	}
	return (size);
}

/**
 * str_concat - returns pointer to duplicated string
 *
 * @s1: string1 to concatinate
 * @s2: string2 to add to string1
 *
 * Return: pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	char *string;
	size_t size, i, j, size1, size2;

	if (s1 == NULL && s2 == NULL)
		return ("");

	if (s1 == NULL)
		return (s2);
	if (s2 == NULL)
		return (s1);

	size1 = _sizeOfStr(s1);
	size2 = _sizeOfStr(s2);

	size = size1 + size2;

	string = malloc(size * sizeof(char));

	while (i < size1)
	{
		string[i] = s1[i];
		i++;
	}

	j = 0;
	while (i < size)
	{
		string[i] = s2[j];
		j++;
		i++;
	}

	return (string);
}
