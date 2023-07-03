#include "main.h"

/**
 * _strstr - function that locate a substring
 * @haystack: string to check in
 * @needle: string to search from
 *
 * Return: p if not NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
			if (needle[i] == haystack[j])
			{
				haystack = &haystack[j];
				return (haystack);
			}
	}
	return (NULL);
}
