#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_tab;

	new_tab = malloc(sizeof(hash_table_t));
	if (!new_tab)
		return (NULL);
	new_tab->size = size;
	new_tab->array = malloc(sizeof(hash_node_t) * size);
	if (!new_tab)
		return (NULL);
	for (i = 0; i < size; i++)
		new_tab->array[i] = NULL;
	return (new_tab);
}
