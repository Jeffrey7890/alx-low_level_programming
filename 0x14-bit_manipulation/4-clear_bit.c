#include "main.h"

/**
  * clear_bit - clears the value of a bit to 1 at a given index
  * @n: pointer to int
  * @index: index
  * Return: 1 if worked and -1 if failed
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* gets the number of bits in an unsigned long int */
	unsigned int size = (1 << sizeof(*n)) / sizeof(int);

	/* index should not be greater than number of bits */
	if (index < size)
	{
		*n = (*n & ~(1 << index));
		return (1);
	}
	return (-1);
}
