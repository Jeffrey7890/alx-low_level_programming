#include <stdio.h>

/**
  * main - prints number of args
  * @ac: number of args
  * @argv: command line args
  * Return: zero
  */
int main(int ac, char **argv __attribute__((unused)))
{
	printf("%d\n", ac - 1);
	return (0);
}
