#include "main.h"

/**
 * _realloc - function that reallocates a memory block
 * @ptr: pointer to reallocate
 * @old_size: old size of memory
 * @new_size: new size of memory
 * Return: pointer or null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *s;

	if (new_size <= old_size)
		return (ptr);
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}
	s = malloc(sizeof(char) * new_size);
	if (s == 0)
		return (NULL);
	if (ptr == 0)
		return (NULL);
	s = ptr;
	free(ptr);
	return (s);
}
