#include <stdio.h>

/**
  * main - prints all argrv
  * @ac: number of args
  * @argv: cmd line args
  * Return: zero
  */
int main(int ac, char **argv)
{
	while (ac--)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
