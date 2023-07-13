#include "main.h"

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: nember of element
 * @size: size of each element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	s = malloc(size * (nmemb + 1));
	if (nmemb == 0 || size == 0 || size == 0)
		exit(1);
	for (i = 0; i < nmemb * size; i++)
		s[i] = 0;
	s[i] = '\0';
	return (s);
}
