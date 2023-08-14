#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - to initate dog
 * @d: the the porinter to struct
 * @name: pointer ot the doge name
 * @age: the age of the dog
 * @owner: pointer to the name of the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
