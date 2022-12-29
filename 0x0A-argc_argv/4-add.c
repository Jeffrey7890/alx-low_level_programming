#include "stdlib.h"
#include "stdio.h"
#include <string.h>

/**
  * todigit - converts a string of char to digit
  * @n: char array of numbers
  * Return: integer
  */
int todigit(char *n)
{
	int number = 0, exp = 10, cnt = strlen(n), i, sign = 1;

	if (n[0] == '-')
	{
		sign *= -1;
		n++;
		cnt--;
	}
	for (i = 0; i < cnt - 1; i++)
	{
		if (n[i] >= 48 && n[i] <= 57)
		{
			number += (n[i] - 48);
			number *= exp;
		}
		else
		{
			printf("Error\n");
			exit(1);
		}
	}
	number += (n[i] - 48);
	number *= sign;
	return (number);
}

/**
  * main - adds all positive args
  * @ac: number of cmp arg
  * @argv: array of cmd args
  * Return: zero
  */
int main(int ac, char **argv)
{
	int result = 0, a, i;

	if (ac < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < ac; i++)
	{
		a = todigit(argv[i]);
		if (a >= 0)
			result += a;
	}
	printf("%d\n", result);
	return (0);
}
