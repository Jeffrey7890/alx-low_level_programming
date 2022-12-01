#include "main.h"
#include "string.h"

/**
  * _isbin - helper function to chack if char is 0 or 1
  * @c: character to check
  * Return: integer representation of char if success or -1
  */
int _isbin(char c)
{
	if (c == '0' || c == '1')
		return (c - '0');
	return (-1);
}

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: string of binary
  * Return: 0 if char is not 0 or 1 and if b is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	int uint = 0, i = 0, n;

	const char *t;

	if (b == NULL)
		return (0);

	t = b + strlen(b) - 1;

	while (t >= b)
	{
		n = _isbin(*t);

		if (n < 0)
			return (0);
		uint += n * (1 << i);
		i++;
		t--;
	}
	return (uint);
}
