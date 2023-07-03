#include "main.h"

/**
 * _strchr - function that locate a character string
 * @s: string to search on
 * @c: character searching for
 *
 * Return: p (pointer) or NULL if not found
*/
char *_strchr(char *s, char c)
{
	int i;
	char *p;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s[i]);
		}
	}
	s[i] = '\0';
	return (NULL);
}
