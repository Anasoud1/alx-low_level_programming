#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value the search for
 * Return: value if found otherwise -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (!array)
		return (-1);
	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
		(value - array[low]));
		if (pos > high)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (value < array[pos])
			high = pos - 1;
		else if (value > array[pos])
			low = pos + 1;
	}
	return (-1);
}
