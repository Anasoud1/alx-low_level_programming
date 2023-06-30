#include "main.h"

/**
 * print_number - function that print an integer
 * @n: integer to print
 */
void print_number(int n)
{
	int i, number;
	int prc = 1;
	int len = 0;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	number = n;
	for (i = 1; number > 0; i++)
	{
		number = number / 10;
		len++;
	}
	for (i = 1; i < len; i++)
		prc = prc * 10;
	if (n <= 9)
		;
	else if (n >= 10 && n <= 99)
		_putchar(n / 10 + 48);
	else if (n >= 100)
	{
		for (; prc > 1;)
		{
			_putchar((n / prc) % 10 + 48);
			prc = prc / 10;
		}
	}
	_putchar(n % 10 + 48);
}
