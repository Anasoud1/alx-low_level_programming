#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: string to capitalize
 *
 * Return: string after capitalize
 */
char *cap_string(char *s)
{
	int i, j;
	char del[] = " \t\n,;.!?\"(){}";
	char *p = s;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == del[j])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
					s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
