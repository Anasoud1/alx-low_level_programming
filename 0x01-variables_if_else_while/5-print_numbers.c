#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: display number from 0 to 9
 *
 * Return: 0
*/
int main(void)
{
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
