#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: key
 * @size: size
 * Return:  index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index;

	index = (hash_djb2(key) % size);
	return (index);
}
