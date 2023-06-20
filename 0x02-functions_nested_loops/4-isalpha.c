#include "main.h"
/**
 * _isalpha - a function to cheks for alphabet charactere & number
 *@c: charatere to test
 * Return: 1 if a letter or number and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}
