#include "lists.h"
/**
 * reverse_listint - function that reverses a list
 * @head: head pointer
 * Return: head pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *tmp2;

	if (!head || !(*head))
		return (NULL);
	tmp = (*head)->next;
	tmp2 = NULL;
	while (tmp)
	{
		(*head)->next = tmp2;
		tmp2 = *head;
		*head = tmp;
		tmp = tmp->next;
	}
	(*head)->next = tmp2;
	tmp2 = NULL;
	return (*head);
}
