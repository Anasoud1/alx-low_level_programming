#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array : array
 * @size: size of array
 * @cmp: function pointer
 * Return: index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!cmp || size <= 0 || !array)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
