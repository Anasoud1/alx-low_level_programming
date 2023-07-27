#include "lists.h"
/**
 * free_list - function that free a list
 * @head: head pointer
 */
void free_list(list_t *head)
{
	free(head);
}
