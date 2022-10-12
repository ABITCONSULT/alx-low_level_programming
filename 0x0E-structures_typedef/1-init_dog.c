#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes values for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * @d: pointer to dog
 * Return: returns d
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
