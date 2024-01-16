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
/**
 * exponential_search - function that searches for a value in a sorted
 * array of integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value the search for
 * Return: value if found otherwise -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i;
	int binary_value;

	if (!array)
		return (-1);
	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}
	for (i = 1; i < size; i *= 2)
	{
		if (value == array[i])
			return (i);
		if (value < array[i])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i / 2, i);
			return (binary_search(&array[i / 2], i / 2 + 1, value) + i / 2);
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, size - 1);
	binary_value = binary_search(&array[i / 2], size - i / 2, value);
	if (binary_value == -1)
		return (-1);
	return (binary_value + i / 2);
}
