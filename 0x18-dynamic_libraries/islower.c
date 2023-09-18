#include "main.h"

/**
 * _islower - a function to cheks for lowercase
 * @c: charactere to test
 *
 * Return: 1 if a lower case and 0 if upper case
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	return (0);
}
