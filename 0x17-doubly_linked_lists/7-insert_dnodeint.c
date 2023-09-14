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
	dlistint_t *new_node, *curr;
	size_t i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	curr = *h;
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
	free(new_node);
	return (NULL);
}
