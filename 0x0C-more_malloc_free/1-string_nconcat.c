#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * string_nconcat -  concatenates two strings.
  * @s1: first string
  * @s2: second string
  * @n: number of string concatenated from string 2
  * Return:  point to a newly allocated mem of s1 and s2
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *constring;

	unsigned int size, i, s1size = 0, s2size = 0, j;

	if (s1 != NULL)
		s1size = strlen(s1);

	if (s2 != NULL)
	{
		s2size = strlen(s2);
		printf("lsize of sting 2: %d", s2size);
		if (n < s2size)
			s2size = n;
	}

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

