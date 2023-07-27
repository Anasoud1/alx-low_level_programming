#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: head pointer
 * @str: string
 * Return: address or null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *current;

	current = malloc(sizeof(list_t));
	if (!current)
		return (NULL);
	current->str = strdup(str);
	current->len = strlen(str);
	current->next = *head;
	*head = current;
	return (*head);
}
