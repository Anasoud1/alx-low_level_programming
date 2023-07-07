#include "main.h"

/**
 * _strncat - function that concatenate two string
 * @dest: first string
 * @src: second string to add to first string
 * @n: bytes used from src
 *
 * Return: dest string after concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0 ; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
