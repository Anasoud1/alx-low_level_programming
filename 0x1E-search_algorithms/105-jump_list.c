#include "search_algos.h"

/**
 * jump_list - function that searches for a value in a sorted list of
 * integers using the Jump search algorithm
 * @list:  pointer to the head of the list to search in
 * @size: the number of elements in array
 * @value: value the search for
 * Return: value if found otherwise -1
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *curr = list, *curr2 = list;
	size_t sq, i, j, k;

	if (list == NULL)
		return (NULL);
	sq = sqrt(size);
	for (curr->index = 0; curr->index < size; )
	{
		if (value <= curr->n && curr->index != 0)
		{
			i = curr->index;
			printf("Value found between indexes [%ld] and [%ld]\n", i - sq, i);
			for (j = i - sq; j <= i; j++)
			{
				printf("Value checked array[%ld] = [%d]\n", j, curr2->n);
				if (curr2->n == value)
					return (curr2);
			}
		}
		printf("Value checked array[%ld] = [%d]\n", i, curr->n);
		if (value == curr->n && i == 0)
			return (curr);
		for (k = 0; k < sq; k++)
		{
			curr = curr->next;
			(curr->index)++;
		}

	}
	i = curr->index;
	printf("Value found between indexes [%ld] and [%ld]\n", i - sq, i);
	for (j = i - sq; j < size; j++)
		printf("Value checked array[%ld] = [%d]\n", j, curr2->n);
	return (NULL);
}
