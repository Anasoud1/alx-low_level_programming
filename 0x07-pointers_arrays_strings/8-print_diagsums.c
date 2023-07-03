#include "main.h"

/**
 * print_diagsums - function that print the sum of the two diagonals
 * @a: string to sum from
 * @size: size of matrice
 */
void print_diagsums(int *a, int size)
{
	int i, j, s = 0, s1 = 0;
	int prod = size * size;

	for (i = 0; i < prod; i = i + size + 1)
		s += a[i];
	for (j = 0; j < prod - 1; j = j + size - 1)
		s1 += a[j];
	printf("%d, %d\n", s, s1);
}
