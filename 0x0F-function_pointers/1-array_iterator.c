#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - executes functions
 * @array: array to compute
 * @action: action to perform
 * @size: size of array
*/
void array_iterator(int *array, int size, void(*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
