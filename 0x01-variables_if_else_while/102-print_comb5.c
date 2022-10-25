#include <stdio.h>

/**
    * main - pribts number combination with two digits
      * Return: zero
        */
int main(void)
{

	int i, j, k, l;
	for (i = 48; i < 58; i++)
	{
		for (j = i; j < 58; j++)
		{
			for (k = j; k < 58; k++)
			{
				for (l = k; l < 58; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
