#include "main.h"
/**
 * _strlen_recursion - function that return the length of a string
 * @s: string to calculate the length
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

/**
 * comparator - function that comparate two string
 * @first: first string
 * @last: last string
 * @s: string
 * Return: 1 if a palindrom or 0 otherwise
 */
int comparator(char *s, int first, int last)
{
	if (*(s + first) == *(s + last))
	{
		if (first == last || first == last + 1)
			return (1);
		return (comparator(s, first + 1, last - 1));
	}
	else
		return (0);
}

/**
 * is_palindrome - function that return 1 if a apalindrom and 0 if not
 * @s: string
 * Return: 1 if its a palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	int l;

	if (*s == '\0')
		return (0);
	l = _strlen_recursion(s);
	return (comparator(s, 0, l - 1));
}
