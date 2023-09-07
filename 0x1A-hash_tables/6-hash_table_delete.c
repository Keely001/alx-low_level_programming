#include "hash_tables.h"

/**
 * hash_table_delete - delete ht
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *cur_node, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			cur_node = ht->array[i];
			while (cur_node != NULL)
			{
				temp = cur_node->next;
				free(cur_node->key);
				free(cur_node->value);
				free(cur_node);
				cur_node = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
