#include <stdio.h>

/**
  * main - prints the alphabet in resverse
  * Return: zero
  */
int main(void)
{
	int lower = 97;

	int upper = 65;

	int cnt = 0;

	while (cnt < 52)
	{
		if (lower <= 122)
		{
			putchar(lower);

		}
		else
		{
			if (upper <= 90)
			{
				putchar(upper);
			}
			upper++;
		}
		cnt++;
		lower++;
	}
	putchar('\n');


	return (0);
}
