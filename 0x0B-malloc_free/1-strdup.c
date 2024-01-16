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
 * _strdup - returns pointer to duplicated string
 *
 * @str: string to be duplicated
 *
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	char *result;
	size_t size, i;

	if (str == NULL)
		return (NULL);

	size = _sizeOfStr(str);

	result = malloc(size * sizeof(char));
	if (result == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		result[i] = str[i];
		i++;
	}
	return (result);
}
