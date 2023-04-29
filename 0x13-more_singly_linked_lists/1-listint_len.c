#include "lists.h"

/**
 * listint_len - function to determine length
 * @h: pointer to nodes.
 * Return: number of values
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
