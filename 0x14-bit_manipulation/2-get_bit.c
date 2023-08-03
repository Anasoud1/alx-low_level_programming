#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to check
 * @index: index to search
 * Return: value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
