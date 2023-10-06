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
	hash_node_t *tmp;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
		if (ht->array[i])
			j++;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			k++;
			if (j == k && !tmp->next)
				break;
			printf(", ");
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
