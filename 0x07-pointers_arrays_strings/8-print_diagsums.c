#include <stdio.h>
#include "main.h"

/**
  * print_diagsums - sums a square matrix diagona
  * @a: matrix
  * @size: sizre of the matrix
  */
void print_diagsums(int *a, int size)
{


	int sum = 0, sum2 = 0, i = 0, j = 0, *ptr = a;

	for (i = 0; i < size; i++)
	{
		sum += ptr[i];
		ptr += size;
	}
	ptr = a;


	for (j = size - 1; j > -1; j--)
	{

		sum2 += ptr[j];
		ptr += size;
	}

	printf("%d, %d\n", sum, sum2);

}
