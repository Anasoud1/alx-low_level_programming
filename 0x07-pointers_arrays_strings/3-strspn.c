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
	unsigned int i, j, k, l = 0;
	char del[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				l++;
		for (k = 0; del[k] != '\0'; k++)
			if (s[i] == del[k])
				return (l);
	}
	return (l);
}
