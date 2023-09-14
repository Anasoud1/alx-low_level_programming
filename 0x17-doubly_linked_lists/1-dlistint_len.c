#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a list
 * @h: head of the list
 * Return: number of elements in a list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
