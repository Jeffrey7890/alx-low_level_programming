#include "dog.h"
#include <stdlib.h>
#include <stddef.h>


/**
 * free_dog - frees the dog structure
 * @d: dog data structure
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL && d->owner != NULL)
	{
		free(d->owner);
		free(d);
		return;
	}
	else if (d->name != NULL && d->owner == NULL)
	{
		free(d->name);
		free(d);
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
