#include<stdio.h>

/**
  * main - prints strings to standard error stream
  * Return: zero
  */
int main(void)
{
	const char *first = "and that piece of art is use";

	const char *second = "ful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s%s\n", first, second);
	return (1);
}
