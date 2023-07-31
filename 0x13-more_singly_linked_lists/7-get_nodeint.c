#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: head pointer
 * @index: index of a list
 * Return: list or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
