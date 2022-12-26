#include "main.h"
#include "stddef.h"
#include "stdio.h"
#include "string.h"

/**
  * _strpbrk - searches for any of a set of bytes
  *
  * @s: string
  *
  * @accept: accepted substring
  *
  * Return: pointer to byte in s
  */
char *_strpbrk(char *s, char *accept)
{
	char *t = accept;

	while (*s != '\0')
	{
		while (*t != '\0')
		{
			if (*t == *s)
				return (s);
			t++;
		}
		t = accept;
		s++;
	}
	return (NULL);
}
