#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value the search for
 * Return: value if found otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, l = 0, r = size - 1;
	size_t mid = size;

	if (!array)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i == r)
			{
				printf("%d\n", array[i]);
				break;
			}
			printf("%d, ", array[i]);
		}
		mid = (l + r) / 2;
		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			r = mid - 1;
		else if (value > array[mid])
			l = mid + 1;
	}
	return (-1);
}
