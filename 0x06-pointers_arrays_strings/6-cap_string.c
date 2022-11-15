#include "main.h"
#include "string.h"

#define OFFSET 32

/**
  * _isseparator - check if char in list of separators
  * @c: character
  * Return: bool
  */
int _isseparator(char c)
{
	char *separators = " \n\t,;.!?\"(){}";

	int i;

	for (i = 0; i < 13; i++)
		if (c == separators[i])
			return (1);
	return (0);
}


/**
  * _islower - checks if char is lowercase
  * @c: char to check
  * Return: bool
  */
int _islower(int c)
{
	return ((97 <= c && 122 >= c));
}
/**
  * cap_string - a function that capitalizes all words of a string
  * @c: string
  * Return: pointer to string
  */
char *cap_string(char *c)
{
	int i, size;

	size = strlen(c);
	if (_islower(c[0]))
		c[0] -= OFFSET;

	for (i = 1; i < size; i++)
	{
		if (_isseparator(c[i]) && _islower(c[i + 1]))
		{
			c[i + 1] -= OFFSET;
			i++;
		}
	}
	return (c);
}


