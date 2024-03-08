#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>


/**
 * main - performs simple operations.
 * @argc: number of argument must be 4
 * @argv: argument vector
 * Return: 0 in success and diff error on fail
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *op;

	int (*result)(int, int);

	if (argc != 4)
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	result = get_op_func(op);
	if (result == NULL)
	{
		fprintf(stderr, "Error\n");
		exit(99);
	}
	printf("%d\n", result(a, b));
	return (0);
}
