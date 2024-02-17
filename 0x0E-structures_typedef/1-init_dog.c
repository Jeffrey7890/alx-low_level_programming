#include "dog.h"
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * init_dog - initialize dog struct
 * @d: dog structure to init
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		write(2, "Ok\n", 3);
		exit(98);
	}
	d->name = NULL;
	d->owner = NULL;

	if (name != NULL)
		d->name = strdup(name);
	d->age = age;
	if (owner != NULL)
		d->owner = strdup(owner);
}
