#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head: head of the list
 * @n: data
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *curr;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (!(*head))
	{
		*head = new_node;
		return (new_node);
	}
	curr = *head;
	while (curr->next)
		curr = curr->next;
	curr->next = new_node;
	new_node->prev = curr;
	return (new_node);
}
