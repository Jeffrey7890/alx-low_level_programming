#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array of elements to cmp
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: the index of the first element for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
