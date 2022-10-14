#include <stdio.h>

/**
  * main - print all the numbers of base 16 in lowercase
  * Return: zero
  */
int main(void)
{
	int i;

	for (i = 48; i < 103; i++)
	{
		putchar(i);
		if (i == 57)
			i = 97;
	}
	putchar('\n');
	return (0);
}
