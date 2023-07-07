#include "main.h"

/**
 * _strlen - a function that return the length of a string
 * @s: string to check the length
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i, len = 0;

	for (i = *s; i > 0; i = *(++s))
		len++;
	return (len);
}
