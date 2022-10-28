#include "main.h"
#include "string.h"

/**
  * _strcat - concatinate string
  * @dest: destination of string
  * @src: soruce of string
  * Return: destinaiton
  */
char *_strcat(char *dest, char *src)
{
	int len_dest = strlen(dest),  i;

	i = len_dest;

	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';

	return (dest);
}
