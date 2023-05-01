#include "lists.h"

/**
 * delete_nodeint_at_index - delete a given index node
 * @head: address of nodes
 * @index: index to be deleted
 * Return: returns 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *pos;
	unsigned int i = 0;

	pos = *head;
	if (pos == NULL)
		return (-1);
	if (index == 0)
	{
		*head = pos->next;
		free(pos);
	}
	while (pos)
	{
		if (i == index - 1)
		{
			prev = pos;
			pos = pos->next;
			prev->next = pos->next;
			free(pos);
			return (1);
		}
		pos = pos->next;
		i++;
	}
	return (-1);
}
