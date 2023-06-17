#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: a c program that display a sequence of numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n = 0;
	int m;

	while (n < 99)
	{
		m = n;
		while (m <= 99)
		{
			if (n != m)
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(' ');
				putchar((m / 10) + 48);
				putchar((m % 10) + 48);
				if (n == 98 && m == 99)
					break;
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
