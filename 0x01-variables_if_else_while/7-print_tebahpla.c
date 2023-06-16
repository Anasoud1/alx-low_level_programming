#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Description: display in reverse order
 *
 * Return: 0 (success)
 */
int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
