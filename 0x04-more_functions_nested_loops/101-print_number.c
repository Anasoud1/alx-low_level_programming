#include "main.h"

/**
 * print_number - function that print a number using _putchar
 *
 * @n: number to print
 */
void print_number(int n)
{
	int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + 48);
}
