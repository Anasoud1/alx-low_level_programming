#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * Description: a c program to dispaly hex number
 *
 * Return: 0 (success)
*/
int main(void)
{
	int n = 0;

	while (n + 48 <= 'f')
	{
		if (n + 48 <= 57 || n + 48 >= 97)
			putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
