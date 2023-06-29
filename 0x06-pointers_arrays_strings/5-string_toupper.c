#include "main.h"

/**
 * string_toupper- a function that changes all lower case to upper case
 * @s: string to change to upper case
 *
 * Return: s string after change
*/
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}
	return (s);
}
