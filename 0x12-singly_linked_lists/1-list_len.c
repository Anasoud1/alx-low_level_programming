#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list
 * @h: head pointer
 * Return: nember of nodes
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
