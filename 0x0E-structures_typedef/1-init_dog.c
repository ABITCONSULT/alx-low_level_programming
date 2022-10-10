#include "dog.h"

/**
 * init_dog - initializes values for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * @d: pointer to dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (dog);
}
