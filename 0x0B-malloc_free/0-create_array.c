#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars
  * @size: size of array
  * @c: initializing char
  * Return: pointer to the array
  */
char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int i = 0;

	if (size <= 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
