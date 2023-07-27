#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: head pointer
 * @str: string
 * Return: add
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current, *tmp;

	current = malloc(sizeof(list_t));
	if (!current)
		return (NULL);
	current->str = strdup(str);
	current->len = strlen(str);
	current->next = NULL;
	if (!*head)
		*head = current;
	else
	{
		tmp = malloc(sizeof(list_t));
		if (!tmp)
			return (NULL);
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = current;
	}
	return (current);
}
