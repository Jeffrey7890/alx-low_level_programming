#include <stdio.h>

extern char **environ;

int main(int ac, char **av, char **env)
{
	printf ("env [%p] environ [%p]\n", *av, *environ);
	return (0);
}

