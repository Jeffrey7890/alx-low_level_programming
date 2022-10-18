
#include "main.h"

/**
 * print_alphabet_x10 - prints a-z 10 times
 */
void print_alphabet_x10(void)
{
	int i, cnt;

	for (cnt = 0; cnt < 10; cnt++)
	{
		for (i = 97; i < (97 + 26); i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
