#include "main.h"
/**
 * print_to_98 - a function to print until to number 98
 * @n: parametre that need to be the last digit
 */
void print_to_98(int n)
{	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			if (i >= 100)
			{	_putchar((i / 100) + 48);
				_putchar(((i - 100) / 10) + 48);
			}
			else
				_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar((',');
			_putchar(' ');
		}
	}
	else if (n < 98)
	{
		if (n < 0)
		{
			n = (-n);
			for (i = n; i > 0; i--)
			{
				_putchar('-');
				if (i >= 1 && i <= 9)
					_putchar((i % 10) + 48);
				else
				{
					_putchar((i / 10) + 48);
					_putchar((i % 10) + 48);
				}
				_putchar(',');
				_putchar(' ');
			}
		}
		for (i = 0; i < 98; i++)
		{
			if (i >= 0 && i <= 9)
				_putchar((i % 10) + 48);
			else
			{	_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
