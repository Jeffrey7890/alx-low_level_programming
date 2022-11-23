#include "main.h"
#include <stdio.h>


/**
  * print_triangle - prints triangle to the string
  * @size: size of the triangle
  */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = size; i > 0; i--)
		{
			for (j = 0; j < i - 1; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k < (size + 1 - i); k++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
