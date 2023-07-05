#include "main.h"

/**
 * _strlen_recursion - function that return the length of a string
 * @s: string to calculate the length
 *
 * Return: l (length)
 */
int _strlen_recursion(char *s)
{
	int l;

	if (*s == 0)
		return (0);
	l = _strlen_recursion(s + 1);
	l++;
	return (l);
}
