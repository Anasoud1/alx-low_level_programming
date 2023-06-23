#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a c program that print prime factor of large number
 *
 * Return: 0 (succes)
 */
int main(void)
{
	int i, largest;
	long int n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			if (i > largest)
				largest = i;
		}
	}
	printf("%d", largest);
	printf("\n");
	return (0);
}
