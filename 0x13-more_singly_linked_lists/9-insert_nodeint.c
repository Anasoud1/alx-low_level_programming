#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given
 *				position
 * @head: head pointer
 * @idx : index
 * @n: data
 * Return: address or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	unsigned int i = 0;

	tmp = *head;
	while (tmp)
	{
		if (idx == i + 1)
		{
			new_node = malloc(sizeof(listint_t));
			if (!new_node)
				return (NULL);
			new_node->n = n;
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
