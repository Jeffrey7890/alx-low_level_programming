#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * min - gets mininim number
 * @a: first number
 * @b: second number
 * Return: min
 */
size_t min(size_t a, size_t b)
{
	return (a < b ? a: b);
}

/**
 * jump_search - implement jump search algorithm
 * @array: array of int to search
 * @n: size of array
 * @value: value to search
 * Return: index of found value, -1 otherwise
 */
int jump_search(int *array, size_t n, int value)
{
	size_t a, b,s;
	size_t x = 0,y = 0;

	a = 0;
	s = sqrt(n);
	b = s;



	while (array[min(b, n) - 1] < value)
	{
	
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		x=a;
		a = b;
		y=a;
		if (a >= n)
		{
			break;
		}
		b += s;
	}

	if (x == 0 && y == 0)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		x = a;
		y = b;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", x, y);
	while (array[x] < value && x < n)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		x += 1;

		if (x == min(b, n))
			return (-1);
	}

	if (array[x] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);

		return (x);
	}
	printf("hdhdhshs");
	return (-1);
}
