#include "main.h"

/**
 * times_table - a function that prints the 9 tables
 */

void times_table(void)
{
	int i, j, num = 0;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 10; j++)
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
		_putchar('\n');
	}
}
