#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * _strcpy - copy string from src to dest
  * @src: source string
  * @dest: destination string
  * Return: pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i, length = strlen(src);

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);

}
