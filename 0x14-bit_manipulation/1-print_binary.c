#include "main.h"
#include "stdio.h"

/**
  * print_binary - prints binary number of base 10
  * @n: base 10 integar
  */
void print_binary(unsigned long int n)
{
	/**
	  * Description:
	  * This task doesn't allow
	  * the use of arrays for buffer
	  * so i used and unsigned long int for a buffer
	  * to reverse the bits
	  */
	unsigned long int buffer = 0;

	int cnt = 0;

	if (n == 0)
		_putchar('0');

	while (n > 0)
	{
		/**
		  * let buffer be 0101 and i want to
		  * add a new bit to buffer
		  * 0101 << 1 = 1010
		  * and 1010 && 0001 = 1011
		  */
		buffer = buffer << 1; /* shifts buffer */
		buffer = buffer | (n & 1); /* adds a new bit to buffer */
		n = n >> 1;
		cnt++;
	}

	while (cnt > 0)
	{
		_putchar('0' + (buffer & 1));
		buffer = buffer >> 1;
		cnt--;
	}
}
