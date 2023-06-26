#include "main.h"

/**
 * puts_half - a function that print half og a string
 *
 * @str: charatere to print
 */
void puts_half(char *str)
{
	int i, n, len = 0;

	for (i = 0; *(str + i); i++)
		len++;
	if (len % 2 == 0)
	{
		for (i = 0; *(str + i); i++)
			if (i >= len / 2)
				_putchar(*(str + i));
	}
	else
	{
		n = (len - 1) / 2;
		for (i = 0; *(str + i); i++)
			if (i >= n)
				_putchar(*(str + i));
	}
	_putchar('\n');
}
