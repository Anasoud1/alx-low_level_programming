#include "main.h"

/**
 * times_table - a function that prints the 9 tables
 */

void times_table(void)
{
	int i, j, num = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			num = i * j;
			if (j != 0)
			{
				if ((num / 10) != 0)
					_putchar((num / 10) + 48);
				else
					_putchar(' ');
				_putchar((num % 10) + 48);
				if (j == 9)
					break;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((num % 10) + 48);
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
