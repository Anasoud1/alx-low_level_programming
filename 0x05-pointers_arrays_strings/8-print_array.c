#include "main.h"

/**
 * print_array - a function that print n element of an array of integer
 *
 * @a: array to print
 * @n: size of array
 */
void print_array(int *a, int n)
{
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			break;
		printf(", ");
	}
	printf("\n");
}
