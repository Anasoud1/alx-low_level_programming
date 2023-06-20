#include "main.h"

/**
 *print_sign - a function that reveal the sign of a number
 *@n: number to check
 *
 * Return: 1 if positive or 0 if 0 or -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
