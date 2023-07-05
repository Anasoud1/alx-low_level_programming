#include "main.h"

/**
 * _pow_recursion - function that returns the value of x^y
 * @x: base value
 * @y: power
 *
 * Return: -1 if y < 0 and 1 if y = 0 and pow if its calculated
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	pow = _pow_recursion(x, y - 1) * x;
	return (pow);
}
