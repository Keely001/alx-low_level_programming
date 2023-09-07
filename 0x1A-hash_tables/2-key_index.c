#include "hash_tables.h"

/**
 * key_index - gets the key_index
 * @key: key input
 * @size: size of table
 * Return: key_index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}