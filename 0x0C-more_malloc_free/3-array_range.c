#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: min number
 * @max: max number
 *
 * Return: null or pointer
 */
int *array_range(int min, int max)
{
	int *s;
	int i, m, len = 0;

	m = min;
	if (min > max)
		return (NULL);
	for (i = 0; min++ <= max; i++)
		l++;
	s = malloc(sizeof(int) * len);
	if (s == 0)
		return (NULL);
	for (i = 0; i < len ; i++)
		s[i] = m++;
	return (s);
}
