#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"


/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	if (name != NULL)
		d->name = strdup(name);
	d->age = age;
	if (owner != NULL)
		d->owner = strdup(owner);

	return (d);
}
