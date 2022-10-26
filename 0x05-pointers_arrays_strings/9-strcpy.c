#include "main.h"
#include <stdio.h>

/**
  * _strcpy - copy string from src to dest
  * @src: source string
  * @dest: destination string
  * Return: pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	do {
		*dest = *src;

		src++;
		dest++;
	} while (*src != '\0');

	dest = ptr;

	return (dest);

}
