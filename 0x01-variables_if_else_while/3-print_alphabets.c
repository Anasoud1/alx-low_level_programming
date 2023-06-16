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
	char N = 'A';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	while (N <= 'Z')
	{
		putchar(N);
		N++;
	}
	putchar('\n');
	return (0);
}
