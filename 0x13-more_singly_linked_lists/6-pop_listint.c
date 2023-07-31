#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a list
 * @head: head_pointer
 * Return: data of the node delete it
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *node;

	if (!*head)
		return (0);
	data = (*head)->n;
	node = *head;
	*head = (*head)->next;
	free(node);
	return (data);
}
