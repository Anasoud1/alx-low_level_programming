#include <stdio.h>

/**
 * main - open entry
 *
 * Description: a c program that print fibonaccho number
 *
 * Return: 0 (success)
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	int i;

	for (i = 0; i <= 49; i++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;
		if (i == 49)
			break;
		printf(", ");
	}
	printf("\n");
	return (0);

}
