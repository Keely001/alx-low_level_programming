#include  "lists.h"

/**
 * free_listint2 - free memory and allocates null
 * @head: pointer to pointer of the ints
 * Return: none.
 */
void free_listint2(listint_t **head)
{
	listint_t *h;
	listint_t *new;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		new = h->next;
		free(h);
		h = new;
	}
	h = NULL;

}
