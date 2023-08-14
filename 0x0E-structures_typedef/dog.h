#ifndef dog_h
#define dog_h

/**
 * struct dog - dog object
 *
 * @name: the name of the doge
 * @age: dog age in years
 * @owner: the name of the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);

#endif
