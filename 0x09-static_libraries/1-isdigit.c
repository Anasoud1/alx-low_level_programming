#include "main.h"

/**
 * _isdigit - a function that cheks for a digit
 * @c: parametre to check
 *
 * Return: 1 if a number and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
