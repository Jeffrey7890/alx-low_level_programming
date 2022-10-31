#include "main.h"
#include "string.h"
#include <stdio.h>
/**
  * _swap - swap two pointer address
  * @a: array
  * @a1: first point
  * @a2: second pointer
  */
void _swap(int *a, int a1, int a2)
{
	int temp = a[a1];

	a[a1] = a[a2];
	a[a2] = temp;
}

/**
  * reverse_array - reverses an array
  * @a: array to reverse
  * @n: length of array
  */
void reverse_array(int *a, int n)
{
	int i;

	n--;
	for (i = 0; i < (n / 2); i++, n--)
	{
		_swap(a, i, n);
	}
}

