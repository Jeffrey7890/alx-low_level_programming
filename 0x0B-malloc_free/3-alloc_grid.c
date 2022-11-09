#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - a function that returns a pointer to a 2d array of int
  * @width: number of column
  * @height: number of rows
  * Return: pointer to arr if not null
  */
int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	arr = malloc(sizeof(void *) * height);

	if (arr != NULL)
	{
		for (i = 0; i < height; i++)
		{
			arr[i] = malloc(sizeof(int) * width + 1);
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
				arr[i][j] = 0;
		}
		return (arr);
	}
	return (NULL);
}

