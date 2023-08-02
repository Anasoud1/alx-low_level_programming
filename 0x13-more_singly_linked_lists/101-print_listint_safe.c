#include "lists.h"
/**
 * _rll - fucntion that reallocate an array of pointers
 * @list: list to copy from
 * @s: size of array
 * @l: last element of array
 * Return: pointer to new list
 */
const listint_t **_rll(const listint_t **list, size_t s, const listint_t *l)
{
	const listint_t **new_list;
	size_t i;

	new_list = malloc(s * sizeof(listint_t));
	if (!new_list)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < s - 1; i++)
		new_list[i] = list[i];
	new_list[i] = l;
	free(list);
	return (new_list);
}

/**
 * print_listint_safe - function that prints a list
 * @head: head pointer
 * Return: size of a list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, count = 0;
	const listint_t **array = NULL;

	if (!head)
		return (0);
	while (head)
	{
		for (i = 0; i < count; i++)
		{
			if (head == array[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(array);
				return (count);
			}
		}
		count++;
		array = _rll(array, count, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(array);
	return (count);
}
