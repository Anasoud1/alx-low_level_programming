#include "lists.h"

/**
 * free_dlistint - function that frees a list
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (head)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
	head = NULL;
	tmp = NULL;
}
