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

	for (i = 0; src[i] >= '\0'; i++)
	{
		dest[i] = src[i];
		if (i == n)
			break;
	}
	return (dest);
}
