#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value the search for
 * Return: value if found otherwise -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, j, sq;

	if (!array)
		return (-1);
	sq = sqrt(size);
	for (i = 0; i < size; i = i + sq)
	{
		if (value <= array[i] && i != 0)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i - sq, i);
			for (j = i - sq; j <= i; j++)
			{
				printf("Value checked array[%ld] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i] && i == 0)
			return (i);

	}
	printf("Value found between indexes [%ld] and [%ld]\n", i - sq, i);
	for (j = i - sq; j < size; j++)
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
	return (-1);
}
