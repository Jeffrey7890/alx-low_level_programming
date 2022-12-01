#include "main.h"

/**
  * flip_bits - returns number of bits need to flip to get from n to m
  * @n: unsigned int
  * @m: get to m
  * Return: number to bits need to flip
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/**
	 * use the ^ operator to get the number of bits
	 *
	 * n      m      n_flip
	 * 1001 ^ 0011 = 1010
	 * the number of live bits in 1010,
	 * gives the number of bits to flip to get m
	 */
	unsigned int n_flip = (n ^ m), count = 0;

	while (n_flip > 0)
	{
		if ((n_flip & 1) == 1) /* check for live bits */
			count++;	/* incriment count */
		n_flip = n_flip >> 1;
	}

	return (count);
}

