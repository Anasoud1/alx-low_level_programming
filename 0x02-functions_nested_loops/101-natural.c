#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a c program that print all multiply of 3 and 5 below 1024
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i, s = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			s = s + i;
	}
	printf("%d\n", s);
	return (0);
}
