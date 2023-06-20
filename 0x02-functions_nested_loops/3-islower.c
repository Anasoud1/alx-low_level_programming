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
	else if (c <= 90 && c >= 65)
		return (0);
}
