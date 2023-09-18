#include "main.h"

/**
 * _strspn - function that gets the lenght of a prefix substring
 * @s: string to check
 * @accept: string that have charactere to search fo
 *
 * Return: l (lenght)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != s[i]; k++)
			if (accept[k] == '\0')
				return (i);
	}
	return (i);
}
