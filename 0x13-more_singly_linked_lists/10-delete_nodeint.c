#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index of a list
 * @head: head pointer
 * @index: position
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *prev_node, *node;

	node = *head;
	if (!(*head) || !head)
		return (-1);
	while (node)
	{
		if (index == i)
		{
			if (index == 0)
				*head = (*head)->next;
			else
				prev_node->next = node->next;
			free(node);
			return (1);
		}
		prev_node = node;
		node = node->next;
		i++;
	}
	return (-1);
}
