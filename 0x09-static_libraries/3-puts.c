#include "main.h"

/**
 * _puts - function that print a string followed by new line
 *
 * @str: paramtre to print
 */
void _puts(char *str)
{
	int i;

	for (i = *str; i > 0; i = *(++str))
		_putchar(i);
	_putchar('\n');
}
