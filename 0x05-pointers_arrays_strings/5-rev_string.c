
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * rev_string - print strinf in reverse
  * @s: string
  */
void rev_string(char *s)
{
	int len = strlen(s), i;
	char temp[512];

	strcpy(temp, s);

	for (i = (len - 1); i >= 0; i--)
	{
		*s = temp[i];
		s++;
	}
}

