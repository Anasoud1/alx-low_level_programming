#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of a bytes
 * @s: string to search in
 * @accept: string that have charactere to search for
 *
 * Return: s if that matches if not retun NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			s = &s[i];
			return (s);
		}
	}
	return (NULL);
}
