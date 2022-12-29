#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * _calloc -  function that allocates memory for an array, using malloc
  * @nmemb: an array of nmemb elements
  * @size: size bytes each
  * Return: void pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb <= 0 || size < = 0)
		return (NULL);

	void *ptr = malloc(nmemb * size);
	
	int i;

	if (ptr == NULL)
		return (NULL)

	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
