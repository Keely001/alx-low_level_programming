#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node with a given value
 * @idx: index to insert
 * @n: number
 * @head: pointer to the pointer of the head node
 * Return: address of new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *pos;
	unsigned int i = 0;

	pos = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL || pos == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	while (i < idx)
	{
		if (i == idx - 1)
		{
			new->next = pos->next;
			pos->next = new;
			return (new);
		}
		else
			pos = pos->next;
		i++;
	}
	return (new);
}
