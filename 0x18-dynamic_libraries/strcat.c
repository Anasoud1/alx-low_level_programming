#include "main.h"

/**
 * _strcat - function that concatenate two string
 *  @dest: first string
 *
 * @src: second string to copy and add in dest
 *
 * Return: dest string after concatenation
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0' ; j++)
		dest[i + j] = src[j];
	return (dest);
}
