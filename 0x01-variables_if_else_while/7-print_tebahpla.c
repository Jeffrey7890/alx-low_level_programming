#include <stdio.h>

/**
  * main - prints the alphabet in resverse
  * Return: zero
  */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
