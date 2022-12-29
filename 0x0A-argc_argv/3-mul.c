#include "stdio.h"
#include <string.h>

/**
  * todigit - converts a string of char to digit
  * @n: char array of numbers
  * Return: integer
  */
int todigit(char *n)
{
	int number = 0, exp = 10, cnt = strlen(n), i;

	for (i = 0; i < cnt - 1; i++)
	{
		if (n[i] >= 48 && n[i] <= 57)
		{
			number += (n[i] - 48);
			number *= exp;
		}
		else
			return (0);
	}
	number += (n[i] - 48);
	return (number);
}

/**
  * main - multiply to args
  * @ac: number of cmp arg
  * @argv: array of cmd args
  * Return: zero
  */
int main(int ac, char **argv)
{
	int result, a, b;

	if (ac != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = todigit(argv[1]);
	b = todigit(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
