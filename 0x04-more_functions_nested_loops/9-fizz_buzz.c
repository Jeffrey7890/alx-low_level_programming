#include <stdio.h>

/**
  * fizzbuzz - printf fizz buzz
  * @i: integer number to check
  * Return: int
  */
int fizzbuzz(int i)
{
	if (i % 3 == 0 && i % 5 != 0)
	{
		printf("Fizz");
		return (i);
	}
	else if (i % 5 == 0 && i % 3 != 0)
	{
		printf("Buzz");
		return (i);
	}
	else if (i % 5 == 0 && i % 3 == 0)
		printf("FizzBuzz");
	else
		printf("%d", i);
	return (0);
}

/**
  * main - main function
  *
  * Return: zero always
  */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		fizzbuzz(i);
		if (i <= 99)
			printf(" ");
	}
	printf("\n");
	return (0);
}
