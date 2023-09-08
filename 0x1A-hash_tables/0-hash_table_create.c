#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size to be constracted
 * Return: new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *new_hash;
	
	new_hash = malloc(sizeof(hash_table_t));
	if (!new_hash)
		return (NULL);
	new_hash->size = size;
	new_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash->array == NULL)
		return (NULL);
	for ( ; i < size; i++)
	{
		new_hash->array[i] = NULL;
	}
	return (new_hash);
}