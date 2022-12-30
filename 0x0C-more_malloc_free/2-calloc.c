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
	int overflow;

	void *ptr;

	overflow = nmemb * size;

	/* Avoid integer overflow */
	if (overflow < 0)
		return (NULL);

	ptr = malloc(overflow);

	if (ptr == NULL)
		return (NULL);
	bzero(ptr, nmemb * size);
	return (ptr);
}
