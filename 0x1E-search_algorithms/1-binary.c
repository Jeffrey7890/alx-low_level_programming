#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - impliments the binary search tree
 * @array: array to search through
 * @size: size of the array
 * @value: value to search for
 * Return: return -1 if fail and index if success
 */
int binary_search(int *array, size_t size, int value)
{
	size_t L, R, m, i;

	L = 0;
	R = size - 1;
	while (L <= R)
	{
		m = (L + R) / 2;
		printf("Searching in array: ");
		for (i = L; i < R; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}
	return (-1);
}
