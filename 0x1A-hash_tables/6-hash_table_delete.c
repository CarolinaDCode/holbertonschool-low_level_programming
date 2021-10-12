#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	while (ht->size > i)
	{
		while (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			ht->array[i] = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
		i++;
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
