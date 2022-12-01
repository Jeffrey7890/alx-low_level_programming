#include "main.h"
#include "stdio.h"

/**
  * get_bit - gets the value of bit at a given index
  * @n: base 10 integar
  * @index: index of bit
  * Return: value of bit at index or -1 if an error occured
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int count = 0;

	if (n == 0 && count == index)
		return (n);

	while (n > 0)
	{
		if (count == index)
			return (n & 1);
		n = n >> 1;
		count++;
	}

	return (-1);
}
