#include "main.h"
#include <limits.h>
#include <stdio.h>


/**
 * set_bit - flip a bit to 1 at index
 * @n: number to flip
 * @index: index for flip at
 * Return: -1 if fail and 1 if success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask = 1, n_ = *n;
	
	bitmask <<= index;
	*n |= bitmask;
	if (*n > INT_MAX)
	{
		*n = n_;
		return (-1);
	}
	return (1);
}
