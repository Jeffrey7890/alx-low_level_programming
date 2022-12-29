#include "stdio.h"
#include "stdlib.h"

/**
  * getchange - comply to betty style of < 40 per func
  * @n: amount of money
  * Return: change
  */
int getchange(int n)
{
	int change = 0;

	while (n != 0)
	{
		if (n >= 25)
		{
			n -= 25;
			change += 1;
		}
		else if (n < 25 && n >= 10)
		{
			n -= 10;
			change += 1;
		}
		else if (n < 10 && n >= 5)
		{
			n -= 5;
			change += 1;
		}
		else if (n < 5 && n >= 2)
		{
			n -= 2;
			change += 1;
		}
		else
		{
			n -= 1;
			change += 1;
		}
	}
	return (change);
}
/**
  * main - prints min numb of coins to make change
  * @ac: number of args
  * @argv: cmd line args
  * Return: 1 if faiiled and zero on success
  */
int main(int ac, char **argv)
{
	int n, change;

	if (ac == 1)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	change = getchange(n);
	printf("%d\n", change);
	return (0);
}
