#include "main.h"

/**
 * leet - function to encodes a string
 * @s: string to encodes
 *
 * Return: string after the encodes
 */
char *leet(char *s)
{
	int i, j;
	char l[] = {'A', 'E', 'O', 'T', 'l'};
	int n[] = {4, 3, 0, 7, 1};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < sizeof(l) / sizeof(char); j++)
			if (s[i] == l[j] || s[i] == l[j] + 32)
				s[i] = n[j] + 48;
	}
	return (s);
}
