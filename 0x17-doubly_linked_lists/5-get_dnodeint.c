#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: head of the list
 * @index: index of the node to return
 * Return: return address of the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
