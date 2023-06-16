#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: a c program to display a sequence of number
 *
 * Return: 0 (succes)
*/
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + 48);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
		return (0);
	}
}
