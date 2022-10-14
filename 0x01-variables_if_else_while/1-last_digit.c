#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - print last digits
  * Return: zero
  */
int main(void)
{
	int n, mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mod = n % 10;
	printf("Last digit of %d", n);

	if (mod > 5)
		printf("is %d and is greater than 5\n", mod);
	else if (mod == 0)
		printf("is %d and is 0\n", mod);
	else if (mod < 6)
		printf("is %d and is less than 6 and not 0\n", mod);
	return (0);
}
