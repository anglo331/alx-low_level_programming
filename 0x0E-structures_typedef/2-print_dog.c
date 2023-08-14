#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - to print the dog info
 * @d: pointer to the dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
