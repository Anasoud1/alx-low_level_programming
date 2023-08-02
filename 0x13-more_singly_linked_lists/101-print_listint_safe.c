#include "lists.h"
/**
 * print_listint_safe - function that prints a list
 * @head: head pointer
 * Return: size of a list
 */
size_t print_listint_safe(const listint_t *head)
{
	int i = 0, j = 0, count = 0;
	const listint_t **array;

	array = malloc(50 * sizeof(listint_t *) + 1);
	if (!array || !head)
		exit(98);
	while (head)
	{
		for (i = 0; i < count; i++)
		{
			if (head == array[i])
			{
				printf("-> [%p] %d\n", head, head->n);
				free(array);
				return (count);
			}
		}
		array[j++] = head;
		printf("[%p] %d\n", head, head->n);
		head = head->next;
		count++;
	}
	free(array);
	return (count);
}
