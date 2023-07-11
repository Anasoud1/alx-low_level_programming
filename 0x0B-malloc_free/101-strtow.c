#include "main.h"

/**
 * strtow - function  that splits a string into words
 * @str: string
 *
 * Return: null or a double pointer
 */
char **strtow(char *str)
{
	int i, l, j = 0, h = 0, m = 0, k = 0;
	char **s;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			h++;
		while (str[i] != ' ')
			i++;
	}
	s = (char **)malloc(sizeof(*s) * (h + 1));
	s[h] = NULL;
	if (s == NULL)
		return (NULL);
	for (i = 0; i < h; i++)
	{
		l = 0;
		while (str[j] == ' ' && str[j] != '\0')
			j++;
		m = j;
		while (str[j] != ' ' && str[j] != '\0')
		{
			l++;
			j++;
		}
		s[i] = (char *)malloc(sizeof(char) * (l + 1));
		if (s[i] == NULL)
		{
			while (i--)
				free(s[i]);
			free(s);
			return (NULL);
		}
		for (k = 0; k < l; k++)
			s[i][k] = str[m++];
		s[i][l] = '\0';
	}
	return (s);
}
