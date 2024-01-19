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

	if (str == NULL)
		return (0);

	while (*str != '\0')
	{
		size++;
		str++;
	}
	return (size);
}

/**
 * string_nconcat - returns pointer to duplicated string
 *
 * @s1: string1 to concatinate
 * @s2: string2 to add to string1
 * @n: number of char in s2 to add to s1
 *
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	size_t size, i, j, size1, size2;


	size1 = _sizeOfStr(s1);
	size2 = _sizeOfStr(s2);

	if (n < size2)
		size2 = n;

	size = size1 + size2;

	string = malloc(size * sizeof(char));
	if (string == NULL)
		return (NULL);

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

	string[size] = '\0';

	return (string);
}
