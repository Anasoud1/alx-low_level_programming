#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: string to copy in
 * @src: string to copy mermory area from
 * @n: number of byte to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
