#include "main.h"
/**
 * new_string - function that creat new string
 * @str: string to change
 * Return: pointer
 */
char *new_string(char *str)
{
	int i, w = 0, k = 0, h = 0;
	char *p;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			h++;
		while (str[i] != ' ' && str[i] != '\0')
		{
			w++;
			i++;
		}
	}
	if (w == 0)
		return (NULL);
	p = (char *)malloc(sizeof(char) * (w + h));
	if (p == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			p[k++] = str[i];
		else if (str[i] == ' ' && str[i - 1] != ' ' && i != 0)
			p[k++] = str[i];
	}
	p[k] = '\0';
	return (p);
}

/**
 * strtow - function  that splits a string into words
 * @str: string
 *
 * Return: null or a double pointer
 */
char **strtow(char *str)
{
	int i, h = 0, w = 0, k = 0, m = 0, j = 0;
	char **s, *p;

	p = new_string(str);
	if (str == NULL || *str == '\0' || p == NULL)
		return (NULL);
	for (i = 0; p[i] != '\0' ; i++)
	{
		if (p[i] != ' ')
			h++;
		while (p[i] != ' ' && p[i] != '\0')
			i++;
	}
	s = (char **)malloc(sizeof(char *) * h + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < h; i++)
	{
		w = 0;
		while (p[j] != ' ' && p[j] != '\0')
		{
			w++;
			j++;
		}
		j++;
		s[i] = (char *)malloc(sizeof(char) * w + 1);
		if (s[i] == NULL)
		{
			while (i--)
				free(s[i]);
			free(s);
			return (NULL);
		}
		for (k = 0; k < w; k++)
			s[i][k] = p[m++];
		m++;
		s[i][k] = '\0';
	}
	s[h] = NULL;
	return (s);
}
