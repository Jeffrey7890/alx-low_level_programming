#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * argstostr -  a function that concatenates all the args
  * @ac: number of arg
  * @av: args
  */
char *argstostr(int ac, char **av)
{
	char *c;

	int i, j, size, sum;

	for (i = 1; i < ac; i++)
	{
		sum+= strlen(av[i]);
	}

	c = malloc(sizeof(char) * sum + 1);

	printf("%d, %s\n", ac, av[1]);
	return (c);
}

