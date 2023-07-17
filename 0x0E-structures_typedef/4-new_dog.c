#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: pointer struct type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	dog_t dog;

	my_dog = &dog;
	if (my_dog == 0)
		return (NULL);
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}
