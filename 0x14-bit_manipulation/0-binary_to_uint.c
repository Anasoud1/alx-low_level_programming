#include "main.h"
/**
 * power - function that calculate power of a number
 * @n: number
 * @p: power
 * Return: number
 */
unsigned int power(int n, unsigned int p)
{
	unsigned int i, power = 1;

	for (i = 0; i < p; i++)
		power *= n;
	return (power);
}
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string to convert
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, res = 0, len = strlen(b);

	if (!b)
		return (0);
	for (i = 0; i < len; i++)
	{
		if (b[i] == '1')
			res += power(2, len - 1 - i);
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	return (res);
}
