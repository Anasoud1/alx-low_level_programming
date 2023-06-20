#include "main.h"
/**
 * print_alphabet - use _putchar funciton to print alphabet
 *
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	putchar('\n');
}
