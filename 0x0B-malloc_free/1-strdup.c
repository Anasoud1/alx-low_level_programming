#include "main.h"

/**
 * _strdup - function that returns a pointer to newly allocated space in memory
 *		which contains a copy of the string given
 * @str: string to copy
 * Return: Null or a pointer
 */
char *_strdup(char *str)
{
	char *s;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		len++;
	s = (char *)malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		s[i] = str[i];
	return (s);
}
