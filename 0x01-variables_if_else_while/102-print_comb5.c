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
	int m = 0;
	int p = 0;
	int q = 0;

	while (n <= 9)
	{
		while (m <= 9)
		{
			while (p <= 9)
			{
				while (q <= 9)
				{
					putchar(n + 48);
					putchar(m + 48);
					putchar(' ');
					putchar(p + 48);
					putchar(q + 48);
					if (n == 9 && m == 8 && p == 9 && q == 9)
						break;
					putchar(',');
					putchar(' ');
					q++;
				}
				p++;
				q = 0;
			}
			m++;
			q = m + 1;
			p = n;
		}
		n++;
		m = 0;
		p = 0;
		q = 0;
	}
	putchar('\n');
	return (0);
}
