#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at a given index
  * @n: pointer to int
  * @index: index
  * Return: 1 if worked and -1 if failed
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = (1 << sizeof(*n)) / sizeof(int);

	if (index < size)
	{
		*n = (*n | (1 << index));
		return (1);
	}
	return (-1);
}
