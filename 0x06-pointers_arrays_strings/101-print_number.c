#include "main.h"

/**
 * print_number - function that print an integer
 * @n: integer to print
 */
void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		number = -n;
		_putchar('-');
	}
	if ((number / 10) != 0)
		print_number(number / 10);
	_putchar(n % 10 + 48);
}
