#include "main.h"
#include <limits.h>

/**
 * malloc_checked - function that allocates memory
 * @b: size to allocate
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);
	if (s == NULL || b == INT_MAX)
		exit(98);
	return (s);
}
