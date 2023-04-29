#include "lists.h"

/**
 * add_nodeint_end - add a node at the end
 * @head: pointer to a pointer of nodes
 * @n: value to be inserted
 * Return: pointer to the last node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *added;
	listint_t *h;

	h = *head;
	added = malloc(sizeof(listint_t));
	if (added == NULL)
		return (NULL);
	added->n = n;
	added->next = NULL;
	if (*head == NULL)
	{
		*head = added;
		return (added);
	}
	while (h->next != NULL)
		h = h->next;
	h->next = added;
	h = added;

	return (h);
}

