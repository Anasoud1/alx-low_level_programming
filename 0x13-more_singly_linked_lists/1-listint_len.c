#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a list
 * @h: head pointer
 * Return: length of a list
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (!h)
		return (0);
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
