#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
  * _strstr - finds a substring in a string
  * @haystack: string to be searched through
  * @needle: string to search for
  * Return: pointer to found string
  */
char *_strstr(char *haystack, char *needle)
{
	char *ptr, *h, *n;

	if (*haystack == '\0')
		return (NULL);
	if (*needle == '\0')
		return (haystack);

	h = haystack;
	n = needle;

	while (*h != '\0')
	{
		if (*n == *h)
		{
			ptr = h;

			while (*n == *h)
			{
				h++;
				n++;
			}
			if (*n == '\0')
				return (ptr);
			n = needle;
		}


		h++;
	}
	return (NULL);
}

