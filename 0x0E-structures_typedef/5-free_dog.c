#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that frees dogs.
 * @d: structure of dog
 */
void free_dog(dog_t *d)
{
	free(d);
}
