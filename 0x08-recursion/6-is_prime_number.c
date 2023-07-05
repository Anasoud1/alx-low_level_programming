#include "main.h"
/**
 * is_prime_number - function that return 1 if a prime number and 0 if not
 * @n: number to check
 *
 * Return: 1 if a prime number or 0 if not
 */
int is_prime_number(int n)
{
	int l;

	if (n < 0)
		return (0);
	l = _sqrt_recursion(n);
	if (l == -1)
		return (1);
	else
		return (0);
}
