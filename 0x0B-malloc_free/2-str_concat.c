#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * str_concat -  concatenates two strings.
  * @s1: first string
  * @s2: second string
  * Return:  point to a newly allocated mem of s1 and s2
  */
char *str_concat(char *s1, char *s2)
{
	char *constring;

	int size, i, s1size, s2size, j;

	if (s1 == NULL)
		return (s2);
	else if (s2 == NULL)
		return (s1);

	s1size = strlen(s1);
	s2size = strlen(s2);
	size = s1size + s2size + 1;

	constring = malloc(sizeof(char) * size);

	if (constring != NULL)
	{
		for (i = 0; i < s1size; i++)
			constring[i] = s1[i];

		for (j = 0; j < s2size; j++, i++)
			constring[i] = s2[j];

		return (constring);
	}
	return (NULL);
}

