#include "lists.h"
/**
 * last_node - function that return last node before loop
 * @head: list to copy
 * Return: pointer of last node
 */
listint_t *last_node(listint_t *head)
{
	listint_t *t, *q = head, *p = head;

	while (p && q && p->next)
	{
		q = q->next;
		p = p->next->next;
		if (p == q)
			break;
	}
	t = head;
	while (p && t)
	{
		if (p->next == t->next)
			return (p);
		p = p->next;
		t = t->next;
	}
	return (NULL);
}

/**
 * free_listint_safe - function that frees a list
 * @h: head pointer
 * Return: size of list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t  count = 0;
	listint_t *last, *tmp = *h;

	last = last_node(*h);
	if (!h || !(*h))
		return (0);
	while (tmp != last)
	{
		if (tmp == last)
			break;
		count++;
		*h = (*h)->next;
		free(tmp);
		tmp = *h;
	}
	free(tmp);
	tmp = NULL;
	*h = NULL;
	return (++count);
}
