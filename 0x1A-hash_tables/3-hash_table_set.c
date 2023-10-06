#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value of the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *tmp;

	i = key_index((unsigned char *)key, 1024);
	tmp = malloc(sizeof(hash_table_t));
	if (!tmp)
		return (0);
	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = NULL;
	if (ht->array[i] == NULL)
		ht->array[i] = tmp;
	else
	{
		tmp->next = ht->array[i];
		ht->array[i] = tmp;
	}
	return (1);
}
