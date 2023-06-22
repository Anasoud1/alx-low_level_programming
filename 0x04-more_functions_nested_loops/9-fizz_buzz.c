#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a c program to print numbers from 1 to 100
 *		if %3 print fizz and if %5 print buzz
 *		if both print FizzBuzz
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
