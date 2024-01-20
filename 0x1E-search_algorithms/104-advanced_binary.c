#include "search_algos.h"

/**
 * recursion_binary - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value the search for
 * Return: value if found otherwise -1
 */
int recursion_binary(int *array, size_t size, int value)
{
	size_t i, l = 0, r = size - 1;
	size_t mid;

	if (!array || size == 0)
		return (-1);
	mid = (l + r) / 2;
	printf("Searching in array: ");
	for (i = l; i <= r ; i++)
	{
		if (i == r)
		{
			printf("%d\n", array[i]);
			break;
		}
		printf("%d, ", array[i]);
	}
	if (array[mid] == value)
	{
		if (mid > 0)
			return (recursion_binary(array, mid + 1, value));
		return (mid);
	}
	if (value < array[mid])
		return (recursion_binary(array, mid + 1, value));
	return (recursion_binary(&array[mid + 1], size - mid - 1, value) + mid + 1);
}

/**
 * advanced_binary - call recusion_binary to return index
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value the search for
 * Return: value if found otherwise -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = recursion_binary(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
