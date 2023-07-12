#include "main.h"
/**
 * word_len - locate the index in the end of the first word
 * @str: string to check
 * Return: index
 */
char word_len(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0' && str[i] != ' '; i++)
		len++;
	return (len);
}
/**
 * count_word - count the number of a string
 * @s: string
 * Return: the number of world in the string
 */
int count_word(char *s)
{
	int i, w = 0, len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (s[i] != ' ')
		{
			w++;
			i += word_len(s + i);
		}
	}
	return (w);
}
/**
 * strtow - function  that splits a string into words
 * @str: string
 *
 * Return: null or a double pointer
 */
char **strtow(char *str)
{
	int i, h, k, len, j = 0;
	char **s;

	h = count_word(str);
	if (str == NULL || *str == '\0' || h == 0)
		return (NULL);
	s = (char **)malloc(sizeof(char *) * (h + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < h; i++)
	{
		while (str[j] == ' ')
			j++;
		len = word_len(str + j);
		s[i] = (char *)malloc(sizeof(char) * len + 1);
		if (s[i] == NULL)
		{
			while (i--)
				free(s[i]);
			free(s);
			return (NULL);
		}
		for (k = 0; k < len; k++)
			s[i][k] = str[j++];
		s[i][k] = '\0';
	}
	s[h] = NULL;
	return (s);
}
