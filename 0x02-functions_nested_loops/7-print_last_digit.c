#include "main.h"

/**
 * print_last_digit - function that print the last digit
 * @n: the number that we will extrat the last number
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = (-n);
	last_digit = n % 10;
	_putchar(last_digit + 48);
	return (last_digit);
}
