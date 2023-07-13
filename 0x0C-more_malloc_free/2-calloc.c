#include "main.h"

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: nember of element
 * @size: size of each element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *s;
	unsigned int i;

	s = malloc(size * nmemb);
	if (nmemb <= 0 || size <= 0 || s == 0)
		exit(1);
	for (i = 0; i < nmemb * size; i++)
		s[i] = 0;
	return (s);
}
