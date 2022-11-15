#include "main.h"
#include "string.h"

/**
  * leet - a function that encodes a string into 1337.
  * @s: string
  * Return: pointer to string
  */
char *leet(char *s)
{
	int size, i;

	size = strlen(s);

	for (i = 0; i < size; i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
			s[i] = '4';
		else if (s[i] == 'e' || s[i] == 'E')
			s[i] = '3';
		else if (s[i] == 'o' || s[i] == 'O')
			s[i] = '0';
		else if (s[i] == 't' || s[i] == 'T')
			s[i] = '7';
		else if (s[i] == 'l' || s[i] == 'L')
			s[i] = '1';
	}
	return (s);
}
