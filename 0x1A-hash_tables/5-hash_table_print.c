#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j = 0, k = 0;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
		if (ht->array[i])
			j++;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			k++;
			if (j != k)
				printf(", ");
		}
	}
	printf("}\n");
}
