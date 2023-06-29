#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: first string
 * @src: string to copy from
 * @n: number of bytes to copy
 *
 * Return: dest after being copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
