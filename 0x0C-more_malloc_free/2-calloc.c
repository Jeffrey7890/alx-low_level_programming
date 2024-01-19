#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>


/**
 * _calloc - allocates array memory using malloc
 *
 * @nmemb: number of member in array
 * @size: size of memory
 *
 * Return: pointer to memory or NULL if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char *result;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (nmemb >= INT_MAX / size)
		return (NULL);

	result = malloc(nmemb * size);

	if (result == NULL)
	{
		free(result);
		return (NULL);
	}

	i = 0;
	while (i < nmemb)
	{
		result[i] = 0;
		i++;
	}

	return (result);
}
