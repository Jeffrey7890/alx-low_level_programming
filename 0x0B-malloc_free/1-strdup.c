#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
  * _strdup - copy a string dynaically
  * @str: string to copy
  * Return: pointer to the sting
  */
char *_strdup(char *str)
{
	char *cstr;

	int i, size;

	if (str == NULL)
		return (NULL);

	size = strlen(str);

	cstr = malloc(sizeof(char) * size + 1);

	if (cstr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			cstr[i] = str[i];
		}
		return (cstr);
	}
	return (NULL);
}

