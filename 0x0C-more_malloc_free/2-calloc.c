#include "main.h"

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: nember of element
 * @size: size of each element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	unsigned int i;

	s = malloc(size * nmemb);
	if (nmemb <= 0 || size <= 0 || s == NULL)
		exit(0);
	for (i = 0; i < nmemb * size; i++)
		s[i] = 0;
	return (s);
}
