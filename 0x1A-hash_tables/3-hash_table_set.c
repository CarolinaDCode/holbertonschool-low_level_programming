#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *tmp = NULL;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];

	if (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(ht->array[index]->value);
			tmp->value = strdup(value);
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (ht->array[index] == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = ht->array[index];
	}
	ht->array[index] = new_node;
	return (1);
}
