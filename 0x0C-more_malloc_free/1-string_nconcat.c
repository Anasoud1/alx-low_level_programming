#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first dtring
 * @s2: second string
 * @n: number of string to add from second string
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len = 0;
	char *s;

	if (s1 == 0)
		s1 = "\0";
	if (s2 == 0)
		s2 = "\0";
	for (i = 0; s1[i] != '\0'; i++)
		len++;
	s = (char *)malloc(sizeof(char) * (len + n + 1));
	if (s == 0)
		exit(1);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
		s[i + j] = s2[j];
	s[i + j] = '\0';
	return (s);
}
