#include "main.h"
/**
 * print_diagsums - function that print the sum of the two diagonals
 * @a: string to sum from
 * @size: size of matrice
 */
void print_diagsums(int *a, int size)
{
	int i, s = 0, s1 = 0;

	for (i = 0; i < size; i++)
	{
		s += a[i];
		s1 += a[size - i - 1];
		a = a + size;
	}
	printf("%d, %d\n", s, s1);
}
