#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL or a pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, n;
	int len1 = 0, len2 = 0;
	char *s;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	n = len1 + len2 + 1;
	s = (char *)malloc(sizeof(char) * n);
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		s[i + j] = s2[j];
	s[i + j] = '\0';
	return (s);
}
