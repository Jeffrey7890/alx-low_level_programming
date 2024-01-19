#include "main.h"
#include <stdlib.h>



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

	result = malloc(sizeof(result) * b);

	if (result == NULL)
		exit(98);

	return (result);
}
