#include "main.h"

/**
 * print_times_table - a function that a table of number
 * @n: dimension of the table
 */
void print_times_table(int n)
{
	int i, j, num;

	if (n < 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				num = i * j;
				if (j == 0)
					_putchar(num + 48);
				else if (num >= 0 && num <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((num % 10) + 48);
				}
				else if (num >= 10 && num <= 99)
				{
					_putchar(' ');
					_putchar((num / 10) + 48);
					_putchar((num % 10) + 48);
				}
				else if (num >= 100)
				{
					_putchar((num / 100) + 48);
					_putchar(((num / 10) % 10) + 48);
					_putchar((num % 10) + 48);
				}
				if (j == n)
					break;
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
