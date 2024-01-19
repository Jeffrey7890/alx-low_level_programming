#include "main.h"
#include <stdlib.h>
#include <limits.h>


/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of memory
 *
 * Return: pointer to memory or exit with 98
 */
void *malloc_checked(unsigned int b)
{
	void *result;

	if (b == 0)
		exit(98);

	result = malloc(sizeof(result) * b);

	if (result == NULL)
		exit(98);

	return (result);
}
