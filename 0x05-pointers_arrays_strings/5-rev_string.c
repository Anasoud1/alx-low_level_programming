#include "main.h"

/**
 * rev_string - a function that reverse a string
 *
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i, len;
	char p;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	for (i = 0; i < len / 2; i++)
	{
		p = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = p;
	}
}
