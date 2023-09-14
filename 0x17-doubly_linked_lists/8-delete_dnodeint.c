#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @head: head of the list
 * @index: index to delete
 * Return: 1 if succes or -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0, j = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0 && tmp->next == NULL)
	{
		free(tmp);
		*head = NULL;
		return (1);
	}
	if (index == 0 && i != 1)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if (j == index && tmp->next != NULL)
		{
			tmp->prev->next = tmp->next;
			tmp->next->prev = tmp->prev;
			free(tmp);
			return (1);
		}
		if (j == index && tmp->next == NULL)
		{
			tmp->prev->next = NULL;
			free(tmp);
			return (1);
		}
		j++;
		tmp = tmp->next;
	}
	return (-1);
}
