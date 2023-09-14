#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given
 *				position
 * @h: head of the list
 * @idx: index of the node
 * @n: data
 * Return: the address of the new node, or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *curr = *h, curr2 = *h;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*h == NULL || idx == 0)
	{
		new_node->next = curr;
		curr->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (curr)
	{
		if (i == idx)
		{
			new_node->next = curr;
			new_node->prev = curr->prev;
			curr->prev = new_node;
			new_node->prev->next = new_node;
			return (new_node);
		}
		i++;
		curr = curr->next;
	}
	if (i == idx)
	{
		while (curr2->next)
			curr2 = curr2->next;
		curr2->next = new_node;
		new_node->prev = curr2;
		return (new_node);
	}
	return (NULL);
}
