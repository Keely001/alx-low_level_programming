#include "hash_tables.h"

/**
 * hash_table_print - prints table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_node;
	unsigned long int i;
	unsigned char flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");
			current_node = ht->array[i];
			while (current_node != NULL)
			{
				printf("'%s': '%s'", current_node->key, current_node->value);
				current_node = current_node->next;
				if (current_node != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}