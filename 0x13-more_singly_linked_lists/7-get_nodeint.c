#include "lists.h"

/**
 * get_nodeint_at_index - gets address of the index node
 * @head: address to the first node
 * @index: index that is wanted
 * Return: the node required.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	if (head == NULL)
		return (NULL);
	while (a != index)
	{
		head = head->next;
		a++;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
