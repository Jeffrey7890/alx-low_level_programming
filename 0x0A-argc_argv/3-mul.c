#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - multiplies 2 numbers
 *
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);

		printf("%d\n", x * y);
	}
	else
		printf("Error\n");

	return (0);
}
