#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _isdigit - checks if charbis digit
  * @c: number to check
  * Return: 1 if digit 0 if not
  */
int _isdigit(int c)
{
	return ((48 <= c && 58 >= c));
}

/**
 * main - adds positive numbers from command line
 *
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result, add, i;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		add = _isdigit(*argv[i]);
		if (add == 0)
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
