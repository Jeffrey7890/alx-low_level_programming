#include "main.h"
#include <limits.h>

#define NULL (void *)0
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask = 1;

	if (n == NULL)
		return (-1);

	if (*n > UINT_MAX || index > UINT_MAX)
		return (-1);


	bitmask <<= index;

	*n &= ~bitmask;

	return (1);
}
