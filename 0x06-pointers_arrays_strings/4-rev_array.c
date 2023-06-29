#include "main.h"

/**
 * reverse_array - a function that reverse the content of an array
 * @a: array to reverse
 *
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i;
	int p;

	for (i = 0; i < n / 2; i++)
	{
		p = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = p;
	}
}
