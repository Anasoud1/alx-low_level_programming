#include "main.h"
/**
 * square - function that returns square of a number
 *@n: number to search for the square
 * @s: a number
 *
 * Return: return the value of the square
 */
int square(int n, int s)
{
	if (s * s == n)
		return (s);
	else if (s * s < n)
		return (square(n, s + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - fucntion that returns the natural square rootof a number
 * @n: number to check
 * Return: the value of square root
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

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
