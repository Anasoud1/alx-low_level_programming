#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: string to print
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (i >= 2 && i <= 5)
				_putchar(' ');
			else
				_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
