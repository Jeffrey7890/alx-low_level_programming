#include <stdio.h>

/**
  * main - prints name of file
  * @ac: size of args
  * @argv: command line arg
  * Return: zero
  */
int main(int ac __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}

