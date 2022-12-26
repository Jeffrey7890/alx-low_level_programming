#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
  * _strstr - search string for substring
  * @haystack: string to search
  * @needle: substring to search
  * Return: ptr to found string
  */
char *_strstr(char *haystack, char *needle)
{

	char *ptr, *h, *n;


	h = haystack;
	n = needle;




	while ((*h != '\0') && (*h != *n))
		h++;



	if (*h == '\0')
		return (NULL);
	ptr = h;
	while (*ptr == *h)
	{
		ptr = h;
		h++;
	}

	h--;
	while (*n != '\0')
	{
		if (*n != *h)
			return (NULL);
		n++;
		h++;
	}
	return (ptr);
}
