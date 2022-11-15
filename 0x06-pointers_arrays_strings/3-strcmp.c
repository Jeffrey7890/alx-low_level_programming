#include "main.h"
#include "string.h"

/**
  * _strcmp - compares two strings
  * @s1: firsr string
  * @s2: second string
  * Return: int less than, equal, greater than zero
  */
int _strcmp(char *s1, char *s2)
{
	int size, i;

	size = strlen(s1);

	for (i = 0; i < size; i++)
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
