#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate mem for array init to zero
 * @nmemb: number of members
 * @size: size of each members
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char *result, *temp;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = malloc(nmemb);

	if (result == NULL)
		return (NULL);

	temp = result;

	while (i < nmemb)
	{
		temp = malloc(size);
		if (temp == NULL)
			return (NULL);
		*temp = 0;
		i++;
		temp++;
	}
	return (result);
}
