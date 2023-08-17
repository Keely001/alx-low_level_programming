#include "lists.h"
/**
 * dlistint_len - returns number of elements in a list
 * @h: head to the list
 * Return: returns total elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	while (h->next != NULL)
	{
		count++;
		h = h->next;
	}
	count++;
	return (count);
}
