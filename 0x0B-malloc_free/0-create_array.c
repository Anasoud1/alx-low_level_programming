#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @size: size of array
 * @c: specific char
 * Return: NULL if size is 0 if not retun a pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;
	
	if (size == 0)
		return (NULL);
	s = (char*)malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
