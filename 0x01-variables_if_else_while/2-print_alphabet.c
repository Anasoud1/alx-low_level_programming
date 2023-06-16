#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: a c program to dispaly alphabet
 *
 * Return: 0 (succes)
*/
int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
