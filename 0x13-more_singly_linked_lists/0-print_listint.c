#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: head pointer
 * Return: length of a list
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
