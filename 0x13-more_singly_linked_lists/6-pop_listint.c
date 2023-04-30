#include "lists.h"

/**
 * pop_listint - pops an int from node
 * @head: pointer to a pointer to the nodes
 * Return: an int for value that is popped.
 */

int pop_listint(listint_t **head)
{
	listint_t *h;
	int a;

	if (head == NULL || *head == NULL)
		return (0);
	h = *head;
	a = h->n;
	h = h->next;
	free(*head);
	*head = h;
	return (a);
}
