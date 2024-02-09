#include "main.h"
#include <stdio.h>


/**
 * print_binary - print binary rep of number
 * @n: number for bin
 */
void print_binary(unsigned long int n)
{
	unsigned long int reverse = 0, bit = 1;
	int bitcnt = 0;

	if (n == 0)
		_putchar('0');

	while (n > 0)
	{
		reverse |=  (n & bit);
		n >>= 1;
		reverse <<= 1;
		bitcnt++;
	}

	while(bitcnt > 0)
	{
		reverse >>= 1;
		_putchar((reverse & bit) + 0x30);
		--bitcnt;
	}

}	
