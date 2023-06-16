#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Description: a cprogram to display a sequence of number
 *
 * Return: 0 (success)
*/
int main(void)
{
	int n = 0;
	int m = 0;
	int p = 0;

	while (n <= 7)
	{
		while (m <= 8)
		{
			while (p <= 9)
			{
				if (n != m && m != p)
				{
					putchar(n + 48);
					putchar(m + 48);
					putchar(p + 48);
					if (n == 7 && m == 8 && p == 9)
						break;
					putchar(',');
					putchar(' ');
				}
				p++;
			}
			m++;
			p = m + 1;
		}
		n++;
		m = n + 1;
		p = m + 1;
	}
	putchar('\n');
	return (0);
}
