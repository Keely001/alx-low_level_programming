#include "lists.h"

/**
 * free_listint - free the memory previously allocated.
 * @head: pointer to nodes
 * Return: none.
 */
void free_listint(listint_t *head)
{
	listint_t *mem;

	while (head)
	{
		mem = head->next;
		free(head);
		head = mem;
	}
}

