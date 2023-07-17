#include "dog.h"

/**
 * init_dog - function that initialize struct dog
 * @d: name of struct dog
 * @name: element 1
 * @age: element 2
 * @owner: element 3
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
