#include "main.h"


/**
  * _strlen - gets the length of a string
  * @s: string
  * Return: integer number
  */
int _strlen(char *s)
{
	int count = 0;

	do {
		count++;
		s++;
	} while (*s != '\0');

	return (count);
}
