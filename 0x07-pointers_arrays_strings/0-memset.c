#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: string to fill
 * @b: charactere to fill with
 * @n: number of charatere to add
 *
 * Return: s string after to fill
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char *p = s;

	for (i = 0; i < n; i++)
		p[i] = b;
	p[i] = '\0';
	return (p);
}
