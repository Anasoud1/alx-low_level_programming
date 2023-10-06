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
	hash_node_t *tmp, *current;

	if (strcmp(key, "") == 0 || !ht || !key || !value)
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	current = ht->array[i];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}
	tmp = malloc(sizeof(hash_node_t));
	if (!tmp)
		return (0);
	tmp->key = strdup(key);
	if (!tmp->key)
	{
		free(tmp);
		return (0);
	}
	tmp->value = strdup(value);
	{
		free(tmp);
		free(tmp->key);
		return (0);
	}
	tmp->next = ht->array[i];
	ht->array[i] = tmp;
	return (1);
}
