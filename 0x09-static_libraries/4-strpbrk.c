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
	int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (NULL);
}
