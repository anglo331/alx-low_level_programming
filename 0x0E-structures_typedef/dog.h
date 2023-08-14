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

typedef struct dog dog_t;

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *);

#endif
