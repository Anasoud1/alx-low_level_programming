#include "main.h"

/**
 * print_binary - function that prints the binary representation of a numbe
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int curr;

	for (i = 63; i >= 0; i--)
	{
		curr = n >> i;
		if (curr & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
