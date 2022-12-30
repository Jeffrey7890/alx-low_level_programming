#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * array_range - creates an array of integers.
  * @min: minimum number start
  * @max: max number end
  * Return: pointer to start of array
  */
int *array_range(int min, int max)
{
	int *arr, size, i, overflow, cnt = 0;

	if (min == 0 && max == 0)
		return (NULL);
	size = (max - min);

	if (size < 0)
		size *= -1;
	size += 1;

	overflow = size * sizeof(int);
	/* avoid overflow */
	if ((size > 0) && (overflow < 0))
		return (NULL);

	arr = malloc(overflow);

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++, cnt++)
	{
		arr[cnt] = i;
	}

	return (arr);
}

