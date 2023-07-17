#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: pointer of struct dog
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		printf("(nill)\n");
	else
	{
		if (d->name == 0)
			printf("Name: (nill)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
