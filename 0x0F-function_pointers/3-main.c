#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

typedef int (*op_func_ptr)(int a, int b);
/**
 * main - main function
 * @argc: number of arguments
 * @argv: arguments
 * Return: integar
 */
int main(int argc, char *argv[])
{
	int (*ptr)(int a, int b);

	int value;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ptr = get_op_func(argv[2]);

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}


	if (atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	value = ptr(atoi(argv[1]), atoi(argv[3]));
	printf("value = %d\n", value);

	return (0);
}
