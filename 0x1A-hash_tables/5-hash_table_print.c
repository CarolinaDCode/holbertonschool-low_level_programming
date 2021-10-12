#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, comma = 0;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	printf("{");

	while(ht->size > i)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (comma > 0)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			comma++;
			tmp = tmp->next;
		}

		i++;
	}

	printf("}\n");
}
