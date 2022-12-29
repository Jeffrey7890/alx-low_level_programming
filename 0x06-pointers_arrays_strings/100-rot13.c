#include "main.h"
#include "string.h"
#include <stdio.h>

#define ROT 13
#define UPPER_CASE_LIMIT 90
#define LOWER_CASE_LIMIT 122

/**
  * isupper_ - checks of char is lowercase
  * @c: character to check
  * Return: bool
  */
int isupper_(char c)
{
	return (65 <= c && 90 >= c);
}

/**
  * _islower - checks if char is upper
  * @c: char
  * Return: bool
  */
int _islower(char c)
{
	return (97 <= c && 122 >= c);
}


/**
  * rot13 - rotates a string
  * @s: string
  * Return: pointer to string
  */
char *rot13(char *s)
{
	int size, i, rot, sum;
	
	size = strlen(s);

	for (i = 0; i < size; i++)
	{
		if (_islower(s[i]))
		{
			sum = s[i] + ROT;
			rot = (s[i] + ROT) % 'z';
			if (sum <= 'z')
				s[i] = rot;
			else
				s[i] = 'a' + rot;
		}
		else if (isupper_(s[i]))
		{
			rot = (s[i] + ROT) % 'Z';
			if (sum <= 'Z')
				s[i] = rot;
			else
				s[i] = 'A' + rot;
		}
		printf("%c\n",s[i]);
	}
	return (s);
}


