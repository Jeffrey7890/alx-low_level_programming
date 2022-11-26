#include "main.h"

/**
  * _memset - fills the first n bytes of the memory
  * @s: memory area to update
  * @b: constant byte
  * @n: size of memory to update
  * Return: pointer to memmory
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}


