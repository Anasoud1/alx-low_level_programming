#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: display number from 0-9 without 'char'
 *
 * Return: 0 (success)
*/
int main(void)
{
	int n = 0;

	while (n + 48 <= '9')
	{
		putchar(n + 48);
		n++;
	}
	putchar('\n');
	return (0);
}
