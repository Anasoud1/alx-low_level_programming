#include "main.h"

/**
 * flip_bits - function return num of bits need to flip
 * @n: number1
 * @m: number2
 * Return: number of flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int curr, curr2 = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = curr2 >> i;
		if (curr & 1)
			j++;
	}
	return (j);
}
