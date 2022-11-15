#include <stdio.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 * @d: structure of dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)");

		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)");

		if (d->owner != NULL)
			printf("Owner: %s", d->owner);
		else
			printf("Owner: (nil)");
	}
}
