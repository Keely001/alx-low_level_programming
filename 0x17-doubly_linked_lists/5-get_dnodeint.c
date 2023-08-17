#include "lists.h"
/**
 * get_dnodeint_at_index - gets a number in anode
 * @head: head to list
 * @index: index to get
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	if (head == NULL)
		return (NULL);
	while(head && count != index)
	{
		head = head->next;
		count++;
	}
	return (head);
}
