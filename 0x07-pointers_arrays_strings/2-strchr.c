#include "main.h"
#include "stddef.h"
#include "stdio.h"

/**
  * _strchr - located a character in  a string
  *
  * @s: string
  *
  * @c: character to find]
  *
  * Return: pointer to first occurrence of char
  */
char *_strchr(char *s, char c)
{
	char *h = s;

	while (*h != '\0')
	{

		if (*h == c)
			return (h);
		h++;
	}
	if (*h == c)
		return (h);

	return (NULL);
}
