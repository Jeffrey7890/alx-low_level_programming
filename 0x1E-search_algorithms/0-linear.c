#include <stdio.h>
#include "search_algos.h"


/**
 * linear_search - impliments a linear search on an array of int
 * @array: array to be searched
 * @size: size of the array
 * @value: value to search for
 * Return: -1 on fail and value if found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
