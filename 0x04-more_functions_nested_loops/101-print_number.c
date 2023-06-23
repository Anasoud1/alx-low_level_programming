#include "main.h"
#include <stdio.h>

/**
 * print_number - function that print a number using _putchar
 *
 * @n: number to print
 */
void print_number(int n)
{
	int i, number;
	int pourcentage = 1;
	int length = 0;

	if (n < 0)
	{
	n = -n;
	_putchar('-');
	}
	if (n >= 0)
	{
		if (n <= 9)
			_putchar(n + 48);
		else
		{
			number = n;
			while (number > 0)
			{
				number = number / 10;
				length++;
			}
			for (i = 1 ; i < length; i++)
				pourcentage = pourcentage * 10;
			_putchar(n / pourcentage + 48);
			for (i = pourcentage / 10; i >= 10 ; i = i / 10)
				_putchar((n / i) % 10 + 48);
			_putchar(n % 10 + 48);
		}
	}
}
