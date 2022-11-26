#include "main.h"
#include "stdio.h"
#include "string.h"

/**
  * _strspn - gets the lenght of prefix substring
  *
  * @s: string
  *
  * @accept: accepted substring
  *
  * Return: length
  */
unsigned int _strspn(char *s, char *accept)
{
	/* char *t = s; */

	unsigned int i = 0, j, k;

	for (j = 0; j < strlen(accept); j++)
	{
		for (k = 0; (k < strlen(s)) && (s[k] != ' '); k++)
		{
			if (s[k] == accept[j])
				i++;
		}
	}
	return (i);
}
