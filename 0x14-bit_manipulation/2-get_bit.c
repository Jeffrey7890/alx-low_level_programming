#include "main.h"
#include <limits.h>


/**
 * get_bit - get bit at index
 * @n: number to get bit
 * @index: index to check
 * Return: -1 on fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit = 1;

	if (n > INT_MAX || index > INT_MAX)
		return (-1);

	n >>= index;

	return (n & bit);
}
