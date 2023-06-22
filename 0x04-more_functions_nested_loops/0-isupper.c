#include "main.h"

/**
 * _isupper - a function that checks for upper case
 * @c: parametre to check
 *
 * Return: 1 if a upper case and 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
