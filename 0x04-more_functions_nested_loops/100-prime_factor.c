#include <stdio.h>
#include <math.h>

/**
  * main - prints largest prime factor of number
  * Return: zero
  */
int main(void)
{
	long int n = 612852475143;

	int i;

	while (n % 2 == 0)
	{
		/* printf("%d ", 2); */
		n /= 2;
	}

	for (i = 3; i < sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			/* printf("%d ", i);*/
			n /= i;
		}
	}

	if (n > 2)
		printf("%ld\n", n);
	return (0);
}

