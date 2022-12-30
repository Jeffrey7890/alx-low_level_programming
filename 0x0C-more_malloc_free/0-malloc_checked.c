#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - a function that allocates memeory using malloc.
  * @b: byte chunk
  * Return: void pointer
  */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(sizeof(b));

	if (ptr == NULL)
	{
		printf("Failed");
		exit(98);
	}
	return (ptr);

}

