#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a c program that print sum of the even number of fibonacci
 *
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum = 0, n = 0;
	int i;

	for (i = 0; i < 49; i++)
	{
		if (sum > 4000000)
			break;
		sum = fib1 + fib2;
		if ((sum % 2) == 0)
			n = n + sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%lu\n", n);
	return (0);
}
