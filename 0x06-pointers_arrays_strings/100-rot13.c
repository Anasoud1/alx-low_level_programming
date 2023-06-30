#include "main.h"

/**
 * rot13 - function that encodes a string using rot 13
 * @s: string to encode
 *
 * Return: s string after encoding
*/
char *rot13(char *s)
{
	int i, j;
	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char l2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 52; j++)
		{
			if (s[i] == l[j])
			{
				s[i] = l2[j];
				break;
			}
		}
	return (s);
}
