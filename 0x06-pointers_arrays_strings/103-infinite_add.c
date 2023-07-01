#include "main.h"

/**
 * infinite_add - function that add two numbers
 * @n1: first string
 * @n2: second string
 * @r: string after add
 * @size_r: size of r
 *
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l = 0; number1, number2, d = 0;

	for (i = 0; n1[i] != '\0'; i++)
		;
	for (j = 0; n2[j] != '\0'; j++)
		;
	if (i >= j)
		l = i;
	else
		l = j;
	if (l + 1 > size_r)
		return (0);
	r[l] = '\0';
	for (k = l - 1 ; k >= 0; k--)
	{
		i--;
		j--;
		if (i >= 0)
			number1 = n1[i] - '0';
		else
			number1 = 0;
		if (j >= 0)
			number2 = n2[j] - '0';
		else
			number2 = 0;
		r[k] = ((number1 + number2 + d) % 10) + 48;
		d = (number1 + number2 + d) / 10;
	}
	if (d == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l >= 0)
		{
			r[l + 1] = r[l];
			l--;
		}
		r[0] = d + 48;
	}
	return (r);
}
