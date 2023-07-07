#include "main.h"

/**
 * _strcmp - a function that compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if they are the same if not another number
 */

int _strcmp(char *s1, char *s2)
{
	int i, s = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		s = s1[i] - s2[i];
		if (s != 0)
			break;
	}
	return (s);
}
