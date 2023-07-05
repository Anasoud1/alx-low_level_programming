#include "main.h"
/**
 * square - function that returns square of a number
 * @n: number to search for the square
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
 *
 * Return: the value of square root
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
