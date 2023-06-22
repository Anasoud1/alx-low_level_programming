#include "main.h"

/**
 * print_diagonal - a function that print a diagonal
 * @n: numnber of \
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i, j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}

