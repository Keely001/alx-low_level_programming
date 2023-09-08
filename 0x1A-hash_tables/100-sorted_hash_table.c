#include "hash_tables.h"


/**
 * shash_table_create - creates the hash table
 * @size: size to be created.
 * Return: new hashTable or null
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_ht;
	unsigned long int i;

	new_ht = malloc(sizeof(shash_table_t));
	if (new_ht == NULL)
		return (NULL);
	new_ht->size = size;
	new_ht->array = malloc(sizeof(shash_node_t *) * size);
	if (new_ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		new_ht->array[i] = NULL;
	new_ht->shead = NULL;
	new_ht->stail = NULL;
	return (new_ht);
}

/**
 * shash_table_set - key/value pair should be inserted.
 * @ht: the hash table.
 * @key: key to addeded
 * @value: value to be added.
 * Return: 0 or 1
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *temp_node;
	char *value_cp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	value_cp = strdup(value);
	if (value_cp == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->shead;
	while (temp_node)
	{
		if (strcmp(temp_node->key, key) == 0)
		{
			free(temp_node->value);
			temp_node->value = value_cp;
			return (1);
		}
		temp_node = temp_node->snext;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	{
		free(value_cp);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(value_cp);
		free(new_node);
		return (0);
	}
	new_node->value = value_cp;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		temp_node = ht->shead;
		while (temp_node->snext != NULL && strcmp(temp_node->snext->key, key) < 0)
			temp_node = temp_node->snext;
		new_node->sprev = temp_node;
		new_node->snext = temp_node->snext;
		if (temp_node->snext == NULL)
			ht->stail = new_node;
		else
			temp_node->snext->sprev = new_node;
		temp_node->snext = new_node;
	}
	return (1);
}

/**
 * shash_table_get - rerieves the value
 * @ht: sorted hash table.
 * @key: key
 * Return: value or null
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *nd;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	nd = ht->shead;
	while (nd != NULL && strcmp(nd->key, key) != 0)
		nd = nd->snext;
	return ((nd == NULL) ? NULL : nd->value);
}

/**
 * shash_table_print - prints the table
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *nd;

	if (ht == NULL)
		return;
	nd = ht->shead;
	printf("{");
	while (nd != NULL)
	{
		printf("'%s': '%s'", nd->key, nd->value);
		nd = nd->snext;
		if (nd != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints in reverse
 * @ht: hashtable
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *nd;

	if (ht == NULL)
		return;
	nd = ht->stail;
	printf("{");
	while (nd != NULL)
	{
		printf("'%s': '%s'", nd->key, nd->value);
		nd = nd->sprev;
		if (nd != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes the table.
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *h = ht;
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;
	node = ht->shead;
	while (node)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}
	free(h->array);
	free(h);
}
