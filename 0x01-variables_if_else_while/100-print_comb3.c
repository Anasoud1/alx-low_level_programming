#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Desciption: a cprogram ti display a sequence of nummber in a certain way
 *
 * Return: 0 (success)
*/
int main(void)
{
	int n = 0;
	int m = 0;

	while (n <= 8)
	{
		while (m <= 9)
		{
			if (n != m)
			{
				putchar(n + 48);
				putchar(m + 48);
				if (n == 8 && m == 9)
					break;
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		n++;
		m = n;
	}
	putchar('\n');
	return (0);
}
