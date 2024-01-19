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

	if (b >= UINT_MAX / sizeof(result))
		exit(98);

	result = malloc(b);

	if (result == NULL)
	{
		free(result);
		exit(98);
	}

	return (result);
}
