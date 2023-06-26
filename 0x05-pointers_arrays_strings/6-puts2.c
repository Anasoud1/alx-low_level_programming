#include "main.h"

/**
 * puts2 - a function that print every other charactere
 *
 * @str: charactere to print
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) > 0; i = i + 2)
		_putchar(*(str + i));
	_putchar('\n');
}
