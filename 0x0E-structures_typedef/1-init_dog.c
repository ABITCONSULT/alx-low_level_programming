#include "dog.h"
#include "main.h"

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
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
	return (d);
}
