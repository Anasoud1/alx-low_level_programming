#include "main.h"

/**
 * print_line - a function that print line
 * @n: parametre that give lenght of line
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
