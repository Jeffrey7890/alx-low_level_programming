#include "main.h"
#include <string.h>
#include <math.h>
#include <stdio.h>


/**
 * pow2 - my own power tool, math dey ment
 * @x: number to exponent
 * @y: exponent
 * Return: result
 */
int pow2(int x, int y)
{
	int result = 1;

	if (y == 0)
		return (1);

	while (y > 0)
	{
		result *= x;
		y--;
	}
	return (result);
}

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: string of binary
 * Return: number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, len = strlen(b);
	unsigned int i = 0;
	int r = 0;

	while (len > 0)
	{
		r = b[len - 1] - 0x30;
		if (r == 0 || r == 1)
			n += (r) * pow2(2, i);
		else
			return (0);
		
		len--;
		i++;
	}
	return (n);
}
