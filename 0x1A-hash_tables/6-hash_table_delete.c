#include "hash_tables.h"

/**
 * free_list - function that free a list
 * @head: head pointer
 */
void free_list(hash_node_t *head)
{
	hash_node_t *node, *next_node;

	if (!head)
		return;
	node = head;
	while (node)
	{
		next_node = node->next;
		free(node->key);
		free(node->value);
		free(node);
		node = next_node;
	}
}
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table
 *
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
		if (ht->array[i])
			free_list(ht->array[i]);
	free(ht->array);
	free(ht);
}
