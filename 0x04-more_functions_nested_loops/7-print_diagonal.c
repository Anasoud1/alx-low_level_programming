#include "main.h"

/**
 * print_diagonal - a function that print a diagonal
 * @n: numnber of \
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i, j++)
				_putchar(' ');
			_putchar(98);
			_putchar('\n');
		}
	}
}

