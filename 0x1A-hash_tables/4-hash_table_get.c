#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 *
 * Return: value associated with the element, or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;

	i = key_index((unsigned char *)key, 1024);
	if (ht->array[i] == 0)
		return (NULL);
	return (ht->array[i]->value);
}
