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
	dlistint_t *new_node, *curr = *h, *curr2 = *h;
	unsigned int i = 0;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	while (curr2)
	{
		curr2 = curr2->next;
		i++;
	}
	if (i == idx)
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	i = 0;
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
	return (NULL);
}
