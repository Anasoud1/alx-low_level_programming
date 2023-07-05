#include "main.h"

/**
 * factorial - function that returns the factoriel of a given number
 * @n: the given number
 *
 * Return: -1 if an error or 1 if a 0 or l when it's calculate factorial
 */
int factorial(int n)
{
	int l;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	l = n * factorial(n - 1);
	return (l);
}
