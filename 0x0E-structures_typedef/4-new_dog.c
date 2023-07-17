#include "dog.h"
#include <string.h>
/**
 * new_dog - function that creates a new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: pointer struct type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == 0)
		return (NULL);
	dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = strcpy(dog->name, name);
	dog->age = age;
	dog->owner = strcpy(dog->owner, owner);
	return (dog);
}
